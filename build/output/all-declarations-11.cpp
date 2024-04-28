#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

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

ComparisonResult GGS_forInstructionOnLiteralStringIR::objectCompare (const GGS_forInstructionOnLiteralStringIR & inOperand) const {
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

GGS_forInstructionOnLiteralStringIR::GGS_forInstructionOnLiteralStringIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                  const GGS_location & in_mLocation,
                                  const GGS_objectIR & in_mStringElementIteratedObject,
                                  const GGS_omnibusType & in_mLiteralStringType,
                                  const GGS_instructionListIR & in_mWhileInstructionList,
                                  const GGS_objectIR & in_mWhileExpressionResult,
                                  const GGS_instructionListIR & in_mDoInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_forInstructionOnLiteralStringIR * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionOnLiteralStringIR (inCompiler COMMA_THERE)) ;
  object->forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (in_mVarName, in_mLocation, in_mStringElementIteratedObject, in_mLiteralStringType, in_mWhileInstructionList, in_mWhileExpressionResult, in_mDoInstructionList, inCompiler) ;
  const GGS_forInstructionOnLiteralStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::
forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                                                  const GGS_location & in_mLocation,
                                                                  const GGS_objectIR & in_mStringElementIteratedObject,
                                                                  const GGS_omnibusType & in_mLiteralStringType,
                                                                  const GGS_instructionListIR & in_mWhileInstructionList,
                                                                  const GGS_objectIR & in_mWhileExpressionResult,
                                                                  const GGS_instructionListIR & in_mDoInstructionList,
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

GGS_forInstructionOnLiteralStringIR::GGS_forInstructionOnLiteralStringIR (const cPtr_forInstructionOnLiteralStringIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnLiteralStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR::class_func_new (const GGS_string & in_mVarName,
                                                                                         const GGS_location & in_mLocation,
                                                                                         const GGS_objectIR & in_mStringElementIteratedObject,
                                                                                         const GGS_omnibusType & in_mLiteralStringType,
                                                                                         const GGS_instructionListIR & in_mWhileInstructionList,
                                                                                         const GGS_objectIR & in_mWhileExpressionResult,
                                                                                         const GGS_instructionListIR & in_mDoInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_forInstructionOnLiteralStringIR result ;
  macroMyNew (result.mObjectPtr, cPtr_forInstructionOnLiteralStringIR (in_mVarName, in_mLocation, in_mStringElementIteratedObject, in_mLiteralStringType, in_mWhileInstructionList, in_mWhileExpressionResult, in_mDoInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionOnLiteralStringIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionOnLiteralStringIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forInstructionOnLiteralStringIR::readProperty_mStringElementIteratedObject (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mStringElementIteratedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mStringElementIteratedObject (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mStringElementIteratedObject = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_forInstructionOnLiteralStringIR::readProperty_mLiteralStringType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mLiteralStringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mLiteralStringType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mLiteralStringType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forInstructionOnLiteralStringIR::readProperty_mWhileInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forInstructionOnLiteralStringIR::readProperty_mWhileExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mWhileExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mWhileExpressionResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mWhileExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forInstructionOnLiteralStringIR::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionOnLiteralStringIR::setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionOnLiteralStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (const GGS_string & in_mVarName,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_objectIR & in_mStringElementIteratedObject,
                                                                            const GGS_omnibusType & in_mLiteralStringType,
                                                                            const GGS_instructionListIR & in_mWhileInstructionList,
                                                                            const GGS_objectIR & in_mWhileExpressionResult,
                                                                            const GGS_instructionListIR & in_mDoInstructionList
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

const C_galgas_type_descriptor * GGS_forInstructionOnLiteralStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionOnLiteralStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionOnLiteralStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionOnLiteralStringIR result ;
  const GGS_forInstructionOnLiteralStringIR * p = (const GGS_forInstructionOnLiteralStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionOnLiteralStringIR *> (p)) {
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

ComparisonResult GGS_forLowerUpperBoundInstructionAST::objectCompare (const GGS_forLowerUpperBoundInstructionAST & inOperand) const {
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

GGS_forLowerUpperBoundInstructionAST::GGS_forLowerUpperBoundInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_lstring & in_mVarName,
                                          const GGS_lstring & in_mTypeName,
                                          const GGS_expressionAST & in_mLowerBoundExpression,
                                          const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                          const GGS_expressionAST & in_mUpperBoundExpression,
                                          const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                          const GGS_instructionListAST & in_mDoInstructionList,
                                          const GGS_location & in_mEndOf_5F_do_5F_instruction,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_forLowerUpperBoundInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forLowerUpperBoundInstructionAST (inCompiler COMMA_THERE)) ;
  object->forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, in_mLowerBoundExpression, in_mEndOf_5F_lowerBoundExpression_5F_instruction, in_mUpperBoundExpression, in_mEndOf_5F_upperBoundExpression_5F_instruction, in_mDoInstructionList, in_mEndOf_5F_do_5F_instruction, inCompiler) ;
  const GGS_forLowerUpperBoundInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::
forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_lstring & in_mVarName,
                                                                           const GGS_lstring & in_mTypeName,
                                                                           const GGS_expressionAST & in_mLowerBoundExpression,
                                                                           const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                           const GGS_expressionAST & in_mUpperBoundExpression,
                                                                           const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                           const GGS_instructionListAST & in_mDoInstructionList,
                                                                           const GGS_location & in_mEndOf_5F_do_5F_instruction,
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

GGS_forLowerUpperBoundInstructionAST::GGS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mVarName,
                                                                                           const GGS_lstring & in_mTypeName,
                                                                                           const GGS_expressionAST & in_mLowerBoundExpression,
                                                                                           const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                           const GGS_expressionAST & in_mUpperBoundExpression,
                                                                                           const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                           const GGS_instructionListAST & in_mDoInstructionList,
                                                                                           const GGS_location & in_mEndOf_5F_do_5F_instruction
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (in_mInstructionLocation, in_mVarName, in_mTypeName, in_mLowerBoundExpression, in_mEndOf_5F_lowerBoundExpression_5F_instruction, in_mUpperBoundExpression, in_mEndOf_5F_upperBoundExpression_5F_instruction, in_mDoInstructionList, in_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forLowerUpperBoundInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forLowerUpperBoundInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_forLowerUpperBoundInstructionAST::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mLowerBoundExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_forLowerUpperBoundInstructionAST::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mUpperBoundExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_upperBoundExpression_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_forLowerUpperBoundInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mDoInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_do_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_do_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mVarName,
                                                                              const GGS_lstring & in_mTypeName,
                                                                              const GGS_expressionAST & in_mLowerBoundExpression,
                                                                              const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GGS_expressionAST & in_mUpperBoundExpression,
                                                                              const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GGS_instructionListAST & in_mDoInstructionList,
                                                                              const GGS_location & in_mEndOf_5F_do_5F_instruction
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

const C_galgas_type_descriptor * GGS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionAST result ;
  const GGS_forLowerUpperBoundInstructionAST * p = (const GGS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forLowerUpperBoundInstructionAST *> (p)) {
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

ComparisonResult GGS_forLowerUpperBoundInstructionIR::objectCompare (const GGS_forLowerUpperBoundInstructionIR & inOperand) const {
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

GGS_forLowerUpperBoundInstructionIR::GGS_forLowerUpperBoundInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                  const GGS_omnibusType & in_mType,
                                  const GGS_bool & in_mUnsigned,
                                  const GGS_location & in_mLocation,
                                  const GGS_objectIR & in_mLowerExpressionResult,
                                  const GGS_objectIR & in_mUpperExpressionResult,
                                  const GGS_instructionListIR & in_mInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_forLowerUpperBoundInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_forLowerUpperBoundInstructionIR (inCompiler COMMA_THERE)) ;
  object->forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (in_mVarName, in_mType, in_mUnsigned, in_mLocation, in_mLowerExpressionResult, in_mUpperExpressionResult, in_mInstructionList, inCompiler) ;
  const GGS_forLowerUpperBoundInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::
forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_bool & in_mUnsigned,
                                                                  const GGS_location & in_mLocation,
                                                                  const GGS_objectIR & in_mLowerExpressionResult,
                                                                  const GGS_objectIR & in_mUpperExpressionResult,
                                                                  const GGS_instructionListIR & in_mInstructionList,
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

GGS_forLowerUpperBoundInstructionIR::GGS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR::class_func_new (const GGS_string & in_mVarName,
                                                                                         const GGS_omnibusType & in_mType,
                                                                                         const GGS_bool & in_mUnsigned,
                                                                                         const GGS_location & in_mLocation,
                                                                                         const GGS_objectIR & in_mLowerExpressionResult,
                                                                                         const GGS_objectIR & in_mUpperExpressionResult,
                                                                                         const GGS_instructionListIR & in_mInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionIR (in_mVarName, in_mType, in_mUnsigned, in_mLocation, in_mLowerExpressionResult, in_mUpperExpressionResult, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forLowerUpperBoundInstructionIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_forLowerUpperBoundInstructionIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forLowerUpperBoundInstructionIR::readProperty_mUnsigned (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mUnsigned ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mUnsigned (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mUnsigned = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forLowerUpperBoundInstructionIR::readProperty_mLowerExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mLowerExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mLowerExpressionResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mLowerExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forLowerUpperBoundInstructionIR::readProperty_mUpperExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mUpperExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mUpperExpressionResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mUpperExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forLowerUpperBoundInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GGS_string & in_mVarName,
                                                                            const GGS_omnibusType & in_mType,
                                                                            const GGS_bool & in_mUnsigned,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_objectIR & in_mLowerExpressionResult,
                                                                            const GGS_objectIR & in_mUpperExpressionResult,
                                                                            const GGS_instructionListIR & in_mInstructionList
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

const C_galgas_type_descriptor * GGS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionIR result ;
  const GGS_forLowerUpperBoundInstructionIR * p = (const GGS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forLowerUpperBoundInstructionIR *> (p)) {
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

ComparisonResult GGS_standAloneProcedureCallInstructionAST::objectCompare (const GGS_standAloneProcedureCallInstructionAST & inOperand) const {
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

GGS_standAloneProcedureCallInstructionAST::GGS_standAloneProcedureCallInstructionAST (void) :
GGS_callInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST GGS_standAloneProcedureCallInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_effectiveArgumentListAST & in_mArguments,
                      const GGS_location & in_mEndOfArguments,
                      const GGS_lstring & in_mSandAloneRoutineName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_standAloneProcedureCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_standAloneProcedureCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->standAloneProcedureCallInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mSandAloneRoutineName, inCompiler) ;
  const GGS_standAloneProcedureCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::
standAloneProcedureCallInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                            const GGS_effectiveArgumentListAST & in_mArguments,
                                                            const GGS_location & in_mEndOfArguments,
                                                            const GGS_lstring & in_mSandAloneRoutineName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
  mProperty_mSandAloneRoutineName = in_mSandAloneRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST::GGS_standAloneProcedureCallInstructionAST (const cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) :
GGS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standAloneProcedureCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST GGS_standAloneProcedureCallInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                     const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                                     const GGS_location & in_mEndOfArguments,
                                                                                                     const GGS_lstring & in_mSandAloneRoutineName
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_standAloneProcedureCallInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_standAloneProcedureCallInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mSandAloneRoutineName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_standAloneProcedureCallInstructionAST::readProperty_mSandAloneRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_standAloneProcedureCallInstructionAST * p = (cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    return p->mProperty_mSandAloneRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standAloneProcedureCallInstructionAST::setProperty_mSandAloneRoutineName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standAloneProcedureCallInstructionAST * p = (cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    p->mProperty_mSandAloneRoutineName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standAloneProcedureCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_standAloneProcedureCallInstructionAST::cPtr_standAloneProcedureCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                        const GGS_location & in_mEndOfArguments,
                                                                                        const GGS_lstring & in_mSandAloneRoutineName
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

const C_galgas_type_descriptor * GGS_standAloneProcedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standAloneProcedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standAloneProcedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standAloneProcedureCallInstructionAST GGS_standAloneProcedureCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_standAloneProcedureCallInstructionAST result ;
  const GGS_standAloneProcedureCallInstructionAST * p = (const GGS_standAloneProcedureCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standAloneProcedureCallInstructionAST *> (p)) {
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

ComparisonResult GGS_procedureCallInstructionAST::objectCompare (const GGS_procedureCallInstructionAST & inOperand) const {
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

GGS_procedureCallInstructionAST::GGS_procedureCallInstructionAST (void) :
GGS_callInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procedureCallInstructionAST GGS_procedureCallInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_effectiveArgumentListAST & in_mArguments,
                          const GGS_location & in_mEndOfArguments,
                          const GGS_lstring & in_mIdentifier,
                          const GGS_accessInAssignmentListAST & in_mAccessList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_procedureCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_procedureCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->procedureCallInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mIdentifier, in_mAccessList, inCompiler) ;
  const GGS_procedureCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::
procedureCallInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_effectiveArgumentListAST & in_mArguments,
                                                      const GGS_location & in_mEndOfArguments,
                                                      const GGS_lstring & in_mIdentifier,
                                                      const GGS_accessInAssignmentListAST & in_mAccessList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
  mProperty_mIdentifier = in_mIdentifier ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST::GGS_procedureCallInstructionAST (const cPtr_procedureCallInstructionAST * inSourcePtr) :
GGS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procedureCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST GGS_procedureCallInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                 const GGS_location & in_mEndOfArguments,
                                                                                 const GGS_lstring & in_mIdentifier,
                                                                                 const GGS_accessInAssignmentListAST & in_mAccessList
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_procedureCallInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_procedureCallInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments, in_mIdentifier, in_mAccessList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_procedureCallInstructionAST::readProperty_mIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    return p->mProperty_mIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procedureCallInstructionAST::setProperty_mIdentifier (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    p->mProperty_mIdentifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_procedureCallInstructionAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_accessInAssignmentListAST () ;
  }else{
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procedureCallInstructionAST::setProperty_mAccessList (const GGS_accessInAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procedureCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_procedureCallInstructionAST::cPtr_procedureCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_effectiveArgumentListAST & in_mArguments,
                                                                    const GGS_location & in_mEndOfArguments,
                                                                    const GGS_lstring & in_mIdentifier,
                                                                    const GGS_accessInAssignmentListAST & in_mAccessList
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

const C_galgas_type_descriptor * GGS_procedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procedureCallInstructionAST GGS_procedureCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_procedureCallInstructionAST result ;
  const GGS_procedureCallInstructionAST * p = (const GGS_procedureCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procedureCallInstructionAST *> (p)) {
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

GGS_string extensionGetter_passingModeForActualSelector (const GGS_effectiveArgumentPassingModeAST & inObject,
                                                         const GGS_lstring & constinArgument_inSelector,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
    {
      GGS_lstring extractedValue_5756__0 ;
      temp_0.getAssociatedValuesFor_input (extractedValue_5756__0) ;
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
    {
      GGS_bool extractedValue_5796__0 ;
      GGS_lstring extractedValue_5798__1 ;
      GGS_lstring extractedValue_5800__2 ;
      temp_0.getAssociatedValuesFor_inputWithType (extractedValue_5796__0, extractedValue_5798__1, extractedValue_5800__2) ;
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
    {
      GGS_expressionAST extractedValue_5833__0 ;
      GGS_location extractedValue_5835__1 ;
      temp_0.getAssociatedValuesFor_output (extractedValue_5833__0, extractedValue_5835__1) ;
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
    {
      GGS_lstring extractedValue_5873__0 ;
      temp_0.getAssociatedValuesFor_outputInput (extractedValue_5873__0) ;
      result_result = GGS_string ("!\?") ;
    }
    break ;
  case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
    {
      GGS_lstring extractedValue_5924__0 ;
      temp_0.getAssociatedValuesFor_outputInputSelfVariable (extractedValue_5924__0) ;
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(constinArgument_inSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 141)) ;
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

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GGS_LValueAST inObject,
                                                            GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_LValueAST temp_0 = inObject ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mOperand (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 99)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const GGS_LValueAST inObject,
                                    const GGS_omnibusType constinArgument_inSelfType,
                                    const GGS_bool constinArgument_inIsAddressOf,
                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                    const GGS_semanticContext constinArgument_inContext,
                                    const GGS_mode constinArgument_inMode,
                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                    GGS_allocaList & ioArgument_ioAllocaList,
                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_LValueAST temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("lvalue.galgas", 140)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GGS_LValueAST temp_3 = inObject ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 141)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GGS_bool test_6 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("lvalue.galgas", 142)) COMMA_SOURCE_FILE ("lvalue.galgas", 142)).operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = constinArgument_inIsAddressOf.operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            const GGS_LValueAST temp_7 = inObject ;
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GGS_string ("cannot mutate properties, current method is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 143)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          {
          const GGS_LValueAST temp_9 = inObject ;
          routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_9.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 147)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_valuedObject var_entity_6583 ;
    const GGS_LValueAST temp_10 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_10.readProperty_mIdentifier (), var_entity_6583, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 162)) ;
    switch (var_entity_6583.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_6624__0 ;
        var_entity_6583.getAssociatedValuesFor_task (extractedValue_6624__0) ;
        const GGS_LValueAST temp_11 = inObject ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a task has no value"), fixItArray12  COMMA_SOURCE_FILE ("lvalue.galgas", 165)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_6727__0 ;
        GGS_bool extractedValue_6729__1 ;
        var_entity_6583.getAssociatedValuesFor_driver (extractedValue_6727__0, extractedValue_6729__1) ;
        const GGS_LValueAST temp_13 = inObject ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a driver has no value"), fixItArray14  COMMA_SOURCE_FILE ("lvalue.galgas", 167)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_6842__0 ;
        var_entity_6583.getAssociatedValuesFor_globalConstant (extractedValue_6842__0) ;
        const GGS_LValueAST temp_15 = inObject ;
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be written"), fixItArray16  COMMA_SOURCE_FILE ("lvalue.galgas", 169)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_6969__0 ;
        GGS_lstring extractedValue_6969__1 ;
        GGS_bool extractedValue_6969__2 ;
        var_entity_6583.getAssociatedValuesFor_localConstant (extractedValue_6969__0, extractedValue_6969__1, extractedValue_6969__2) ;
        const GGS_LValueAST temp_17 = inObject ;
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a local constant cannot be written"), fixItArray18  COMMA_SOURCE_FILE ("lvalue.galgas", 171)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_7100__0 ;
        GGS_lstring extractedValue_7100__1 ;
        var_entity_6583.getAssociatedValuesFor_globalSyncInstance (extractedValue_7100__0, extractedValue_7100__1) ;
        const GGS_LValueAST temp_19 = inObject ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global sync instance is not allowed here"), fixItArray20  COMMA_SOURCE_FILE ("lvalue.galgas", 173)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_7246_variableType_0 ;
        GGS_lstring extractedValue_7268_omnibusName_1 ;
        var_entity_6583.getAssociatedValuesFor_localVariable (extractedValue_7246_variableType_0, extractedValue_7268_omnibusName_1) ;
        {
        const GGS_LValueAST temp_21 = inObject ;
        const GGS_LValueAST temp_22 = inObject ;
        routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (constinArgument_inSelfType, constinArgument_inIsAddressOf, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_21.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_7268_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 187)), extractedValue_7246_variableType_0, temp_22.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 175)) ;
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

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GGS_controlRegisterLValueAST inObject,
                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterLValueAST temp_0 = inObject ;
  switch (temp_0.readProperty_mGroupIndex ().enumValue ()) {
  case GGS_registerGroupIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_3383_indexExpression_0 ;
      GGS_location extractedValue_3399__1 ;
      GGS_bool extractedValue_3401__2 ;
      temp_0.readProperty_mGroupIndex ().getAssociatedValuesFor_index (extractedValue_3383_indexExpression_0, extractedValue_3399__1, extractedValue_3401__2) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3383_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 93)) ;
    }
    break ;
  }
  const GGS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mRegisterIndex ().enumValue ()) {
  case GGS_registerIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_3541_indexExpression_0 ;
      GGS_location extractedValue_3557__1 ;
      GGS_bool extractedValue_3559__2 ;
      temp_1.readProperty_mRegisterIndex ().getAssociatedValuesFor_index (extractedValue_3541_indexExpression_0, extractedValue_3557__1, extractedValue_3559__2) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3541_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 98)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const GGS_controlRegisterLValueAST inObject,
                                                           const GGS_lstring constinArgument_inConstantName,
                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_controlRegisterLValueAST temp_0 = inObject ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 110)) ;
  }
  const GGS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mGroupIndex ().enumValue ()) {
  case GGS_registerGroupIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerGroupIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_4285_indexExpression_0 ;
      GGS_location extractedValue_4301__1 ;
      GGS_bool extractedValue_4303__2 ;
      temp_1.readProperty_mGroupIndex ().getAssociatedValuesFor_index (extractedValue_4285_indexExpression_0, extractedValue_4301__1, extractedValue_4303__2) ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4285_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 114)) ;
    }
    break ;
  }
  const GGS_controlRegisterLValueAST temp_2 = inObject ;
  switch (temp_2.readProperty_mRegisterIndex ().enumValue ()) {
  case GGS_registerIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_noIndex:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_4474_indexExpression_0 ;
      GGS_location extractedValue_4490__1 ;
      GGS_bool extractedValue_4492__2 ;
      temp_2.readProperty_mRegisterIndex ().getAssociatedValuesFor_index (extractedValue_4474_indexExpression_0, extractedValue_4490__1, extractedValue_4492__2) ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4474_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 119)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const GGS_controlRegisterLValueAST inObject,
                                                            const GGS_bool constinArgument_inWriteAccess,
                                                            const GGS_omnibusType constinArgument_inSelfType,
                                                            const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GGS_semanticContext constinArgument_inContext,
                                                            const GGS_mode constinArgument_inMode,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GGS_omnibusType & outArgument_outRegisterType,
                                                            GGS_uint & outArgument_outRegisterTypeBitCount,
                                                            GGS_sliceMap & outArgument_outSliceMap,
                                                            GGS_string & outArgument_outllvmRegisterAddressName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterTypeBitCount.drop () ; // Release 'out' argument
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  outArgument_outllvmRegisterAddressName.drop () ; // Release 'out' argument
  GGS_registerGroupKind var_groupKind_5796 ;
  GGS_controlRegisterMap var_controlRegisterMap_5811 ;
  const GGS_controlRegisterLValueAST temp_0 = inObject ;
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), var_groupKind_5796, var_controlRegisterMap_5811, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 144)) ;
  GGS_bool var_readOnly_5966 ;
  GGS_bool var_userAccess_5990 ;
  GGS_bigint var_addressOffset_6042 ;
  GGS_uint var_registerArraySize_6107 ;
  GGS_uint var_registerElementSize_6160 ;
  const GGS_controlRegisterLValueAST temp_1 = inObject ;
  GGS_controlRegisterFieldMap joker_6022 ; // Joker input parameter
  GGS_controlRegisterFieldList joker_6060 ; // Joker input parameter
  var_controlRegisterMap_5811.method_searchKey (temp_1.readProperty_mRegisterName (), outArgument_outRegisterType, var_readOnly_5966, var_userAccess_5990, outArgument_outSliceMap, joker_6022, var_addressOffset_6042, joker_6060, outArgument_outRegisterTypeBitCount, var_registerArraySize_6107, var_registerElementSize_6160, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 146)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inWriteAccess.operator_and (var_readOnly_5966 COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 160)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_controlRegisterLValueAST temp_3 = inObject ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRegisterName ().readProperty_location (), GGS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 161)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GGS_bool test_6 = var_userAccess_5990.operator_not (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        GGS_bool test_7 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        if (kBoolTrue != test_7.boolEnum ()) {
          test_7 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        }
        test_6 = test_7 ;
      }
      test_5 = test_6.boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_controlRegisterLValueAST temp_8 = inObject ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRegisterName ().readProperty_location (), GGS_string ("this control register is not accessible in user mode"), fixItArray9  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 164)) ;
      }
    }
  }
  GGS_string var_registerAddress_6601 ;
  switch (var_groupKind_5796.enumValue ()) {
  case GGS_registerGroupKind::Enumeration::invalid:
    break ;
  case GGS_registerGroupKind::Enumeration::enum_single:
    {
      GGS_bigint extractedValue_6659_baseAddress_0 ;
      var_groupKind_5796.getAssociatedValuesFor_single (extractedValue_6659_baseAddress_0) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GGS_controlRegisterLValueAST temp_11 = inObject ;
        test_10 = temp_11.readProperty_mGroupIndex ().getter_isIndex (SOURCE_FILE ("lvalue-control-register.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_controlRegisterLValueAST temp_12 = inObject ;
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("subscripting not allowed, group is not an array"), fixItArray13  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 171)) ;
          var_registerAddress_6601.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GGS_controlRegisterLValueAST temp_14 = inObject ;
        const GGS_controlRegisterLValueAST temp_15 = inObject ;
        GGS_string var_regName_6838 = temp_14.readProperty_mRegisterGroupName ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)).add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)) ;
        {
        extensionSetter_appendEnterRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6601, extractedValue_6659_baseAddress_0, var_addressOffset_6042, var_regName_6838, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 174)) ;
        }
      }
    }
    break ;
  case GGS_registerGroupKind::Enumeration::enum_arrayGroup:
    {
      GGS_lbigintlist extractedValue_7133_baseAddresses_0 ;
      var_groupKind_5796.getAssociatedValuesFor_arrayGroup (extractedValue_7133_baseAddresses_0) ;
      const GGS_controlRegisterLValueAST temp_16 = inObject ;
      switch (temp_16.readProperty_mGroupIndex ().enumValue ()) {
      case GGS_registerGroupIndexAST::Enumeration::invalid:
        break ;
      case GGS_registerGroupIndexAST::Enumeration::enum_noIndex:
        {
          const GGS_controlRegisterLValueAST temp_17 = inObject ;
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("subscripting required, group is an array"), fixItArray18  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 185)) ;
          var_registerAddress_6601.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_registerGroupIndexAST::Enumeration::enum_index:
        {
          GGS_expressionAST extractedValue_7312_indexExpression_0 ;
          GGS_location extractedValue_7328_endOfIndex_1 ;
          GGS_bool extractedValue_7339_checkIndexExpression_2 ;
          temp_16.readProperty_mGroupIndex ().getAssociatedValuesFor_index (extractedValue_7312_indexExpression_0, extractedValue_7328_endOfIndex_1, extractedValue_7339_checkIndexExpression_2) ;
          GGS_objectIR var_groupIndexIR_7881 ;
          {
          routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_7312_indexExpression_0, extractedValue_7328_endOfIndex_1, extractedValue_7339_checkIndexExpression_2, extractedValue_7133_baseAddresses_0.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 199)).getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 199)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_groupIndexIR_7881, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 187)) ;
          }
          {
          const GGS_controlRegisterLValueAST temp_19 = inObject ;
          extensionSetter_appendEnterRegisterGroupSubscriptedAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6601, temp_19.readProperty_mRegisterGroupName ().readProperty_string (), extractedValue_7133_baseAddresses_0.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 208)), var_groupIndexIR_7881, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 204)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
  const GGS_controlRegisterLValueAST temp_20 = inObject ;
  switch (temp_20.readProperty_mRegisterIndex ().enumValue ()) {
  case GGS_registerIndexAST::Enumeration::invalid:
    break ;
  case GGS_registerIndexAST::Enumeration::enum_noIndex:
    {
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::equal, var_registerArraySize_6107.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_21) {
          outArgument_outllvmRegisterAddressName = var_registerAddress_6601 ;
        }
      }
      if (kBoolFalse == test_21) {
        const GGS_controlRegisterLValueAST temp_22 = inObject ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegisterName ().readProperty_location (), GGS_string ("the control register is an array"), fixItArray23  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 219)) ;
        outArgument_outllvmRegisterAddressName.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GGS_registerIndexAST::Enumeration::enum_index:
    {
      GGS_expressionAST extractedValue_8460_indexExpression_0 ;
      GGS_location extractedValue_8476_endOfIndex_1 ;
      GGS_bool extractedValue_8487_checkIndexExpression_2 ;
      temp_20.readProperty_mRegisterIndex ().getAssociatedValuesFor_index (extractedValue_8460_indexExpression_0, extractedValue_8476_endOfIndex_1, extractedValue_8487_checkIndexExpression_2) ;
      GGS_objectIR var_indexIR_8993 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_8460_indexExpression_0, extractedValue_8476_endOfIndex_1, extractedValue_8487_checkIndexExpression_2, var_registerArraySize_6107.getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 234)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_8993, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 222)) ;
      }
      {
      extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, outArgument_outllvmRegisterAddressName, var_indexIR_8993, var_registerAddress_6601, var_registerElementSize_6160, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 239)) ;
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

void cPtr_abstractRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                              GGS_sectionIRlist & /* ioArgument_ioSectionList */,
                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (cPtr_abstractRoutineIR * inObject,
                                                   GGS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   GGS_sectionIRlist & io_ioSectionList,
                                                   GGS_generationAdds & io_ioGenerationAdds,
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
                                             GGS_string & io_ioLLVMcode,
                                             const GGS_generationContext constin_inGenerationContext,
                                             GGS_generationAdds & io_ioGenerationAdds,
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

void cPtr_abstractRoutineIR::method_enterAccessibleEntities (GGS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                             GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractRoutineIR * inObject,
                                                  GGS_stringset & io_ioInvokedRoutineSet,
                                                  GGS_uint & io_ioMaxBranchOfOnInstructions,
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

ComparisonResult GGS_binaryOperationIR::objectCompare (const GGS_binaryOperationIR & inOperand) const {
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

GGS_binaryOperationIR::GGS_binaryOperationIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binaryOperationIR GGS_binaryOperationIR::
init_21__21__21__21__21__21_ (const GGS_objectIR & in_mTarget,
                              const GGS_omnibusType & in_mOperandType,
                              const GGS_objectIR & in_mLeft,
                              const GGS_llvmBinaryOperation & in_mOperation,
                              const GGS_objectIR & in_mRight,
                              const GGS_location & in_mLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_binaryOperationIR * object = nullptr ;
  macroMyNew (object, cPtr_binaryOperationIR (inCompiler COMMA_THERE)) ;
  object->binaryOperationIR_init_21__21__21__21__21__21_ (in_mTarget, in_mOperandType, in_mLeft, in_mOperation, in_mRight, in_mLocation, inCompiler) ;
  const GGS_binaryOperationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::
binaryOperationIR_init_21__21__21__21__21__21_ (const GGS_objectIR & in_mTarget,
                                                const GGS_omnibusType & in_mOperandType,
                                                const GGS_objectIR & in_mLeft,
                                                const GGS_llvmBinaryOperation & in_mOperation,
                                                const GGS_objectIR & in_mRight,
                                                const GGS_location & in_mLocation,
                                                Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperandType = in_mOperandType ;
  mProperty_mLeft = in_mLeft ;
  mProperty_mOperation = in_mOperation ;
  mProperty_mRight = in_mRight ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR::GGS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR GGS_binaryOperationIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                             const GGS_omnibusType & in_mOperandType,
                                                             const GGS_objectIR & in_mLeft,
                                                             const GGS_llvmBinaryOperation & in_mOperation,
                                                             const GGS_objectIR & in_mRight,
                                                             const GGS_location & in_mLocation
                                                             COMMA_LOCATION_ARGS) {
  GGS_binaryOperationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (in_mTarget, in_mOperandType, in_mLeft, in_mOperation, in_mRight, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_binaryOperationIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_binaryOperationIR::readProperty_mOperandType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperandType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mOperandType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperandType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_binaryOperationIR::readProperty_mLeft (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLeft ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mLeft (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLeft = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_binaryOperationIR::readProperty_mOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmBinaryOperation () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mOperation (const GGS_llvmBinaryOperation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_binaryOperationIR::readProperty_mRight (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mRight ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mRight (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mRight = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_binaryOperationIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperationIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperationIR class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GGS_objectIR & in_mTarget,
                                                const GGS_omnibusType & in_mOperandType,
                                                const GGS_objectIR & in_mLeft,
                                                const GGS_llvmBinaryOperation & in_mOperation,
                                                const GGS_objectIR & in_mRight,
                                                const GGS_location & in_mLocation
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

const C_galgas_type_descriptor * GGS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperationIR GGS_binaryOperationIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_binaryOperationIR result ;
  const GGS_binaryOperationIR * p = (const GGS_binaryOperationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperationIR *> (p)) {
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

void cPtr_binaryOperationIR::method_enterCodeForOverflowOperation (const GGS_string constinArgument_inOperation,
                                                                   const GGS_bigint constinArgument_inPanicCode,
                                                                   GGS_string & ioArgument_ioLLVMcode,
                                                                   const GGS_generationContext constinArgument_inGenerationContext,
                                                                   GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperationIR temp_0 = this ;
  GGS_string var_llvmType_2049 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  const GGS_binaryOperationIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GGS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GGS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GGS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  const GGS_binaryOperationIR temp_2 = this ;
  const GGS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  const GGS_binaryOperationIR temp_4 = this ;
  const GGS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_4.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GGS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GGS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (temp_5.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GGS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  GGS_string var_labelName_2490 = GGS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  const GGS_binaryOperationIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GGS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2490, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GGS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2490, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GGS_string (".noovf\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2490.add_operation (GGS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  const GGS_binaryOperationIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_7.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  const GGS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (temp_8.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2490.add_operation (GGS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  const GGS_binaryOperationIR temp_9 = this ;
  const GGS_binaryOperationIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_9.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GGS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GGS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GGS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GGS_string ("{").add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GGS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GGS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GGS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2049, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GGS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (cPtr_binaryOperationIR * inObject,
                                                        const GGS_string constin_inOperation,
                                                        const GGS_bigint constin_inPanicCode,
                                                        GGS_string & io_ioLLVMcode,
                                                        const GGS_generationContext constin_inGenerationContext,
                                                        GGS_generationAdds & io_ioGenerationAdds,
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

void cPtr_binaryOperationIR::method_enterCodeForDivisionWithZeroDivisorPanic (const GGS_string constinArgument_inOperation,
                                                                              const GGS_bigint constinArgument_inPanicCode,
                                                                              GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext constinArgument_inGenerationContext,
                                                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperationIR temp_0 = this ;
  GGS_string var_llvmType_3801 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
  const GGS_binaryOperationIR temp_1 = this ;
  const GGS_binaryOperationIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GGS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (var_llvmType_3801, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  GGS_string var_labelName_3972 = GGS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  const GGS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GGS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_3972, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GGS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_3972, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GGS_string (".ok\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_3972.add_operation (GGS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  const GGS_binaryOperationIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  const GGS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (temp_5.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_3972.add_operation (GGS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  const GGS_binaryOperationIR temp_6 = this ;
  const GGS_binaryOperationIR temp_7 = this ;
  const GGS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType_3801, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_8.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (cPtr_binaryOperationIR * inObject,
                                                                   const GGS_string constin_inOperation,
                                                                   const GGS_bigint constin_inPanicCode,
                                                                   GGS_string & io_ioLLVMcode,
                                                                   const GGS_generationContext constin_inGenerationContext,
                                                                   GGS_generationAdds & io_ioGenerationAdds,
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

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR::class_func_new (const GGS_string & in_mLLVMTargetVarName,
                                                                                 const GGS_omnibusType & in_mTargetVarType,
                                                                                 const GGS_objectIR & in_mSourceValue
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeToUniversalReferenceIR (in_mLLVMTargetVarName, in_mTargetVarType, in_mSourceValue COMMA_THERE)) ;
  return result ;
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

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GGS_string & in_mLLVMTargetVarName,
                                                                    const GGS_omnibusType & in_mTargetVarType,
                                                                    const GGS_objectIR & in_mSourceValue
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

const C_galgas_type_descriptor * GGS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_storeFromTemporaryReferenceIR::objectCompare (const GGS_storeFromTemporaryReferenceIR & inOperand) const {
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

GGS_storeFromTemporaryReferenceIR::GGS_storeFromTemporaryReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR::
init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                  const GGS_string & in_mLLVMTargetVarName,
                  const GGS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeFromTemporaryReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_storeFromTemporaryReferenceIR (inCompiler COMMA_THERE)) ;
  object->storeFromTemporaryReferenceIR_init_21__21__21_ (in_mTargetVarType, in_mLLVMTargetVarName, in_mSourceValue, inCompiler) ;
  const GGS_storeFromTemporaryReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeFromTemporaryReferenceIR::
storeFromTemporaryReferenceIR_init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                                                const GGS_string & in_mLLVMTargetVarName,
                                                const GGS_objectIR & in_mSourceValue,
                                                Compiler * /* inCompiler */) {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMTargetVarName = in_mLLVMTargetVarName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR::GGS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeFromTemporaryReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR::class_func_new (const GGS_omnibusType & in_mTargetVarType,
                                                                                     const GGS_string & in_mLLVMTargetVarName,
                                                                                     const GGS_objectIR & in_mSourceValue
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_storeFromTemporaryReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeFromTemporaryReferenceIR (in_mTargetVarType, in_mLLVMTargetVarName, in_mSourceValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_storeFromTemporaryReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeFromTemporaryReferenceIR::setProperty_mTargetVarType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeFromTemporaryReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeFromTemporaryReferenceIR::setProperty_mLLVMTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeFromTemporaryReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeFromTemporaryReferenceIR::setProperty_mSourceValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeFromTemporaryReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (const GGS_omnibusType & in_mTargetVarType,
                                                                        const GGS_string & in_mLLVMTargetVarName,
                                                                        const GGS_objectIR & in_mSourceValue
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

const C_galgas_type_descriptor * GGS_storeFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_storeFromTemporaryReferenceIR result ;
  const GGS_storeFromTemporaryReferenceIR * p = (const GGS_storeFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeFromTemporaryReferenceIR *> (p)) {
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

ComparisonResult GGS_standaloneRoutineCallIR::objectCompare (const GGS_standaloneRoutineCallIR & inOperand) const {
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

GGS_standaloneRoutineCallIR::GGS_standaloneRoutineCallIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_standaloneRoutineCallIR GGS_standaloneRoutineCallIR::
init_21__21__21__21_ (const GGS_objectIR & in_mResult,
                      const GGS_lstring & in_mFunctionMangledName,
                      const GGS_string & in_mFunctionNameForGeneration,
                      const GGS_procCallEffectiveParameterListIR & in_mArgumentList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_standaloneRoutineCallIR * object = nullptr ;
  macroMyNew (object, cPtr_standaloneRoutineCallIR (inCompiler COMMA_THERE)) ;
  object->standaloneRoutineCallIR_init_21__21__21__21_ (in_mResult, in_mFunctionMangledName, in_mFunctionNameForGeneration, in_mArgumentList, inCompiler) ;
  const GGS_standaloneRoutineCallIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standaloneRoutineCallIR::
standaloneRoutineCallIR_init_21__21__21__21_ (const GGS_objectIR & in_mResult,
                                              const GGS_lstring & in_mFunctionMangledName,
                                              const GGS_string & in_mFunctionNameForGeneration,
                                              const GGS_procCallEffectiveParameterListIR & in_mArgumentList,
                                              Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mFunctionMangledName = in_mFunctionMangledName ;
  mProperty_mFunctionNameForGeneration = in_mFunctionNameForGeneration ;
  mProperty_mArgumentList = in_mArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR::GGS_standaloneRoutineCallIR (const cPtr_standaloneRoutineCallIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneRoutineCallIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR GGS_standaloneRoutineCallIR::class_func_new (const GGS_objectIR & in_mResult,
                                                                         const GGS_lstring & in_mFunctionMangledName,
                                                                         const GGS_string & in_mFunctionNameForGeneration,
                                                                         const GGS_procCallEffectiveParameterListIR & in_mArgumentList
                                                                         COMMA_LOCATION_ARGS) {
  GGS_standaloneRoutineCallIR result ;
  macroMyNew (result.mObjectPtr, cPtr_standaloneRoutineCallIR (in_mResult, in_mFunctionMangledName, in_mFunctionNameForGeneration, in_mArgumentList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_standaloneRoutineCallIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneRoutineCallIR::setProperty_mResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_standaloneRoutineCallIR::readProperty_mFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneRoutineCallIR::setProperty_mFunctionMangledName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_standaloneRoutineCallIR::readProperty_mFunctionNameForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mFunctionNameForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneRoutineCallIR::setProperty_mFunctionNameForGeneration (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mFunctionNameForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_standaloneRoutineCallIR::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_procCallEffectiveParameterListIR () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneRoutineCallIR::setProperty_mArgumentList (const GGS_procCallEffectiveParameterListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standaloneRoutineCallIR class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneRoutineCallIR::cPtr_standaloneRoutineCallIR (const GGS_objectIR & in_mResult,
                                                            const GGS_lstring & in_mFunctionMangledName,
                                                            const GGS_string & in_mFunctionNameForGeneration,
                                                            const GGS_procCallEffectiveParameterListIR & in_mArgumentList
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

const C_galgas_type_descriptor * GGS_standaloneRoutineCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standaloneRoutineCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standaloneRoutineCallIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneRoutineCallIR GGS_standaloneRoutineCallIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_standaloneRoutineCallIR result ;
  const GGS_standaloneRoutineCallIR * p = (const GGS_standaloneRoutineCallIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standaloneRoutineCallIR *> (p)) {
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

ComparisonResult GGS_releaseIR::objectCompare (const GGS_releaseIR & inOperand) const {
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

GGS_releaseIR::GGS_releaseIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR::
init_21__21_ (const GGS_omnibusType & in_mType,
              const GGS_lstring & in_mOmnibusName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_releaseIR * object = nullptr ;
  macroMyNew (object, cPtr_releaseIR (inCompiler COMMA_THERE)) ;
  object->releaseIR_init_21__21_ (in_mType, in_mOmnibusName, inCompiler) ;
  const GGS_releaseIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_releaseIR::
releaseIR_init_21__21_ (const GGS_omnibusType & in_mType,
                        const GGS_lstring & in_mOmnibusName,
                        Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mOmnibusName = in_mOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR::GGS_releaseIR (const cPtr_releaseIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_releaseIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR::class_func_new (const GGS_omnibusType & in_mType,
                                             const GGS_lstring & in_mOmnibusName
                                             COMMA_LOCATION_ARGS) {
  GGS_releaseIR result ;
  macroMyNew (result.mObjectPtr, cPtr_releaseIR (in_mType, in_mOmnibusName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_releaseIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_releaseIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_releaseIR::readProperty_mOmnibusName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mOmnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_releaseIR::setProperty_mOmnibusName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mOmnibusName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @releaseIR class
//--------------------------------------------------------------------------------------------------

cPtr_releaseIR::cPtr_releaseIR (const GGS_omnibusType & in_mType,
                                const GGS_lstring & in_mOmnibusName
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

const C_galgas_type_descriptor * GGS_releaseIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_releaseIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_releaseIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_releaseIR result ;
  const GGS_releaseIR * p = (const GGS_releaseIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_releaseIR *> (p)) {
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

ComparisonResult GGS_storeIndirectVolatileIR::objectCompare (const GGS_storeIndirectVolatileIR & inOperand) const {
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

GGS_storeIndirectVolatileIR::GGS_storeIndirectVolatileIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR::
init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                  const GGS_string & in_mLLVMName,
                  const GGS_objectIR & in_mSourceValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_storeIndirectVolatileIR * object = nullptr ;
  macroMyNew (object, cPtr_storeIndirectVolatileIR (inCompiler COMMA_THERE)) ;
  object->storeIndirectVolatileIR_init_21__21__21_ (in_mTargetVarType, in_mLLVMName, in_mSourceValue, inCompiler) ;
  const GGS_storeIndirectVolatileIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_storeIndirectVolatileIR::
storeIndirectVolatileIR_init_21__21__21_ (const GGS_omnibusType & in_mTargetVarType,
                                          const GGS_string & in_mLLVMName,
                                          const GGS_objectIR & in_mSourceValue,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetVarType = in_mTargetVarType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mSourceValue = in_mSourceValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR::GGS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeIndirectVolatileIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR::class_func_new (const GGS_omnibusType & in_mTargetVarType,
                                                                         const GGS_string & in_mLLVMName,
                                                                         const GGS_objectIR & in_mSourceValue
                                                                         COMMA_LOCATION_ARGS) {
  GGS_storeIndirectVolatileIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeIndirectVolatileIR (in_mTargetVarType, in_mLLVMName, in_mSourceValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_storeIndirectVolatileIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeIndirectVolatileIR::setProperty_mTargetVarType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_storeIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeIndirectVolatileIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_storeIndirectVolatileIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_storeIndirectVolatileIR::setProperty_mSourceValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (const GGS_omnibusType & in_mTargetVarType,
                                                            const GGS_string & in_mLLVMName,
                                                            const GGS_objectIR & in_mSourceValue
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

const C_galgas_type_descriptor * GGS_storeIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_storeIndirectVolatileIR result ;
  const GGS_storeIndirectVolatileIR * p = (const GGS_storeIndirectVolatileIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeIndirectVolatileIR *> (p)) {
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

ComparisonResult GGS_copyFromReferencesIR::objectCompare (const GGS_copyFromReferencesIR & inOperand) const {
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

GGS_copyFromReferencesIR::GGS_copyFromReferencesIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_copyFromReferencesIR GGS_copyFromReferencesIR::
init_21__21_ (const GGS_LValueRepresentation & in_mTarget,
              const GGS_string & in_mSourceLLVMName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_copyFromReferencesIR * object = nullptr ;
  macroMyNew (object, cPtr_copyFromReferencesIR (inCompiler COMMA_THERE)) ;
  object->copyFromReferencesIR_init_21__21_ (in_mTarget, in_mSourceLLVMName, inCompiler) ;
  const GGS_copyFromReferencesIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::
copyFromReferencesIR_init_21__21_ (const GGS_LValueRepresentation & in_mTarget,
                                   const GGS_string & in_mSourceLLVMName,
                                   Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceLLVMName = in_mSourceLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR::GGS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_copyFromReferencesIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR GGS_copyFromReferencesIR::class_func_new (const GGS_LValueRepresentation & in_mTarget,
                                                                   const GGS_string & in_mSourceLLVMName
                                                                   COMMA_LOCATION_ARGS) {
  GGS_copyFromReferencesIR result ;
  macroMyNew (result.mObjectPtr, cPtr_copyFromReferencesIR (in_mTarget, in_mSourceLLVMName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_copyFromReferencesIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueRepresentation () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_copyFromReferencesIR::setProperty_mTarget (const GGS_LValueRepresentation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_copyFromReferencesIR::readProperty_mSourceLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mSourceLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_copyFromReferencesIR::setProperty_mSourceLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mSourceLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @copyFromReferencesIR class
//--------------------------------------------------------------------------------------------------

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (const GGS_LValueRepresentation & in_mTarget,
                                                      const GGS_string & in_mSourceLLVMName
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

const C_galgas_type_descriptor * GGS_copyFromReferencesIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_copyFromReferencesIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_copyFromReferencesIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_copyFromReferencesIR GGS_copyFromReferencesIR::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_copyFromReferencesIR result ;
  const GGS_copyFromReferencesIR * p = (const GGS_copyFromReferencesIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_copyFromReferencesIR *> (p)) {
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

ComparisonResult GGS_getUniversalPropertyReferenceIR::objectCompare (const GGS_getUniversalPropertyReferenceIR & inOperand) const {
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

GGS_getUniversalPropertyReferenceIR::GGS_getUniversalPropertyReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR::
init_21__21__21__21__21_ (const GGS_omnibusType & in_mType,
                          const GGS_string & in_mLLVMName,
                          const GGS_string & in_mElementLLVMName,
                          const GGS_uint & in_mPropertyIndex,
                          const GGS_string & in_mPropertyName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_getUniversalPropertyReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getUniversalPropertyReferenceIR (inCompiler COMMA_THERE)) ;
  object->getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (in_mType, in_mLLVMName, in_mElementLLVMName, in_mPropertyIndex, in_mPropertyName, inCompiler) ;
  const GGS_getUniversalPropertyReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalPropertyReferenceIR::
getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (const GGS_omnibusType & in_mType,
                                                          const GGS_string & in_mLLVMName,
                                                          const GGS_string & in_mElementLLVMName,
                                                          const GGS_uint & in_mPropertyIndex,
                                                          const GGS_string & in_mPropertyName,
                                                          Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mLLVMName = in_mLLVMName ;
  mProperty_mElementLLVMName = in_mElementLLVMName ;
  mProperty_mPropertyIndex = in_mPropertyIndex ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR::GGS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalPropertyReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR::class_func_new (const GGS_omnibusType & in_mType,
                                                                                         const GGS_string & in_mLLVMName,
                                                                                         const GGS_string & in_mElementLLVMName,
                                                                                         const GGS_uint & in_mPropertyIndex,
                                                                                         const GGS_string & in_mPropertyName
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getUniversalPropertyReferenceIR (in_mType, in_mLLVMName, in_mElementLLVMName, in_mPropertyIndex, in_mPropertyName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_getUniversalPropertyReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalPropertyReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalPropertyReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mElementLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_getUniversalPropertyReferenceIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mPropertyIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getUniversalPropertyReferenceIR::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getUniversalPropertyReferenceIR::setProperty_mPropertyName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalPropertyReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (const GGS_omnibusType & in_mType,
                                                                            const GGS_string & in_mLLVMName,
                                                                            const GGS_string & in_mElementLLVMName,
                                                                            const GGS_uint & in_mPropertyIndex,
                                                                            const GGS_string & in_mPropertyName
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

const C_galgas_type_descriptor * GGS_getUniversalPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR result ;
  const GGS_getUniversalPropertyReferenceIR * p = (const GGS_getUniversalPropertyReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalPropertyReferenceIR *> (p)) {
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
                                                                                                 const GGS_objectIR & in_mIndexIR
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getUniversalArrayElementReferenceIR (in_mType, in_mLLVMName, in_mElementType, in_mElementLLVMName, in_mIndexIR COMMA_THERE)) ;
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

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (const GGS_omnibusType & in_mType,
                                                                                    const GGS_string & in_mLLVMName,
                                                                                    const GGS_omnibusType & in_mElementType,
                                                                                    const GGS_string & in_mElementLLVMName,
                                                                                    const GGS_objectIR & in_mIndexIR
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

const C_galgas_type_descriptor * GGS_getUniversalArrayElementReferenceIR::staticTypeDescriptor (void) const {
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

GGS_generationAdds::GGS_generationAdds (void) :
mProperty_mUniqueIndex (),
mProperty_mExternFunctionDeclarationSet (),
mProperty_mStaticEntityMap (),
mProperty_mUsesGuards (),
mProperty_mNeedsDynamicMemoryAllocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_generationAdds::~ GGS_generationAdds (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generationAdds GGS_generationAdds::init (Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationAdds result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationAdds::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mUniqueIndex = GGS_uint (uint32_t (0U)) ;
GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 11)) ;
  mProperty_mExternFunctionDeclarationSet = temp_0 ;
  mProperty_mStaticEntityMap = GGS_staticEntityMap::init (inCompiler COMMA_HERE) ;
  mProperty_mUsesGuards = GGS_bool (false) ;
  mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationAdds::GGS_generationAdds (const GGS_uint & inOperand0,
                                        const GGS_stringset & inOperand1,
                                        const GGS_staticEntityMap & inOperand2,
                                        const GGS_bool & inOperand3,
                                        const GGS_bool & inOperand4) :
mProperty_mUniqueIndex (inOperand0),
mProperty_mExternFunctionDeclarationSet (inOperand1),
mProperty_mStaticEntityMap (inOperand2),
mProperty_mUsesGuards (inOperand3),
mProperty_mNeedsDynamicMemoryAllocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationAdds GGS_generationAdds::class_func_new (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationAdds result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationAdds::isValid (void) const {
  return mProperty_mUniqueIndex.isValid () && mProperty_mExternFunctionDeclarationSet.isValid () && mProperty_mStaticEntityMap.isValid () && mProperty_mUsesGuards.isValid () && mProperty_mNeedsDynamicMemoryAllocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationAdds::drop (void) {
  mProperty_mUniqueIndex.drop () ;
  mProperty_mExternFunctionDeclarationSet.drop () ;
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mUsesGuards.drop () ;
  mProperty_mNeedsDynamicMemoryAllocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationAdds::description (String & ioString,
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

const C_galgas_type_descriptor * GGS_generationAdds::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationAdds ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generationAdds::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generationAdds (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationAdds GGS_generationAdds::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_generationAdds result ;
  const GGS_generationAdds * p = (const GGS_generationAdds *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generationAdds *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationAdds", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext::GGS_generationContext (void) :
mProperty_mPanicCodeLLVMType (),
mProperty_mPanicLineLLVMType (),
mProperty_mNopInstructionInLLVM (),
mProperty_mGlobalTaskVariableList (),
mProperty_mAvailableInterruptMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext::~ GGS_generationContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generationContext GGS_generationContext::init_21__21__21__21__21_ (const GGS_omnibusType & in_mPanicCodeLLVMType,
                                                                       const GGS_omnibusType & in_mPanicLineLLVMType,
                                                                       const GGS_string & in_mNopInstructionInLLVM,
                                                                       const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                       const GGS_availableInterruptMap & in_mAvailableInterruptMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPanicCodeLLVMType = in_mPanicCodeLLVMType ;
  result.mProperty_mPanicLineLLVMType = in_mPanicLineLLVMType ;
  result.mProperty_mNopInstructionInLLVM = in_mNopInstructionInLLVM ;
  result.mProperty_mGlobalTaskVariableList = in_mGlobalTaskVariableList ;
  result.mProperty_mAvailableInterruptMap = in_mAvailableInterruptMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext::GGS_generationContext (const GGS_omnibusType & inOperand0,
                                              const GGS_omnibusType & inOperand1,
                                              const GGS_string & inOperand2,
                                              const GGS_globalTaskVariableList & inOperand3,
                                              const GGS_availableInterruptMap & inOperand4) :
mProperty_mPanicCodeLLVMType (inOperand0),
mProperty_mPanicLineLLVMType (inOperand1),
mProperty_mNopInstructionInLLVM (inOperand2),
mProperty_mGlobalTaskVariableList (inOperand3),
mProperty_mAvailableInterruptMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext GGS_generationContext::class_func_new (const GGS_omnibusType & in_mPanicCodeLLVMType,
                                                             const GGS_omnibusType & in_mPanicLineLLVMType,
                                                             const GGS_string & in_mNopInstructionInLLVM,
                                                             const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                             const GGS_availableInterruptMap & in_mAvailableInterruptMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPanicCodeLLVMType = in_mPanicCodeLLVMType ;
  result.mProperty_mPanicLineLLVMType = in_mPanicLineLLVMType ;
  result.mProperty_mNopInstructionInLLVM = in_mNopInstructionInLLVM ;
  result.mProperty_mGlobalTaskVariableList = in_mGlobalTaskVariableList ;
  result.mProperty_mAvailableInterruptMap = in_mAvailableInterruptMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationContext::isValid (void) const {
  return mProperty_mPanicCodeLLVMType.isValid () && mProperty_mPanicLineLLVMType.isValid () && mProperty_mNopInstructionInLLVM.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mAvailableInterruptMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationContext::drop (void) {
  mProperty_mPanicCodeLLVMType.drop () ;
  mProperty_mPanicLineLLVMType.drop () ;
  mProperty_mNopInstructionInLLVM.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationContext::description (String & ioString,
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

const C_galgas_type_descriptor * GGS_generationContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generationContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generationContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationContext GGS_generationContext::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_generationContext result ;
  const GGS_generationContext * p = (const GGS_generationContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generationContext *> (p)) {
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

ComparisonResult GGS_ctIntExpressionAST::objectCompare (const GGS_ctIntExpressionAST & inOperand) const {
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

GGS_ctIntExpressionAST::GGS_ctIntExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST::
init_21_ (const GGS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_ctIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::
ctIntExpressionAST_init_21_ (const GGS_lbigint & in_mValue,
                             Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST::GGS_ctIntExpressionAST (const cPtr_ctIntExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST::class_func_new (const GGS_lbigint & in_mValue
                                                               COMMA_LOCATION_ARGS) {
  GGS_ctIntExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctIntExpressionAST (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_ctIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctIntExpressionAST::setProperty_mValue (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIntExpressionAST::cPtr_ctIntExpressionAST (const GGS_lbigint & in_mValue
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

const C_galgas_type_descriptor * GGS_ctIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIntExpressionAST GGS_ctIntExpressionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_ctIntExpressionAST result ;
  const GGS_ctIntExpressionAST * p = (const GGS_ctIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIntExpressionAST *> (p)) {
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

ComparisonResult GGS_ctIdentifierExpressionAST::objectCompare (const GGS_ctIdentifierExpressionAST & inOperand) const {
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

GGS_ctIdentifierExpressionAST::GGS_ctIdentifierExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST::
init_21_ (const GGS_lstring & in_mIdentifier,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ctIdentifierExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctIdentifierExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctIdentifierExpressionAST_init_21_ (in_mIdentifier, inCompiler) ;
  const GGS_ctIdentifierExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::
ctIdentifierExpressionAST_init_21_ (const GGS_lstring & in_mIdentifier,
                                    Compiler * /* inCompiler */) {
  mProperty_mIdentifier = in_mIdentifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST::GGS_ctIdentifierExpressionAST (const cPtr_ctIdentifierExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIdentifierExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST::class_func_new (const GGS_lstring & in_mIdentifier
                                                                             COMMA_LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctIdentifierExpressionAST (in_mIdentifier COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ctIdentifierExpressionAST::readProperty_mIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    return p->mProperty_mIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctIdentifierExpressionAST::setProperty_mIdentifier (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    p->mProperty_mIdentifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIdentifierExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIdentifierExpressionAST::cPtr_ctIdentifierExpressionAST (const GGS_lstring & in_mIdentifier
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

const C_galgas_type_descriptor * GGS_ctIdentifierExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctIdentifierExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctIdentifierExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctIdentifierExpressionAST GGS_ctIdentifierExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_ctIdentifierExpressionAST result ;
  const GGS_ctIdentifierExpressionAST * p = (const GGS_ctIdentifierExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctIdentifierExpressionAST *> (p)) {
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

ComparisonResult GGS_llvmGenericType::objectCompare (const GGS_llvmGenericType & inOperand) const {
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

GGS_llvmGenericType::GGS_llvmGenericType (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType::
init_21__21__21__21_ (const GGS_lstring & in_mTypeName,
                      const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                      const GGS_ctExpressionAST & in_mWhereClause,
                      const GGS_bigint & in_mBitSize,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmGenericType * object = nullptr ;
  macroMyNew (object, cPtr_llvmGenericType (inCompiler COMMA_THERE)) ;
  object->llvmGenericType_init_21__21__21__21_ (in_mTypeName, in_mGenericFormalParameterList, in_mWhereClause, in_mBitSize, inCompiler) ;
  const GGS_llvmGenericType result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::
llvmGenericType_init_21__21__21__21_ (const GGS_lstring & in_mTypeName,
                                      const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                                      const GGS_ctExpressionAST & in_mWhereClause,
                                      const GGS_bigint & in_mBitSize,
                                      Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mGenericFormalParameterList = in_mGenericFormalParameterList ;
  mProperty_mWhereClause = in_mWhereClause ;
  mProperty_mBitSize = in_mBitSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType::GGS_llvmGenericType (const cPtr_llvmGenericType * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenericType) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType::class_func_new (const GGS_lstring & in_mTypeName,
                                                         const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                                                         const GGS_ctExpressionAST & in_mWhereClause,
                                                         const GGS_bigint & in_mBitSize
                                                         COMMA_LOCATION_ARGS) {
  GGS_llvmGenericType result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmGenericType (in_mTypeName, in_mGenericFormalParameterList, in_mWhereClause, in_mBitSize COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmGenericType::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmGenericType::readProperty_mGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_llvmGenericType::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_llvmGenericType::readProperty_mBitSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mBitSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenericType::setProperty_mBitSize (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mBitSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenericType class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenericType::cPtr_llvmGenericType (const GGS_lstring & in_mTypeName,
                                            const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                                            const GGS_ctExpressionAST & in_mWhereClause,
                                            const GGS_bigint & in_mBitSize
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

const C_galgas_type_descriptor * GGS_llvmGenericType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenericType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenericType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmGenericType result ;
  const GGS_llvmGenericType * p = (const GGS_llvmGenericType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenericType *> (p)) {
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

ComparisonResult GGS_llvmAssignmentOperatorDeclarationAST::objectCompare (const GGS_llvmAssignmentOperatorDeclarationAST & inOperand) const {
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

GGS_llvmAssignmentOperatorDeclarationAST::GGS_llvmAssignmentOperatorDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_lstring & in_mTargetVariableName,
                                          const GGS_lstring & in_mTargetTypeName,
                                          const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                          const GGS_lstring & in_mSourceVariableName,
                                          const GGS_lstring & in_mSourceTypeName,
                                          const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                          const GGS_ctExpressionAST & in_mWhereClause,
                                          const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_llvmAssignmentOperatorDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmAssignmentOperatorDeclarationAST (inCompiler COMMA_THERE)) ;
  object->llvmAssignmentOperatorDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mOperatorLocation, in_mTargetVariableName, in_mTargetTypeName, in_mTargetGenericFormalParameterList, in_mSourceVariableName, in_mSourceTypeName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mLLVMInstructionList, inCompiler) ;
  const GGS_llvmAssignmentOperatorDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::
llvmAssignmentOperatorDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                                               const GGS_lstring & in_mTargetVariableName,
                                                                               const GGS_lstring & in_mTargetTypeName,
                                                                               const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                               const GGS_lstring & in_mSourceVariableName,
                                                                               const GGS_lstring & in_mSourceTypeName,
                                                                               const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                               const GGS_ctExpressionAST & in_mWhereClause,
                                                                               const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList,
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

GGS_llvmAssignmentOperatorDeclarationAST::GGS_llvmAssignmentOperatorDeclarationAST (const cPtr_llvmAssignmentOperatorDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                                                   const GGS_lstring & in_mTargetVariableName,
                                                                                                   const GGS_lstring & in_mTargetTypeName,
                                                                                                   const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                                   const GGS_lstring & in_mSourceVariableName,
                                                                                                   const GGS_lstring & in_mSourceTypeName,
                                                                                                   const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                                   const GGS_ctExpressionAST & in_mWhereClause,
                                                                                                   const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmAssignmentOperatorDeclarationAST (in_mOperatorLocation, in_mTargetVariableName, in_mTargetTypeName, in_mTargetGenericFormalParameterList, in_mSourceVariableName, in_mSourceTypeName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mLLVMInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetVariableName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mTargetGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceVariableName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mSourceGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmAssignmentOperatorDeclarationAST::readProperty_mLLVMInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mLLVMInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorDeclarationAST::setProperty_mLLVMInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mLLVMInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorDeclarationAST::cPtr_llvmAssignmentOperatorDeclarationAST (const GGS_location & in_mOperatorLocation,
                                                                                      const GGS_lstring & in_mTargetVariableName,
                                                                                      const GGS_lstring & in_mTargetTypeName,
                                                                                      const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                      const GGS_lstring & in_mSourceVariableName,
                                                                                      const GGS_lstring & in_mSourceTypeName,
                                                                                      const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                      const GGS_ctExpressionAST & in_mWhereClause,
                                                                                      const GGS_llvmGenerationInstructionList & in_mLLVMInstructionList
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

const C_galgas_type_descriptor * GGS_llvmAssignmentOperatorDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  const GGS_llvmAssignmentOperatorDeclarationAST * p = (const GGS_llvmAssignmentOperatorDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorDeclarationAST *> (p)) {
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

ComparisonResult GGS_llvmAssignmentOperatorUsage::objectCompare (const GGS_llvmAssignmentOperatorUsage & inOperand) const {
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

GGS_llvmAssignmentOperatorUsage::GGS_llvmAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage::
init_21__21__21__21__21__21__21__21_ (const GGS_omnibusType & in_mTargetType,
                                      const GGS_lstring & in_mTargetVarName,
                                      const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                      const GGS_omnibusType & in_mSourceTpe,
                                      const GGS_lstring & in_mSourceVarName,
                                      const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                      const GGS_ctExpressionAST & in_mWhereClause,
                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_llvmAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (in_mTargetType, in_mTargetVarName, in_mTargetGenericFormalParameterList, in_mSourceTpe, in_mSourceVarName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mInstructionList, inCompiler) ;
  const GGS_llvmAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorUsage::
llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (const GGS_omnibusType & in_mTargetType,
                                                                  const GGS_lstring & in_mTargetVarName,
                                                                  const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                  const GGS_omnibusType & in_mSourceTpe,
                                                                  const GGS_lstring & in_mSourceVarName,
                                                                  const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                  const GGS_ctExpressionAST & in_mWhereClause,
                                                                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
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

GGS_llvmAssignmentOperatorUsage::GGS_llvmAssignmentOperatorUsage (const cPtr_llvmAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage::class_func_new (const GGS_omnibusType & in_mTargetType,
                                                                                 const GGS_lstring & in_mTargetVarName,
                                                                                 const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                 const GGS_omnibusType & in_mSourceTpe,
                                                                                 const GGS_lstring & in_mSourceVarName,
                                                                                 const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                 const GGS_ctExpressionAST & in_mWhereClause,
                                                                                 const GGS_llvmGenerationInstructionList & in_mInstructionList
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmAssignmentOperatorUsage (in_mTargetType, in_mTargetVarName, in_mTargetGenericFormalParameterList, in_mSourceTpe, in_mSourceVarName, in_mSourceGenericFormalParameterList, in_mWhereClause, in_mInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_llvmAssignmentOperatorUsage::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorUsage::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mTargetVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorUsage::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mTargetGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_llvmAssignmentOperatorUsage::readProperty_mSourceTpe (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceTpe ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mSourceTpe (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceTpe = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmAssignmentOperatorUsage::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mSourceVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmAssignmentOperatorUsage::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mSourceGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_llvmAssignmentOperatorUsage::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmAssignmentOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmAssignmentOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorUsage::cPtr_llvmAssignmentOperatorUsage (const GGS_omnibusType & in_mTargetType,
                                                                    const GGS_lstring & in_mTargetVarName,
                                                                    const GGS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                    const GGS_omnibusType & in_mSourceTpe,
                                                                    const GGS_lstring & in_mSourceVarName,
                                                                    const GGS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                    const GGS_ctExpressionAST & in_mWhereClause,
                                                                    const GGS_llvmGenerationInstructionList & in_mInstructionList
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

const C_galgas_type_descriptor * GGS_llvmAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage result ;
  const GGS_llvmAssignmentOperatorUsage * p = (const GGS_llvmAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorUsage *> (p)) {
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

ComparisonResult GGS_assignmentRoutineIR::objectCompare (const GGS_assignmentRoutineIR & inOperand) const {
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

GGS_assignmentRoutineIR::GGS_assignmentRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_omnibusType & in_mTargetType,
                                                                 const GGS_string & in_mTargetVarName,
                                                                 const GGS_omnibusType & in_mSourceType,
                                                                 const GGS_string & in_mSourceVarName,
                                                                 const GGS_stringlist & in_mGeneratedInstructions,
                                                                 const GGS_allocaList & in_mAllocaList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_assignmentRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_assignmentRoutineIR (inCompiler COMMA_THERE)) ;
  object->assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GGS_assignmentRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::
assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_omnibusType & in_mTargetType,
                                                                                     const GGS_string & in_mTargetVarName,
                                                                                     const GGS_omnibusType & in_mSourceType,
                                                                                     const GGS_string & in_mSourceVarName,
                                                                                     const GGS_stringlist & in_mGeneratedInstructions,
                                                                                     const GGS_allocaList & in_mAllocaList,
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

GGS_assignmentRoutineIR::GGS_assignmentRoutineIR (const cPtr_assignmentRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_omnibusType & in_mTargetType,
                                                                 const GGS_string & in_mTargetVarName,
                                                                 const GGS_omnibusType & in_mSourceType,
                                                                 const GGS_string & in_mSourceVarName,
                                                                 const GGS_stringlist & in_mGeneratedInstructions,
                                                                 const GGS_allocaList & in_mAllocaList
                                                                 COMMA_LOCATION_ARGS) {
  GGS_assignmentRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assignmentRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mGeneratedInstructions, in_mAllocaList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignmentRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignmentRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mSourceType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mSourceVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_assignmentRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_assignmentRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentRoutineIR::cPtr_assignmentRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                    const GGS_bool & in_isRequired,
                                                    const GGS_bool & in_warnsIfUnused,
                                                    const GGS_omnibusType & in_mTargetType,
                                                    const GGS_string & in_mTargetVarName,
                                                    const GGS_omnibusType & in_mSourceType,
                                                    const GGS_string & in_mSourceVarName,
                                                    const GGS_stringlist & in_mGeneratedInstructions,
                                                    const GGS_allocaList & in_mAllocaList
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

const C_galgas_type_descriptor * GGS_assignmentRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentRoutineIR result ;
  const GGS_assignmentRoutineIR * p = (const GGS_assignmentRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentRoutineIR *> (p)) {
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

ComparisonResult GGS_simpleAssignmentCopyRoutineIR::objectCompare (const GGS_simpleAssignmentCopyRoutineIR & inOperand) const {
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

GGS_simpleAssignmentCopyRoutineIR::GGS_simpleAssignmentCopyRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_omnibusType & in_mTargetType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_simpleAssignmentCopyRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_simpleAssignmentCopyRoutineIR (inCompiler COMMA_THERE)) ;
  object->simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, inCompiler) ;
  const GGS_simpleAssignmentCopyRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::
simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_omnibusType & in_mTargetType,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR::GGS_simpleAssignmentCopyRoutineIR (const cPtr_simpleAssignmentCopyRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleAssignmentCopyRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_omnibusType & in_mTargetType
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_simpleAssignmentCopyRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_simpleAssignmentCopyRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleAssignmentCopyRoutineIR::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleAssignmentCopyRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_simpleAssignmentCopyRoutineIR::cPtr_simpleAssignmentCopyRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                        const GGS_bool & in_isRequired,
                                                                        const GGS_bool & in_warnsIfUnused,
                                                                        const GGS_omnibusType & in_mTargetType
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

const C_galgas_type_descriptor * GGS_simpleAssignmentCopyRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleAssignmentCopyRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleAssignmentCopyRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR result ;
  const GGS_simpleAssignmentCopyRoutineIR * p = (const GGS_simpleAssignmentCopyRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleAssignmentCopyRoutineIR *> (p)) {
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

GGS_llvmVarInstruction GGS_llvmVarInstruction::class_func_new (const GGS_lstring & in_mVariableName
                                                               COMMA_LOCATION_ARGS) {
  GGS_llvmVarInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmVarInstruction (in_mVariableName COMMA_THERE)) ;
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

cPtr_llvmVarInstruction::cPtr_llvmVarInstruction (const GGS_lstring & in_mVariableName
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

const C_galgas_type_descriptor * GGS_llvmVarInstruction::staticTypeDescriptor (void) const {
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

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::~ GGS__32_lstringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::class_func_new (const GGS_lstring & in_mValue0,
                                                                               const GGS_lstring & in_mValue1,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
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
//     @2lstringlist.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code::GGS_interruptionPanicCode_2E_code (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code::~ GGS_interruptionPanicCode_2E_code (void) {
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

GGS_interruptionPanicCode_2E_code GGS_interruptionPanicCode_2E_code::class_func_new (const GGS_lbigint & in_value,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptionPanicCode_2E_code result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
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
//
//     @interruptionPanicCode.code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code ("interruptionPanicCode.code",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_interruptionPanicCode_2E_code::staticTypeDescriptor (void) const {
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
//
//Optional @interruptionPanicCode_2E_code_3F_
//
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
//
//     @interruptionPanicCode.code? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code_3F_ ("interruptionPanicCode.code?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_interruptionPanicCode_2E_code_3F_::staticTypeDescriptor (void) const {
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

GGS_interruptionConfigurationList_2E_element::GGS_interruptionConfigurationList_2E_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element::~ GGS_interruptionConfigurationList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element GGS_interruptionConfigurationList_2E_element::init_21__21_ (const GGS_lstring & in_mInterruptName,
                                                                                                         const GGS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptionConfigurationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element::GGS_interruptionConfigurationList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element GGS_interruptionConfigurationList_2E_element::class_func_new (const GGS_lstring & in_mInterruptName,
                                                                                                           const GGS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptionConfigurationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptionConfigurationList_2E_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList_2E_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @interruptionConfigurationList.element:") ;
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
//     @interruptionConfigurationList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ("interruptionConfigurationList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_interruptionConfigurationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptionConfigurationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptionConfigurationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element GGS_interruptionConfigurationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_interruptionConfigurationList_2E_element result ;
  const GGS_interruptionConfigurationList_2E_element * p = (const GGS_interruptionConfigurationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptionConfigurationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element::GGS_flatValuedObjectMap_2E_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mValuedObject () {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element::~ GGS_flatValuedObjectMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element GGS_flatValuedObjectMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_valuedObjectState & in_mObjectState,
                                                                                             const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                                             const GGS_valuedObject & in_mValuedObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_flatValuedObjectMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mObjectState = in_mObjectState ;
  result.mProperty_mObjectShouldBeValuedAtEndOfScope = in_mObjectShouldBeValuedAtEndOfScope ;
  result.mProperty_mValuedObject = in_mValuedObject ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element::GGS_flatValuedObjectMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_valuedObjectState & inOperand1,
                                                                        const GGS_bool & inOperand2,
                                                                        const GGS_valuedObject & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mValuedObject (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element GGS_flatValuedObjectMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                       const GGS_valuedObjectState & in_mObjectState,
                                                                                       const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                                       const GGS_valuedObject & in_mValuedObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_flatValuedObjectMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mObjectState = in_mObjectState ;
  result.mProperty_mObjectShouldBeValuedAtEndOfScope = in_mObjectShouldBeValuedAtEndOfScope ;
  result.mProperty_mValuedObject = in_mValuedObject ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_flatValuedObjectMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mValuedObject.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @flatValuedObjectMap.element:") ;
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
//     @flatValuedObjectMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element ("flatValuedObjectMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_flatValuedObjectMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_flatValuedObjectMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_flatValuedObjectMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element GGS_flatValuedObjectMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap_2E_element result ;
  const GGS_flatValuedObjectMap_2E_element * p = (const GGS_flatValuedObjectMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_flatValuedObjectMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @flatValuedObjectMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_::GGS_flatValuedObjectMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_::GGS_flatValuedObjectMap_2E_element_3F_ (const GGS_flatValuedObjectMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_ GGS_flatValuedObjectMap_2E_element_3F_::init_nil (void) {
  GGS_flatValuedObjectMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_flatValuedObjectMap_2E_element_3F_::isValid (void) const {
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

bool GGS_flatValuedObjectMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_flatValuedObjectMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap_2E_element_3F_::description (String & ioString,
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
//     @flatValuedObjectMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element_3F_ ("flatValuedObjectMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_flatValuedObjectMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_flatValuedObjectMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_flatValuedObjectMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_ GGS_flatValuedObjectMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap_2E_element_3F_ result ;
  const GGS_flatValuedObjectMap_2E_element_3F_ * p = (const GGS_flatValuedObjectMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_flatValuedObjectMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element::GGS_referenceStateMap_2E_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element::~ GGS_referenceStateMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_referenceStateMap_2E_element GGS_referenceStateMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_valuedObjectState & in_mState,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mState = in_mState ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element::GGS_referenceStateMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element GGS_referenceStateMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_valuedObjectState & in_mState,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_referenceStateMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mState = in_mState ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_referenceStateMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @referenceStateMap.element:") ;
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
//     @referenceStateMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element ("referenceStateMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_referenceStateMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_referenceStateMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_referenceStateMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element GGS_referenceStateMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap_2E_element result ;
  const GGS_referenceStateMap_2E_element * p = (const GGS_referenceStateMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_referenceStateMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @referenceStateMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_::GGS_referenceStateMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_::GGS_referenceStateMap_2E_element_3F_ (const GGS_referenceStateMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_ GGS_referenceStateMap_2E_element_3F_::init_nil (void) {
  GGS_referenceStateMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_referenceStateMap_2E_element_3F_::isValid (void) const {
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

bool GGS_referenceStateMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_referenceStateMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap_2E_element_3F_::description (String & ioString,
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
//     @referenceStateMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element_3F_ ("referenceStateMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_referenceStateMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_referenceStateMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_referenceStateMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_ GGS_referenceStateMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap_2E_element_3F_ result ;
  const GGS_referenceStateMap_2E_element_3F_ * p = (const GGS_referenceStateMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_referenceStateMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver::GGS_valuedObject_2E_driver (void) :
mProperty_type (),
mProperty_instancied () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver::~ GGS_valuedObject_2E_driver (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_driver GGS_valuedObject_2E_driver::init_21__21_ (const GGS_omnibusType & in_type,
                                                                     const GGS_bool & in_instancied,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_driver result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_instancied = in_instancied ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_driver::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver::GGS_valuedObject_2E_driver (const GGS_omnibusType & inOperand0,
                                                        const GGS_bool & inOperand1) :
mProperty_type (inOperand0),
mProperty_instancied (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver GGS_valuedObject_2E_driver::class_func_new (const GGS_omnibusType & in_type,
                                                                       const GGS_bool & in_instancied,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_driver result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_instancied = in_instancied ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_driver::isValid (void) const {
  return mProperty_type.isValid () && mProperty_instancied.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_driver::drop (void) {
  mProperty_type.drop () ;
  mProperty_instancied.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_driver::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.driver:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instancied.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.driver generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver ("valuedObject.driver",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_driver::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_driver ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_driver::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_driver (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver GGS_valuedObject_2E_driver::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_driver result ;
  const GGS_valuedObject_2E_driver * p = (const GGS_valuedObject_2E_driver *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_driver *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.driver", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2E_driver_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver_3F_::GGS_valuedObject_2E_driver_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver_3F_::GGS_valuedObject_2E_driver_3F_ (const GGS_valuedObject_2E_driver & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver_3F_ GGS_valuedObject_2E_driver_3F_::init_nil (void) {
  GGS_valuedObject_2E_driver_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_driver_3F_::isValid (void) const {
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

bool GGS_valuedObject_2E_driver_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_driver_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_driver () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_driver_3F_::description (String & ioString,
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
//     @valuedObject.driver? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver_3F_ ("valuedObject.driver?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_driver_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_driver_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_driver_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_driver_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver_3F_ GGS_valuedObject_2E_driver_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_driver_3F_ result ;
  const GGS_valuedObject_2E_driver_3F_ * p = (const GGS_valuedObject_2E_driver_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_driver_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.driver?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task::GGS_valuedObject_2E_task (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task::~ GGS_valuedObject_2E_task (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_task GGS_valuedObject_2E_task::init_21_ (const GGS_omnibusType & in_type,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_task result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_task::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task::GGS_valuedObject_2E_task (const GGS_omnibusType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task GGS_valuedObject_2E_task::class_func_new (const GGS_omnibusType & in_type,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_task result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_task::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_task::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_task::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.task:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.task generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_task ("valuedObject.task",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_task::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_task ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_task::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_task (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task GGS_valuedObject_2E_task::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_task result ;
  const GGS_valuedObject_2E_task * p = (const GGS_valuedObject_2E_task *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_task *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.task", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2E_task_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task_3F_::GGS_valuedObject_2E_task_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task_3F_::GGS_valuedObject_2E_task_3F_ (const GGS_valuedObject_2E_task & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task_3F_ GGS_valuedObject_2E_task_3F_::init_nil (void) {
  GGS_valuedObject_2E_task_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_task_3F_::isValid (void) const {
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

bool GGS_valuedObject_2E_task_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_task_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_task () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_task_3F_::description (String & ioString,
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
//     @valuedObject.task? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_task_3F_ ("valuedObject.task?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_task_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_task_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_task_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_task_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task_3F_ GGS_valuedObject_2E_task_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_task_3F_ result ;
  const GGS_valuedObject_2E_task_3F_ * p = (const GGS_valuedObject_2E_task_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_task_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.task?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant::GGS_valuedObject_2E_localConstant (void) :
mProperty_type (),
mProperty_omnibusName (),
mProperty_isFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant::~ GGS_valuedObject_2E_localConstant (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_localConstant GGS_valuedObject_2E_localConstant::init_21__21__21_ (const GGS_omnibusType & in_type,
                                                                                       const GGS_lstring & in_omnibusName,
                                                                                       const GGS_bool & in_isFormalInputArgument,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_localConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_omnibusName = in_omnibusName ;
  result.mProperty_isFormalInputArgument = in_isFormalInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localConstant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant::GGS_valuedObject_2E_localConstant (const GGS_omnibusType & inOperand0,
                                                                      const GGS_lstring & inOperand1,
                                                                      const GGS_bool & inOperand2) :
mProperty_type (inOperand0),
mProperty_omnibusName (inOperand1),
mProperty_isFormalInputArgument (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant GGS_valuedObject_2E_localConstant::class_func_new (const GGS_omnibusType & in_type,
                                                                                     const GGS_lstring & in_omnibusName,
                                                                                     const GGS_bool & in_isFormalInputArgument,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_localConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_omnibusName = in_omnibusName ;
  result.mProperty_isFormalInputArgument = in_isFormalInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_localConstant::isValid (void) const {
  return mProperty_type.isValid () && mProperty_omnibusName.isValid () && mProperty_isFormalInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localConstant::drop (void) {
  mProperty_type.drop () ;
  mProperty_omnibusName.drop () ;
  mProperty_isFormalInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localConstant::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.localConstant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_omnibusName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isFormalInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.localConstant generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant ("valuedObject.localConstant",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_localConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_localConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_localConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_localConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant GGS_valuedObject_2E_localConstant::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_localConstant result ;
  const GGS_valuedObject_2E_localConstant * p = (const GGS_valuedObject_2E_localConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_localConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.localConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2E_localConstant_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant_3F_::GGS_valuedObject_2E_localConstant_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant_3F_::GGS_valuedObject_2E_localConstant_3F_ (const GGS_valuedObject_2E_localConstant & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant_3F_ GGS_valuedObject_2E_localConstant_3F_::init_nil (void) {
  GGS_valuedObject_2E_localConstant_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_localConstant_3F_::isValid (void) const {
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

bool GGS_valuedObject_2E_localConstant_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localConstant_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_localConstant () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localConstant_3F_::description (String & ioString,
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
//     @valuedObject.localConstant? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant_3F_ ("valuedObject.localConstant?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_localConstant_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_localConstant_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_localConstant_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_localConstant_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant_3F_ GGS_valuedObject_2E_localConstant_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_localConstant_3F_ result ;
  const GGS_valuedObject_2E_localConstant_3F_ * p = (const GGS_valuedObject_2E_localConstant_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_localConstant_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.localConstant?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable::GGS_valuedObject_2E_localVariable (void) :
mProperty_type (),
mProperty_omnibusName () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable::~ GGS_valuedObject_2E_localVariable (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_localVariable GGS_valuedObject_2E_localVariable::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                   const GGS_lstring & in_omnibusName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_localVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_omnibusName = in_omnibusName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localVariable::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable::GGS_valuedObject_2E_localVariable (const GGS_omnibusType & inOperand0,
                                                                      const GGS_lstring & inOperand1) :
mProperty_type (inOperand0),
mProperty_omnibusName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable GGS_valuedObject_2E_localVariable::class_func_new (const GGS_omnibusType & in_type,
                                                                                     const GGS_lstring & in_omnibusName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_localVariable result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_omnibusName = in_omnibusName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_localVariable::isValid (void) const {
  return mProperty_type.isValid () && mProperty_omnibusName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localVariable::drop (void) {
  mProperty_type.drop () ;
  mProperty_omnibusName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localVariable::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.localVariable:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_omnibusName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.localVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable ("valuedObject.localVariable",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_localVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_localVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_localVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_localVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable GGS_valuedObject_2E_localVariable::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_localVariable result ;
  const GGS_valuedObject_2E_localVariable * p = (const GGS_valuedObject_2E_localVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_localVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.localVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2E_localVariable_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable_3F_::GGS_valuedObject_2E_localVariable_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable_3F_::GGS_valuedObject_2E_localVariable_3F_ (const GGS_valuedObject_2E_localVariable & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable_3F_ GGS_valuedObject_2E_localVariable_3F_::init_nil (void) {
  GGS_valuedObject_2E_localVariable_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_localVariable_3F_::isValid (void) const {
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

bool GGS_valuedObject_2E_localVariable_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localVariable_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_localVariable () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_localVariable_3F_::description (String & ioString,
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
//     @valuedObject.localVariable? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable_3F_ ("valuedObject.localVariable?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_localVariable_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_localVariable_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_localVariable_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_localVariable_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable_3F_ GGS_valuedObject_2E_localVariable_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_localVariable_3F_ result ;
  const GGS_valuedObject_2E_localVariable_3F_ * p = (const GGS_valuedObject_2E_localVariable_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_localVariable_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.localVariable?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance::GGS_valuedObject_2E_globalSyncInstance (void) :
mProperty_type (),
mProperty_omnibusName () {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance::~ GGS_valuedObject_2E_globalSyncInstance (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance GGS_valuedObject_2E_globalSyncInstance::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                             const GGS_lstring & in_omnibusName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalSyncInstance result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_omnibusName = in_omnibusName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalSyncInstance::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance::GGS_valuedObject_2E_globalSyncInstance (const GGS_omnibusType & inOperand0,
                                                                                const GGS_lstring & inOperand1) :
mProperty_type (inOperand0),
mProperty_omnibusName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance GGS_valuedObject_2E_globalSyncInstance::class_func_new (const GGS_omnibusType & in_type,
                                                                                               const GGS_lstring & in_omnibusName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalSyncInstance result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_omnibusName = in_omnibusName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalSyncInstance::isValid (void) const {
  return mProperty_type.isValid () && mProperty_omnibusName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalSyncInstance::drop (void) {
  mProperty_type.drop () ;
  mProperty_omnibusName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalSyncInstance::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @valuedObject.globalSyncInstance:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_omnibusName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObject.globalSyncInstance generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance ("valuedObject.globalSyncInstance",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_globalSyncInstance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_globalSyncInstance::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_globalSyncInstance (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance GGS_valuedObject_2E_globalSyncInstance::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalSyncInstance result ;
  const GGS_valuedObject_2E_globalSyncInstance * p = (const GGS_valuedObject_2E_globalSyncInstance *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_globalSyncInstance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.globalSyncInstance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @valuedObject_2E_globalSyncInstance_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance_3F_::GGS_valuedObject_2E_globalSyncInstance_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance_3F_::GGS_valuedObject_2E_globalSyncInstance_3F_ (const GGS_valuedObject_2E_globalSyncInstance & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance_3F_ GGS_valuedObject_2E_globalSyncInstance_3F_::init_nil (void) {
  GGS_valuedObject_2E_globalSyncInstance_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_valuedObject_2E_globalSyncInstance_3F_::isValid (void) const {
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

bool GGS_valuedObject_2E_globalSyncInstance_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalSyncInstance_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_valuedObject_2E_globalSyncInstance () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject_2E_globalSyncInstance_3F_::description (String & ioString,
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
//     @valuedObject.globalSyncInstance? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance_3F_ ("valuedObject.globalSyncInstance?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject_2E_globalSyncInstance_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject_2E_globalSyncInstance_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject_2E_globalSyncInstance_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance_3F_ GGS_valuedObject_2E_globalSyncInstance_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_valuedObject_2E_globalSyncInstance_3F_ result ;
  const GGS_valuedObject_2E_globalSyncInstance_3F_ * p = (const GGS_valuedObject_2E_globalSyncInstance_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject_2E_globalSyncInstance_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject.globalSyncInstance?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element::GGS_typeConstantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConstantMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element::~ GGS_typeConstantMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeConstantMap_2E_element GGS_typeConstantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_constantMap & in_mConstantMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantMap = in_mConstantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element::GGS_typeConstantMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_constantMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstantMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element GGS_typeConstantMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               const GGS_constantMap & in_mConstantMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantMap = in_mConstantMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeConstantMap.element:") ;
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
//     @typeConstantMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element ("typeConstantMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element GGS_typeConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element result ;
  const GGS_typeConstantMap_2E_element * p = (const GGS_typeConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeConstantMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_::GGS_typeConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_::GGS_typeConstantMap_2E_element_3F_ (const GGS_typeConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_ GGS_typeConstantMap_2E_element_3F_::init_nil (void) {
  GGS_typeConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typeConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap_2E_element_3F_::description (String & ioString,
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
//     @typeConstantMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ("typeConstantMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_ GGS_typeConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap_2E_element_3F_ result ;
  const GGS_typeConstantMap_2E_element_3F_ * p = (const GGS_typeConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::~ GGS_constantMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                         const GGS_bigint & in_mIndex,
                                                                         const GGS_lstring & in_mClassTypeName,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mClassTypeName = in_mClassTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_bigint & inOperand1,
                                                        const GGS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                       const GGS_bigint & in_mIndex,
                                                                       const GGS_lstring & in_mClassTypeName,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mClassTypeName = in_mClassTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantMap.element:") ;
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
//     @constantMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2E_element ("constantMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  const GGS_constantMap_2E_element * p = (const GGS_constantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constantMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::init_nil (void) {
  GGS_constantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_constantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::description (String & ioString,
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
//     @constantMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ("constantMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element_3F_ result ;
  const GGS_constantMap_2E_element_3F_ * p = (const GGS_constantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element::GGS_typeConstructorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConstructorMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element::~ GGS_typeConstructorMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeConstructorMap_2E_element GGS_typeConstructorMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_constructorMap & in_mConstructorMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstructorMap = in_mConstructorMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element::GGS_typeConstructorMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_constructorMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstructorMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element GGS_typeConstructorMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                     const GGS_constructorMap & in_mConstructorMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstructorMap = in_mConstructorMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstructorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstructorMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstructorMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeConstructorMap.element:") ;
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
//     @typeConstructorMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ("typeConstructorMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeConstructorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstructorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstructorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element GGS_typeConstructorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element result ;
  const GGS_typeConstructorMap_2E_element * p = (const GGS_typeConstructorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstructorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeConstructorMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_::GGS_typeConstructorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_::GGS_typeConstructorMap_2E_element_3F_ (const GGS_typeConstructorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_ GGS_typeConstructorMap_2E_element_3F_::init_nil (void) {
  GGS_typeConstructorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeConstructorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typeConstructorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeConstructorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap_2E_element_3F_::description (String & ioString,
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
//     @typeConstructorMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ("typeConstructorMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeConstructorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstructorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstructorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_ GGS_typeConstructorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap_2E_element_3F_ result ;
  const GGS_typeConstructorMap_2E_element_3F_ * p = (const GGS_typeConstructorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstructorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue::GGS_constructorValue_2E_arrayValue (void) :
mProperty_elementType (),
mProperty_size () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue::~ GGS_constructorValue_2E_arrayValue (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue GGS_constructorValue_2E_arrayValue::init_21__21_ (const GGS_omnibusType & in_elementType,
                                                                                     const GGS_uint & in_size,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue::GGS_constructorValue_2E_arrayValue (const GGS_omnibusType & inOperand0,
                                                                        const GGS_uint & inOperand1) :
mProperty_elementType (inOperand0),
mProperty_size (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue GGS_constructorValue_2E_arrayValue::class_func_new (const GGS_omnibusType & in_elementType,
                                                                                       const GGS_uint & in_size,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_arrayValue::isValid (void) const {
  return mProperty_elementType.isValid () && mProperty_size.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue::drop (void) {
  mProperty_elementType.drop () ;
  mProperty_size.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorValue.arrayValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_elementType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_size.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue.arrayValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue ("constructorValue.arrayValue",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue_2E_arrayValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_arrayValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_arrayValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue GGS_constructorValue_2E_arrayValue::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue result ;
  const GGS_constructorValue_2E_arrayValue * p = (const GGS_constructorValue_2E_arrayValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_arrayValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.arrayValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constructorValue_2E_arrayValue_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_::GGS_constructorValue_2E_arrayValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_::GGS_constructorValue_2E_arrayValue_3F_ (const GGS_constructorValue_2E_arrayValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_ GGS_constructorValue_2E_arrayValue_3F_::init_nil (void) {
  GGS_constructorValue_2E_arrayValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorValue_2E_arrayValue_3F_::isValid (void) const {
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

bool GGS_constructorValue_2E_arrayValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorValue_2E_arrayValue () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue_2E_arrayValue_3F_::description (String & ioString,
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
//     @constructorValue.arrayValue? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue_3F_ ("constructorValue.arrayValue?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue_2E_arrayValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue_2E_arrayValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue_2E_arrayValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_ GGS_constructorValue_2E_arrayValue_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorValue_2E_arrayValue_3F_ result ;
  const GGS_constructorValue_2E_arrayValue_3F_ * p = (const GGS_constructorValue_2E_arrayValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue_2E_arrayValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue.arrayValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element::GGS_constructorSignature_2E_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element::~ GGS_constructorSignature_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorSignature_2E_element GGS_constructorSignature_2E_element::init_21__21__21_ (const GGS_string & in_mSelector,
                                                                                           const GGS_omnibusType & in_mType,
                                                                                           const GGS_uint & in_mFieldIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mFieldIndex = in_mFieldIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element::GGS_constructorSignature_2E_element (const GGS_string & inOperand0,
                                                                          const GGS_omnibusType & inOperand1,
                                                                          const GGS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element GGS_constructorSignature_2E_element::class_func_new (const GGS_string & in_mSelector,
                                                                                         const GGS_omnibusType & in_mType,
                                                                                         const GGS_uint & in_mFieldIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorSignature_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelector = in_mSelector ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mFieldIndex = in_mFieldIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorSignature_2E_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature_2E_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorSignature.element:") ;
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
//     @constructorSignature.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2E_element ("constructorSignature.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorSignature_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorSignature_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorSignature_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element GGS_constructorSignature_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_constructorSignature_2E_element result ;
  const GGS_constructorSignature_2E_element * p = (const GGS_constructorSignature_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorSignature_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element::GGS_constructorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element::~ GGS_constructorMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constructorMap_2E_element GGS_constructorMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_constructorSignature & in_mSignature,
                                                                               const GGS_constructorValue & in_mInitValue,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mInitValue = in_mInitValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element::GGS_constructorMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_constructorSignature & inOperand1,
                                                              const GGS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element GGS_constructorMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                             const GGS_constructorSignature & in_mSignature,
                                                                             const GGS_constructorValue & in_mInitValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mInitValue = in_mInitValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constructorMap.element:") ;
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
//     @constructorMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2E_element ("constructorMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element GGS_constructorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_constructorMap_2E_element result ;
  const GGS_constructorMap_2E_element * p = (const GGS_constructorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @constructorMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_::GGS_constructorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_::GGS_constructorMap_2E_element_3F_ (const GGS_constructorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap_2E_element_3F_::init_nil (void) {
  GGS_constructorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_constructorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constructorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap_2E_element_3F_::description (String & ioString,
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
//     @constructorMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2E_element_3F_ ("constructorMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_constructorMap_2E_element_3F_ result ;
  const GGS_constructorMap_2E_element_3F_ * p = (const GGS_constructorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element::GGS_typePropertyGetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mGetterMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element::~ GGS_typePropertyGetterMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element GGS_typePropertyGetterMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_propertyGetterMap & in_mGetterMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGetterMap = in_mGetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element::GGS_typePropertyGetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_propertyGetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element GGS_typePropertyGetterMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                           const GGS_propertyGetterMap & in_mGetterMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mGetterMap = in_mGetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertyGetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typePropertyGetterMap.element:") ;
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
//     @typePropertyGetterMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element ("typePropertyGetterMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typePropertyGetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element GGS_typePropertyGetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element result ;
  const GGS_typePropertyGetterMap_2E_element * p = (const GGS_typePropertyGetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typePropertyGetterMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_::GGS_typePropertyGetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_::GGS_typePropertyGetterMap_2E_element_3F_ (const GGS_typePropertyGetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap_2E_element_3F_::init_nil (void) {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertyGetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typePropertyGetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typePropertyGetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap_2E_element_3F_::description (String & ioString,
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
//     @typePropertyGetterMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element_3F_ ("typePropertyGetterMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typePropertyGetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  const GGS_typePropertyGetterMap_2E_element_3F_ * p = (const GGS_typePropertyGetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty::GGS_propertyGetterKind_2E_storedProperty (void) :
mProperty_type (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty::~ GGS_propertyGetterKind_2E_storedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty GGS_propertyGetterKind_2E_storedProperty::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                                 const GGS_uint & in_index,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty::GGS_propertyGetterKind_2E_storedProperty (const GGS_omnibusType & inOperand0,
                                                                                    const GGS_uint & inOperand1) :
mProperty_type (inOperand0),
mProperty_index (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty GGS_propertyGetterKind_2E_storedProperty::class_func_new (const GGS_omnibusType & in_type,
                                                                                                   const GGS_uint & in_index,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_storedProperty::isValid (void) const {
  return mProperty_type.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty::drop (void) {
  mProperty_type.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterKind.storedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind.storedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty ("propertyGetterKind.storedProperty",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind_2E_storedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_storedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_storedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty GGS_propertyGetterKind_2E_storedProperty::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty result ;
  const GGS_propertyGetterKind_2E_storedProperty * p = (const GGS_propertyGetterKind_2E_storedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_storedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.storedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyGetterKind_2E_storedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_::GGS_propertyGetterKind_2E_storedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_::GGS_propertyGetterKind_2E_storedProperty_3F_ (const GGS_propertyGetterKind_2E_storedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_ GGS_propertyGetterKind_2E_storedProperty_3F_::init_nil (void) {
  GGS_propertyGetterKind_2E_storedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterKind_2E_storedProperty_3F_::isValid (void) const {
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

bool GGS_propertyGetterKind_2E_storedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterKind_2E_storedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind_2E_storedProperty_3F_::description (String & ioString,
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
//     @propertyGetterKind.storedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty_3F_ ("propertyGetterKind.storedProperty?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind_2E_storedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind_2E_storedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind_2E_storedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_ GGS_propertyGetterKind_2E_storedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind_2E_storedProperty_3F_ result ;
  const GGS_propertyGetterKind_2E_storedProperty_3F_ * p = (const GGS_propertyGetterKind_2E_storedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind_2E_storedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind.storedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element::GGS_propertyGetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element::~ GGS_propertyGetterMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGetterMap_2E_element GGS_propertyGetterMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_propertyVisibility & in_mVisibility,
                                                                                     const GGS_propertyGetterKind & in_mAccess,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element::GGS_propertyGetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_propertyVisibility & inOperand1,
                                                                    const GGS_propertyGetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element GGS_propertyGetterMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_propertyVisibility & in_mVisibility,
                                                                                   const GGS_propertyGetterKind & in_mAccess,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGetterMap.element:") ;
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
//     @propertyGetterMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element ("propertyGetterMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element GGS_propertyGetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element result ;
  const GGS_propertyGetterMap_2E_element * p = (const GGS_propertyGetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyGetterMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_::GGS_propertyGetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_::GGS_propertyGetterMap_2E_element_3F_ (const GGS_propertyGetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap_2E_element_3F_::init_nil (void) {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_propertyGetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyGetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap_2E_element_3F_::description (String & ioString,
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
//     @propertyGetterMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element_3F_ ("propertyGetterMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  const GGS_propertyGetterMap_2E_element_3F_ * p = (const GGS_propertyGetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element::GGS_typePropertySetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSetterMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element::~ GGS_typePropertySetterMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element GGS_typePropertySetterMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_propertySetterMap & in_mSetterMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSetterMap = in_mSetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element::GGS_typePropertySetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_propertySetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mSetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element GGS_typePropertySetterMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                           const GGS_propertySetterMap & in_mSetterMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSetterMap = in_mSetterMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertySetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typePropertySetterMap.element:") ;
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
//     @typePropertySetterMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ("typePropertySetterMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typePropertySetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertySetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertySetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element GGS_typePropertySetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element result ;
  const GGS_typePropertySetterMap_2E_element * p = (const GGS_typePropertySetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertySetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typePropertySetterMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_::GGS_typePropertySetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_::GGS_typePropertySetterMap_2E_element_3F_ (const GGS_typePropertySetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_ GGS_typePropertySetterMap_2E_element_3F_::init_nil (void) {
  GGS_typePropertySetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertySetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_typePropertySetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typePropertySetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap_2E_element_3F_::description (String & ioString,
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
//     @typePropertySetterMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ("typePropertySetterMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typePropertySetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertySetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertySetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_ GGS_typePropertySetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap_2E_element_3F_ result ;
  const GGS_typePropertySetterMap_2E_element_3F_ * p = (const GGS_typePropertySetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertySetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element::GGS_propertySetterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element::~ GGS_propertySetterMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertySetterMap_2E_element GGS_propertySetterMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_propertyVisibility & in_mVisibility,
                                                                                     const GGS_propertySetterKind & in_mAccess,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element::GGS_propertySetterMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_propertyVisibility & inOperand1,
                                                                    const GGS_propertySetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element GGS_propertySetterMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_propertyVisibility & in_mVisibility,
                                                                                   const GGS_propertySetterKind & in_mAccess,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVisibility = in_mVisibility ;
  result.mProperty_mAccess = in_mAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterMap.element:") ;
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
//     @propertySetterMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element ("propertySetterMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element GGS_propertySetterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element result ;
  const GGS_propertySetterMap_2E_element * p = (const GGS_propertySetterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertySetterMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_::GGS_propertySetterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_::GGS_propertySetterMap_2E_element_3F_ (const GGS_propertySetterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap_2E_element_3F_::init_nil (void) {
  GGS_propertySetterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterMap_2E_element_3F_::isValid (void) const {
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

bool GGS_propertySetterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertySetterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap_2E_element_3F_::description (String & ioString,
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
//     @propertySetterMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element_3F_ ("propertySetterMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap_2E_element_3F_ result ;
  const GGS_propertySetterMap_2E_element_3F_ * p = (const GGS_propertySetterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty::GGS_propertySetterKind_2E_storedProperty (void) :
mProperty_type (),
mProperty_index () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty::~ GGS_propertySetterKind_2E_storedProperty (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty GGS_propertySetterKind_2E_storedProperty::init_21__21_ (const GGS_omnibusType & in_type,
                                                                                                 const GGS_uint & in_index,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty::GGS_propertySetterKind_2E_storedProperty (const GGS_omnibusType & inOperand0,
                                                                                    const GGS_uint & inOperand1) :
mProperty_type (inOperand0),
mProperty_index (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty GGS_propertySetterKind_2E_storedProperty::class_func_new (const GGS_omnibusType & in_type,
                                                                                                   const GGS_uint & in_index,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_index = in_index ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_storedProperty::isValid (void) const {
  return mProperty_type.isValid () && mProperty_index.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty::drop (void) {
  mProperty_type.drop () ;
  mProperty_index.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertySetterKind.storedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_index.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterKind.storedProperty generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty ("propertySetterKind.storedProperty",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterKind_2E_storedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_storedProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_storedProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty GGS_propertySetterKind_2E_storedProperty::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty result ;
  const GGS_propertySetterKind_2E_storedProperty * p = (const GGS_propertySetterKind_2E_storedProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_storedProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.storedProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertySetterKind_2E_storedProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_::GGS_propertySetterKind_2E_storedProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_::GGS_propertySetterKind_2E_storedProperty_3F_ (const GGS_propertySetterKind_2E_storedProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_ GGS_propertySetterKind_2E_storedProperty_3F_::init_nil (void) {
  GGS_propertySetterKind_2E_storedProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterKind_2E_storedProperty_3F_::isValid (void) const {
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

bool GGS_propertySetterKind_2E_storedProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertySetterKind_2E_storedProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind_2E_storedProperty_3F_::description (String & ioString,
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
//     @propertySetterKind.storedProperty? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty_3F_ ("propertySetterKind.storedProperty?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterKind_2E_storedProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind_2E_storedProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind_2E_storedProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_ GGS_propertySetterKind_2E_storedProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind_2E_storedProperty_3F_ result ;
  const GGS_propertySetterKind_2E_storedProperty_3F_ * p = (const GGS_propertySetterKind_2E_storedProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind_2E_storedProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind.storedProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element::GGS_globalStructuredConstantList_2E_element (void) :
mProperty_mType (),
mProperty_mOperandIRList () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element::~ GGS_globalStructuredConstantList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element GGS_globalStructuredConstantList_2E_element::init_21__21_ (const GGS_omnibusType & in_mType,
                                                                                                       const GGS_operandIRList & in_mOperandIRList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalStructuredConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mOperandIRList = in_mOperandIRList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element::GGS_globalStructuredConstantList_2E_element (const GGS_omnibusType & inOperand0,
                                                                                          const GGS_operandIRList & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mOperandIRList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element GGS_globalStructuredConstantList_2E_element::class_func_new (const GGS_omnibusType & in_mType,
                                                                                                         const GGS_operandIRList & in_mOperandIRList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalStructuredConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mOperandIRList = in_mOperandIRList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalStructuredConstantList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mOperandIRList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mOperandIRList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalStructuredConstantList.element:") ;
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
//     @globalStructuredConstantList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2E_element ("globalStructuredConstantList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalStructuredConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalStructuredConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalStructuredConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element GGS_globalStructuredConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_globalStructuredConstantList_2E_element result ;
  const GGS_globalStructuredConstantList_2E_element * p = (const GGS_globalStructuredConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalStructuredConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element::GGS_staticStringMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element::~ GGS_staticStringMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_staticStringMap_2E_element GGS_staticStringMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element::GGS_staticStringMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element GGS_staticStringMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               const GGS_uint & in_mIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticStringMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @staticStringMap.element:") ;
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
//     @staticStringMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element ("staticStringMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticStringMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticStringMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticStringMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element GGS_staticStringMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element result ;
  const GGS_staticStringMap_2E_element * p = (const GGS_staticStringMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticStringMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @staticStringMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_::GGS_staticStringMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_::GGS_staticStringMap_2E_element_3F_ (const GGS_staticStringMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap_2E_element_3F_::init_nil (void) {
  GGS_staticStringMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticStringMap_2E_element_3F_::isValid (void) const {
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

bool GGS_staticStringMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_staticStringMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap_2E_element_3F_::description (String & ioString,
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
//     @staticStringMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element_3F_ ("staticStringMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticStringMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticStringMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticStringMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticStringMap_2E_element_3F_ result ;
  const GGS_staticStringMap_2E_element_3F_ * p = (const GGS_staticStringMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticStringMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element::GGS_globalConstantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element::~ GGS_globalConstantMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_globalConstantMap_2E_element GGS_globalConstantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_objectIR & in_mValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element::GGS_globalConstantMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element GGS_globalConstantMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_objectIR & in_mValue,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @globalConstantMap.element:") ;
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
//     @globalConstantMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element ("globalConstantMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element GGS_globalConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element result ;
  const GGS_globalConstantMap_2E_element * p = (const GGS_globalConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @globalConstantMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_::GGS_globalConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_::GGS_globalConstantMap_2E_element_3F_ (const GGS_globalConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_ GGS_globalConstantMap_2E_element_3F_::init_nil (void) {
  GGS_globalConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalConstantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_globalConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_globalConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap_2E_element_3F_::description (String & ioString,
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
//     @globalConstantMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ("globalConstantMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_ GGS_globalConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap_2E_element_3F_ result ;
  const GGS_globalConstantMap_2E_element_3F_ * p = (const GGS_globalConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element::GGS_availableInterruptMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element::~ GGS_availableInterruptMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_availableInterruptMap_2E_element GGS_availableInterruptMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element::GGS_availableInterruptMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element GGS_availableInterruptMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                           const GGS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInterruptionPanicCode = in_mInterruptionPanicCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_availableInterruptMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @availableInterruptMap.element:") ;
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
//     @availableInterruptMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element ("availableInterruptMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_availableInterruptMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_availableInterruptMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_availableInterruptMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element GGS_availableInterruptMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element result ;
  const GGS_availableInterruptMap_2E_element * p = (const GGS_availableInterruptMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_availableInterruptMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @availableInterruptMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_::GGS_availableInterruptMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_::GGS_availableInterruptMap_2E_element_3F_ (const GGS_availableInterruptMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_ GGS_availableInterruptMap_2E_element_3F_::init_nil (void) {
  GGS_availableInterruptMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_availableInterruptMap_2E_element_3F_::isValid (void) const {
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

bool GGS_availableInterruptMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_availableInterruptMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap_2E_element_3F_::description (String & ioString,
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
//     @availableInterruptMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element_3F_ ("availableInterruptMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_availableInterruptMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_availableInterruptMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_availableInterruptMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_ GGS_availableInterruptMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap_2E_element_3F_ result ;
  const GGS_availableInterruptMap_2E_element_3F_ * p = (const GGS_availableInterruptMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_availableInterruptMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript::GGS_subscript_2E_staticSubscript (void) :
mProperty_elementType (),
mProperty_size () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript::~ GGS_subscript_2E_staticSubscript (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_subscript_2E_staticSubscript GGS_subscript_2E_staticSubscript::init_21__21_ (const GGS_omnibusType & in_elementType,
                                                                                 const GGS_bigint & in_size,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscript_2E_staticSubscript result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript_2E_staticSubscript::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript::GGS_subscript_2E_staticSubscript (const GGS_omnibusType & inOperand0,
                                                                    const GGS_bigint & inOperand1) :
mProperty_elementType (inOperand0),
mProperty_size (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript GGS_subscript_2E_staticSubscript::class_func_new (const GGS_omnibusType & in_elementType,
                                                                                   const GGS_bigint & in_size,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscript_2E_staticSubscript result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscript_2E_staticSubscript::isValid (void) const {
  return mProperty_elementType.isValid () && mProperty_size.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript_2E_staticSubscript::drop (void) {
  mProperty_elementType.drop () ;
  mProperty_size.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript_2E_staticSubscript::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @subscript.staticSubscript:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_elementType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_size.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @subscript.staticSubscript generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript_2E_staticSubscript ("subscript.staticSubscript",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscript_2E_staticSubscript::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscript_2E_staticSubscript ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscript_2E_staticSubscript::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscript_2E_staticSubscript (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript GGS_subscript_2E_staticSubscript::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_subscript_2E_staticSubscript result ;
  const GGS_subscript_2E_staticSubscript * p = (const GGS_subscript_2E_staticSubscript *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscript_2E_staticSubscript *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscript.staticSubscript", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @subscript_2E_staticSubscript_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript_3F_::GGS_subscript_2E_staticSubscript_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript_3F_::GGS_subscript_2E_staticSubscript_3F_ (const GGS_subscript_2E_staticSubscript & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript_3F_ GGS_subscript_2E_staticSubscript_3F_::init_nil (void) {
  GGS_subscript_2E_staticSubscript_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscript_2E_staticSubscript_3F_::isValid (void) const {
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

bool GGS_subscript_2E_staticSubscript_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript_2E_staticSubscript_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_subscript_2E_staticSubscript () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript_2E_staticSubscript_3F_::description (String & ioString,
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
//     @subscript.staticSubscript? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript_2E_staticSubscript_3F_ ("subscript.staticSubscript?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscript_2E_staticSubscript_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscript_2E_staticSubscript_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscript_2E_staticSubscript_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscript_2E_staticSubscript_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript_3F_ GGS_subscript_2E_staticSubscript_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_subscript_2E_staticSubscript_3F_ result ;
  const GGS_subscript_2E_staticSubscript_3F_ * p = (const GGS_subscript_2E_staticSubscript_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscript_2E_staticSubscript_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscript.staticSubscript?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType::GGS_typeKind_2E_staticArrayType (void) :
mProperty_elementType (),
mProperty_size () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType::~ GGS_typeKind_2E_staticArrayType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType GGS_typeKind_2E_staticArrayType::init_21__21_ (const GGS_omnibusType & in_elementType,
                                                                               const GGS_bigint & in_size,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_staticArrayType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_staticArrayType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType::GGS_typeKind_2E_staticArrayType (const GGS_omnibusType & inOperand0,
                                                                  const GGS_bigint & inOperand1) :
mProperty_elementType (inOperand0),
mProperty_size (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType GGS_typeKind_2E_staticArrayType::class_func_new (const GGS_omnibusType & in_elementType,
                                                                                 const GGS_bigint & in_size,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_staticArrayType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_staticArrayType::objectCompare (const GGS_typeKind_2E_staticArrayType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_elementType.objectCompare (inOperand.mProperty_elementType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_size.objectCompare (inOperand.mProperty_size) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_staticArrayType::isValid (void) const {
  return mProperty_elementType.isValid () && mProperty_size.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_staticArrayType::drop (void) {
  mProperty_elementType.drop () ;
  mProperty_size.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_staticArrayType::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.staticArrayType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_elementType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_size.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.staticArrayType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType ("typeKind.staticArrayType",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_staticArrayType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_staticArrayType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_staticArrayType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType GGS_typeKind_2E_staticArrayType::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_staticArrayType result ;
  const GGS_typeKind_2E_staticArrayType * p = (const GGS_typeKind_2E_staticArrayType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_staticArrayType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.staticArrayType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_staticArrayType_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType_3F_::GGS_typeKind_2E_staticArrayType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType_3F_::GGS_typeKind_2E_staticArrayType_3F_ (const GGS_typeKind_2E_staticArrayType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType_3F_ GGS_typeKind_2E_staticArrayType_3F_::init_nil (void) {
  GGS_typeKind_2E_staticArrayType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_staticArrayType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_staticArrayType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_staticArrayType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_staticArrayType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_staticArrayType_3F_::objectCompare (const GGS_typeKind_2E_staticArrayType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_staticArrayType_3F_::description (String & ioString,
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
//     @typeKind.staticArrayType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType_3F_ ("typeKind.staticArrayType?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_staticArrayType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_staticArrayType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_staticArrayType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType_3F_ GGS_typeKind_2E_staticArrayType_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_staticArrayType_3F_ result ;
  const GGS_typeKind_2E_staticArrayType_3F_ * p = (const GGS_typeKind_2E_staticArrayType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_staticArrayType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.staticArrayType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType::GGS_typeKind_2E_dynamicArrayType (void) :
mProperty_elementType () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType::~ GGS_typeKind_2E_dynamicArrayType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType GGS_typeKind_2E_dynamicArrayType::init_21_ (const GGS_omnibusType & in_elementType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_dynamicArrayType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_dynamicArrayType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType::GGS_typeKind_2E_dynamicArrayType (const GGS_omnibusType & inOperand0) :
mProperty_elementType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType GGS_typeKind_2E_dynamicArrayType::class_func_new (const GGS_omnibusType & in_elementType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_dynamicArrayType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_elementType = in_elementType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_dynamicArrayType::objectCompare (const GGS_typeKind_2E_dynamicArrayType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_elementType.objectCompare (inOperand.mProperty_elementType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_dynamicArrayType::isValid (void) const {
  return mProperty_elementType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_dynamicArrayType::drop (void) {
  mProperty_elementType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_dynamicArrayType::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.dynamicArrayType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_elementType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind.dynamicArrayType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType ("typeKind.dynamicArrayType",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_dynamicArrayType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_dynamicArrayType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_dynamicArrayType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType GGS_typeKind_2E_dynamicArrayType::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_dynamicArrayType result ;
  const GGS_typeKind_2E_dynamicArrayType * p = (const GGS_typeKind_2E_dynamicArrayType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_dynamicArrayType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.dynamicArrayType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeKind_2E_dynamicArrayType_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType_3F_::GGS_typeKind_2E_dynamicArrayType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType_3F_::GGS_typeKind_2E_dynamicArrayType_3F_ (const GGS_typeKind_2E_dynamicArrayType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType_3F_ GGS_typeKind_2E_dynamicArrayType_3F_::init_nil (void) {
  GGS_typeKind_2E_dynamicArrayType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_dynamicArrayType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_dynamicArrayType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_dynamicArrayType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_dynamicArrayType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_dynamicArrayType_3F_::objectCompare (const GGS_typeKind_2E_dynamicArrayType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_dynamicArrayType_3F_::description (String & ioString,
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
//     @typeKind.dynamicArrayType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType_3F_ ("typeKind.dynamicArrayType?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_dynamicArrayType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_dynamicArrayType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_dynamicArrayType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType_3F_ GGS_typeKind_2E_dynamicArrayType_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_dynamicArrayType_3F_ result ;
  const GGS_typeKind_2E_dynamicArrayType_3F_ * p = (const GGS_typeKind_2E_dynamicArrayType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_dynamicArrayType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.dynamicArrayType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element::GGS_arcAssignmentList_2E_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType (),
mProperty_mPropertyIndexPath () {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element::~ GGS_arcAssignmentList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_arcAssignmentList_2E_element GGS_arcAssignmentList_2E_element::init_21__21__21_ (const GGS_string & in_mPropertyName,
                                                                                     const GGS_omnibusType & in_mPropertyType,
                                                                                     const GGS_uintlist & in_mPropertyIndexPath,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arcAssignmentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  result.mProperty_mPropertyIndexPath = in_mPropertyIndexPath ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element::GGS_arcAssignmentList_2E_element (const GGS_string & inOperand0,
                                                                    const GGS_omnibusType & inOperand1,
                                                                    const GGS_uintlist & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1),
mProperty_mPropertyIndexPath (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element GGS_arcAssignmentList_2E_element::class_func_new (const GGS_string & in_mPropertyName,
                                                                                   const GGS_omnibusType & in_mPropertyType,
                                                                                   const GGS_uintlist & in_mPropertyIndexPath,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arcAssignmentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mPropertyType = in_mPropertyType ;
  result.mProperty_mPropertyIndexPath = in_mPropertyIndexPath ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_arcAssignmentList_2E_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () && mProperty_mPropertyIndexPath.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList_2E_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
  mProperty_mPropertyIndexPath.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @arcAssignmentList.element:") ;
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
//     @arcAssignmentList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList_2E_element ("arcAssignmentList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arcAssignmentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arcAssignmentList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arcAssignmentList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element GGS_arcAssignmentList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList_2E_element result ;
  const GGS_arcAssignmentList_2E_element * p = (const GGS_arcAssignmentList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arcAssignmentList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::~ GGS_unifiedTypeMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_unifiedTypeMapElementClass & in_mElement,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element::GGS_unifiedTypeMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                             const GGS_unifiedTypeMapElementClass & in_mElement,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMap.element:") ;
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
//     @unifiedTypeMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ("unifiedTypeMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element GGS_unifiedTypeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element result ;
  const GGS_unifiedTypeMap_2E_element * p = (const GGS_unifiedTypeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @unifiedTypeMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_::GGS_unifiedTypeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_::GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap_2E_element_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap_2E_element_3F_::description (String & ioString,
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
//     @unifiedTypeMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ("unifiedTypeMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  const GGS_unifiedTypeMap_2E_element_3F_ * p = (const GGS_unifiedTypeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::~ GGS_typeDefinition_2E_solved (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::init_21_ (const GGS_omnibusType & in_type,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved::GGS_typeDefinition_2E_solved (const GGS_omnibusType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::class_func_new (const GGS_omnibusType & in_type,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeDefinition.solved:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeDefinition.solved generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ("typeDefinition.solved",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDefinition_2E_solved::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition_2E_solved::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition_2E_solved (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved GGS_typeDefinition_2E_solved::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved result ;
  const GGS_typeDefinition_2E_solved * p = (const GGS_typeDefinition_2E_solved *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition_2E_solved *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition.solved", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @typeDefinition_2E_solved_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_::GGS_typeDefinition_2E_solved_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_::GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition_2E_solved_3F_::init_nil (void) {
  GGS_typeDefinition_2E_solved_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeDefinition_2E_solved_3F_::isValid (void) const {
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

bool GGS_typeDefinition_2E_solved_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeDefinition_2E_solved () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition_2E_solved_3F_::description (String & ioString,
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
//     @typeDefinition.solved? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ("typeDefinition.solved?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDefinition_2E_solved_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition_2E_solved_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition_2E_solved_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition_2E_solved_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeDefinition_2E_solved_3F_ result ;
  const GGS_typeDefinition_2E_solved_3F_ * p = (const GGS_typeDefinition_2E_solved_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition_2E_solved_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition.solved?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (void) :
mProperty_weakElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::~ GGS_unifiedTypeMapEntry_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::init_21_ (const GGS_unifiedTypeMapElementClass_3F_ & in_weakElement,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element::GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_3F_ & inOperand0) :
mProperty_weakElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::class_func_new (const GGS_unifiedTypeMapElementClass_3F_ & in_weakElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakElement = in_weakElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element::objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_weakElement.objectCompare (inOperand.mProperty_weakElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element::isValid (void) const {
  return mProperty_weakElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::drop (void) {
  mProperty_weakElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntry.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntry.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ("unifiedTypeMapEntry.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntry_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element GGS_unifiedTypeMapEntry_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element result ;
  const GGS_unifiedTypeMapEntry_2E_element * p = (const GGS_unifiedTypeMapEntry_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @unifiedTypeMapEntry_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_::GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::init_nil (void) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValid (void) const {
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

bool GGS_unifiedTypeMapEntry_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unifiedTypeMapEntry_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry_2E_element_3F_::objectCompare (const GGS_unifiedTypeMapEntry_2E_element_3F_ & inOperand) const {
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

void GGS_unifiedTypeMapEntry_2E_element_3F_::description (String & ioString,
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
//     @unifiedTypeMapEntry.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ("unifiedTypeMapEntry.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntry_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  const GGS_unifiedTypeMapEntry_2E_element_3F_ * p = (const GGS_unifiedTypeMapEntry_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element::GGS_enumerationConstantList_2E_element (void) :
mProperty_mConstantName (),
mProperty_mConstantValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element::~ GGS_enumerationConstantList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumerationConstantList_2E_element GGS_enumerationConstantList_2E_element::init_21__21_ (const GGS_lstring & in_mConstantName,
                                                                                             const GGS_bigint & in_mConstantValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mConstantValue = in_mConstantValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element::GGS_enumerationConstantList_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_bigint & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mConstantValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element GGS_enumerationConstantList_2E_element::class_func_new (const GGS_lstring & in_mConstantName,
                                                                                               const GGS_bigint & in_mConstantValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mConstantValue = in_mConstantValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumerationConstantList_2E_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mConstantValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList_2E_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mConstantValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationConstantList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationConstantList.element:") ;
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
//     @enumerationConstantList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList_2E_element ("enumerationConstantList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationConstantList_2E_element GGS_enumerationConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumerationConstantList_2E_element result ;
  const GGS_enumerationConstantList_2E_element * p = (const GGS_enumerationConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element::GGS_propertyAttributeList_2E_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element::~ GGS_propertyAttributeList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyAttributeList_2E_element GGS_propertyAttributeList_2E_element::init_21__21_ (const GGS_lstring & in_mAttributeName,
                                                                                         const GGS_lbigint & in_mAttributeValue,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAttributeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAttributeValue = in_mAttributeValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element::GGS_propertyAttributeList_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_lbigint & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element GGS_propertyAttributeList_2E_element::class_func_new (const GGS_lstring & in_mAttributeName,
                                                                                           const GGS_lbigint & in_mAttributeValue,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAttributeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAttributeValue = in_mAttributeValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyAttributeList_2E_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList_2E_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyAttributeList.element:") ;
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
//     @propertyAttributeList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAttributeList_2E_element ("propertyAttributeList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAttributeList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAttributeList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAttributeList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element GGS_propertyAttributeList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyAttributeList_2E_element result ;
  const GGS_propertyAttributeList_2E_element * p = (const GGS_propertyAttributeList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAttributeList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element::GGS_propertyList_2E_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element::~ GGS_propertyList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyList_2E_element GGS_propertyList_2E_element::init_21__21_ (const GGS_string & in_mPropertyName,
                                                                       const GGS_omnibusType & in_mType,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element::GGS_propertyList_2E_element (const GGS_string & inOperand0,
                                                          const GGS_omnibusType & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element GGS_propertyList_2E_element::class_func_new (const GGS_string & in_mPropertyName,
                                                                         const GGS_omnibusType & in_mType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyList_2E_element::objectCompare (const GGS_propertyList_2E_element & inOperand) const {
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

bool GGS_propertyList_2E_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList_2E_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyList.element:") ;
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
//     @propertyList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList_2E_element ("propertyList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element GGS_propertyList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyList_2E_element result ;
  const GGS_propertyList_2E_element * p = (const GGS_propertyList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element::GGS_controlRegisterNameListAST_2E_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mIsReadOnly (),
mProperty_mRegisterOffset (),
mProperty_mRegisterOffsetLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element::~ GGS_controlRegisterNameListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element GGS_controlRegisterNameListAST_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mRegisterName,
                                                                                                               const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                               const GGS_bool & in_mIsReadOnly,
                                                                                                               const GGS_expressionAST & in_mRegisterOffset,
                                                                                                               const GGS_location & in_mRegisterOffsetLocation,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mControlRegisterKind = in_mControlRegisterKind ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mRegisterOffset = in_mRegisterOffset ;
  result.mProperty_mRegisterOffsetLocation = in_mRegisterOffsetLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element::GGS_controlRegisterNameListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_controlRegisterKind & inOperand1,
                                                                                      const GGS_bool & inOperand2,
                                                                                      const GGS_expressionAST & inOperand3,
                                                                                      const GGS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mRegisterOffset (inOperand3),
mProperty_mRegisterOffsetLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element GGS_controlRegisterNameListAST_2E_element::class_func_new (const GGS_lstring & in_mRegisterName,
                                                                                                     const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                     const GGS_bool & in_mIsReadOnly,
                                                                                                     const GGS_expressionAST & in_mRegisterOffset,
                                                                                                     const GGS_location & in_mRegisterOffsetLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mControlRegisterKind = in_mControlRegisterKind ;
  result.mProperty_mIsReadOnly = in_mIsReadOnly ;
  result.mProperty_mRegisterOffset = in_mRegisterOffset ;
  result.mProperty_mRegisterOffsetLocation = in_mRegisterOffsetLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterNameListAST_2E_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mRegisterOffset.isValid () && mProperty_mRegisterOffsetLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST_2E_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mRegisterOffset.drop () ;
  mProperty_mRegisterOffsetLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterNameListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterNameListAST.element:") ;
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
//     @controlRegisterNameListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2E_element ("controlRegisterNameListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterNameListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterNameListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterNameListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterNameListAST_2E_element GGS_controlRegisterNameListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterNameListAST_2E_element result ;
  const GGS_controlRegisterNameListAST_2E_element * p = (const GGS_controlRegisterNameListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterNameListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits::GGS_controlRegisterBitSlice_2E_unusedBits (void) :
mProperty_count () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_unusedBits::~ GGS_controlRegisterBitSlice_2E_unusedBits (void) {
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

GGS_controlRegisterBitSlice_2E_unusedBits GGS_controlRegisterBitSlice_2E_unusedBits::class_func_new (const GGS_lbigint & in_count,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_unusedBits result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_count = in_count ;
  return result ;
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
//
//     @controlRegisterBitSlice.unusedBits generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits ("controlRegisterBitSlice.unusedBits",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterBitSlice_2E_unusedBits::staticTypeDescriptor (void) const {
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
//
//Optional @controlRegisterBitSlice_2E_unusedBits_3F_
//
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
//
//     @controlRegisterBitSlice.unusedBits? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits_3F_ ("controlRegisterBitSlice.unusedBits?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterBitSlice_2E_unusedBits_3F_::staticTypeDescriptor (void) const {
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

GGS_controlRegisterBitSlice_2E_namedBit::GGS_controlRegisterBitSlice_2E_namedBit (void) :
mProperty_name (),
mProperty_count () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit::~ GGS_controlRegisterBitSlice_2E_namedBit (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit GGS_controlRegisterBitSlice_2E_namedBit::init_21__21_ (const GGS_lstring & in_name,
                                                                                               const GGS_lbigint & in_count,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_count = in_count ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit::GGS_controlRegisterBitSlice_2E_namedBit (const GGS_lstring & inOperand0,
                                                                                  const GGS_lbigint & inOperand1) :
mProperty_name (inOperand0),
mProperty_count (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit GGS_controlRegisterBitSlice_2E_namedBit::class_func_new (const GGS_lstring & in_name,
                                                                                                 const GGS_lbigint & in_count,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_count = in_count ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSlice_2E_namedBit::isValid (void) const {
  return mProperty_name.isValid () && mProperty_count.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit::drop (void) {
  mProperty_name.drop () ;
  mProperty_count.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterBitSlice.namedBit:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_count.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterBitSlice.namedBit generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit ("controlRegisterBitSlice.namedBit",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterBitSlice_2E_namedBit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice_2E_namedBit::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice_2E_namedBit (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit GGS_controlRegisterBitSlice_2E_namedBit::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit result ;
  const GGS_controlRegisterBitSlice_2E_namedBit * p = (const GGS_controlRegisterBitSlice_2E_namedBit *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice_2E_namedBit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice.namedBit", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterBitSlice_2E_namedBit_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_::GGS_controlRegisterBitSlice_2E_namedBit_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_::GGS_controlRegisterBitSlice_2E_namedBit_3F_ (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_ GGS_controlRegisterBitSlice_2E_namedBit_3F_::init_nil (void) {
  GGS_controlRegisterBitSlice_2E_namedBit_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterBitSlice_2E_namedBit_3F_::isValid (void) const {
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

bool GGS_controlRegisterBitSlice_2E_namedBit_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterBitSlice_2E_namedBit () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterBitSlice_2E_namedBit_3F_::description (String & ioString,
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
//     @controlRegisterBitSlice.namedBit? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit_3F_ ("controlRegisterBitSlice.namedBit?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterBitSlice_2E_namedBit_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterBitSlice_2E_namedBit_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterBitSlice_2E_namedBit_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterBitSlice_2E_namedBit_3F_ GGS_controlRegisterBitSlice_2E_namedBit_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterBitSlice_2E_namedBit_3F_ result ;
  const GGS_controlRegisterBitSlice_2E_namedBit_3F_ * p = (const GGS_controlRegisterBitSlice_2E_namedBit_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterBitSlice_2E_namedBit_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice.namedBit?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single::GGS_controlRegisterGroupKindAST_2E_single (void) :
mProperty_registerGroupBaseAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupKindAST_2E_single::~ GGS_controlRegisterGroupKindAST_2E_single (void) {
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

GGS_controlRegisterGroupKindAST_2E_single GGS_controlRegisterGroupKindAST_2E_single::class_func_new (const GGS_lbigint & in_registerGroupBaseAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupKindAST_2E_single result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_registerGroupBaseAddress = in_registerGroupBaseAddress ;
  return result ;
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
//
//     @controlRegisterGroupKindAST.single generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single ("controlRegisterGroupKindAST.single",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterGroupKindAST_2E_single::staticTypeDescriptor (void) const {
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
//
//Optional @controlRegisterGroupKindAST_2E_single_3F_
//
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
//
//     @controlRegisterGroupKindAST.single? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single_3F_ ("controlRegisterGroupKindAST.single?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterGroupKindAST_2E_single_3F_::staticTypeDescriptor (void) const {
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

GGS_registerGroupListAST_2E_element::GGS_registerGroupListAST_2E_element (void) :
mProperty_mRegisterGroupName (),
mProperty_mControlRegisterGroupKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element::~ GGS_registerGroupListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerGroupListAST_2E_element GGS_registerGroupListAST_2E_element::init_21__21_ (const GGS_lstring & in_mRegisterGroupName,
                                                                                       const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element::GGS_registerGroupListAST_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_controlRegisterGroupKindAST & inOperand1) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mControlRegisterGroupKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element GGS_registerGroupListAST_2E_element::class_func_new (const GGS_lstring & in_mRegisterGroupName,
                                                                                         const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mControlRegisterGroupKind = in_mControlRegisterGroupKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerGroupListAST_2E_element::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mControlRegisterGroupKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST_2E_element::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mControlRegisterGroupKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupListAST_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerGroupListAST.element:") ;
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
//     @registerGroupListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupListAST_2E_element ("registerGroupListAST.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerGroupListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupListAST_2E_element GGS_registerGroupListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerGroupListAST_2E_element result ;
  const GGS_registerGroupListAST_2E_element * p = (const GGS_registerGroupListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element::GGS_controlRegisterUserAccesMapAST_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element::~ GGS_controlRegisterUserAccesMapAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element GGS_controlRegisterUserAccesMapAST_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element::GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element GGS_controlRegisterUserAccesMapAST_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterUserAccesMapAST_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterUserAccesMapAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ("controlRegisterUserAccesMapAST.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterUserAccesMapAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterUserAccesMapAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterUserAccesMapAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element GGS_controlRegisterUserAccesMapAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element result ;
  const GGS_controlRegisterUserAccesMapAST_2E_element * p = (const GGS_controlRegisterUserAccesMapAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterUserAccesMapAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterUserAccesMapAST_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_::GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_::GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_ GGS_controlRegisterUserAccesMapAST_2E_element_3F_::init_nil (void) {
  GGS_controlRegisterUserAccesMapAST_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterUserAccesMapAST_2E_element_3F_::isValid (void) const {
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

bool GGS_controlRegisterUserAccesMapAST_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterUserAccesMapAST_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST_2E_element_3F_::description (String & ioString,
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
//     @controlRegisterUserAccesMapAST.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ("controlRegisterUserAccesMapAST.element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterUserAccesMapAST_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterUserAccesMapAST_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_ GGS_controlRegisterUserAccesMapAST_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST_2E_element_3F_ result ;
  const GGS_controlRegisterUserAccesMapAST_2E_element_3F_ * p = (const GGS_controlRegisterUserAccesMapAST_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterUserAccesMapAST_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element::GGS_controlRegisterFieldMap_2E_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element::~ GGS_controlRegisterFieldMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element GGS_controlRegisterFieldMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_uint & in_mBitIndex,
                                                                                                 const GGS_uint & in_mBitCount,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element::GGS_controlRegisterFieldMap_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_uint & inOperand1,
                                                                                const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element GGS_controlRegisterFieldMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mBitIndex,
                                                                                               const GGS_uint & in_mBitCount,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterFieldMap.element:") ;
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
//     @controlRegisterFieldMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element ("controlRegisterFieldMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterFieldMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element GGS_controlRegisterFieldMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element result ;
  const GGS_controlRegisterFieldMap_2E_element * p = (const GGS_controlRegisterFieldMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @controlRegisterFieldMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_::GGS_controlRegisterFieldMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_::GGS_controlRegisterFieldMap_2E_element_3F_ (const GGS_controlRegisterFieldMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_ GGS_controlRegisterFieldMap_2E_element_3F_::init_nil (void) {
  GGS_controlRegisterFieldMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterFieldMap_2E_element_3F_::isValid (void) const {
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

bool GGS_controlRegisterFieldMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_controlRegisterFieldMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterFieldMap_2E_element_3F_::description (String & ioString,
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
//     @controlRegisterFieldMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element_3F_ ("controlRegisterFieldMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterFieldMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterFieldMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterFieldMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap_2E_element_3F_ GGS_controlRegisterFieldMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterFieldMap_2E_element_3F_ result ;
  const GGS_controlRegisterFieldMap_2E_element_3F_ * p = (const GGS_controlRegisterFieldMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterFieldMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element::GGS_sliceMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mResultType () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element::~ GGS_sliceMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sliceMap_2E_element GGS_sliceMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                       const GGS_llvmBinaryOperation & in_mAccessOperator,
                                                                       const GGS_bigint & in_mAccessRightOperand,
                                                                       const GGS_omnibusType & in_mResultType,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element::GGS_sliceMap_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_llvmBinaryOperation & inOperand1,
                                                  const GGS_bigint & inOperand2,
                                                  const GGS_omnibusType & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mResultType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element GGS_sliceMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                 const GGS_llvmBinaryOperation & in_mAccessOperator,
                                                                 const GGS_bigint & in_mAccessRightOperand,
                                                                 const GGS_omnibusType & in_mResultType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sliceMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAccessOperator = in_mAccessOperator ;
  result.mProperty_mAccessRightOperand = in_mAccessRightOperand ;
  result.mProperty_mResultType = in_mResultType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_sliceMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mResultType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sliceMap.element:") ;
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
//     @sliceMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2E_element ("sliceMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sliceMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap_2E_element GGS_sliceMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_sliceMap_2E_element result ;
  const GGS_sliceMap_2E_element * p = (const GGS_sliceMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

