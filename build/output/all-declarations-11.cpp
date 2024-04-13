#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
// @controlRegisterAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
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

ComparisonResult cPtr_controlRegisterAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_controlRegisterAssignmentInstructionAST * p = (const cPtr_controlRegisterAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAssignmentKind.objectCompare (p->mProperty_mAssignmentKind) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_controlRegisterAssignmentInstructionAST::objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST & inOperand) const {
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

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                      const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_controlRegisterAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_controlRegisterAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression, inCompiler) ;
  const GALGAS_controlRegisterAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::
controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                              const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                              const GALGAS_expressionAST & in_mSourceExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                               const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                                               const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                                               const GALGAS_expressionAST & in_mSourceExpression
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_controlRegisterAssignmentInstructionAST (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setProperty_mControlRegisterLValue (const GALGAS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mAssignmentKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterAssignmentOperatorKind () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mAssignmentKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setProperty_mAssignmentKind (const GALGAS_controlRegisterAssignmentOperatorKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mAssignmentKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_controlRegisterAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterAssignmentInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_controlRegisterAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  const GALGAS_controlRegisterAssignmentInstructionAST * p = (const GALGAS_controlRegisterAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
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

ComparisonResult cPtr_sliceAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSliceAssignmentList.objectCompare (p->mProperty_mSliceAssignmentList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpressionLocation.objectCompare (p->mProperty_mSourceExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_sliceAssignmentInstructionAST::objectCompare (const GALGAS_sliceAssignmentInstructionAST & inOperand) const {
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

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_lstring & in_mTypeName,
                          const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                          const GALGAS_expressionAST & in_mSourceExpression,
                          const GALGAS_location & in_mSourceExpressionLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sliceAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_sliceAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->sliceAssignmentInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GALGAS_sliceAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::
sliceAssignmentInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_location & in_mSourceExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_lstring & in_mTypeName,
                                                                                           const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                                           const GALGAS_expressionAST & in_mSourceExpression,
                                                                                           const GALGAS_location & in_mSourceExpressionLocation
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sliceAssignmentInstructionAST (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sliceAssignmentInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentInstructionAST::readProperty_mSliceAssignmentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sliceAssignmentListAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSliceAssignmentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mSliceAssignmentList (const GALGAS_sliceAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSliceAssignmentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_sliceAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sliceAssignmentInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentInstructionAST::setProperty_mSourceExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sliceAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTypeName,
                                                                        const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_sliceAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  const GALGAS_sliceAssignmentInstructionAST * p = (const GALGAS_sliceAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mBitExpression (),
mProperty_mBitExpressionLocation (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitbandInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mBitExpression.printNonNullClassInstanceProperties ("mBitExpression") ;
    mProperty_mBitExpressionLocation.printNonNullClassInstanceProperties ("mBitExpressionLocation") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_bitbandInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitExpression.objectCompare (p->mProperty_mBitExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitExpressionLocation.objectCompare (p->mProperty_mBitExpressionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpressionLocation.objectCompare (p->mProperty_mSourceExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_bitbandInstructionAST::objectCompare (const GALGAS_bitbandInstructionAST & inOperand) const {
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

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                              const GALGAS_expressionAST & in_mBitExpression,
                              const GALGAS_location & in_mBitExpressionLocation,
                              const GALGAS_expressionAST & in_mSourceExpression,
                              const GALGAS_location & in_mSourceExpressionLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionAST (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GALGAS_bitbandInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::
bitbandInstructionAST_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                    const GALGAS_expressionAST & in_mBitExpression,
                                                    const GALGAS_location & in_mBitExpressionLocation,
                                                    const GALGAS_expressionAST & in_mSourceExpression,
                                                    const GALGAS_location & in_mSourceExpressionLocation,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (const cPtr_bitbandInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                           const GALGAS_expressionAST & in_mBitExpression,
                                                                           const GALGAS_location & in_mBitExpressionLocation,
                                                                           const GALGAS_expressionAST & in_mSourceExpression,
                                                                           const GALGAS_location & in_mSourceExpressionLocation
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionAST (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_bitbandInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mControlRegisterLValue (const GALGAS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_bitbandInstructionAST::readProperty_mBitExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mBitExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitbandInstructionAST::readProperty_mBitExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mBitExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_bitbandInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bitbandInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitbandInstructionAST::setProperty_mSourceExpressionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GALGAS_expressionAST & in_mBitExpression,
                                                        const GALGAS_location & in_mBitExpressionLocation,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mBitExpression (),
mProperty_mBitExpressionLocation (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitbandInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

void cPtr_bitbandInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@bitbandInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mBitExpression, mProperty_mBitExpressionLocation, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST ("bitbandInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitbandInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitbandInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  const GALGAS_bitbandInstructionAST * p = (const GALGAS_bitbandInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitbandInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_varInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mVarName,
                      const GALGAS_lstring & in_mOptionalTypeName,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_varInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->varInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GALGAS_varInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::
varInstructionWithAssignmentAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mVarName,
                                                      const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mVarName,
                                                                                               const GALGAS_lstring & in_mOptionalTypeName,
                                                                                               const GALGAS_expressionAST & in_mSourceExpression
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInstructionWithAssignmentAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@varInstructionWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varInstructionWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  const GALGAS_varInstructionWithAssignmentAST * p = (const GALGAS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varDeclarationInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varDeclarationInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_varDeclarationInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_varDeclarationInstructionAST * p = (const cPtr_varDeclarationInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_varDeclarationInstructionAST::objectCompare (const GALGAS_varDeclarationInstructionAST & inOperand) const {
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

GALGAS_varDeclarationInstructionAST::GALGAS_varDeclarationInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_lstring & in_mVarName,
                  const GALGAS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_varDeclarationInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_varDeclarationInstructionAST (inCompiler COMMA_THERE)) ;
  object->varDeclarationInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, inCompiler) ;
  const GALGAS_varDeclarationInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::
varDeclarationInstructionAST_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mVarName,
                                               const GALGAS_lstring & in_mTypeName,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST::GALGAS_varDeclarationInstructionAST (const cPtr_varDeclarationInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varDeclarationInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_lstring & in_mVarName,
                                                                                         const GALGAS_lstring & in_mTypeName
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varDeclarationInstructionAST (in_mInstructionLocation, in_mVarName, in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varDeclarationInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varDeclarationInstructionAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varDeclarationInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varDeclarationInstructionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varDeclarationInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mVarName,
                                                                      const GALGAS_lstring & in_mTypeName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varDeclarationInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

void cPtr_varDeclarationInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varDeclarationInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varDeclarationInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varDeclarationInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varDeclarationInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST ("varDeclarationInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varDeclarationInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varDeclarationInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varDeclarationInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varDeclarationInstructionAST GALGAS_varDeclarationInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varDeclarationInstructionAST result ;
  const GALGAS_varDeclarationInstructionAST * p = (const GALGAS_varDeclarationInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varDeclarationInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @letInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_letInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_letInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_lstring & in_mConstantName,
                      const GALGAS_lstring & in_mOptionalTypeName,
                      const GALGAS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_letInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_letInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->letInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GALGAS_letInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::
letInstructionWithAssignmentAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mConstantName,
                                                      const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_lstring & in_mConstantName,
                                                                                               const GALGAS_lstring & in_mOptionalTypeName,
                                                                                               const GALGAS_expressionAST & in_mSourceExpression
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setProperty_mConstantName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_letInstructionWithAssignmentAST::setProperty_mSourceExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @letInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mConstantName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@letInstructionWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @letInstructionWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  const GALGAS_letInstructionWithAssignmentAST * p = (const GALGAS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mIteratedObject (),
mProperty_mWhileExpression (),
mProperty_mEndOf_5F_whileExpression (),
mProperty_mStaticWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_for_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mIteratedObject.printNonNullClassInstanceProperties ("mIteratedObject") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mEndOf_5F_whileExpression.printNonNullClassInstanceProperties ("mEndOf_whileExpression") ;
    mProperty_mStaticWhileExpression.printNonNullClassInstanceProperties ("mStaticWhileExpression") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_for_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_for_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_whileExpression.objectCompare (p->mProperty_mEndOf_5F_whileExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStaticWhileExpression.objectCompare (p->mProperty_mStaticWhileExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_for_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_for_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
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

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_lstring & in_mVarName,
                                      const GALGAS_lstring & in_mIteratedObject,
                                      const GALGAS_expressionAST & in_mWhileExpression,
                                      const GALGAS_location & in_mEndOf_5F_whileExpression,
                                      const GALGAS_bool & in_mStaticWhileExpression,
                                      const GALGAS_instructionListAST & in_mDoInstructionList,
                                      const GALGAS_location & in_mEndOf_5F_for_5F_instruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_forInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionAST (inCompiler COMMA_THERE)) ;
  object->forInstructionAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mIteratedObject, in_mWhileExpression, in_mEndOf_5F_whileExpression, in_mStaticWhileExpression, in_mDoInstructionList, in_mEndOf_5F_for_5F_instruction, inCompiler) ;
  const GALGAS_forInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::
forInstructionAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_lstring & in_mIteratedObject,
                                                        const GALGAS_expressionAST & in_mWhileExpression,
                                                        const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                        const GALGAS_bool & in_mStaticWhileExpression,
                                                        const GALGAS_instructionListAST & in_mDoInstructionList,
                                                        const GALGAS_location & in_mEndOf_5F_for_5F_instruction,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOf_5F_whileExpression = in_mEndOf_5F_whileExpression ;
  mProperty_mStaticWhileExpression = in_mStaticWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_for_5F_instruction = in_mEndOf_5F_for_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_lstring & in_mVarName,
                                                                   const GALGAS_lstring & in_mIteratedObject,
                                                                   const GALGAS_expressionAST & in_mWhileExpression,
                                                                   const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                                   const GALGAS_bool & in_mStaticWhileExpression,
                                                                   const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                   const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (in_mInstructionLocation, in_mVarName, in_mIteratedObject, in_mWhileExpression, in_mEndOf_5F_whileExpression, in_mStaticWhileExpression, in_mDoInstructionList, in_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mIteratedObject (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mWhileExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_whileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_whileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mEndOf_5F_whileExpression (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_whileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionAST::readProperty_mStaticWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mStaticWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mStaticWhileExpression (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mStaticWhileExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mDoInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_for_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionAST::setProperty_mEndOf_5F_for_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    p->mProperty_mEndOf_5F_for_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mIteratedObject,
                                                const GALGAS_expressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                const GALGAS_bool & in_mStaticWhileExpression,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (),
mProperty_mIteratedObject (),
mProperty_mWhileExpression (),
mProperty_mEndOf_5F_whileExpression (),
mProperty_mStaticWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_for_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOf_5F_whileExpression = in_mEndOf_5F_whileExpression ;
  mProperty_mStaticWhileExpression = in_mStaticWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_for_5F_instruction = in_mEndOf_5F_for_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionOnArrayIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mEnumeratedValueName (),
mProperty_mIteratedObjectName (),
mProperty_mIteratedObject (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionBooleanResult_5F_llvmName (),
mProperty_mDoInstructionList (),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionOnArrayIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mEnumeratedValueName.printNonNullClassInstanceProperties ("mEnumeratedValueName") ;
    mProperty_mIteratedObjectName.printNonNullClassInstanceProperties ("mIteratedObjectName") ;
    mProperty_mIteratedObject.printNonNullClassInstanceProperties ("mIteratedObject") ;
    mProperty_mWhileInstructionList.printNonNullClassInstanceProperties ("mWhileInstructionList") ;
    mProperty_mWhileExpressionBooleanResult_5F_llvmName.printNonNullClassInstanceProperties ("mWhileExpressionBooleanResult_llvmName") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
    mProperty_mInvokedFunctionSet.printNonNullClassInstanceProperties ("mInvokedFunctionSet") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_forInstructionOnArrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEnumeratedValueName.objectCompare (p->mProperty_mEnumeratedValueName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIteratedObjectName.objectCompare (p->mProperty_mIteratedObjectName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhileExpressionBooleanResult_5F_llvmName.objectCompare (p->mProperty_mWhileExpressionBooleanResult_5F_llvmName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_forInstructionOnArrayIR::objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const {
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

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mEnumeratedValueName,
                                          const GALGAS_lstring & in_mIteratedObjectName,
                                          const GALGAS_objectIR & in_mIteratedObject,
                                          const GALGAS_instructionListIR & in_mWhileInstructionList,
                                          const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                          const GALGAS_instructionListIR & in_mDoInstructionList,
                                          const GALGAS_omnibusType & in_mElementType,
                                          const GALGAS_uint & in_mArraySize,
                                          const GALGAS_stringset & in_mInvokedFunctionSet,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_forInstructionOnArrayIR * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionOnArrayIR (inCompiler COMMA_THERE)) ;
  object->forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (in_mEnumeratedValueName, in_mIteratedObjectName, in_mIteratedObject, in_mWhileInstructionList, in_mWhileExpressionBooleanResult_5F_llvmName, in_mDoInstructionList, in_mElementType, in_mArraySize, in_mInvokedFunctionSet, inCompiler) ;
  const GALGAS_forInstructionOnArrayIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::
forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mEnumeratedValueName,
                                                                  const GALGAS_lstring & in_mIteratedObjectName,
                                                                  const GALGAS_objectIR & in_mIteratedObject,
                                                                  const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                  const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                                                  const GALGAS_instructionListIR & in_mDoInstructionList,
                                                                  const GALGAS_omnibusType & in_mElementType,
                                                                  const GALGAS_uint & in_mArraySize,
                                                                  const GALGAS_stringset & in_mInvokedFunctionSet,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mEnumeratedValueName = in_mEnumeratedValueName ;
  mProperty_mIteratedObjectName = in_mIteratedObjectName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName = in_mWhileExpressionBooleanResult_5F_llvmName ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnArrayIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::class_func_new (const GALGAS_string & in_mEnumeratedValueName,
                                                                               const GALGAS_lstring & in_mIteratedObjectName,
                                                                               const GALGAS_objectIR & in_mIteratedObject,
                                                                               const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                               const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                                                               const GALGAS_instructionListIR & in_mDoInstructionList,
                                                                               const GALGAS_omnibusType & in_mElementType,
                                                                               const GALGAS_uint & in_mArraySize,
                                                                               const GALGAS_stringset & in_mInvokedFunctionSet
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  macroMyNew (result.mObjectPtr, cPtr_forInstructionOnArrayIR (in_mEnumeratedValueName, in_mIteratedObjectName, in_mIteratedObject, in_mWhileInstructionList, in_mWhileExpressionBooleanResult_5F_llvmName, in_mDoInstructionList, in_mElementType, in_mArraySize, in_mInvokedFunctionSet COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionOnArrayIR::readProperty_mEnumeratedValueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mEnumeratedValueName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mEnumeratedValueName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mEnumeratedValueName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionOnArrayIR::readProperty_mIteratedObjectName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mIteratedObjectName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mIteratedObjectName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mIteratedObjectName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::readProperty_mIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mIteratedObject (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mWhileInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionOnArrayIR::readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mWhileExpressionBooleanResult_5F_llvmName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mWhileExpressionBooleanResult_5F_llvmName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mDoInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_forInstructionOnArrayIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mElementType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_forInstructionOnArrayIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mArraySize (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_forInstructionOnArrayIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnArrayIR::setProperty_mInvokedFunctionSet (const GALGAS_stringset & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnArrayIR class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                                            const GALGAS_lstring & in_mIteratedObjectName,
                                                            const GALGAS_objectIR & in_mIteratedObject,
                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                            const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                                            const GALGAS_instructionListIR & in_mDoInstructionList,
                                                            const GALGAS_omnibusType & in_mElementType,
                                                            const GALGAS_uint & in_mArraySize,
                                                            const GALGAS_stringset & in_mInvokedFunctionSet
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mEnumeratedValueName (),
mProperty_mIteratedObjectName (),
mProperty_mIteratedObject (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionBooleanResult_5F_llvmName (),
mProperty_mDoInstructionList (),
mProperty_mElementType (),
mProperty_mArraySize (),
mProperty_mInvokedFunctionSet () {
  mProperty_mEnumeratedValueName = in_mEnumeratedValueName ;
  mProperty_mIteratedObjectName = in_mIteratedObjectName ;
  mProperty_mIteratedObject = in_mIteratedObject ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName = in_mWhileExpressionBooleanResult_5F_llvmName ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionOnArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

void cPtr_forInstructionOnArrayIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionOnArrayIR:") ;
  mProperty_mEnumeratedValueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIteratedObjectName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpressionBooleanResult_5F_llvmName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionOnArrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionOnArrayIR (mProperty_mEnumeratedValueName, mProperty_mIteratedObjectName, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionBooleanResult_5F_llvmName, mProperty_mDoInstructionList, mProperty_mElementType, mProperty_mArraySize, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnArrayIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ("forInstructionOnArrayIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  const GALGAS_forInstructionOnArrayIR * p = (const GALGAS_forInstructionOnArrayIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionOnLiteralStringIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mLocation (),
mProperty_mStringElementIteratedObject (),
mProperty_mLiteralStringType (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionResult (),
mProperty_mDoInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionOnLiteralStringIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mStringElementIteratedObject.printNonNullClassInstanceProperties ("mStringElementIteratedObject") ;
    mProperty_mLiteralStringType.printNonNullClassInstanceProperties ("mLiteralStringType") ;
    mProperty_mWhileInstructionList.printNonNullClassInstanceProperties ("mWhileInstructionList") ;
    mProperty_mWhileExpressionResult.printNonNullClassInstanceProperties ("mWhileExpressionResult") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_forInstructionOnLiteralStringIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStringElementIteratedObject.objectCompare (p->mProperty_mStringElementIteratedObject) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLiteralStringType.objectCompare (p->mProperty_mLiteralStringType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhileExpressionResult.objectCompare (p->mProperty_mWhileExpressionResult) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_forInstructionOnLiteralStringIR::objectCompare (const GALGAS_forInstructionOnLiteralStringIR & inOperand) const {
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

GALGAS_forInstructionOnLiteralStringIR::GALGAS_forInstructionOnLiteralStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::
init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mVarName,
                                  const GALGAS_location & in_mLocation,
                                  const GALGAS_objectIR & in_mStringElementIteratedObject,
                                  const GALGAS_omnibusType & in_mLiteralStringType,
                                  const GALGAS_instructionListIR & in_mWhileInstructionList,
                                  const GALGAS_objectIR & in_mWhileExpressionResult,
                                  const GALGAS_instructionListIR & in_mDoInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_forInstructionOnLiteralStringIR * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionOnLiteralStringIR (inCompiler COMMA_THERE)) ;
  object->forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (in_mVarName, in_mLocation, in_mStringElementIteratedObject, in_mLiteralStringType, in_mWhileInstructionList, in_mWhileExpressionResult, in_mDoInstructionList, inCompiler) ;
  const GALGAS_forInstructionOnLiteralStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::
forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mVarName,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                                  const GALGAS_omnibusType & in_mLiteralStringType,
                                                                  const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                  const GALGAS_objectIR & in_mWhileExpressionResult,
                                                                  const GALGAS_instructionListIR & in_mDoInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringElementIteratedObject = in_mStringElementIteratedObject ;
  mProperty_mLiteralStringType = in_mLiteralStringType ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionResult = in_mWhileExpressionResult ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR::GALGAS_forInstructionOnLiteralStringIR (const cPtr_forInstructionOnLiteralStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnLiteralStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::class_func_new (const GALGAS_string & in_mVarName,
                                                                                               const GALGAS_location & in_mLocation,
                                                                                               const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                                                               const GALGAS_omnibusType & in_mLiteralStringType,
                                                                                               const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                                               const GALGAS_objectIR & in_mWhileExpressionResult,
                                                                                               const GALGAS_instructionListIR & in_mDoInstructionList
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR result ;
  macroMyNew (result.mObjectPtr, cPtr_forInstructionOnLiteralStringIR (in_mVarName, in_mLocation, in_mStringElementIteratedObject, in_mLiteralStringType, in_mWhileInstructionList, in_mWhileExpressionResult, in_mDoInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionOnLiteralStringIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionOnLiteralStringIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mStringElementIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mStringElementIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mStringElementIteratedObject (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mStringElementIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_forInstructionOnLiteralStringIR::readProperty_mLiteralStringType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLiteralStringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mLiteralStringType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLiteralStringType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mWhileInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mWhileExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mWhileExpressionResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forInstructionOnLiteralStringIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forInstructionOnLiteralStringIR::setProperty_mDoInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnLiteralStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                                            const GALGAS_omnibusType & in_mLiteralStringType,
                                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                            const GALGAS_objectIR & in_mWhileExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mDoInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (),
mProperty_mLocation (),
mProperty_mStringElementIteratedObject (),
mProperty_mLiteralStringType (),
mProperty_mWhileInstructionList (),
mProperty_mWhileExpressionResult (),
mProperty_mDoInstructionList () {
  mProperty_mVarName = in_mVarName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mStringElementIteratedObject = in_mStringElementIteratedObject ;
  mProperty_mLiteralStringType = in_mLiteralStringType ;
  mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  mProperty_mWhileExpressionResult = in_mWhileExpressionResult ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionOnLiteralStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

void cPtr_forInstructionOnLiteralStringIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionOnLiteralStringIR:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringElementIteratedObject.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralStringType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionOnLiteralStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionOnLiteralStringIR (mProperty_mVarName, mProperty_mLocation, mProperty_mStringElementIteratedObject, mProperty_mLiteralStringType, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forInstructionOnLiteralStringIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ("forInstructionOnLiteralStringIR",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionOnLiteralStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionOnLiteralStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnLiteralStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR result ;
  const GALGAS_forInstructionOnLiteralStringIR * p = (const GALGAS_forInstructionOnLiteralStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionOnLiteralStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forLowerUpperBoundInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName (),
mProperty_mLowerBoundExpression (),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (),
mProperty_mUpperBoundExpression (),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_do_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forLowerUpperBoundInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_lowerBoundExpression_instruction") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_upperBoundExpression_instruction") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_do_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_do_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_forLowerUpperBoundInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_forLowerUpperBoundInstructionAST::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (void) :
GALGAS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mVarName,
                                          const GALGAS_lstring & in_mTypeName,
                                          const GALGAS_expressionAST & in_mLowerBoundExpression,
                                          const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                          const GALGAS_expressionAST & in_mUpperBoundExpression,
                                          const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                          const GALGAS_instructionListAST & in_mDoInstructionList,
                                          const GALGAS_location & in_mEndOf_5F_do_5F_instruction,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_forLowerUpperBoundInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forLowerUpperBoundInstructionAST (inCompiler COMMA_THERE)) ;
  object->forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, in_mLowerBoundExpression, in_mEndOf_5F_lowerBoundExpression_5F_instruction, in_mUpperBoundExpression, in_mEndOf_5F_upperBoundExpression_5F_instruction, in_mDoInstructionList, in_mEndOf_5F_do_5F_instruction, inCompiler) ;
  const GALGAS_forLowerUpperBoundInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::
forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_lstring & in_mVarName,
                                                                           const GALGAS_lstring & in_mTypeName,
                                                                           const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                           const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                           const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                           const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                           const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                           const GALGAS_location & in_mEndOf_5F_do_5F_instruction,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = in_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = in_mEndOf_5F_upperBoundExpression_5F_instruction ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_do_5F_instruction = in_mEndOf_5F_do_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_lstring & in_mVarName,
                                                                                                 const GALGAS_lstring & in_mTypeName,
                                                                                                 const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                                                 const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                 const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                                                 const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                 const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                                                 const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (in_mInstructionLocation, in_mVarName, in_mTypeName, in_mLowerBoundExpression, in_mEndOf_5F_lowerBoundExpression_5F_instruction, in_mUpperBoundExpression, in_mEndOf_5F_upperBoundExpression_5F_instruction, in_mDoInstructionList, in_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mLowerBoundExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mUpperBoundExpression (const GALGAS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_upperBoundExpression_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_forLowerUpperBoundInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mDoInstructionList (const GALGAS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_do_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_do_5F_instruction (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mVarName,
                                                                              const GALGAS_lstring & in_mTypeName,
                                                                              const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                              const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName (),
mProperty_mLowerBoundExpression (),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (),
mProperty_mUpperBoundExpression (),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_do_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = in_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = in_mEndOf_5F_upperBoundExpression_5F_instruction ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_do_5F_instruction = in_mEndOf_5F_do_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@forLowerUpperBoundInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forLowerUpperBoundInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ("forLowerUpperBoundInstructionAST",
                                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  const GALGAS_forLowerUpperBoundInstructionAST * p = (const GALGAS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forLowerUpperBoundInstructionIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mType (),
mProperty_mUnsigned (),
mProperty_mLocation (),
mProperty_mLowerExpressionResult (),
mProperty_mUpperExpressionResult (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forLowerUpperBoundInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mUnsigned.printNonNullClassInstanceProperties ("mUnsigned") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mLowerExpressionResult.printNonNullClassInstanceProperties ("mLowerExpressionResult") ;
    mProperty_mUpperExpressionResult.printNonNullClassInstanceProperties ("mUpperExpressionResult") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_forLowerUpperBoundInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUnsigned.objectCompare (p->mProperty_mUnsigned) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLowerExpressionResult.objectCompare (p->mProperty_mLowerExpressionResult) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUpperExpressionResult.objectCompare (p->mProperty_mUpperExpressionResult) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_forLowerUpperBoundInstructionIR::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::
init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mVarName,
                                  const GALGAS_omnibusType & in_mType,
                                  const GALGAS_bool & in_mUnsigned,
                                  const GALGAS_location & in_mLocation,
                                  const GALGAS_objectIR & in_mLowerExpressionResult,
                                  const GALGAS_objectIR & in_mUpperExpressionResult,
                                  const GALGAS_instructionListIR & in_mInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_forLowerUpperBoundInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_forLowerUpperBoundInstructionIR (inCompiler COMMA_THERE)) ;
  object->forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (in_mVarName, in_mType, in_mUnsigned, in_mLocation, in_mLowerExpressionResult, in_mUpperExpressionResult, in_mInstructionList, inCompiler) ;
  const GALGAS_forLowerUpperBoundInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::
forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mVarName,
                                                                  const GALGAS_omnibusType & in_mType,
                                                                  const GALGAS_bool & in_mUnsigned,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                  const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                  const GALGAS_instructionListIR & in_mInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
  mProperty_mType = in_mType ;
  mProperty_mUnsigned = in_mUnsigned ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLowerExpressionResult = in_mLowerExpressionResult ;
  mProperty_mUpperExpressionResult = in_mUpperExpressionResult ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::class_func_new (const GALGAS_string & in_mVarName,
                                                                                               const GALGAS_omnibusType & in_mType,
                                                                                               const GALGAS_bool & in_mUnsigned,
                                                                                               const GALGAS_location & in_mLocation,
                                                                                               const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                                               const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                                               const GALGAS_instructionListIR & in_mInstructionList
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionIR (in_mVarName, in_mType, in_mUnsigned, in_mLocation, in_mLowerExpressionResult, in_mUpperExpressionResult, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forLowerUpperBoundInstructionIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_forLowerUpperBoundInstructionIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forLowerUpperBoundInstructionIR::readProperty_mUnsigned (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mUnsigned ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mUnsigned (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mUnsigned = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forLowerUpperBoundInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::readProperty_mLowerExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mLowerExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mLowerExpressionResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mLowerExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::readProperty_mUpperExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mUpperExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mUpperExpressionResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mUpperExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_forLowerUpperBoundInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forLowerUpperBoundInstructionIR::setProperty_mInstructionList (const GALGAS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_omnibusType & in_mType,
                                                                            const GALGAS_bool & in_mUnsigned,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                            const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (),
mProperty_mType (),
mProperty_mUnsigned (),
mProperty_mLocation (),
mProperty_mLowerExpressionResult (),
mProperty_mUpperExpressionResult (),
mProperty_mInstructionList () {
  mProperty_mVarName = in_mVarName ;
  mProperty_mType = in_mType ;
  mProperty_mUnsigned = in_mUnsigned ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLowerExpressionResult = in_mLowerExpressionResult ;
  mProperty_mUpperExpressionResult = in_mUpperExpressionResult ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

void cPtr_forLowerUpperBoundInstructionIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@forLowerUpperBoundInstructionIR:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerExpressionResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperExpressionResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forLowerUpperBoundInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionIR (mProperty_mVarName, mProperty_mType, mProperty_mUnsigned, mProperty_mLocation, mProperty_mLowerExpressionResult, mProperty_mUpperExpressionResult, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forLowerUpperBoundInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ("forLowerUpperBoundInstructionIR",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  const GALGAS_forLowerUpperBoundInstructionIR * p = (const GALGAS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @standAloneProcedureCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_standAloneProcedureCallInstructionAST::cPtr_standAloneProcedureCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (inCompiler COMMA_THERE),
mProperty_mSandAloneRoutineName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standAloneProcedureCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_callInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSandAloneRoutineName.printNonNullClassInstanceProperties ("mSandAloneRoutineName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_standAloneProcedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSandAloneRoutineName.objectCompare (p->mProperty_mSandAloneRoutineName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_standAloneProcedureCallInstructionAST::objectCompare (const GALGAS_standAloneProcedureCallInstructionAST & inOperand) const {
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

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_effectiveArgumentListAST & in_mArguments,
                      const GALGAS_location & in_mEndOfArguments,
                      const GALGAS_lstring & in_mSandAloneRoutineName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_standAloneProcedureCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_standAloneProcedureCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->standAloneProcedureCallInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mSandAloneRoutineName, inCompiler) ;
  const GALGAS_standAloneProcedureCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::
standAloneProcedureCallInstructionAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                            const GALGAS_location & in_mEndOfArguments,
                                                            const GALGAS_lstring & in_mSandAloneRoutineName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
  mProperty_mSandAloneRoutineName = in_mSandAloneRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (const cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standAloneProcedureCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                           const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                                           const GALGAS_location & in_mEndOfArguments,
                                                                                                           const GALGAS_lstring & in_mSandAloneRoutineName
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_standAloneProcedureCallInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mSandAloneRoutineName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_standAloneProcedureCallInstructionAST::readProperty_mSandAloneRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_standAloneProcedureCallInstructionAST * p = (cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    return p->mProperty_mSandAloneRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standAloneProcedureCallInstructionAST::setProperty_mSandAloneRoutineName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standAloneProcedureCallInstructionAST * p = (cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    p->mProperty_mSandAloneRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standAloneProcedureCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_standAloneProcedureCallInstructionAST::cPtr_standAloneProcedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                        const GALGAS_location & in_mEndOfArguments,
                                                                                        const GALGAS_lstring & in_mSandAloneRoutineName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mSandAloneRoutineName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
  mProperty_mSandAloneRoutineName = in_mSandAloneRoutineName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_standAloneProcedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

void cPtr_standAloneProcedureCallInstructionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@standAloneProcedureCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSandAloneRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standAloneProcedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standAloneProcedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mSandAloneRoutineName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @standAloneProcedureCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ("standAloneProcedureCallInstructionAST",
                                                                                             & kTypeDescriptor_GALGAS_callInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standAloneProcedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standAloneProcedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standAloneProcedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  const GALGAS_standAloneProcedureCallInstructionAST * p = (const GALGAS_standAloneProcedureCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standAloneProcedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procedureCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_procedureCallInstructionAST::cPtr_procedureCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (inCompiler COMMA_THERE),
mProperty_mIdentifier (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procedureCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_callInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIdentifier.printNonNullClassInstanceProperties ("mIdentifier") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_procedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_procedureCallInstructionAST::objectCompare (const GALGAS_procedureCallInstructionAST & inOperand) const {
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

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_effectiveArgumentListAST & in_mArguments,
                          const GALGAS_location & in_mEndOfArguments,
                          const GALGAS_lstring & in_mIdentifier,
                          const GALGAS_accessInAssignmentListAST & in_mAccessList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_procedureCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_procedureCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->procedureCallInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mIdentifier, in_mAccessList, inCompiler) ;
  const GALGAS_procedureCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::
procedureCallInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                      const GALGAS_location & in_mEndOfArguments,
                                                      const GALGAS_lstring & in_mIdentifier,
                                                      const GALGAS_accessInAssignmentListAST & in_mAccessList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
  mProperty_mIdentifier = in_mIdentifier ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (const cPtr_procedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procedureCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                       const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                       const GALGAS_location & in_mEndOfArguments,
                                                                                       const GALGAS_lstring & in_mIdentifier,
                                                                                       const GALGAS_accessInAssignmentListAST & in_mAccessList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_procedureCallInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mIdentifier, in_mAccessList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procedureCallInstructionAST::readProperty_mIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    return p->mProperty_mIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procedureCallInstructionAST::setProperty_mIdentifier (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    p->mProperty_mIdentifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_accessInAssignmentListAST GALGAS_procedureCallInstructionAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_accessInAssignmentListAST () ;
  }else{
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procedureCallInstructionAST::setProperty_mAccessList (const GALGAS_accessInAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procedureCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_procedureCallInstructionAST::cPtr_procedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                    const GALGAS_location & in_mEndOfArguments,
                                                                    const GALGAS_lstring & in_mIdentifier,
                                                                    const GALGAS_accessInAssignmentListAST & in_mAccessList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mIdentifier (),
mProperty_mAccessList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
  mProperty_mIdentifier = in_mIdentifier ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

void cPtr_procedureCallInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@procedureCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mIdentifier, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @procedureCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST ("procedureCallInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_callInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  const GALGAS_procedureCallInstructionAST * p = (const GALGAS_procedureCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentPassingModeAST passingModeForActualSelector'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            const GALGAS_lstring & constinArgument_inSelector,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(constinArgument_inSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 141)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_LValueAST temp_0 = inObject ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mOperand (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 99)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const GALGAS_LValueAST inObject,
                                    const GALGAS_omnibusType constinArgument_inSelfType,
                                    const GALGAS_bool constinArgument_inIsAddressOf,
                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    const GALGAS_mode constinArgument_inMode,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_LValueAST temp_1 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("lvalue.galgas", 140)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_LValueAST temp_3 = inObject ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 141)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = constinArgument_inRoutineAttributes.getter_mutatingRoutine (SOURCE_FILE ("lvalue.galgas", 142)).operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = constinArgument_inIsAddressOf.operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_LValueAST temp_7 = inObject ;
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("cannot mutate properties, current method is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 143)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          {
          const GALGAS_LValueAST temp_9 = inObject ;
          routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_9.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 147)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_6715 ;
    const GALGAS_LValueAST temp_10 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_10.readProperty_mIdentifier (), var_entity_6715, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 162)) ;
    switch (var_entity_6715.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const GALGAS_LValueAST temp_11 = inObject ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a task has no value"), fixItArray12  COMMA_SOURCE_FILE ("lvalue.galgas", 165)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const GALGAS_LValueAST temp_13 = inObject ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a driver has no value"), fixItArray14  COMMA_SOURCE_FILE ("lvalue.galgas", 167)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        const GALGAS_LValueAST temp_15 = inObject ;
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global constant cannot be written"), fixItArray16  COMMA_SOURCE_FILE ("lvalue.galgas", 169)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const GALGAS_LValueAST temp_17 = inObject ;
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a local constant cannot be written"), fixItArray18  COMMA_SOURCE_FILE ("lvalue.galgas", 171)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const GALGAS_LValueAST temp_19 = inObject ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global sync instance is not allowed here"), fixItArray20  COMMA_SOURCE_FILE ("lvalue.galgas", 173)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_7999 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_6715.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_7378_variableType = extractPtr_7999->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_7400_omnibusName = extractPtr_7999->mAssociatedValue1 ;
        {
        const GALGAS_LValueAST temp_21 = inObject ;
        const GALGAS_LValueAST temp_22 = inObject ;
        routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (constinArgument_inSelfType, constinArgument_inIsAddressOf, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_21.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_7400_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 187)), extractedValue_7378_variableType, temp_22.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 175)) ;
        }
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GALGAS_controlRegisterLValueAST inObject,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterLValueAST temp_0 = inObject ;
  switch (temp_0.readProperty_mGroupIndex ().enumValue ()) {
  case GALGAS_registerGroupIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_3583 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (temp_0.readProperty_mGroupIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3493_indexExpression = extractPtr_3583->mAssociatedValue0 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3493_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 93)) ;
    }
    break ;
  }
  const GALGAS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mRegisterIndex ().enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_3741 = (const cEnumAssociatedValues_registerIndexAST_index *) (temp_1.readProperty_mRegisterIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3651_indexExpression = extractPtr_3741->mAssociatedValue0 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3651_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 98)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const GALGAS_controlRegisterLValueAST inObject,
                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_controlRegisterLValueAST temp_0 = inObject ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 110)) ;
  }
  const GALGAS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mGroupIndex ().enumValue ()) {
  case GALGAS_registerGroupIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_4501 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (temp_1.readProperty_mGroupIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_4395_indexExpression = extractPtr_4501->mAssociatedValue0 ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4395_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 114)) ;
    }
    break ;
  }
  const GALGAS_controlRegisterLValueAST temp_2 = inObject ;
  switch (temp_2.readProperty_mRegisterIndex ().enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_4690 = (const cEnumAssociatedValues_registerIndexAST_index *) (temp_2.readProperty_mRegisterIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_4584_indexExpression = extractPtr_4690->mAssociatedValue0 ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4584_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 119)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const GALGAS_controlRegisterLValueAST inObject,
                                                            const GALGAS_bool constinArgument_inWriteAccess,
                                                            const GALGAS_omnibusType constinArgument_inSelfType,
                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_omnibusType & outArgument_outRegisterType,
                                                            GALGAS_uint & outArgument_outRegisterTypeBitCount,
                                                            GALGAS_sliceMap & outArgument_outSliceMap,
                                                            GALGAS_string & outArgument_outllvmRegisterAddressName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterTypeBitCount.drop () ; // Release 'out' argument
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  outArgument_outllvmRegisterAddressName.drop () ; // Release 'out' argument
  GALGAS_registerGroupKind var_groupKind_5950 ;
  GALGAS_controlRegisterMap var_controlRegisterMap_5965 ;
  const GALGAS_controlRegisterLValueAST temp_0 = inObject ;
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), var_groupKind_5950, var_controlRegisterMap_5965, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 144)) ;
  GALGAS_bool var_readOnly_6120 ;
  GALGAS_bool var_userAccess_6144 ;
  GALGAS_bigint var_addressOffset_6196 ;
  GALGAS_uint var_registerArraySize_6261 ;
  GALGAS_uint var_registerElementSize_6314 ;
  const GALGAS_controlRegisterLValueAST temp_1 = inObject ;
  GALGAS_controlRegisterFieldMap joker_6176 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_6214 ; // Joker input parameter
  var_controlRegisterMap_5965.method_searchKey (temp_1.readProperty_mRegisterName (), outArgument_outRegisterType, var_readOnly_6120, var_userAccess_6144, outArgument_outSliceMap, joker_6176, var_addressOffset_6196, joker_6214, outArgument_outRegisterTypeBitCount, var_registerArraySize_6261, var_registerElementSize_6314, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 146)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inWriteAccess.operator_and (var_readOnly_6120 COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 160)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_controlRegisterLValueAST temp_3 = inObject ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 161)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_bool test_6 = var_userAccess_6144.operator_not (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        GALGAS_bool test_7 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        if (kBoolTrue != test_7.boolEnum ()) {
          test_7 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        }
        test_6 = test_7 ;
      }
      test_5 = test_6.boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_controlRegisterLValueAST temp_8 = inObject ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("this control register is not accessible in user mode"), fixItArray9  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 164)) ;
      }
    }
  }
  GALGAS_string var_registerAddress_6755 ;
  switch (var_groupKind_5950.enumValue ()) {
  case GALGAS_registerGroupKind::kNotBuilt:
    break ;
  case GALGAS_registerGroupKind::kEnum_single:
    {
      const cEnumAssociatedValues_registerGroupKind_single * extractPtr_7251 = (const cEnumAssociatedValues_registerGroupKind_single *) (var_groupKind_5950.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_6813_baseAddress = extractPtr_7251->mAssociatedValue0 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_controlRegisterLValueAST temp_11 = inObject ;
        test_10 = temp_11.readProperty_mGroupIndex ().getter_isIndex (SOURCE_FILE ("lvalue-control-register.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_controlRegisterLValueAST temp_12 = inObject ;
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("subscripting not allowed, group is not an array"), fixItArray13  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 171)) ;
          var_registerAddress_6755.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_controlRegisterLValueAST temp_14 = inObject ;
        const GALGAS_controlRegisterLValueAST temp_15 = inObject ;
        GALGAS_string var_regName_6992 = temp_14.readProperty_mRegisterGroupName ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)).add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)) ;
        {
        extensionSetter_appendEnterRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6755, extractedValue_6813_baseAddress, var_addressOffset_6196, var_regName_6992, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 174)) ;
        }
      }
    }
    break ;
  case GALGAS_registerGroupKind::kEnum_arrayGroup:
    {
      const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_8290 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (var_groupKind_5950.unsafePointer ()) ;
      const GALGAS_lbigintlist extractedValue_7287_baseAddresses = extractPtr_8290->mAssociatedValue0 ;
      const GALGAS_controlRegisterLValueAST temp_16 = inObject ;
      switch (temp_16.readProperty_mGroupIndex ().enumValue ()) {
      case GALGAS_registerGroupIndexAST::kNotBuilt:
        break ;
      case GALGAS_registerGroupIndexAST::kEnum_noIndex:
        {
          const GALGAS_controlRegisterLValueAST temp_17 = inObject ;
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("subscripting required, group is an array"), fixItArray18  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 185)) ;
          var_registerAddress_6755.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_registerGroupIndexAST::kEnum_index:
        {
          const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_8284 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (temp_16.readProperty_mGroupIndex ().unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_7466_indexExpression = extractPtr_8284->mAssociatedValue0 ;
          const GALGAS_location extractedValue_7482_endOfIndex = extractPtr_8284->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_7493_checkIndexExpression = extractPtr_8284->mAssociatedValue2 ;
          GALGAS_objectIR var_groupIndexIR_8035 ;
          {
          routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_7466_indexExpression, extractedValue_7482_endOfIndex, extractedValue_7493_checkIndexExpression, extractedValue_7287_baseAddresses.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 199)).getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 199)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_groupIndexIR_8035, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 187)) ;
          }
          {
          const GALGAS_controlRegisterLValueAST temp_19 = inObject ;
          extensionSetter_appendEnterRegisterGroupSubscriptedAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6755, temp_19.readProperty_mRegisterGroupName ().readProperty_string (), extractedValue_7287_baseAddresses.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 208)), var_groupIndexIR_8035, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 204)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
  const GALGAS_controlRegisterLValueAST temp_20 = inObject ;
  switch (temp_20.readProperty_mRegisterIndex ().enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = GALGAS_bool (ComparisonKind::equal, var_registerArraySize_6261.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_21) {
          outArgument_outllvmRegisterAddressName = var_registerAddress_6755 ;
        }
      }
      if (kBoolFalse == test_21) {
        const GALGAS_controlRegisterLValueAST temp_22 = inObject ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the control register is an array"), fixItArray23  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 219)) ;
        outArgument_outllvmRegisterAddressName.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_9369 = (const cEnumAssociatedValues_registerIndexAST_index *) (temp_20.readProperty_mRegisterIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_8614_indexExpression = extractPtr_9369->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8630_endOfIndex = extractPtr_9369->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_8641_checkIndexExpression = extractPtr_9369->mAssociatedValue2 ;
      GALGAS_objectIR var_indexIR_9147 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_8614_indexExpression, extractedValue_8630_endOfIndex, extractedValue_8641_checkIndexExpression, var_registerArraySize_6261.getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 234)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_9147, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 222)) ;
      }
      {
      extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, outArgument_outllvmRegisterAddressName, var_indexIR_9147, var_registerAddress_6755, var_registerElementSize_6314, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 239)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                              GALGAS_sectionIRlist & /* ioArgument_ioSectionList */,
                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (cPtr_abstractRoutineIR * inObject,
                                                   GALGAS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   GALGAS_sectionIRlist & io_ioSectionList,
                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    inObject->method_svcDeclarationGeneration  (io_ioPrimitiveAndServiceList, io_ioSectionList, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (cPtr_abstractRoutineIR * inObject,
                                             GALGAS_string & io_ioLLVMcode,
                                             const GALGAS_generationContext constin_inGenerationContext,
                                             GALGAS_generationAdds & io_ioGenerationAdds,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    inObject->method_llvmCodeGeneration (io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractRoutineIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    inObject->method_enterAccessibleEntities  (io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @binaryOperationIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperationIR::cPtr_binaryOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperandType (),
mProperty_mLeft (),
mProperty_mOperation (),
mProperty_mRight (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binaryOperationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperandType.printNonNullClassInstanceProperties ("mOperandType") ;
    mProperty_mLeft.printNonNullClassInstanceProperties ("mLeft") ;
    mProperty_mOperation.printNonNullClassInstanceProperties ("mOperation") ;
    mProperty_mRight.printNonNullClassInstanceProperties ("mRight") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_binaryOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binaryOperationIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperandType.objectCompare (p->mProperty_mOperandType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperation.objectCompare (p->mProperty_mOperation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_binaryOperationIR::objectCompare (const GALGAS_binaryOperationIR & inOperand) const {
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

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::
init_21__21__21__21__21__21_ (const GALGAS_objectIR & in_mTarget,
                              const GALGAS_omnibusType & in_mOperandType,
                              const GALGAS_objectIR & in_mLeft,
                              const GALGAS_llvmBinaryOperation & in_mOperation,
                              const GALGAS_objectIR & in_mRight,
                              const GALGAS_location & in_mLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_binaryOperationIR * object = nullptr ;
  macroMyNew (object, cPtr_binaryOperationIR (inCompiler COMMA_THERE)) ;
  object->binaryOperationIR_init_21__21__21__21__21__21_ (in_mTarget, in_mOperandType, in_mLeft, in_mOperation, in_mRight, in_mLocation, inCompiler) ;
  const GALGAS_binaryOperationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::
binaryOperationIR_init_21__21__21__21__21__21_ (const GALGAS_objectIR & in_mTarget,
                                                const GALGAS_omnibusType & in_mOperandType,
                                                const GALGAS_objectIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_objectIR & in_mRight,
                                                const GALGAS_location & in_mLocation,
                                                Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperandType = in_mOperandType ;
  mProperty_mLeft = in_mLeft ;
  mProperty_mOperation = in_mOperation ;
  mProperty_mRight = in_mRight ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::class_func_new (const GALGAS_objectIR & in_mTarget,
                                                                   const GALGAS_omnibusType & in_mOperandType,
                                                                   const GALGAS_objectIR & in_mLeft,
                                                                   const GALGAS_llvmBinaryOperation & in_mOperation,
                                                                   const GALGAS_objectIR & in_mRight,
                                                                   const GALGAS_location & in_mLocation
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (in_mTarget, in_mOperandType, in_mLeft, in_mOperation, in_mRight, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_binaryOperationIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setProperty_mTarget (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_binaryOperationIR::readProperty_mOperandType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperandType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setProperty_mOperandType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperandType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_binaryOperationIR::readProperty_mLeft (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLeft ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setProperty_mLeft (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLeft = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_binaryOperationIR::readProperty_mOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmBinaryOperation () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setProperty_mOperation (const GALGAS_llvmBinaryOperation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_binaryOperationIR::readProperty_mRight (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mRight ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setProperty_mRight (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mRight = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_binaryOperationIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setProperty_mLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperationIR class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                                const GALGAS_omnibusType & in_mOperandType,
                                                const GALGAS_objectIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_objectIR & in_mRight,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mOperandType (),
mProperty_mLeft (),
mProperty_mOperation (),
mProperty_mRight (),
mProperty_mLocation () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperandType = in_mOperandType ;
  mProperty_mLeft = in_mLeft ;
  mProperty_mOperation = in_mOperation ;
  mProperty_mRight = in_mRight ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binaryOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

void cPtr_binaryOperationIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@binaryOperationIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperandType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binaryOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binaryOperationIR (mProperty_mTarget, mProperty_mOperandType, mProperty_mLeft, mProperty_mOperation, mProperty_mRight, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @binaryOperationIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR ("binaryOperationIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  const GALGAS_binaryOperationIR * p = (const GALGAS_binaryOperationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_binaryOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterCodeForOverflowOperation (const GALGAS_string constinArgument_inOperation,
                                                                   const GALGAS_bigint constinArgument_inPanicCode,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperationIR temp_0 = this ;
  GALGAS_string var_llvmType_2137 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  const GALGAS_binaryOperationIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  const GALGAS_binaryOperationIR temp_2 = this ;
  const GALGAS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  const GALGAS_binaryOperationIR temp_4 = this ;
  const GALGAS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_4.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (temp_5.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  GALGAS_string var_labelName_2578 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  const GALGAS_binaryOperationIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2578, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2578, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".noovf\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2578.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  const GALGAS_binaryOperationIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_7.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  const GALGAS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (temp_8.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2578.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  const GALGAS_binaryOperationIR temp_9 = this ;
  const GALGAS_binaryOperationIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_9.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("{").add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    inObject->method_enterCodeForOverflowOperation  (constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterCodeForDivisionWithZeroDivisorPanic (const GALGAS_string constinArgument_inOperation,
                                                                              const GALGAS_bigint constinArgument_inPanicCode,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperationIR temp_0 = this ;
  GALGAS_string var_llvmType_3911 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
  const GALGAS_binaryOperationIR temp_1 = this ;
  const GALGAS_binaryOperationIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (var_llvmType_3911, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  GALGAS_string var_labelName_4082 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  const GALGAS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_4082, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_4082, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".ok\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4082.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  const GALGAS_binaryOperationIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  const GALGAS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (temp_5.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4082.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  const GALGAS_binaryOperationIR temp_6 = this ;
  const GALGAS_binaryOperationIR temp_7 = this ;
  const GALGAS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType_3911, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_8.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    inObject->method_enterCodeForDivisionWithZeroDivisorPanic  (constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @storeToUniversalReferenceIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTargetVarName (),
mProperty_mTargetVarType (),
mProperty_mSourceValue () {
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

ComparisonResult cPtr_storeToUniversalReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_storeToUniversalReferenceIR::objectCompare (const GALGAS_storeToUniversalReferenceIR & inOperand) const {
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

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::
init_21__21__21_ (const GALGAS_string & in_mLLVMTargetVarName,
                  const GALGAS_omnibusType & in_mTargetVarType,
                  const GALGAS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeToUniversalReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_storeToUniversalReferenceIR (inCompiler COMMA_THERE)) ;
  object->storeToUniversalReferenceIR_init_21__21__21_ (in_mLLVMTargetVarName, in_mTargetVarType, in_mSourceValue, inCompiler) ;
  const GALGAS_storeToUniversalReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::
storeToUniversalReferenceIR_init_21__21__21_ (const GALGAS_string & in_mLLVMTargetVarName,
                                              const GALGAS_omnibusType & in_mTargetVarType,
                                              const GALGAS_objectIR & in_mSourceValue,
                                              Compiler * /* inCompiler */) {
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeToUniversalReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::class_func_new (const GALGAS_string & in_mLLVMTargetVarName,
                                                                                       const GALGAS_omnibusType & in_mTargetVarType,
                                                                                       const GALGAS_objectIR & in_mSourceValue
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeToUniversalReferenceIR (in_mLLVMTargetVarName, in_mTargetVarType, in_mSourceValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeToUniversalReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeToUniversalReferenceIR::setProperty_mLLVMTargetVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_storeToUniversalReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeToUniversalReferenceIR::setProperty_mTargetVarType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeToUniversalReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeToUniversalReferenceIR::setProperty_mSourceValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeToUniversalReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMTargetVarName,
                                                                    const GALGAS_omnibusType & in_mTargetVarType,
                                                                    const GALGAS_objectIR & in_mSourceValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMTargetVarName (),
mProperty_mTargetVarType (),
mProperty_mSourceValue () {
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeToUniversalReferenceIR::classDescriptor (void) const {
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

acPtr_class * cPtr_storeToUniversalReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeToUniversalReferenceIR (mProperty_mLLVMTargetVarName, mProperty_mTargetVarType, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeToUniversalReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ("storeToUniversalReferenceIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeToUniversalReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeToUniversalReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  const GALGAS_storeToUniversalReferenceIR * p = (const GALGAS_storeToUniversalReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeToUniversalReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeFromTemporaryReferenceIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMTargetVarName (),
mProperty_mSourceValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeFromTemporaryReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mLLVMTargetVarName.printNonNullClassInstanceProperties ("mLLVMTargetVarName") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_storeFromTemporaryReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_storeFromTemporaryReferenceIR::objectCompare (const GALGAS_storeFromTemporaryReferenceIR & inOperand) const {
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

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::
init_21__21__21_ (const GALGAS_omnibusType & in_mTargetVarType,
                  const GALGAS_string & in_mLLVMTargetVarName,
                  const GALGAS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeFromTemporaryReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_storeFromTemporaryReferenceIR (inCompiler COMMA_THERE)) ;
  object->storeFromTemporaryReferenceIR_init_21__21__21_ (in_mTargetVarType, in_mLLVMTargetVarName, in_mSourceValue, inCompiler) ;
  const GALGAS_storeFromTemporaryReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeFromTemporaryReferenceIR::
storeFromTemporaryReferenceIR_init_21__21__21_ (const GALGAS_omnibusType & in_mTargetVarType,
                                                const GALGAS_string & in_mLLVMTargetVarName,
                                                const GALGAS_objectIR & in_mSourceValue,
                                                Compiler * /* inCompiler */) {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeFromTemporaryReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::class_func_new (const GALGAS_omnibusType & in_mTargetVarType,
                                                                                           const GALGAS_string & in_mLLVMTargetVarName,
                                                                                           const GALGAS_objectIR & in_mSourceValue
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeFromTemporaryReferenceIR (in_mTargetVarType, in_mLLVMTargetVarName, in_mSourceValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_storeFromTemporaryReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeFromTemporaryReferenceIR::setProperty_mTargetVarType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeFromTemporaryReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeFromTemporaryReferenceIR::setProperty_mLLVMTargetVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeFromTemporaryReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeFromTemporaryReferenceIR::setProperty_mSourceValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeFromTemporaryReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (const GALGAS_omnibusType & in_mTargetVarType,
                                                                        const GALGAS_string & in_mLLVMTargetVarName,
                                                                        const GALGAS_objectIR & in_mSourceValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMTargetVarName (),
mProperty_mSourceValue () {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeFromTemporaryReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

void cPtr_storeFromTemporaryReferenceIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@storeFromTemporaryReferenceIR:") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeFromTemporaryReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeFromTemporaryReferenceIR (mProperty_mTargetVarType, mProperty_mLLVMTargetVarName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeFromTemporaryReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ("storeFromTemporaryReferenceIR",
                                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  const GALGAS_storeFromTemporaryReferenceIR * p = (const GALGAS_storeFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeFromTemporaryReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @standaloneRoutineCallIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneRoutineCallIR::cPtr_standaloneRoutineCallIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mFunctionMangledName (),
mProperty_mFunctionNameForGeneration (),
mProperty_mArgumentList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standaloneRoutineCallIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mFunctionMangledName.printNonNullClassInstanceProperties ("mFunctionMangledName") ;
    mProperty_mFunctionNameForGeneration.printNonNullClassInstanceProperties ("mFunctionNameForGeneration") ;
    mProperty_mArgumentList.printNonNullClassInstanceProperties ("mArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_standaloneRoutineCallIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionMangledName.objectCompare (p->mProperty_mFunctionMangledName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionNameForGeneration.objectCompare (p->mProperty_mFunctionNameForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_standaloneRoutineCallIR::objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const {
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

GALGAS_standaloneRoutineCallIR::GALGAS_standaloneRoutineCallIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::
init_21__21__21__21_ (const GALGAS_objectIR & in_mResult,
                      const GALGAS_lstring & in_mFunctionMangledName,
                      const GALGAS_string & in_mFunctionNameForGeneration,
                      const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_standaloneRoutineCallIR * object = nullptr ;
  macroMyNew (object, cPtr_standaloneRoutineCallIR (inCompiler COMMA_THERE)) ;
  object->standaloneRoutineCallIR_init_21__21__21__21_ (in_mResult, in_mFunctionMangledName, in_mFunctionNameForGeneration, in_mArgumentList, inCompiler) ;
  const GALGAS_standaloneRoutineCallIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standaloneRoutineCallIR::
standaloneRoutineCallIR_init_21__21__21__21_ (const GALGAS_objectIR & in_mResult,
                                              const GALGAS_lstring & in_mFunctionMangledName,
                                              const GALGAS_string & in_mFunctionNameForGeneration,
                                              const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList,
                                              Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mFunctionMangledName = in_mFunctionMangledName ;
  mProperty_mFunctionNameForGeneration = in_mFunctionNameForGeneration ;
  mProperty_mArgumentList = in_mArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR::GALGAS_standaloneRoutineCallIR (const cPtr_standaloneRoutineCallIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneRoutineCallIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::class_func_new (const GALGAS_objectIR & in_mResult,
                                                                               const GALGAS_lstring & in_mFunctionMangledName,
                                                                               const GALGAS_string & in_mFunctionNameForGeneration,
                                                                               const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR result ;
  macroMyNew (result.mObjectPtr, cPtr_standaloneRoutineCallIR (in_mResult, in_mFunctionMangledName, in_mFunctionNameForGeneration, in_mArgumentList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_standaloneRoutineCallIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setProperty_mResult (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_standaloneRoutineCallIR::readProperty_mFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setProperty_mFunctionMangledName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_standaloneRoutineCallIR::readProperty_mFunctionNameForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mFunctionNameForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setProperty_mFunctionNameForGeneration (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mFunctionNameForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_standaloneRoutineCallIR::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_procCallEffectiveParameterListIR () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setProperty_mArgumentList (const GALGAS_procCallEffectiveParameterListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standaloneRoutineCallIR class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneRoutineCallIR::cPtr_standaloneRoutineCallIR (const GALGAS_objectIR & in_mResult,
                                                            const GALGAS_lstring & in_mFunctionMangledName,
                                                            const GALGAS_string & in_mFunctionNameForGeneration,
                                                            const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (),
mProperty_mFunctionMangledName (),
mProperty_mFunctionNameForGeneration (),
mProperty_mArgumentList () {
  mProperty_mResult = in_mResult ;
  mProperty_mFunctionMangledName = in_mFunctionMangledName ;
  mProperty_mFunctionNameForGeneration = in_mFunctionNameForGeneration ;
  mProperty_mArgumentList = in_mArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_standaloneRoutineCallIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

void cPtr_standaloneRoutineCallIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@standaloneRoutineCallIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionNameForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standaloneRoutineCallIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standaloneRoutineCallIR (mProperty_mResult, mProperty_mFunctionMangledName, mProperty_mFunctionNameForGeneration, mProperty_mArgumentList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @standaloneRoutineCallIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ("standaloneRoutineCallIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneRoutineCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneRoutineCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneRoutineCallIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR result ;
  const GALGAS_standaloneRoutineCallIR * p = (const GALGAS_standaloneRoutineCallIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standaloneRoutineCallIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneRoutineCallIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @releaseIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_releaseIR::cPtr_releaseIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mOmnibusName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_releaseIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mOmnibusName.printNonNullClassInstanceProperties ("mOmnibusName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_releaseIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_releaseIR * p = (const cPtr_releaseIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_releaseIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOmnibusName.objectCompare (p->mProperty_mOmnibusName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_releaseIR::objectCompare (const GALGAS_releaseIR & inOperand) const {
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

GALGAS_releaseIR::GALGAS_releaseIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR::
init_21__21_ (const GALGAS_omnibusType & in_mType,
              const GALGAS_lstring & in_mOmnibusName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_releaseIR * object = nullptr ;
  macroMyNew (object, cPtr_releaseIR (inCompiler COMMA_THERE)) ;
  object->releaseIR_init_21__21_ (in_mType, in_mOmnibusName, inCompiler) ;
  const GALGAS_releaseIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_releaseIR::
releaseIR_init_21__21_ (const GALGAS_omnibusType & in_mType,
                        const GALGAS_lstring & in_mOmnibusName,
                        Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mOmnibusName = in_mOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR::GALGAS_releaseIR (const cPtr_releaseIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_releaseIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR::class_func_new (const GALGAS_omnibusType & in_mType,
                                                   const GALGAS_lstring & in_mOmnibusName
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR result ;
  macroMyNew (result.mObjectPtr, cPtr_releaseIR (in_mType, in_mOmnibusName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_releaseIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_releaseIR::setProperty_mType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_releaseIR::readProperty_mOmnibusName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mOmnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_releaseIR::setProperty_mOmnibusName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mOmnibusName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @releaseIR class
//--------------------------------------------------------------------------------------------------

cPtr_releaseIR::cPtr_releaseIR (const GALGAS_omnibusType & in_mType,
                                const GALGAS_lstring & in_mOmnibusName
                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (),
mProperty_mOmnibusName () {
  mProperty_mType = in_mType ;
  mProperty_mOmnibusName = in_mOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_releaseIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

void cPtr_releaseIR::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@releaseIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOmnibusName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_releaseIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_releaseIR (mProperty_mType, mProperty_mOmnibusName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @releaseIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR ("releaseIR",
                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_releaseIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_releaseIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_releaseIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR result ;
  const GALGAS_releaseIR * p = (const GALGAS_releaseIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_releaseIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMName (),
mProperty_mSourceValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeIndirectVolatileIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_storeIndirectVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_storeIndirectVolatileIR::objectCompare (const GALGAS_storeIndirectVolatileIR & inOperand) const {
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

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::
init_21__21__21_ (const GALGAS_omnibusType & in_mTargetVarType,
                  const GALGAS_string & in_mLLVMName,
                  const GALGAS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeIndirectVolatileIR * object = nullptr ;
  macroMyNew (object, cPtr_storeIndirectVolatileIR (inCompiler COMMA_THERE)) ;
  object->storeIndirectVolatileIR_init_21__21__21_ (in_mTargetVarType, in_mLLVMName, in_mSourceValue, inCompiler) ;
  const GALGAS_storeIndirectVolatileIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeIndirectVolatileIR::
storeIndirectVolatileIR_init_21__21__21_ (const GALGAS_omnibusType & in_mTargetVarType,
                                          const GALGAS_string & in_mLLVMName,
                                          const GALGAS_objectIR & in_mSourceValue,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeIndirectVolatileIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::class_func_new (const GALGAS_omnibusType & in_mTargetVarType,
                                                                               const GALGAS_string & in_mLLVMName,
                                                                               const GALGAS_objectIR & in_mSourceValue
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeIndirectVolatileIR (in_mTargetVarType, in_mLLVMName, in_mSourceValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_storeIndirectVolatileIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeIndirectVolatileIR::setProperty_mTargetVarType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeIndirectVolatileIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeIndirectVolatileIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeIndirectVolatileIR::setProperty_mSourceValue (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (const GALGAS_omnibusType & in_mTargetVarType,
                                                            const GALGAS_string & in_mLLVMName,
                                                            const GALGAS_objectIR & in_mSourceValue
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (),
mProperty_mLLVMName (),
mProperty_mSourceValue () {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

void cPtr_storeIndirectVolatileIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@storeIndirectVolatileIR:") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeIndirectVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeIndirectVolatileIR (mProperty_mTargetVarType, mProperty_mLLVMName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeIndirectVolatileIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ("storeIndirectVolatileIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  const GALGAS_storeIndirectVolatileIR * p = (const GALGAS_storeIndirectVolatileIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @copyFromReferencesIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mSourceLLVMName () {
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

ComparisonResult cPtr_copyFromReferencesIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceLLVMName.objectCompare (p->mProperty_mSourceLLVMName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_copyFromReferencesIR::objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const {
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

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::
init_21__21_ (const GALGAS_LValueRepresentation & in_mTarget,
              const GALGAS_string & in_mSourceLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_copyFromReferencesIR * object = nullptr ;
  macroMyNew (object, cPtr_copyFromReferencesIR (inCompiler COMMA_THERE)) ;
  object->copyFromReferencesIR_init_21__21_ (in_mTarget, in_mSourceLLVMName, inCompiler) ;
  const GALGAS_copyFromReferencesIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::
copyFromReferencesIR_init_21__21_ (const GALGAS_LValueRepresentation & in_mTarget,
                                   const GALGAS_string & in_mSourceLLVMName,
                                   Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceLLVMName = in_mSourceLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_copyFromReferencesIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::class_func_new (const GALGAS_LValueRepresentation & in_mTarget,
                                                                         const GALGAS_string & in_mSourceLLVMName
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  macroMyNew (result.mObjectPtr, cPtr_copyFromReferencesIR (in_mTarget, in_mSourceLLVMName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_copyFromReferencesIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_LValueRepresentation () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_copyFromReferencesIR::setProperty_mTarget (const GALGAS_LValueRepresentation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_copyFromReferencesIR::readProperty_mSourceLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mSourceLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_copyFromReferencesIR::setProperty_mSourceLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mSourceLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @copyFromReferencesIR class
//--------------------------------------------------------------------------------------------------

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (const GALGAS_LValueRepresentation & in_mTarget,
                                                      const GALGAS_string & in_mSourceLLVMName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (),
mProperty_mSourceLLVMName () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceLLVMName = in_mSourceLLVMName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_copyFromReferencesIR::classDescriptor (void) const {
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

acPtr_class * cPtr_copyFromReferencesIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_copyFromReferencesIR (mProperty_mTarget, mProperty_mSourceLLVMName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @copyFromReferencesIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ("copyFromReferencesIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_copyFromReferencesIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_copyFromReferencesIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_copyFromReferencesIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  const GALGAS_copyFromReferencesIR * p = (const GALGAS_copyFromReferencesIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_copyFromReferencesIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getUniversalPropertyReferenceIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mLLVMName (),
mProperty_mElementLLVMName (),
mProperty_mPropertyIndex (),
mProperty_mPropertyName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getUniversalPropertyReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mElementLLVMName.printNonNullClassInstanceProperties ("mElementLLVMName") ;
    mProperty_mPropertyIndex.printNonNullClassInstanceProperties ("mPropertyIndex") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_getUniversalPropertyReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyIndex.objectCompare (p->mProperty_mPropertyIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_getUniversalPropertyReferenceIR::objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const {
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

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::
init_21__21__21__21__21_ (const GALGAS_omnibusType & in_mType,
                          const GALGAS_string & in_mLLVMName,
                          const GALGAS_string & in_mElementLLVMName,
                          const GALGAS_uint & in_mPropertyIndex,
                          const GALGAS_string & in_mPropertyName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_getUniversalPropertyReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getUniversalPropertyReferenceIR (inCompiler COMMA_THERE)) ;
  object->getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (in_mType, in_mLLVMName, in_mElementLLVMName, in_mPropertyIndex, in_mPropertyName, inCompiler) ;
  const GALGAS_getUniversalPropertyReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalPropertyReferenceIR::
getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (const GALGAS_omnibusType & in_mType,
                                                          const GALGAS_string & in_mLLVMName,
                                                          const GALGAS_string & in_mElementLLVMName,
                                                          const GALGAS_uint & in_mPropertyIndex,
                                                          const GALGAS_string & in_mPropertyName,
                                                          Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalPropertyReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::class_func_new (const GALGAS_omnibusType & in_mType,
                                                                                               const GALGAS_string & in_mLLVMName,
                                                                                               const GALGAS_string & in_mElementLLVMName,
                                                                                               const GALGAS_uint & in_mPropertyIndex,
                                                                                               const GALGAS_string & in_mPropertyName
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getUniversalPropertyReferenceIR (in_mType, in_mLLVMName, in_mElementLLVMName, in_mPropertyIndex, in_mPropertyName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_getUniversalPropertyReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setProperty_mType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setProperty_mElementLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_getUniversalPropertyReferenceIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setProperty_mPropertyIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setProperty_mPropertyName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalPropertyReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (const GALGAS_omnibusType & in_mType,
                                                                            const GALGAS_string & in_mLLVMName,
                                                                            const GALGAS_string & in_mElementLLVMName,
                                                                            const GALGAS_uint & in_mPropertyIndex,
                                                                            const GALGAS_string & in_mPropertyName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (),
mProperty_mLLVMName (),
mProperty_mElementLLVMName (),
mProperty_mPropertyIndex (),
mProperty_mPropertyName () {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getUniversalPropertyReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

void cPtr_getUniversalPropertyReferenceIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@getUniversalPropertyReferenceIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getUniversalPropertyReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getUniversalPropertyReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementLLVMName, mProperty_mPropertyIndex, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getUniversalPropertyReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ("getUniversalPropertyReferenceIR",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  const GALGAS_getUniversalPropertyReferenceIR * p = (const GALGAS_getUniversalPropertyReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getUniversalPropertyReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getUniversalArrayElementReferenceIR reference class
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

ComparisonResult cPtr_getUniversalArrayElementReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIndexIR.objectCompare (p->mProperty_mIndexIR) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_getUniversalArrayElementReferenceIR::objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const {
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

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::
init_21__21__21__21__21_ (const GALGAS_omnibusType & in_mType,
                          const GALGAS_string & in_mLLVMName,
                          const GALGAS_omnibusType & in_mElementType,
                          const GALGAS_string & in_mElementLLVMName,
                          const GALGAS_objectIR & in_mIndexIR,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_getUniversalArrayElementReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getUniversalArrayElementReferenceIR (inCompiler COMMA_THERE)) ;
  object->getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (in_mType, in_mLLVMName, in_mElementType, in_mElementLLVMName, in_mIndexIR, inCompiler) ;
  const GALGAS_getUniversalArrayElementReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalArrayElementReferenceIR::
getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (const GALGAS_omnibusType & in_mType,
                                                              const GALGAS_string & in_mLLVMName,
                                                              const GALGAS_omnibusType & in_mElementType,
                                                              const GALGAS_string & in_mElementLLVMName,
                                                              const GALGAS_objectIR & in_mIndexIR,
                                                              Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mIndexIR = in_mIndexIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalArrayElementReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::class_func_new (const GALGAS_omnibusType & in_mType,
                                                                                                       const GALGAS_string & in_mLLVMName,
                                                                                                       const GALGAS_omnibusType & in_mElementType,
                                                                                                       const GALGAS_string & in_mElementLLVMName,
                                                                                                       const GALGAS_objectIR & in_mIndexIR
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getUniversalArrayElementReferenceIR (in_mType, in_mLLVMName, in_mElementType, in_mElementLLVMName, in_mIndexIR COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_getUniversalArrayElementReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setProperty_mType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setProperty_mLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_getUniversalArrayElementReferenceIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setProperty_mElementType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setProperty_mElementLLVMName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getUniversalArrayElementReferenceIR::readProperty_mIndexIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mIndexIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setProperty_mIndexIR (const GALGAS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mIndexIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (const GALGAS_omnibusType & in_mType,
                                                                                    const GALGAS_string & in_mLLVMName,
                                                                                    const GALGAS_omnibusType & in_mElementType,
                                                                                    const GALGAS_string & in_mElementLLVMName,
                                                                                    const GALGAS_objectIR & in_mIndexIR
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
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

const C_galgas_type_descriptor * cPtr_getUniversalArrayElementReferenceIR::classDescriptor (void) const {
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

acPtr_class * cPtr_getUniversalArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getUniversalArrayElementReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementType, mProperty_mElementLLVMName, mProperty_mIndexIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getUniversalArrayElementReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ("getUniversalArrayElementReferenceIR",
                                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  const GALGAS_getUniversalArrayElementReferenceIR * p = (const GALGAS_getUniversalArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getUniversalArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds::GALGAS_generationAdds (void) :
mProperty_mUniqueIndex (),
mProperty_mExternFunctionDeclarationSet (),
mProperty_mStaticEntityMap (),
mProperty_mUsesGuards (),
mProperty_mNeedsDynamicMemoryAllocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds::~ GALGAS_generationAdds (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_generationAdds GALGAS_generationAdds::init (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationAdds::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mUniqueIndex = GALGAS_uint (uint32_t (0U)) ;
GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 11)) ;
  mProperty_mExternFunctionDeclarationSet = temp_0 ;
  mProperty_mStaticEntityMap = GALGAS_staticEntityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mUsesGuards = GALGAS_bool (false) ;
  mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds::GALGAS_generationAdds (const GALGAS_uint & inOperand0,
                                              const GALGAS_stringset & inOperand1,
                                              const GALGAS_staticEntityMap & inOperand2,
                                              const GALGAS_bool & inOperand3,
                                              const GALGAS_bool & inOperand4) :
mProperty_mUniqueIndex (inOperand0),
mProperty_mExternFunctionDeclarationSet (inOperand1),
mProperty_mStaticEntityMap (inOperand2),
mProperty_mUsesGuards (inOperand3),
mProperty_mNeedsDynamicMemoryAllocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds GALGAS_generationAdds::class_func_new (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_generationAdds::objectCompare (const GALGAS_generationAdds & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUniqueIndex.objectCompare (inOperand.mProperty_mUniqueIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExternFunctionDeclarationSet.objectCompare (inOperand.mProperty_mExternFunctionDeclarationSet) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUsesGuards.objectCompare (inOperand.mProperty_mUsesGuards) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNeedsDynamicMemoryAllocation.objectCompare (inOperand.mProperty_mNeedsDynamicMemoryAllocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generationAdds::isValid (void) const {
  return mProperty_mUniqueIndex.isValid () && mProperty_mExternFunctionDeclarationSet.isValid () && mProperty_mStaticEntityMap.isValid () && mProperty_mUsesGuards.isValid () && mProperty_mNeedsDynamicMemoryAllocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationAdds::drop (void) {
  mProperty_mUniqueIndex.drop () ;
  mProperty_mExternFunctionDeclarationSet.drop () ;
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mUsesGuards.drop () ;
  mProperty_mNeedsDynamicMemoryAllocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationAdds::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generationAdds:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mUniqueIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternFunctionDeclarationSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUsesGuards.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsDynamicMemoryAllocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generationAdds generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationAdds ("generationAdds",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generationAdds::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationAdds ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationAdds::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationAdds (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds GALGAS_generationAdds::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  const GALGAS_generationAdds * p = (const GALGAS_generationAdds *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generationAdds *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationAdds", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext::GALGAS_generationContext (void) :
mProperty_mPanicCodeLLVMType (),
mProperty_mPanicLineLLVMType (),
mProperty_mNopInstructionInLLVM (),
mProperty_mGlobalTaskVariableList (),
mProperty_mAvailableInterruptMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext::~ GALGAS_generationContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_generationContext GALGAS_generationContext::init_21__21__21__21__21_ (const GALGAS_omnibusType & in_mPanicCodeLLVMType,
                                                                             const GALGAS_omnibusType & in_mPanicLineLLVMType,
                                                                             const GALGAS_string & in_mNopInstructionInLLVM,
                                                                             const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                             const GALGAS_availableInterruptMap & in_mAvailableInterruptMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPanicCodeLLVMType = in_mPanicCodeLLVMType ;
  result.mProperty_mPanicLineLLVMType = in_mPanicLineLLVMType ;
  result.mProperty_mNopInstructionInLLVM = in_mNopInstructionInLLVM ;
  result.mProperty_mGlobalTaskVariableList = in_mGlobalTaskVariableList ;
  result.mProperty_mAvailableInterruptMap = in_mAvailableInterruptMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext::GALGAS_generationContext (const GALGAS_omnibusType & inOperand0,
                                                    const GALGAS_omnibusType & inOperand1,
                                                    const GALGAS_string & inOperand2,
                                                    const GALGAS_globalTaskVariableList & inOperand3,
                                                    const GALGAS_availableInterruptMap & inOperand4) :
mProperty_mPanicCodeLLVMType (inOperand0),
mProperty_mPanicLineLLVMType (inOperand1),
mProperty_mNopInstructionInLLVM (inOperand2),
mProperty_mGlobalTaskVariableList (inOperand3),
mProperty_mAvailableInterruptMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext GALGAS_generationContext::class_func_new (const GALGAS_omnibusType & in_mPanicCodeLLVMType,
                                                                   const GALGAS_omnibusType & in_mPanicLineLLVMType,
                                                                   const GALGAS_string & in_mNopInstructionInLLVM,
                                                                   const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                   const GALGAS_availableInterruptMap & in_mAvailableInterruptMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPanicCodeLLVMType = in_mPanicCodeLLVMType ;
  result.mProperty_mPanicLineLLVMType = in_mPanicLineLLVMType ;
  result.mProperty_mNopInstructionInLLVM = in_mNopInstructionInLLVM ;
  result.mProperty_mGlobalTaskVariableList = in_mGlobalTaskVariableList ;
  result.mProperty_mAvailableInterruptMap = in_mAvailableInterruptMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_generationContext::objectCompare (const GALGAS_generationContext & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPanicCodeLLVMType.objectCompare (inOperand.mProperty_mPanicCodeLLVMType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPanicLineLLVMType.objectCompare (inOperand.mProperty_mPanicLineLLVMType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNopInstructionInLLVM.objectCompare (inOperand.mProperty_mNopInstructionInLLVM) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generationContext::isValid (void) const {
  return mProperty_mPanicCodeLLVMType.isValid () && mProperty_mPanicLineLLVMType.isValid () && mProperty_mNopInstructionInLLVM.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mAvailableInterruptMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationContext::drop (void) {
  mProperty_mPanicCodeLLVMType.drop () ;
  mProperty_mPanicLineLLVMType.drop () ;
  mProperty_mNopInstructionInLLVM.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationContext::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generationContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPanicCodeLLVMType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLineLLVMType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNopInstructionInLLVM.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generationContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ("generationContext",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generationContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext GALGAS_generationContext::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  const GALGAS_generationContext * p = (const GALGAS_generationContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generationContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctIntExpressionAST::cPtr_ctIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ctIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ctIntExpressionAST * p = (const cPtr_ctIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ctIntExpressionAST::objectCompare (const GALGAS_ctIntExpressionAST & inOperand) const {
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

GALGAS_ctIntExpressionAST::GALGAS_ctIntExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST::
init_21_ (const GALGAS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_ctIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::
ctIntExpressionAST_init_21_ (const GALGAS_lbigint & in_mValue,
                             Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST::GALGAS_ctIntExpressionAST (const cPtr_ctIntExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST::class_func_new (const GALGAS_lbigint & in_mValue
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctIntExpressionAST (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_ctIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctIntExpressionAST::setProperty_mValue (const GALGAS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIntExpressionAST::cPtr_ctIntExpressionAST (const GALGAS_lbigint & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

void cPtr_ctIntExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ctIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctIntExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIntExpressionAST ("ctIntExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST result ;
  const GALGAS_ctIntExpressionAST * p = (const GALGAS_ctIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctIdentifierExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ctIdentifierExpressionAST::cPtr_ctIdentifierExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mIdentifier () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctIdentifierExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIdentifier.printNonNullClassInstanceProperties ("mIdentifier") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ctIdentifierExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ctIdentifierExpressionAST * p = (const cPtr_ctIdentifierExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ctIdentifierExpressionAST::objectCompare (const GALGAS_ctIdentifierExpressionAST & inOperand) const {
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

GALGAS_ctIdentifierExpressionAST::GALGAS_ctIdentifierExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST::
init_21_ (const GALGAS_lstring & in_mIdentifier,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctIdentifierExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctIdentifierExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctIdentifierExpressionAST_init_21_ (in_mIdentifier, inCompiler) ;
  const GALGAS_ctIdentifierExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::
ctIdentifierExpressionAST_init_21_ (const GALGAS_lstring & in_mIdentifier,
                                    Compiler * /* inCompiler */) {
  mProperty_mIdentifier = in_mIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST::GALGAS_ctIdentifierExpressionAST (const cPtr_ctIdentifierExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIdentifierExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST::class_func_new (const GALGAS_lstring & in_mIdentifier
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctIdentifierExpressionAST (in_mIdentifier COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ctIdentifierExpressionAST::readProperty_mIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    return p->mProperty_mIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctIdentifierExpressionAST::setProperty_mIdentifier (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    p->mProperty_mIdentifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIdentifierExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIdentifierExpressionAST::cPtr_ctIdentifierExpressionAST (const GALGAS_lstring & in_mIdentifier
                                                                COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mIdentifier () {
  mProperty_mIdentifier = in_mIdentifier ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctIdentifierExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

void cPtr_ctIdentifierExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@ctIdentifierExpressionAST:") ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctIdentifierExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctIdentifierExpressionAST (mProperty_mIdentifier COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctIdentifierExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ("ctIdentifierExpressionAST",
                                                                                 & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIdentifierExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIdentifierExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIdentifierExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST result ;
  const GALGAS_ctIdentifierExpressionAST * p = (const GALGAS_ctIdentifierExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctIdentifierExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmGenericType reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenericType::cPtr_llvmGenericType (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mBitSize () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenericType::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mGenericFormalParameterList.printNonNullClassInstanceProperties ("mGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mBitSize.printNonNullClassInstanceProperties ("mBitSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_llvmGenericType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_llvmGenericType * p = (const cPtr_llvmGenericType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmGenericType) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenericFormalParameterList.objectCompare (p->mProperty_mGenericFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhereClause.objectCompare (p->mProperty_mWhereClause) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBitSize.objectCompare (p->mProperty_mBitSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_llvmGenericType::objectCompare (const GALGAS_llvmGenericType & inOperand) const {
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

GALGAS_llvmGenericType::GALGAS_llvmGenericType (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType::
init_21__21__21__21_ (const GALGAS_lstring & in_mTypeName,
                      const GALGAS_genericFormalParameterList & in_mGenericFormalParameterList,
                      const GALGAS_ctExpressionAST & in_mWhereClause,
                      const GALGAS_bigint & in_mBitSize,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmGenericType * object = nullptr ;
  macroMyNew (object, cPtr_llvmGenericType (inCompiler COMMA_THERE)) ;
  object->llvmGenericType_init_21__21__21__21_ (in_mTypeName, in_mGenericFormalParameterList, in_mWhereClause, in_mBitSize, inCompiler) ;
  const GALGAS_llvmGenericType result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::
llvmGenericType_init_21__21__21__21_ (const GALGAS_lstring & in_mTypeName,
                                      const GALGAS_genericFormalParameterList & in_mGenericFormalParameterList,
                                      const GALGAS_ctExpressionAST & in_mWhereClause,
                                      const GALGAS_bigint & in_mBitSize,
                                      Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mGenericFormalParameterList = in_mGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mBitSize = in_mBitSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType::GALGAS_llvmGenericType (const cPtr_llvmGenericType * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenericType) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType::class_func_new (const GALGAS_lstring & in_mTypeName,
                                                               const GALGAS_genericFormalParameterList & in_mGenericFormalParameterList,
                                                               const GALGAS_ctExpressionAST & in_mWhereClause,
                                                               const GALGAS_bigint & in_mBitSize
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenericType result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmGenericType (in_mTypeName, in_mGenericFormalParameterList, in_mWhereClause, in_mBitSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmGenericType::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setProperty_mTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmGenericType::readProperty_mGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setProperty_mGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_llvmGenericType::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setProperty_mWhereClause (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_llvmGenericType::readProperty_mBitSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mBitSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setProperty_mBitSize (const GALGAS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mBitSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenericType class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenericType::cPtr_llvmGenericType (const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_genericFormalParameterList & in_mGenericFormalParameterList,
                                            const GALGAS_ctExpressionAST & in_mWhereClause,
                                            const GALGAS_bigint & in_mBitSize
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mTypeName (),
mProperty_mGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mBitSize () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mGenericFormalParameterList = in_mGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mBitSize = in_mBitSize ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmGenericType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

void cPtr_llvmGenericType::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmGenericType:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitSize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenericType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenericType (mProperty_mTypeName, mProperty_mGenericFormalParameterList, mProperty_mWhereClause, mProperty_mBitSize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmGenericType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenericType ("llvmGenericType",
                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenericType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenericType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenericType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenericType result ;
  const GALGAS_llvmGenericType * p = (const GALGAS_llvmGenericType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenericType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmAssignmentOperatorDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorDeclarationAST::cPtr_llvmAssignmentOperatorDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mTargetVariableName (),
mProperty_mTargetTypeName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceVariableName (),
mProperty_mSourceTypeName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mLLVMInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmAssignmentOperatorDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mTargetTypeName.printNonNullClassInstanceProperties ("mTargetTypeName") ;
    mProperty_mTargetGenericFormalParameterList.printNonNullClassInstanceProperties ("mTargetGenericFormalParameterList") ;
    mProperty_mSourceVariableName.printNonNullClassInstanceProperties ("mSourceVariableName") ;
    mProperty_mSourceTypeName.printNonNullClassInstanceProperties ("mSourceTypeName") ;
    mProperty_mSourceGenericFormalParameterList.printNonNullClassInstanceProperties ("mSourceGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mLLVMInstructionList.printNonNullClassInstanceProperties ("mLLVMInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_llvmAssignmentOperatorDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_llvmAssignmentOperatorDeclarationAST * p = (const cPtr_llvmAssignmentOperatorDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetVariableName.objectCompare (p->mProperty_mTargetVariableName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetTypeName.objectCompare (p->mProperty_mTargetTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetGenericFormalParameterList.objectCompare (p->mProperty_mTargetGenericFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceVariableName.objectCompare (p->mProperty_mSourceVariableName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceTypeName.objectCompare (p->mProperty_mSourceTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceGenericFormalParameterList.objectCompare (p->mProperty_mSourceGenericFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhereClause.objectCompare (p->mProperty_mWhereClause) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLLVMInstructionList.objectCompare (p->mProperty_mLLVMInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_llvmAssignmentOperatorDeclarationAST::objectCompare (const GALGAS_llvmAssignmentOperatorDeclarationAST & inOperand) const {
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

GALGAS_llvmAssignmentOperatorDeclarationAST::GALGAS_llvmAssignmentOperatorDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                                          const GALGAS_lstring & in_mTargetVariableName,
                                          const GALGAS_lstring & in_mTargetTypeName,
                                          const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                          const GALGAS_lstring & in_mSourceVariableName,
                                          const GALGAS_lstring & in_mSourceTypeName,
                                          const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                          const GALGAS_ctExpressionAST & in_mWhereClause,
                                          const GALGAS_llvmGenerationInstructionList & in_mLLVMInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_llvmAssignmentOperatorDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmAssignmentOperatorDeclarationAST (inCompiler COMMA_THERE)) ;
  object->llvmAssignmentOperatorDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mOperatorLocation, in_mTargetVariableName, in_mTargetTypeName, in_mTargetGenericFormalParameterList, in_mSourceVariableName, in_mSourceTypeName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mLLVMInstructionList, inCompiler) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::
llvmAssignmentOperatorDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mOperatorLocation,
                                                                               const GALGAS_lstring & in_mTargetVariableName,
                                                                               const GALGAS_lstring & in_mTargetTypeName,
                                                                               const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                               const GALGAS_lstring & in_mSourceVariableName,
                                                                               const GALGAS_lstring & in_mSourceTypeName,
                                                                               const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                               const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                               const GALGAS_llvmGenerationInstructionList & in_mLLVMInstructionList,
                                                                               Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mTargetTypeName = in_mTargetTypeName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceVariableName = in_mSourceVariableName ;
  mProperty_mSourceTypeName = in_mSourceTypeName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mLLVMInstructionList = in_mLLVMInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST::GALGAS_llvmAssignmentOperatorDeclarationAST (const cPtr_llvmAssignmentOperatorDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST::class_func_new (const GALGAS_location & in_mOperatorLocation,
                                                                                                         const GALGAS_lstring & in_mTargetVariableName,
                                                                                                         const GALGAS_lstring & in_mTargetTypeName,
                                                                                                         const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                                         const GALGAS_lstring & in_mSourceVariableName,
                                                                                                         const GALGAS_lstring & in_mSourceTypeName,
                                                                                                         const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                                         const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                                                         const GALGAS_llvmGenerationInstructionList & in_mLLVMInstructionList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmAssignmentOperatorDeclarationAST (in_mOperatorLocation, in_mTargetVariableName, in_mTargetTypeName, in_mTargetGenericFormalParameterList, in_mSourceVariableName, in_mSourceTypeName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mLLVMInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mOperatorLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetVariableName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceVariableName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mWhereClause (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mLLVMInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mLLVMInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setProperty_mLLVMInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mLLVMInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorDeclarationAST::cPtr_llvmAssignmentOperatorDeclarationAST (const GALGAS_location & in_mOperatorLocation,
                                                                                      const GALGAS_lstring & in_mTargetVariableName,
                                                                                      const GALGAS_lstring & in_mTargetTypeName,
                                                                                      const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                      const GALGAS_lstring & in_mSourceVariableName,
                                                                                      const GALGAS_lstring & in_mSourceTypeName,
                                                                                      const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                      const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                                      const GALGAS_llvmGenerationInstructionList & in_mLLVMInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mOperatorLocation (),
mProperty_mTargetVariableName (),
mProperty_mTargetTypeName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceVariableName (),
mProperty_mSourceTypeName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mLLVMInstructionList () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mTargetTypeName = in_mTargetTypeName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceVariableName = in_mSourceVariableName ;
  mProperty_mSourceTypeName = in_mSourceTypeName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mLLVMInstructionList = in_mLLVMInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmAssignmentOperatorDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

void cPtr_llvmAssignmentOperatorDeclarationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmAssignmentOperatorDeclarationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmAssignmentOperatorDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmAssignmentOperatorDeclarationAST (mProperty_mOperatorLocation, mProperty_mTargetVariableName, mProperty_mTargetTypeName, mProperty_mTargetGenericFormalParameterList, mProperty_mSourceVariableName, mProperty_mSourceTypeName, mProperty_mSourceGenericFormalParameterList, mProperty_mWhereClause, mProperty_mLLVMInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ("llvmAssignmentOperatorDeclarationAST",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST result ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST * p = (const GALGAS_llvmAssignmentOperatorDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmAssignmentOperatorDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorUsage::cPtr_llvmAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceTpe (),
mProperty_mSourceVarName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mTargetGenericFormalParameterList.printNonNullClassInstanceProperties ("mTargetGenericFormalParameterList") ;
    mProperty_mSourceTpe.printNonNullClassInstanceProperties ("mSourceTpe") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mSourceGenericFormalParameterList.printNonNullClassInstanceProperties ("mSourceGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_llvmAssignmentOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_llvmAssignmentOperatorUsage * p = (const cPtr_llvmAssignmentOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetGenericFormalParameterList.objectCompare (p->mProperty_mTargetGenericFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceTpe.objectCompare (p->mProperty_mSourceTpe) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceGenericFormalParameterList.objectCompare (p->mProperty_mSourceGenericFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWhereClause.objectCompare (p->mProperty_mWhereClause) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_llvmAssignmentOperatorUsage::objectCompare (const GALGAS_llvmAssignmentOperatorUsage & inOperand) const {
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

GALGAS_llvmAssignmentOperatorUsage::GALGAS_llvmAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage::
init_21__21__21__21__21__21__21__21_ (const GALGAS_omnibusType & in_mTargetType,
                                      const GALGAS_lstring & in_mTargetVarName,
                                      const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                      const GALGAS_omnibusType & in_mSourceTpe,
                                      const GALGAS_lstring & in_mSourceVarName,
                                      const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                      const GALGAS_ctExpressionAST & in_mWhereClause,
                                      const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_llvmAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (in_mTargetType, in_mTargetVarName, in_mTargetGenericFormalParameterList, in_mSourceTpe, in_mSourceVarName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mInstructionList, inCompiler) ;
  const GALGAS_llvmAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorUsage::
llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (const GALGAS_omnibusType & in_mTargetType,
                                                                  const GALGAS_lstring & in_mTargetVarName,
                                                                  const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                  const GALGAS_omnibusType & in_mSourceTpe,
                                                                  const GALGAS_lstring & in_mSourceVarName,
                                                                  const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                  const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                  const GALGAS_llvmGenerationInstructionList & in_mInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceTpe = in_mSourceTpe ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage::GALGAS_llvmAssignmentOperatorUsage (const cPtr_llvmAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage::class_func_new (const GALGAS_omnibusType & in_mTargetType,
                                                                                       const GALGAS_lstring & in_mTargetVarName,
                                                                                       const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                       const GALGAS_omnibusType & in_mSourceTpe,
                                                                                       const GALGAS_lstring & in_mSourceVarName,
                                                                                       const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                       const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                                       const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmAssignmentOperatorUsage (in_mTargetType, in_mTargetVarName, in_mTargetGenericFormalParameterList, in_mSourceTpe, in_mSourceVarName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_llvmAssignmentOperatorUsage::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mTargetType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorUsage::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mTargetVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorUsage::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mTargetGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_llvmAssignmentOperatorUsage::readProperty_mSourceTpe (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceTpe ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mSourceTpe (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceTpe = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorUsage::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mSourceVarName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorUsage::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mSourceGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_llvmAssignmentOperatorUsage::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mWhereClause (const GALGAS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmAssignmentOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorUsage::cPtr_llvmAssignmentOperatorUsage (const GALGAS_omnibusType & in_mTargetType,
                                                                    const GALGAS_lstring & in_mTargetVarName,
                                                                    const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                    const GALGAS_omnibusType & in_mSourceTpe,
                                                                    const GALGAS_lstring & in_mSourceVarName,
                                                                    const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                    const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                    const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mTargetGenericFormalParameterList (),
mProperty_mSourceTpe (),
mProperty_mSourceVarName (),
mProperty_mSourceGenericFormalParameterList (),
mProperty_mWhereClause (),
mProperty_mInstructionList () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mTargetGenericFormalParameterList = in_mTargetGenericFormalParameterList ;
  mProperty_mSourceTpe = in_mSourceTpe ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mSourceGenericFormalParameterList = in_mSourceGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

void cPtr_llvmAssignmentOperatorUsage::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmAssignmentOperatorUsage:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceTpe.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmAssignmentOperatorUsage (mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mTargetGenericFormalParameterList, mProperty_mSourceTpe, mProperty_mSourceVarName, mProperty_mSourceGenericFormalParameterList, mProperty_mWhereClause, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ("llvmAssignmentOperatorUsage",
                                                                                   & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage result ;
  const GALGAS_llvmAssignmentOperatorUsage * p = (const GALGAS_llvmAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentRoutineIR::cPtr_assignmentRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_assignmentRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_assignmentRoutineIR * p = (const cPtr_assignmentRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceType.objectCompare (p->mProperty_mSourceType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGeneratedInstructions.objectCompare (p->mProperty_mGeneratedInstructions) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_assignmentRoutineIR::objectCompare (const GALGAS_assignmentRoutineIR & inOperand) const {
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

GALGAS_assignmentRoutineIR::GALGAS_assignmentRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                 const GALGAS_bool & in_isRequired,
                                                                 const GALGAS_bool & in_warnsIfUnused,
                                                                 const GALGAS_omnibusType & in_mTargetType,
                                                                 const GALGAS_string & in_mTargetVarName,
                                                                 const GALGAS_omnibusType & in_mSourceType,
                                                                 const GALGAS_string & in_mSourceVarName,
                                                                 const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                 const GALGAS_allocaList & in_mAllocaList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_assignmentRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_assignmentRoutineIR (inCompiler COMMA_THERE)) ;
  object->assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GALGAS_assignmentRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::
assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                     const GALGAS_bool & in_isRequired,
                                                                                     const GALGAS_bool & in_warnsIfUnused,
                                                                                     const GALGAS_omnibusType & in_mTargetType,
                                                                                     const GALGAS_string & in_mTargetVarName,
                                                                                     const GALGAS_omnibusType & in_mSourceType,
                                                                                     const GALGAS_string & in_mSourceVarName,
                                                                                     const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                                     const GALGAS_allocaList & in_mAllocaList,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR::GALGAS_assignmentRoutineIR (const cPtr_assignmentRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                       const GALGAS_bool & in_isRequired,
                                                                       const GALGAS_bool & in_warnsIfUnused,
                                                                       const GALGAS_omnibusType & in_mTargetType,
                                                                       const GALGAS_string & in_mTargetVarName,
                                                                       const GALGAS_omnibusType & in_mSourceType,
                                                                       const GALGAS_string & in_mSourceVarName,
                                                                       const GALGAS_stringlist & in_mGeneratedInstructions,
                                                                       const GALGAS_allocaList & in_mAllocaList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assignmentRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mGeneratedInstructions, in_mAllocaList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignmentRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setProperty_mTargetType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setProperty_mTargetVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignmentRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setProperty_mSourceType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setProperty_mSourceVarName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_assignmentRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setProperty_mGeneratedInstructions (const GALGAS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_assignmentRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setProperty_mAllocaList (const GALGAS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentRoutineIR::cPtr_assignmentRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_omnibusType & in_mTargetType,
                                                    const GALGAS_string & in_mTargetVarName,
                                                    const GALGAS_omnibusType & in_mSourceType,
                                                    const GALGAS_string & in_mSourceVarName,
                                                    const GALGAS_stringlist & in_mGeneratedInstructions,
                                                    const GALGAS_allocaList & in_mAllocaList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

void cPtr_assignmentRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mGeneratedInstructions, mProperty_mAllocaList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignmentRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR ("assignmentRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR result ;
  const GALGAS_assignmentRoutineIR * p = (const GALGAS_assignmentRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleAssignmentCopyRoutineIR reference class
//--------------------------------------------------------------------------------------------------

cPtr_simpleAssignmentCopyRoutineIR::cPtr_simpleAssignmentCopyRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mTargetType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleAssignmentCopyRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_simpleAssignmentCopyRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_simpleAssignmentCopyRoutineIR * p = (const cPtr_simpleAssignmentCopyRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_simpleAssignmentCopyRoutineIR::objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR & inOperand) const {
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

GALGAS_simpleAssignmentCopyRoutineIR::GALGAS_simpleAssignmentCopyRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_omnibusType & in_mTargetType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_simpleAssignmentCopyRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_simpleAssignmentCopyRoutineIR (inCompiler COMMA_THERE)) ;
  object->simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, inCompiler) ;
  const GALGAS_simpleAssignmentCopyRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::
simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GALGAS_lstring & in_mRoutineMangledName,
                                                                           const GALGAS_bool & in_isRequired,
                                                                           const GALGAS_bool & in_warnsIfUnused,
                                                                           const GALGAS_omnibusType & in_mTargetType,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR::GALGAS_simpleAssignmentCopyRoutineIR (const cPtr_simpleAssignmentCopyRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleAssignmentCopyRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR::class_func_new (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                           const GALGAS_bool & in_isRequired,
                                                                                           const GALGAS_bool & in_warnsIfUnused,
                                                                                           const GALGAS_omnibusType & in_mTargetType
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_simpleAssignmentCopyRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_simpleAssignmentCopyRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_simpleAssignmentCopyRoutineIR::setProperty_mTargetType (const GALGAS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleAssignmentCopyRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_simpleAssignmentCopyRoutineIR::cPtr_simpleAssignmentCopyRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                        const GALGAS_bool & in_isRequired,
                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                        const GALGAS_omnibusType & in_mTargetType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mTargetType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_simpleAssignmentCopyRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

void cPtr_simpleAssignmentCopyRoutineIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@simpleAssignmentCopyRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleAssignmentCopyRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleAssignmentCopyRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @simpleAssignmentCopyRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ("simpleAssignmentCopyRoutineIR",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleAssignmentCopyRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleAssignmentCopyRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleAssignmentCopyRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR result ;
  const GALGAS_simpleAssignmentCopyRoutineIR * p = (const GALGAS_simpleAssignmentCopyRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_simpleAssignmentCopyRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmVarInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_llvmVarInstruction::cPtr_llvmVarInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (inCompiler COMMA_THERE),
mProperty_mVariableName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmVarInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_llvmVarInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_llvmVarInstruction * p = (const cPtr_llvmVarInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_llvmVarInstruction::objectCompare (const GALGAS_llvmVarInstruction & inOperand) const {
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

GALGAS_llvmVarInstruction::GALGAS_llvmVarInstruction (void) :
GALGAS_abstractLLVMInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction::
init_21_ (const GALGAS_lstring & in_mVariableName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_llvmVarInstruction * object = nullptr ;
  macroMyNew (object, cPtr_llvmVarInstruction (inCompiler COMMA_THERE)) ;
  object->llvmVarInstruction_init_21_ (in_mVariableName, inCompiler) ;
  const GALGAS_llvmVarInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::
llvmVarInstruction_init_21_ (const GALGAS_lstring & in_mVariableName,
                             Compiler * /* inCompiler */) {
  mProperty_mVariableName = in_mVariableName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction::GALGAS_llvmVarInstruction (const cPtr_llvmVarInstruction * inSourcePtr) :
GALGAS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmVarInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction::class_func_new (const GALGAS_lstring & in_mVariableName
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_llvmVarInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmVarInstruction (in_mVariableName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmVarInstruction::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmVarInstruction::setProperty_mVariableName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmVarInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_llvmVarInstruction::cPtr_llvmVarInstruction (const GALGAS_lstring & in_mVariableName
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (THERE),
mProperty_mVariableName () {
  mProperty_mVariableName = in_mVariableName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmVarInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction ;
}

void cPtr_llvmVarInstruction::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmVarInstruction:") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmVarInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmVarInstruction (mProperty_mVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmVarInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmVarInstruction ("llvmVarInstruction",
                                                                          & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmVarInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmVarInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmVarInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmVarInstruction result ;
  const GALGAS_llvmVarInstruction * p = (const GALGAS_llvmVarInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmVarInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::init_21__21_ (const GALGAS_lstring & in_mValue_30_,
                                                                                   const GALGAS_lstring & in_mValue_31_,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::class_func_new (const GALGAS_lstring & in_mValue0,
                                                                                     const GALGAS_lstring & in_mValue1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_30_.objectCompare (inOperand.mProperty_mValue_30_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_31_.objectCompare (inOperand.mProperty_mValue_31_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element::~ GALGAS_interruptionConfigurationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::init_21__21_ (const GALGAS_lstring & in_mInterruptName,
                                                                                                               const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::class_func_new (const GALGAS_lstring & in_mInterruptName,
                                                                                                                 const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_interruptionConfigurationList_2D_element::objectCompare (const GALGAS_interruptionConfigurationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptionConfigurationList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @interruptionConfigurationList-element:") ;
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
//
//     @interruptionConfigurationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ("interruptionConfigurationList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptionConfigurationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  const GALGAS_interruptionConfigurationList_2D_element * p = (const GALGAS_interruptionConfigurationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptionConfigurationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mValuedObject () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element::~ GALGAS_flatValuedObjectMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_valuedObjectState & in_mObjectState,
                                                                                                   const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                                                   const GALGAS_valuedObject & in_mValuedObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mObjectState = in_mObjectState ;
  result.mProperty_mObjectShouldBeValuedAtEndOfScope = in_mObjectShouldBeValuedAtEndOfScope ;
  result.mProperty_mValuedObject = in_mValuedObject ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_valuedObjectState & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_valuedObject & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mValuedObject (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_valuedObjectState & in_mObjectState,
                                                                                             const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                                             const GALGAS_valuedObject & in_mValuedObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mObjectState = in_mObjectState ;
  result.mProperty_mObjectShouldBeValuedAtEndOfScope = in_mObjectShouldBeValuedAtEndOfScope ;
  result.mProperty_mValuedObject = in_mValuedObject ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_flatValuedObjectMap_2D_element::objectCompare (const GALGAS_flatValuedObjectMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mObjectState.objectCompare (inOperand.mProperty_mObjectState) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (inOperand.mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValuedObject.objectCompare (inOperand.mProperty_mValuedObject) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_flatValuedObjectMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mValuedObject.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @flatValuedObjectMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObjectState.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValuedObject.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @flatValuedObjectMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ("flatValuedObjectMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_flatValuedObjectMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  const GALGAS_flatValuedObjectMap_2D_element * p = (const GALGAS_flatValuedObjectMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_flatValuedObjectMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element::~ GALGAS_referenceStateMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_valuedObjectState & in_mState,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mState = in_mState ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_valuedObjectState & in_mState,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mState = in_mState ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_referenceStateMap_2D_element::objectCompare (const GALGAS_referenceStateMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_referenceStateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @referenceStateMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @referenceStateMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2D_element ("referenceStateMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_referenceStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_referenceStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  const GALGAS_referenceStateMap_2D_element * p = (const GALGAS_referenceStateMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_referenceStateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element::GALGAS_typeConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element::~ GALGAS_typeConstantMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element GALGAS_typeConstantMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_constantMap & in_mConstantMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantMap = in_mConstantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element::GALGAS_typeConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_constantMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstantMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element GALGAS_typeConstantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_constantMap & in_mConstantMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantMap = in_mConstantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeConstantMap_2D_element::objectCompare (const GALGAS_typeConstantMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantMap.objectCompare (inOperand.mProperty_mConstantMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeConstantMap-element:") ;
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
//
//     @typeConstantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2D_element ("typeConstantMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element GALGAS_typeConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap_2D_element result ;
  const GALGAS_typeConstantMap_2D_element * p = (const GALGAS_typeConstantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                               const GALGAS_bigint & in_mIndex,
                                                                               const GALGAS_lstring & in_mClassTypeName,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mClassTypeName = in_mClassTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bigint & inOperand1,
                                                              const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_bigint & in_mIndex,
                                                                             const GALGAS_lstring & in_mClassTypeName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mClassTypeName = in_mClassTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mClassTypeName.objectCompare (inOperand.mProperty_mClassTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantMap-element:") ;
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
//
//     @constantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  const GALGAS_constantMap_2D_element * p = (const GALGAS_constantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element::GALGAS_typeConstructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstructorMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element::~ GALGAS_typeConstructorMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element GALGAS_typeConstructorMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_constructorMap & in_mConstructorMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeConstructorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstructorMap = in_mConstructorMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element::GALGAS_typeConstructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_constructorMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstructorMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element GALGAS_typeConstructorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_constructorMap & in_mConstructorMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeConstructorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstructorMap = in_mConstructorMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeConstructorMap_2D_element::objectCompare (const GALGAS_typeConstructorMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstructorMap.objectCompare (inOperand.mProperty_mConstructorMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeConstructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstructorMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstructorMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeConstructorMap-element:") ;
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
//
//     @typeConstructorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2D_element ("typeConstructorMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstructorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element GALGAS_typeConstructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap_2D_element result ;
  const GALGAS_typeConstructorMap_2D_element * p = (const GALGAS_typeConstructorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeConstructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::init_21__21__21_ (const GALGAS_string & in_mSelector,
                                                                                                 const GALGAS_omnibusType & in_mType,
                                                                                                 const GALGAS_uint & in_mFieldIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mFieldIndex = in_mFieldIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_omnibusType & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::class_func_new (const GALGAS_string & in_mSelector,
                                                                                               const GALGAS_omnibusType & in_mType,
                                                                                               const GALGAS_uint & in_mFieldIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mFieldIndex = in_mFieldIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constructorSignature_2D_element::objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFieldIndex.objectCompare (inOperand.mProperty_mFieldIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorSignature-element:") ;
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
//
//     @constructorSignature-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  const GALGAS_constructorSignature_2D_element * p = (const GALGAS_constructorSignature_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_constructorSignature & in_mSignature,
                                                                                     const GALGAS_constructorValue & in_mInitValue,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mInitValue = in_mInitValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                    const GALGAS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_constructorSignature & in_mSignature,
                                                                                   const GALGAS_constructorValue & in_mInitValue,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mInitValue = in_mInitValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInitValue.objectCompare (inOperand.mProperty_mInitValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorMap-element:") ;
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
//
//     @constructorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element::GALGAS_typePropertyGetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mGetterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element::~ GALGAS_typePropertyGetterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element GALGAS_typePropertyGetterMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_propertyGetterMap & in_mGetterMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGetterMap = in_mGetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element::GALGAS_typePropertyGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertyGetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element GALGAS_typePropertyGetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_propertyGetterMap & in_mGetterMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGetterMap = in_mGetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typePropertyGetterMap_2D_element::objectCompare (const GALGAS_typePropertyGetterMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGetterMap.objectCompare (inOperand.mProperty_mGetterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typePropertyGetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typePropertyGetterMap-element:") ;
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
//
//     @typePropertyGetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2D_element ("typePropertyGetterMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertyGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertyGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertyGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element GALGAS_typePropertyGetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap_2D_element result ;
  const GALGAS_typePropertyGetterMap_2D_element * p = (const GALGAS_typePropertyGetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePropertyGetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element::GALGAS_propertyGetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element::~ GALGAS_propertyGetterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element GALGAS_propertyGetterMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_propertyVisibility & in_mVisibility,
                                                                                           const GALGAS_propertyGetterKind & in_mAccess,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element::GALGAS_propertyGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_propertyVisibility & inOperand1,
                                                                          const GALGAS_propertyGetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element GALGAS_propertyGetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_propertyVisibility & in_mVisibility,
                                                                                         const GALGAS_propertyGetterKind & in_mAccess,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyGetterMap_2D_element::objectCompare (const GALGAS_propertyGetterMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mVisibility.objectCompare (inOperand.mProperty_mVisibility) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterMap-element:") ;
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
//
//     @propertyGetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ("propertyGetterMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element GALGAS_propertyGetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterMap_2D_element result ;
  const GALGAS_propertyGetterMap_2D_element * p = (const GALGAS_propertyGetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element::GALGAS_typePropertySetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSetterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element::~ GALGAS_typePropertySetterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element GALGAS_typePropertySetterMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_propertySetterMap & in_mSetterMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSetterMap = in_mSetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element::GALGAS_typePropertySetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertySetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mSetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element GALGAS_typePropertySetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_propertySetterMap & in_mSetterMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSetterMap = in_mSetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typePropertySetterMap_2D_element::objectCompare (const GALGAS_typePropertySetterMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSetterMap.objectCompare (inOperand.mProperty_mSetterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typePropertySetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typePropertySetterMap-element:") ;
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
//
//     @typePropertySetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2D_element ("typePropertySetterMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertySetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertySetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertySetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element GALGAS_typePropertySetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap_2D_element result ;
  const GALGAS_typePropertySetterMap_2D_element * p = (const GALGAS_typePropertySetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePropertySetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element::GALGAS_propertySetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element::~ GALGAS_propertySetterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element GALGAS_propertySetterMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_propertyVisibility & in_mVisibility,
                                                                                           const GALGAS_propertySetterKind & in_mAccess,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element::GALGAS_propertySetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_propertyVisibility & inOperand1,
                                                                          const GALGAS_propertySetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element GALGAS_propertySetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_propertyVisibility & in_mVisibility,
                                                                                         const GALGAS_propertySetterKind & in_mAccess,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertySetterMap_2D_element::objectCompare (const GALGAS_propertySetterMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mVisibility.objectCompare (inOperand.mProperty_mVisibility) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterMap-element:") ;
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
//
//     @propertySetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2D_element ("propertySetterMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element GALGAS_propertySetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterMap_2D_element result ;
  const GALGAS_propertySetterMap_2D_element * p = (const GALGAS_propertySetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertySetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (void) :
mProperty_mType (),
mProperty_mOperandIRList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element::~ GALGAS_globalStructuredConstantList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::init_21__21_ (const GALGAS_omnibusType & in_mType,
                                                                                                             const GALGAS_operandIRList & in_mOperandIRList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mOperandIRList = in_mOperandIRList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (const GALGAS_omnibusType & inOperand0,
                                                                                                const GALGAS_operandIRList & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mOperandIRList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::class_func_new (const GALGAS_omnibusType & in_mType,
                                                                                                               const GALGAS_operandIRList & in_mOperandIRList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mOperandIRList = in_mOperandIRList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_globalStructuredConstantList_2D_element::objectCompare (const GALGAS_globalStructuredConstantList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOperandIRList.objectCompare (inOperand.mProperty_mOperandIRList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalStructuredConstantList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mOperandIRList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mOperandIRList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalStructuredConstantList-element:") ;
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
//
//     @globalStructuredConstantList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ("globalStructuredConstantList-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalStructuredConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  const GALGAS_globalStructuredConstantList_2D_element * p = (const GALGAS_globalStructuredConstantList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalStructuredConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_uint & in_mIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_uint & in_mIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_staticStringMap_2D_element::objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticStringMap-element:") ;
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
//
//     @staticStringMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  const GALGAS_staticStringMap_2D_element * p = (const GALGAS_staticStringMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_objectIR & in_mValue,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_objectIR & in_mValue,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalConstantMap-element:") ;
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
//
//     @globalConstantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element::~ GALGAS_availableInterruptMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_availableInterruptMap_2D_element::objectCompare (const GALGAS_availableInterruptMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_availableInterruptMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @availableInterruptMap-element:") ;
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
//
//     @availableInterruptMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ("availableInterruptMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_availableInterruptMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_availableInterruptMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  const GALGAS_availableInterruptMap_2D_element * p = (const GALGAS_availableInterruptMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_availableInterruptMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType (),
mProperty_mPropertyIndexPath () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element::~ GALGAS_arcAssignmentList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::init_21__21__21_ (const GALGAS_string & in_mPropertyName,
                                                                                           const GALGAS_omnibusType & in_mPropertyType,
                                                                                           const GALGAS_uintlist & in_mPropertyIndexPath,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  result.mProperty_mPropertyIndexPath = in_mPropertyIndexPath ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_omnibusType & inOperand1,
                                                                          const GALGAS_uintlist & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1),
mProperty_mPropertyIndexPath (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::class_func_new (const GALGAS_string & in_mPropertyName,
                                                                                         const GALGAS_omnibusType & in_mPropertyType,
                                                                                         const GALGAS_uintlist & in_mPropertyIndexPath,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  result.mProperty_mPropertyIndexPath = in_mPropertyIndexPath ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_arcAssignmentList_2D_element::objectCompare (const GALGAS_arcAssignmentList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyIndexPath.objectCompare (inOperand.mProperty_mPropertyIndexPath) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_arcAssignmentList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () && mProperty_mPropertyIndexPath.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
  mProperty_mPropertyIndexPath.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @arcAssignmentList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyIndexPath.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arcAssignmentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ("arcAssignmentList-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arcAssignmentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arcAssignmentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  const GALGAS_arcAssignmentList_2D_element * p = (const GALGAS_arcAssignmentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arcAssignmentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::~ GALGAS_unifiedTypeMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_unifiedTypeMapElementClass & in_mElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_unifiedTypeMapElementClass & in_mElement,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeMap_2D_element::objectCompare (const GALGAS_unifiedTypeMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ("unifiedTypeMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  const GALGAS_unifiedTypeMap_2D_element * p = (const GALGAS_unifiedTypeMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mConstantValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element::~ GALGAS_enumerationConstantList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::init_21__21_ (const GALGAS_lstring & in_mConstantName,
                                                                                                   const GALGAS_bigint & in_mConstantValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mConstantValue = in_mConstantValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bigint & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mConstantValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::class_func_new (const GALGAS_lstring & in_mConstantName,
                                                                                                     const GALGAS_bigint & in_mConstantValue,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mConstantValue = in_mConstantValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumerationConstantList_2D_element::objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantValue.objectCompare (inOperand.mProperty_mConstantValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_enumerationConstantList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mConstantValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mConstantValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationConstantList-element:") ;
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
//
//     @enumerationConstantList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ("enumerationConstantList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  const GALGAS_enumerationConstantList_2D_element * p = (const GALGAS_enumerationConstantList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element::GALGAS_propertyAttributeList_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element::~ GALGAS_propertyAttributeList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::init_21__21_ (const GALGAS_lstring & in_mAttributeName,
                                                                                               const GALGAS_lbigint & in_mAttributeValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAttributeValue = in_mAttributeValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element::GALGAS_propertyAttributeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lbigint & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::class_func_new (const GALGAS_lstring & in_mAttributeName,
                                                                                                 const GALGAS_lbigint & in_mAttributeValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAttributeValue = in_mAttributeValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyAttributeList_2D_element::objectCompare (const GALGAS_propertyAttributeList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAttributeValue.objectCompare (inOperand.mProperty_mAttributeValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyAttributeList_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyAttributeList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyAttributeList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ("propertyAttributeList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyAttributeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyAttributeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAttributeList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  const GALGAS_propertyAttributeList_2D_element * p = (const GALGAS_propertyAttributeList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyAttributeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::init_21__21_ (const GALGAS_string & in_mPropertyName,
                                                                             const GALGAS_omnibusType & in_mType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_omnibusType & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::class_func_new (const GALGAS_string & in_mPropertyName,
                                                                               const GALGAS_omnibusType & in_mType,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyList_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element::GALGAS_controlRegisterNameListAST_2D_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mIsReadOnly (),
mProperty_mRegisterOffset (),
mProperty_mRegisterOffsetLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element::~ GALGAS_controlRegisterNameListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::init_21__21__21__21__21_ (const GALGAS_lstring & in_mRegisterName,
                                                                                                                     const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                                     const GALGAS_bool & in_mIsReadOnly,
                                                                                                                     const GALGAS_expressionAST & in_mRegisterOffset,
                                                                                                                     const GALGAS_location & in_mRegisterOffsetLocation,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mControlRegisterKind = in_mControlRegisterKind ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mRegisterOffset = in_mRegisterOffset ;
  result.mProperty_mRegisterOffsetLocation = in_mRegisterOffsetLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element::GALGAS_controlRegisterNameListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_controlRegisterKind & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_expressionAST & inOperand3,
                                                                                            const GALGAS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mRegisterOffset (inOperand3),
mProperty_mRegisterOffsetLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::class_func_new (const GALGAS_lstring & in_mRegisterName,
                                                                                                           const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                           const GALGAS_bool & in_mIsReadOnly,
                                                                                                           const GALGAS_expressionAST & in_mRegisterOffset,
                                                                                                           const GALGAS_location & in_mRegisterOffsetLocation,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mControlRegisterKind = in_mControlRegisterKind ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mRegisterOffset = in_mRegisterOffset ;
  result.mProperty_mRegisterOffsetLocation = in_mRegisterOffsetLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterNameListAST_2D_element::objectCompare (const GALGAS_controlRegisterNameListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mControlRegisterKind.objectCompare (inOperand.mProperty_mControlRegisterKind) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterOffset.objectCompare (inOperand.mProperty_mRegisterOffset) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterOffsetLocation.objectCompare (inOperand.mProperty_mRegisterOffsetLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterNameListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mRegisterOffset.isValid () && mProperty_mRegisterOffsetLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST_2D_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mRegisterOffset.drop () ;
  mProperty_mRegisterOffsetLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterNameListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterOffset.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterOffsetLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterNameListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ("controlRegisterNameListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterNameListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterNameListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  const GALGAS_controlRegisterNameListAST_2D_element * p = (const GALGAS_controlRegisterNameListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterNameListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (void) :
mProperty_mRegisterGroupName (),
mProperty_mControlRegisterGroupKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::~ GALGAS_registerGroupListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                             const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_controlRegisterGroupKindAST & inOperand1) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mControlRegisterGroupKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::class_func_new (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                               const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerGroupListAST_2D_element::objectCompare (const GALGAS_registerGroupListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterGroupName.objectCompare (inOperand.mProperty_mRegisterGroupName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mControlRegisterGroupKind.objectCompare (inOperand.mProperty_mControlRegisterGroupKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mControlRegisterGroupKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mControlRegisterGroupKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ("registerGroupListAST-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  const GALGAS_registerGroupListAST_2D_element * p = (const GALGAS_registerGroupListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::~ GALGAS_controlRegisterUserAccesMapAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterUserAccesMapAST_2D_element::objectCompare (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterUserAccesMapAST_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterUserAccesMapAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ("controlRegisterUserAccesMapAST-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  const GALGAS_controlRegisterUserAccesMapAST_2D_element * p = (const GALGAS_controlRegisterUserAccesMapAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_uint & in_mBitIndex,
                                                                                                       const GALGAS_uint & in_mBitCount,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_uint & in_mBitIndex,
                                                                                                     const GALGAS_uint & in_mBitCount,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterFieldMap_2D_element::objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterFieldMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mResultType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                                                             const GALGAS_bigint & in_mAccessRightOperand,
                                                                             const GALGAS_omnibusType & in_mResultType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_omnibusType & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mResultType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                       const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                                                       const GALGAS_bigint & in_mAccessRightOperand,
                                                                       const GALGAS_omnibusType & in_mResultType,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sliceMap_2D_element::objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAccessOperator.objectCompare (inOperand.mProperty_mAccessOperator) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAccessRightOperand.objectCompare (inOperand.mProperty_mAccessRightOperand) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mResultType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mIsReadOnly (),
mProperty_mUserAccess (),
mProperty_mRegisterFieldAccessMap (),
mProperty_mRegisterFieldMap (),
mProperty_mAddressOffset (),
mProperty_mControlRegisterFieldList (),
mProperty_mRegisterBitCount (),
mProperty_mArraySize (),
mProperty_mElementArraySize () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_omnibusType & in_mType,
                                                                                                                             const GALGAS_bool & in_mIsReadOnly,
                                                                                                                             const GALGAS_bool & in_mUserAccess,
                                                                                                                             const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                                                             const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                                                             const GALGAS_bigint & in_mAddressOffset,
                                                                                                                             const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                                                             const GALGAS_uint & in_mRegisterBitCount,
                                                                                                                             const GALGAS_uint & in_mArraySize,
                                                                                                                             const GALGAS_uint & in_mElementArraySize,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mUserAccess = in_mUserAccess ;
  result.mProperty_mRegisterFieldAccessMap = in_mRegisterFieldAccessMap ;
  result.mProperty_mRegisterFieldMap = in_mRegisterFieldMap ;
  result.mProperty_mAddressOffset = in_mAddressOffset ;
  result.mProperty_mControlRegisterFieldList = in_mControlRegisterFieldList ;
  result.mProperty_mRegisterBitCount = in_mRegisterBitCount ;
  result.mProperty_mArraySize = in_mArraySize ;
  result.mProperty_mElementArraySize = in_mElementArraySize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_omnibusType & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_sliceMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8,
                                                                            const GALGAS_uint & inOperand9,
                                                                            const GALGAS_uint & inOperand10) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mUserAccess (inOperand3),
mProperty_mRegisterFieldAccessMap (inOperand4),
mProperty_mRegisterFieldMap (inOperand5),
mProperty_mAddressOffset (inOperand6),
mProperty_mControlRegisterFieldList (inOperand7),
mProperty_mRegisterBitCount (inOperand8),
mProperty_mArraySize (inOperand9),
mProperty_mElementArraySize (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_omnibusType & in_mType,
                                                                                           const GALGAS_bool & in_mIsReadOnly,
                                                                                           const GALGAS_bool & in_mUserAccess,
                                                                                           const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                           const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                           const GALGAS_bigint & in_mAddressOffset,
                                                                                           const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                           const GALGAS_uint & in_mRegisterBitCount,
                                                                                           const GALGAS_uint & in_mArraySize,
                                                                                           const GALGAS_uint & in_mElementArraySize,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mUserAccess = in_mUserAccess ;
  result.mProperty_mRegisterFieldAccessMap = in_mRegisterFieldAccessMap ;
  result.mProperty_mRegisterFieldMap = in_mRegisterFieldMap ;
  result.mProperty_mAddressOffset = in_mAddressOffset ;
  result.mProperty_mControlRegisterFieldList = in_mControlRegisterFieldList ;
  result.mProperty_mRegisterBitCount = in_mRegisterBitCount ;
  result.mProperty_mArraySize = in_mArraySize ;
  result.mProperty_mElementArraySize = in_mElementArraySize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUserAccess.objectCompare (inOperand.mProperty_mUserAccess) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (inOperand.mProperty_mRegisterFieldAccessMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterFieldMap.objectCompare (inOperand.mProperty_mRegisterFieldMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAddressOffset.objectCompare (inOperand.mProperty_mAddressOffset) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mControlRegisterFieldList.objectCompare (inOperand.mProperty_mControlRegisterFieldList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterBitCount.objectCompare (inOperand.mProperty_mRegisterBitCount) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mArraySize.objectCompare (inOperand.mProperty_mArraySize) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mElementArraySize.objectCompare (inOperand.mProperty_mElementArraySize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mUserAccess.drop () ;
  mProperty_mRegisterFieldAccessMap.drop () ;
  mProperty_mRegisterFieldMap.drop () ;
  mProperty_mAddressOffset.drop () ;
  mProperty_mControlRegisterFieldList.drop () ;
  mProperty_mRegisterBitCount.drop () ;
  mProperty_mArraySize.drop () ;
  mProperty_mElementArraySize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUserAccess.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAddressOffset.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArraySize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (void) :
mProperty_lkey (),
mProperty_mGroupKind (),
mProperty_mControlRegisterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::~ GALGAS_controlRegisterGroupMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_registerGroupKind & in_mGroupKind,
                                                                                                       const GALGAS_controlRegisterMap & in_mControlRegisterMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGroupKind = in_mGroupKind ;
  result.mProperty_mControlRegisterMap = in_mControlRegisterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_registerGroupKind & inOperand1,
                                                                                      const GALGAS_controlRegisterMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mGroupKind (inOperand1),
mProperty_mControlRegisterMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_registerGroupKind & in_mGroupKind,
                                                                                                     const GALGAS_controlRegisterMap & in_mControlRegisterMap,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGroupKind = in_mGroupKind ;
  result.mProperty_mControlRegisterMap = in_mControlRegisterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controlRegisterGroupMap_2D_element::objectCompare (const GALGAS_controlRegisterGroupMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGroupKind.objectCompare (inOperand.mProperty_mGroupKind) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mControlRegisterMap.objectCompare (inOperand.mProperty_mControlRegisterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGroupKind.drop () ;
  mProperty_mControlRegisterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterGroupMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ("controlRegisterGroupMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  const GALGAS_controlRegisterGroupMap_2D_element * p = (const GALGAS_controlRegisterGroupMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::GALGAS_globalSyncInstanceMap_2D_element (void) :
mProperty_lkey (),
mProperty_type (),
mProperty_initialValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::~ GALGAS_globalSyncInstanceMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_omnibusType & in_type,
                                                                                                   const GALGAS_objectIR & in_initialValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_type = in_type ;
  result.mProperty_initialValue = in_initialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::GALGAS_globalSyncInstanceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_omnibusType & inOperand1,
                                                                                  const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_type (inOperand1),
mProperty_initialValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_omnibusType & in_type,
                                                                                                 const GALGAS_objectIR & in_initialValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_type = in_type ;
  result.mProperty_initialValue = in_initialValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_globalSyncInstanceMap_2D_element::objectCompare (const GALGAS_globalSyncInstanceMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_initialValue.objectCompare (inOperand.mProperty_initialValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_initialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_type.drop () ;
  mProperty_initialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalSyncInstanceMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ("globalSyncInstanceMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  const GALGAS_globalSyncInstanceMap_2D_element * p = (const GALGAS_globalSyncInstanceMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::GALGAS_driverDeclarationListAST_2D_element (void) :
mProperty_mDriver () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::~ GALGAS_driverDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::init_21_ (const GALGAS_driverDeclarationAST & in_mDriver,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriver = in_mDriver ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::GALGAS_driverDeclarationListAST_2D_element (const GALGAS_driverDeclarationAST & inOperand0) :
mProperty_mDriver (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::class_func_new (const GALGAS_driverDeclarationAST & in_mDriver,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriver = in_mDriver ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_driverDeclarationListAST_2D_element::objectCompare (const GALGAS_driverDeclarationListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDriver.objectCompare (inOperand.mProperty_mDriver) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mDriver.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::drop (void) {
  mProperty_mDriver.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriver.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ("driverDeclarationListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  const GALGAS_driverDeclarationListAST_2D_element * p = (const GALGAS_driverDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::GALGAS_driverInstanciationArgumentListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::~ GALGAS_driverInstanciationArgumentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mSelector,
                                                                                                                         const GALGAS_expressionAST & in_mExpression,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::GALGAS_driverInstanciationArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSelector,
                                                                                                                           const GALGAS_expressionAST & in_mExpression,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_driverInstanciationArgumentListAST_2D_element::objectCompare (const GALGAS_driverInstanciationArgumentListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ("driverInstanciationArgumentListAST-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  const GALGAS_driverInstanciationArgumentListAST_2D_element * p = (const GALGAS_driverInstanciationArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::GALGAS_driverInstanciationListAST_2D_element (void) :
mProperty_mDriverName (),
mProperty_mDriverInstanciationArgumentList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::~ GALGAS_driverInstanciationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::init_21__21_ (const GALGAS_lstring & in_mDriverName,
                                                                                                         const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverInstanciationArgumentList = in_mDriverInstanciationArgumentList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::GALGAS_driverInstanciationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_driverInstanciationArgumentListAST & inOperand1) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverInstanciationArgumentList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::class_func_new (const GALGAS_lstring & in_mDriverName,
                                                                                                           const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDriverName = in_mDriverName ;
  result.mProperty_mDriverInstanciationArgumentList = in_mDriverInstanciationArgumentList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_driverInstanciationListAST_2D_element::objectCompare (const GALGAS_driverInstanciationListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDriverInstanciationArgumentList.objectCompare (inOperand.mProperty_mDriverInstanciationArgumentList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationListAST_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverInstanciationArgumentList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverInstanciationArgumentList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ("driverInstanciationListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  const GALGAS_driverInstanciationListAST_2D_element * p = (const GALGAS_driverInstanciationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::GALGAS_driverInstanciationArgumentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::~ GALGAS_driverInstanciationArgumentMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_expressionAST & in_mExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::GALGAS_driverInstanciationArgumentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_expressionAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_expressionAST & in_mExpression,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_driverInstanciationArgumentMap_2D_element::objectCompare (const GALGAS_driverInstanciationArgumentMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @driverInstanciationArgumentMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ("driverInstanciationArgumentMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  const GALGAS_driverInstanciationArgumentMap_2D_element * p = (const GALGAS_driverInstanciationArgumentMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::GALGAS_instanciedDriverMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDriverInstanciationArgumentMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::~ GALGAS_instanciedDriverMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDriverInstanciationArgumentMap = in_mDriverInstanciationArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::GALGAS_instanciedDriverMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_driverInstanciationArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDriverInstanciationArgumentMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDriverInstanciationArgumentMap = in_mDriverInstanciationArgumentMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_instanciedDriverMap_2D_element::objectCompare (const GALGAS_instanciedDriverMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDriverInstanciationArgumentMap.objectCompare (inOperand.mProperty_mDriverInstanciationArgumentMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDriverInstanciationArgumentMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDriverInstanciationArgumentMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @instanciedDriverMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instanciedDriverMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ("instanciedDriverMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanciedDriverMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  const GALGAS_instanciedDriverMap_2D_element * p = (const GALGAS_instanciedDriverMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instanciedDriverMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

