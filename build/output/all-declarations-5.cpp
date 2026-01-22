#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
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

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_expressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                      const GGS_switchCaseListAST & in_mSwitchCaseList,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_switchInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @switchInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
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

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionAST result ;
  if (isValid ()) {
    const cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionAST (p) ;
    }
  }
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
//     @switchInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ("switchInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@switchCaseListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchCaseListIR : public cCollectionElement {
  public: GGS_switchCaseListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListIR (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                               const GGS_instructionListIR & in_mCaseInstructionList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListIR (const GGS_switchCaseListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @switchCaseListIR
//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR::GGS_switchCaseListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR::GGS_switchCaseListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_switchCaseListIR * p = (cCollectionElement_switchCaseListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_switchCaseListIR) ;
    const GGS_switchCaseListIR_2E_element element (p->mObject.mProperty_mCaseIdentifierIndexes, p->mObject.mProperty_mCaseInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                      const GGS_instructionListIR & in_mCaseInstructionList
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListIR (in_mCaseIdentifierIndexes, in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchCaseListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_switchCaseListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::description (String & ioString,
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
      ioString.appendString ("mCaseIdentifierIndexes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseIdentifierIndexes.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::plusPlusAssignOperation (const GGS_switchCaseListIR_2E_element & inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::class_func_listWithValue (const GGS_uintlist & inOperand0,
                                                                     const GGS_instructionListIR & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element element (inOperand0, inOperand1) ;
  GGS_switchCaseListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::addAssignOperation (const GGS_uintlist & inOperand0,
                                               const GGS_instructionListIR & inOperand1
                                               COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_append (const GGS_uintlist inOperand0,
                                          const GGS_instructionListIR inOperand1,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_insertAtIndex (const GGS_uintlist inOperand0,
                                                 const GGS_instructionListIR inOperand1,
                                                 const GGS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_switchCaseListIR::setter_removeAtIndex (GGS_uintlist & outOperand0,
                                                 GGS_instructionListIR & outOperand1,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCaseInstructionList ;
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

void GGS_switchCaseListIR::setter_popFirst (GGS_uintlist & outOperand0,
                                            GGS_instructionListIR & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseInstructionList ;
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

void GGS_switchCaseListIR::setter_popLast (GGS_uintlist & outOperand0,
                                           GGS_instructionListIR & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseInstructionList ;
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

void GGS_switchCaseListIR::method_first (GGS_uintlist & outOperand0,
                                         GGS_instructionListIR & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseInstructionList ;
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

void GGS_switchCaseListIR::method_last (GGS_uintlist & outOperand0,
                                        GGS_instructionListIR & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseInstructionList ;
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

GGS_switchCaseListIR GGS_switchCaseListIR::add_operation (const GGS_switchCaseListIR & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
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

GGS_switchCaseListIR GGS_switchCaseListIR::subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
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

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::plusAssignOperation (const GGS_switchCaseListIR inList,
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

void GGS_switchCaseListIR::setter_setMCaseIdentifierIndexesAtIndex (GGS_uintlist inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifierIndexes = inOperand ;
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
  
GGS_uintlist GGS_switchCaseListIR::getter_mCaseIdentifierIndexesAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifierIndexes ;
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

void GGS_switchCaseListIR::setter_setMCaseInstructionListAtIndex (GGS_instructionListIR inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseInstructionList = inOperand ;
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
  
GGS_instructionListIR GGS_switchCaseListIR::getter_mCaseInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseInstructionList ;
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
// Down Enumerator for @switchCaseListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_switchCaseListIR::DownEnumerator_switchCaseListIR (const GGS_switchCaseListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element DownEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR DownEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @switchCaseListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_switchCaseListIR::UpEnumerator_switchCaseListIR (const GGS_switchCaseListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element UpEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR UpEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @switchCaseListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR ("switchCaseListIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchCaseListIR::staticTypeDescriptor (void) const {
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

cPtr_switchInstructionIR::cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (const GGS_uint & in_mLabelIndex,
                                                    const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                    const GGS_objectIR & in_mSwitchExpression,
                                                    const GGS_switchCaseListIR & in_mCaseGenerationList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_switchInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_switchInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionIR (mProperty_mLabelIndex, mProperty_mSwitchExpressionGenerationList, mProperty_mSwitchExpression, mProperty_mCaseGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @switchInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR ("switchInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionIR::staticTypeDescriptor (void) const {
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

GGS_switchInstructionIR GGS_switchInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionIR result ;
  if (isValid ()) {
    const cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionIR (p) ;
    }
  }
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
//     @switchInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ("switchInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionIR_2E_weak::staticTypeDescriptor (void) const {
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
//  Extension Getter '@compileTimePrefixOperatorEnumeration string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_compileTimePrefixOperatorEnumeration & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_compileTimePrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_string ("not") ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_string ("-") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@compileTimePrefixOperatorEnumeration prefixOperator'
//--------------------------------------------------------------------------------------------------

GGS_prefixOperator extensionGetter_prefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result_result ; // Returned variable
  const GGS_compileTimePrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 23)) ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 24)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compiletimePrefixOperatorAST_2E_weak::objectCompare (const GGS_compiletimePrefixOperatorAST_2E_weak & inOperand) const {
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

GGS_compiletimePrefixOperatorAST_2E_weak::GGS_compiletimePrefixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak & GGS_compiletimePrefixOperatorAST_2E_weak::operator = (const GGS_compiletimePrefixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak::GGS_compiletimePrefixOperatorAST_2E_weak (const GGS_compiletimePrefixOperatorAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak GGS_compiletimePrefixOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_compiletimePrefixOperatorAST result ;
  if (isValid ()) {
    const cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compiletimePrefixOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST_2E_weak::bang_compiletimePrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compiletimePrefixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compiletimePrefixOperatorAST) ;
      result = GGS_compiletimePrefixOperatorAST ((cPtr_compiletimePrefixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compiletimePrefixOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ("compiletimePrefixOperatorAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compiletimePrefixOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compiletimePrefixOperatorAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compiletimePrefixOperatorAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak GGS_compiletimePrefixOperatorAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST_2E_weak result ;
  const GGS_compiletimePrefixOperatorAST_2E_weak * p = (const GGS_compiletimePrefixOperatorAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compiletimePrefixOperatorAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimePrefixOperatorAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimePrefixOperatorUsage_2E_weak::objectCompare (const GGS_compileTimePrefixOperatorUsage_2E_weak & inOperand) const {
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

GGS_compileTimePrefixOperatorUsage_2E_weak::GGS_compileTimePrefixOperatorUsage_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak & GGS_compileTimePrefixOperatorUsage_2E_weak::operator = (const GGS_compileTimePrefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak::GGS_compileTimePrefixOperatorUsage_2E_weak (const GGS_compileTimePrefixOperatorUsage & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak GGS_compileTimePrefixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_compileTimePrefixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimePrefixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage_2E_weak::bang_compileTimePrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimePrefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimePrefixOperatorUsage) ;
      result = GGS_compileTimePrefixOperatorUsage ((cPtr_compileTimePrefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimePrefixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ("compileTimePrefixOperatorUsage.weak",
                                                                                           & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimePrefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimePrefixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimePrefixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak GGS_compileTimePrefixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage_2E_weak result ;
  const GGS_compileTimePrefixOperatorUsage_2E_weak * p = (const GGS_compileTimePrefixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimePrefixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionAST result ;
  if (isValid ()) {
    const cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionAST (p) ;
    }
  }
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
//     @forInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ("forInstructionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

GGS_forInstructionOnArrayIR GGS_forInstructionOnArrayIR_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionOnArrayIR result ;
  if (isValid ()) {
    const cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionOnArrayIR (p) ;
    }
  }
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
//     @forInstructionOnArrayIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2E_weak ("forInstructionOnArrayIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionOnArrayIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_forInstructionOnLiteralStringIR GGS_forInstructionOnLiteralStringIR_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionOnLiteralStringIR result ;
  if (isValid ()) {
    const cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionOnLiteralStringIR (p) ;
    }
  }
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
//     @forInstructionOnLiteralStringIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2E_weak ("forInstructionOnLiteralStringIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionOnLiteralStringIR_2E_weak::staticTypeDescriptor (void) const {
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
  ioObject.addAssignOperation (GGS_storeToUniversalReferenceIR::init_21__21__21_ (constinArgument_inLLVMVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 8)) ;
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

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_storeToUniversalReferenceIR result ;
  if (isValid ()) {
    const cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_storeToUniversalReferenceIR (p) ;
    }
  }
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
//     @storeToUniversalReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ("storeToUniversalReferenceIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeToUniversalReferenceIR_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@functionCallEffectiveParameterListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_functionCallEffectiveParameterListAST : public cCollectionElement {
  public: GGS_functionCallEffectiveParameterListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_functionCallEffectiveParameterListAST (const GGS_lstring & in_mSelector,
                                                                    const GGS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_functionCallEffectiveParameterListAST (const GGS_functionCallEffectiveParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionCallEffectiveParameterListAST::cCollectionElement_functionCallEffectiveParameterListAST (const GGS_lstring & in_mSelector,
                                                                                                                    const GGS_expressionAST & in_mExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionCallEffectiveParameterListAST::cCollectionElement_functionCallEffectiveParameterListAST (const GGS_functionCallEffectiveParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_functionCallEffectiveParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_functionCallEffectiveParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_functionCallEffectiveParameterListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @functionCallEffectiveParameterListAST
//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST::GGS_functionCallEffectiveParameterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST::GGS_functionCallEffectiveParameterListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_functionCallEffectiveParameterListAST * p = (cCollectionElement_functionCallEffectiveParameterListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterListAST) ;
    const GGS_functionCallEffectiveParameterListAST_2E_element element (p->mObject.mProperty_mSelector, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_lstring & in_mSelector,
                                                                           const GGS_expressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_functionCallEffectiveParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionCallEffectiveParameterListAST (in_mSelector, in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_functionCallEffectiveParameterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_functionCallEffectiveParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionCallEffectiveParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::plusPlusAssignOperation (const GGS_functionCallEffectiveParameterListAST_2E_element & inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                               const GGS_expressionAST & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_functionCallEffectiveParameterListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_functionCallEffectiveParameterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                    const GGS_expressionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_functionCallEffectiveParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::setter_append (const GGS_lstring inOperand0,
                                                               const GGS_expressionAST inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_functionCallEffectiveParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                      const GGS_expressionAST inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_functionCallEffectiveParameterListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_functionCallEffectiveParameterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                      GGS_expressionAST & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
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

void GGS_functionCallEffectiveParameterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                 GGS_expressionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_functionCallEffectiveParameterListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                GGS_expressionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
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

void GGS_functionCallEffectiveParameterListAST::method_first (GGS_lstring & outOperand0,
                                                              GGS_expressionAST & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
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

void GGS_functionCallEffectiveParameterListAST::method_last (GGS_lstring & outOperand0,
                                                             GGS_expressionAST & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
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

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::add_operation (const GGS_functionCallEffectiveParameterListAST & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_functionCallEffectiveParameterListAST result ;
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

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::subList (const int32_t inStart,
                                                                                              const int32_t inLength,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_functionCallEffectiveParameterListAST result ;
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

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_functionCallEffectiveParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_functionCallEffectiveParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_functionCallEffectiveParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionCallEffectiveParameterListAST::plusAssignOperation (const GGS_functionCallEffectiveParameterListAST inList,
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

void GGS_functionCallEffectiveParameterListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_functionCallEffectiveParameterListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
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

void GGS_functionCallEffectiveParameterListAST::setter_setMExpressionAtIndex (GGS_expressionAST inOperand,
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
  
GGS_expressionAST GGS_functionCallEffectiveParameterListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @functionCallEffectiveParameterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_functionCallEffectiveParameterListAST::DownEnumerator_functionCallEffectiveParameterListAST (const GGS_functionCallEffectiveParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element DownEnumerator_functionCallEffectiveParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_functionCallEffectiveParameterListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_functionCallEffectiveParameterListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @functionCallEffectiveParameterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_functionCallEffectiveParameterListAST::UpEnumerator_functionCallEffectiveParameterListAST (const GGS_functionCallEffectiveParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST_2E_element UpEnumerator_functionCallEffectiveParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_functionCallEffectiveParameterListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_functionCallEffectiveParameterListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @functionCallEffectiveParameterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST ("functionCallEffectiveParameterListAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallEffectiveParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallEffectiveParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallEffectiveParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_functionCallEffectiveParameterListAST result ;
  const GGS_functionCallEffectiveParameterListAST * p = (const GGS_functionCallEffectiveParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallEffectiveParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constructorCallAST_2E_weak::objectCompare (const GGS_constructorCallAST_2E_weak & inOperand) const {
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

GGS_constructorCallAST_2E_weak::GGS_constructorCallAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST_2E_weak & GGS_constructorCallAST_2E_weak::operator = (const GGS_constructorCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST_2E_weak::GGS_constructorCallAST_2E_weak (const GGS_constructorCallAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST_2E_weak GGS_constructorCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_constructorCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST_2E_weak::unwrappedValue (void) const {
  GGS_constructorCallAST result ;
  if (isValid ()) {
    const cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_constructorCallAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST_2E_weak::bang_constructorCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_constructorCallAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_constructorCallAST) ;
      result = GGS_constructorCallAST ((cPtr_constructorCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @constructorCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorCallAST_2E_weak ("constructorCallAST.weak",
                                                                               & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorCallAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorCallAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST_2E_weak GGS_constructorCallAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorCallAST_2E_weak result ;
  const GGS_constructorCallAST_2E_weak * p = (const GGS_constructorCallAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorCallAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCallAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssignOperation (GGS_loadIndirectVolatileIR::init_21__21_ (constinArgument_inTargetValue, constinArgument_inLLVMName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @loadIndirectVolatileIR reference class
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

cPtr_loadIndirectVolatileIR::cPtr_loadIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loadIndirectVolatileIR::cPtr_loadIndirectVolatileIR (const GGS_objectIR & in_mTargetValue,
                                                          const GGS_string & in_mLLVMName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_mLLVMName = in_mLLVMName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loadIndirectVolatileIR::classDescriptor (void) const {
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

acPtr_class * cPtr_loadIndirectVolatileIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loadIndirectVolatileIR (mProperty_mTargetValue, mProperty_mLLVMName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @loadIndirectVolatileIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR ("loadIndirectVolatileIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loadIndirectVolatileIR::staticTypeDescriptor (void) const {
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

GGS_loadIndirectVolatileIR GGS_loadIndirectVolatileIR_2E_weak::unwrappedValue (void) const {
  GGS_loadIndirectVolatileIR result ;
  if (isValid ()) {
    const cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_loadIndirectVolatileIR (p) ;
    }
  }
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
//     @loadIndirectVolatileIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2E_weak ("loadIndirectVolatileIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loadIndirectVolatileIR_2E_weak::staticTypeDescriptor (void) const {
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
//'@semanticTypePrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_abstractDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_declarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_declarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_declarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_declarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_declarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticTypePrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticTypePrecedenceGraph noteUINTType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (GGS_semanticTypePrecedenceGraph & ioObject,
                                   const GGS_uint constinArgument_inBitSize,
                                   const GGS_location constinArgument_inErrorLocation,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_typeName_936 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  ioObject.setter_noteNode (var_typeName_936 COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_keyRepresentationForErrorSignaling (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeDeclarationBarrierAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeDeclarationBarrierAST::objectCompare (const GGS_compileTimeDeclarationBarrierAST & inOperand) const {
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

GGS_compileTimeDeclarationBarrierAST::GGS_compileTimeDeclarationBarrierAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeDeclarationBarrierAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeDeclarationBarrierAST (inCompiler COMMA_THERE)) ;
  object->compileTimeDeclarationBarrierAST_init (inCompiler) ;
  const GGS_compileTimeDeclarationBarrierAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::
compileTimeDeclarationBarrierAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST::GGS_compileTimeDeclarationBarrierAST (const cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeDeclarationBarrierAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeDeclarationBarrierAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeDeclarationBarrierAST::cPtr_compileTimeDeclarationBarrierAST (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeDeclarationBarrierAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

void cPtr_compileTimeDeclarationBarrierAST::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeDeclarationBarrierAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeDeclarationBarrierAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeDeclarationBarrierAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeDeclarationBarrierAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeDeclarationBarrierAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ("compileTimeDeclarationBarrierAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeDeclarationBarrierAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeDeclarationBarrierAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeDeclarationBarrierAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST result ;
  const GGS_compileTimeDeclarationBarrierAST * p = (const GGS_compileTimeDeclarationBarrierAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeDeclarationBarrierAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeDeclarationBarrierAST_2E_weak::objectCompare (const GGS_compileTimeDeclarationBarrierAST_2E_weak & inOperand) const {
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

GGS_compileTimeDeclarationBarrierAST_2E_weak::GGS_compileTimeDeclarationBarrierAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak & GGS_compileTimeDeclarationBarrierAST_2E_weak::operator = (const GGS_compileTimeDeclarationBarrierAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak::GGS_compileTimeDeclarationBarrierAST_2E_weak (const GGS_compileTimeDeclarationBarrierAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak GGS_compileTimeDeclarationBarrierAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeDeclarationBarrierAST result ;
  if (isValid ()) {
    const cPtr_compileTimeDeclarationBarrierAST * p = (cPtr_compileTimeDeclarationBarrierAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeDeclarationBarrierAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST_2E_weak::bang_compileTimeDeclarationBarrierAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeDeclarationBarrierAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeDeclarationBarrierAST) ;
      result = GGS_compileTimeDeclarationBarrierAST ((cPtr_compileTimeDeclarationBarrierAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeDeclarationBarrierAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ("compileTimeDeclarationBarrierAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeDeclarationBarrierAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeDeclarationBarrierAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeDeclarationBarrierAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak GGS_compileTimeDeclarationBarrierAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST_2E_weak result ;
  const GGS_compileTimeDeclarationBarrierAST_2E_weak * p = (const GGS_compileTimeDeclarationBarrierAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeDeclarationBarrierAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (cPtr_instructionAST * inObject,
                                                                GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    inObject->method_noteInstructionTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const GGS_instructionListAST inObject,
                                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListAST temp_0 = inObject ;
  UpEnumerator_instructionListAST enumerator_2333 (temp_0) ;
  while (enumerator_2333.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((cPtr_instructionAST *) enumerator_2333.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 56)) ;
    enumerator_2333.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (cPtr_instructionAST * inObject,
                                                      const GGS_omnibusType constin_inSelfType,
                                                      const GGS_routineAttributes constin_inRoutineAttributes,
                                                      const GGS_semanticContext constin_inContext,
                                                      const GGS_mode constin_inMode,
                                                      GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      GGS_staticEntityMap & io_ioStaticEntityMap,
                                                      GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                      GGS_allocaList & io_ioAllocaList,
                                                      GGS_instructionListIR & io_ioInstructionGenerationList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    inObject->method_instructionSemanticAnalysis (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeBranchInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const GGS_instructionListAST inObject,
                                                   const GGS_omnibusType constinArgument_inSelfType,
                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                   const GGS_location constinArgument_inEndOfInstructionList,
                                                   const GGS_semanticContext constinArgument_inContext,
                                                   const GGS_mode constinArgument_inMode,
                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openBranch (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 97)) ;
  }
  const GGS_instructionListAST temp_0 = inObject ;
  UpEnumerator_instructionListAST enumerator_4186 (temp_0) ;
  while (enumerator_4186.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4186.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 99)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_4186.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 100)) ;
    enumerator_4186.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioUniversalMap, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 113)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeRoutineInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const GGS_instructionListAST inObject,
                                                    const GGS_omnibusType constinArgument_inSelfType,
                                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                    const GGS_semanticContext constinArgument_inContext,
                                                    const GGS_mode constinArgument_inMode,
                                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                    GGS_allocaList & ioArgument_ioAllocaList,
                                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListAST temp_0 = inObject ;
  UpEnumerator_instructionListAST enumerator_5369 (temp_0) ;
  while (enumerator_5369.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5369.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_5369.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 131)) ;
    enumerator_5369.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const GGS_instructionListIR inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              const GGS_generationContext constinArgument_inGenerationContext,
                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListIR temp_0 = inObject ;
  UpEnumerator_instructionListIR enumerator_6343 (temp_0) ;
  while (enumerator_6343.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((cPtr_abstractInstructionIR *) enumerator_6343.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 155)) ;
    enumerator_6343.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringInExpressionAST_2E_weak::objectCompare (const GGS_literalStringInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalStringInExpressionAST_2E_weak::GGS_literalStringInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak & GGS_literalStringInExpressionAST_2E_weak::operator = (const GGS_literalStringInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak::GGS_literalStringInExpressionAST_2E_weak (const GGS_literalStringInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak GGS_literalStringInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalStringInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST_2E_weak::bang_literalStringInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringInExpressionAST) ;
      result = GGS_literalStringInExpressionAST ((cPtr_literalStringInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2E_weak ("literalStringInExpressionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak GGS_literalStringInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringInExpressionAST_2E_weak result ;
  const GGS_literalStringInExpressionAST_2E_weak * p = (const GGS_literalStringInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssignOperation (GGS_storeIndirectVolatileIR::init_21__21__21_ (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 7)) ;
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

GGS_storeIndirectVolatileIR GGS_storeIndirectVolatileIR_2E_weak::unwrappedValue (void) const {
  GGS_storeIndirectVolatileIR result ;
  if (isValid ()) {
    const cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_storeIndirectVolatileIR (p) ;
    }
  }
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
//     @storeIndirectVolatileIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2E_weak ("storeIndirectVolatileIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeIndirectVolatileIR_2E_weak::staticTypeDescriptor (void) const {
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
//Extension method '@instructionListIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const GGS_instructionListIR inObject,
                                              GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                              GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListIR temp_0 = inObject ;
  UpEnumerator_instructionListIR enumerator_720 (temp_0) ;
  while (enumerator_720.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_720.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 10)) ;
    enumerator_720.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@routineAccessibilityIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineAccessibilityIR : public cCollectionElement {
  public: GGS_routineAccessibilityIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineAccessibilityIR (const GGS_abstractRoutineIR & in_mRoutine,
                                                     const GGS_stringset & in_mAccessibleRoutineSet
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineAccessibilityIR (const GGS_routineAccessibilityIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GGS_abstractRoutineIR & in_mRoutine,
                                                                                      const GGS_stringset & in_mAccessibleRoutineSet
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine, in_mAccessibleRoutineSet) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GGS_routineAccessibilityIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @routineAccessibilityIR
//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR::GGS_routineAccessibilityIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR::GGS_routineAccessibilityIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    const GGS_routineAccessibilityIR_2E_element element (p->mObject.mProperty_mRoutine, p->mObject.mProperty_mAccessibleRoutineSet) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_abstractRoutineIR & in_mRoutine,
                                                            const GGS_stringset & in_mAccessibleRoutineSet
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineAccessibilityIR (in_mRoutine, in_mAccessibleRoutineSet COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineAccessibilityIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineAccessibilityIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::description (String & ioString,
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
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAccessibleRoutineSet:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAccessibleRoutineSet.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineAccessibilityIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::plusPlusAssignOperation (const GGS_routineAccessibilityIR_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::class_func_listWithValue (const GGS_abstractRoutineIR & inOperand0,
                                                                                 const GGS_stringset & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_routineAccessibilityIR_2E_element element (inOperand0, inOperand1) ;
  GGS_routineAccessibilityIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::addAssignOperation (const GGS_abstractRoutineIR & inOperand0,
                                                     const GGS_stringset & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_routineAccessibilityIR_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_append (const GGS_abstractRoutineIR inOperand0,
                                                const GGS_stringset inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_routineAccessibilityIR_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::setter_insertAtIndex (const GGS_abstractRoutineIR inOperand0,
                                                       const GGS_stringset inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_routineAccessibilityIR_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_routineAccessibilityIR::setter_removeAtIndex (GGS_abstractRoutineIR & outOperand0,
                                                       GGS_stringset & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutine ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mAccessibleRoutineSet ;
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

void GGS_routineAccessibilityIR::setter_popFirst (GGS_abstractRoutineIR & outOperand0,
                                                  GGS_stringset & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutine ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAccessibleRoutineSet ;
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

void GGS_routineAccessibilityIR::setter_popLast (GGS_abstractRoutineIR & outOperand0,
                                                 GGS_stringset & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutine ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAccessibleRoutineSet ;
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

void GGS_routineAccessibilityIR::method_first (GGS_abstractRoutineIR & outOperand0,
                                               GGS_stringset & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutine ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAccessibleRoutineSet ;
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

void GGS_routineAccessibilityIR::method_last (GGS_abstractRoutineIR & outOperand0,
                                              GGS_stringset & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutine ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAccessibleRoutineSet ;
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

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::add_operation (const GGS_routineAccessibilityIR & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result ;
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

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result ;
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

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineAccessibilityIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAccessibilityIR::plusAssignOperation (const GGS_routineAccessibilityIR inList,
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

void GGS_routineAccessibilityIR::setter_setMRoutineAtIndex (GGS_abstractRoutineIR inOperand,
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
  
GGS_abstractRoutineIR GGS_routineAccessibilityIR::getter_mRoutineAtIndex (const GGS_uint & inIndex,
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

void GGS_routineAccessibilityIR::setter_setMAccessibleRoutineSetAtIndex (GGS_stringset inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAccessibleRoutineSet = inOperand ;
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
  
GGS_stringset GGS_routineAccessibilityIR::getter_mAccessibleRoutineSetAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAccessibleRoutineSet ;
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
// Down Enumerator for @routineAccessibilityIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineAccessibilityIR::DownEnumerator_routineAccessibilityIR (const GGS_routineAccessibilityIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element DownEnumerator_routineAccessibilityIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR DownEnumerator_routineAccessibilityIR::current_mRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset DownEnumerator_routineAccessibilityIR::current_mAccessibleRoutineSet (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAccessibleRoutineSet ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineAccessibilityIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineAccessibilityIR::UpEnumerator_routineAccessibilityIR (const GGS_routineAccessibilityIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR_2E_element UpEnumerator_routineAccessibilityIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR UpEnumerator_routineAccessibilityIR::current_mRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset UpEnumerator_routineAccessibilityIR::current_mAccessibleRoutineSet (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAccessibleRoutineSet ;
}




//--------------------------------------------------------------------------------------------------
//     @routineAccessibilityIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAccessibilityIR ("routineAccessibilityIR",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineAccessibilityIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineAccessibilityIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineAccessibilityIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_routineAccessibilityIR result ;
  const GGS_routineAccessibilityIR * p = (const GGS_routineAccessibilityIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineAccessibilityIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInstructionWithAssignmentAST_2E_weak::objectCompare (const GGS_varInstructionWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_varInstructionWithAssignmentAST_2E_weak::GGS_varInstructionWithAssignmentAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST_2E_weak & GGS_varInstructionWithAssignmentAST_2E_weak::operator = (const GGS_varInstructionWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_varDeclarationInstructionAST_2E_weak::GGS_varDeclarationInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST_2E_weak & GGS_varDeclarationInstructionAST_2E_weak::operator = (const GGS_varDeclarationInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
  ioObject.addAssignOperation (GGS_computeSubscriptedVolatileRegisterAddress::init_21__21__21__21_ (outArgument_outLLVMResultVarName, constinArgument_inIndexIR, constinArgument_inAddressLLVMname, constinArgument_inElementSize, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @computeSubscriptedVolatileRegisterAddress reference class
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

cPtr_computeSubscriptedVolatileRegisterAddress::cPtr_computeSubscriptedVolatileRegisterAddress (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMResultVarName (),
mProperty_mIndexResult (),
mProperty_mAddressLLVMname (),
mProperty_mElementSize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computeSubscriptedVolatileRegisterAddress::cPtr_computeSubscriptedVolatileRegisterAddress (const GGS_string & in_mLLVMResultVarName,
                                                                                                const GGS_objectIR & in_mIndexResult,
                                                                                                const GGS_string & in_mAddressLLVMname,
                                                                                                const GGS_uint & in_mElementSize,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_computeSubscriptedVolatileRegisterAddress::classDescriptor (void) const {
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

acPtr_class * cPtr_computeSubscriptedVolatileRegisterAddress::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computeSubscriptedVolatileRegisterAddress (mProperty_mLLVMResultVarName, mProperty_mIndexResult, mProperty_mAddressLLVMname, mProperty_mElementSize, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @computeSubscriptedVolatileRegisterAddress generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ("computeSubscriptedVolatileRegisterAddress",
                                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computeSubscriptedVolatileRegisterAddress::staticTypeDescriptor (void) const {
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

GGS_computeSubscriptedVolatileRegisterAddress GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::unwrappedValue (void) const {
  GGS_computeSubscriptedVolatileRegisterAddress result ;
  if (isValid ()) {
    const cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) ptr () ;
    if (nullptr != p) {
      result = GGS_computeSubscriptedVolatileRegisterAddress (p) ;
    }
  }
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
//     @computeSubscriptedVolatileRegisterAddress.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2E_weak ("computeSubscriptedVolatileRegisterAddress.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computeSubscriptedVolatileRegisterAddress_2E_weak::staticTypeDescriptor (void) const {
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
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)), GGS_string ("<<@instructionListIR appendLoadWhenReference void>>"), fixItArray0  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)) ;
      ioArgument_ioObject.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_370_type_0 ;
      GGS_string extractedValue_375_llvmName_1 ;
      ioArgument_ioObject.getAssociatedValuesFor_reference (extractedValue_370_type_0, extractedValue_375_llvmName_1) ;
      GGS_objectIR var_resultingValue_435 ;
      {
      routine_getNewTempValue_3F__26__21_ (extractedValue_370_type_0, ioArgument_ioTemporaries, var_resultingValue_435, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 11)) ;
      }
      {
      extensionSetter_appendLoadFromReference (ioObject, var_resultingValue_435, extractedValue_375_llvmName_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 12)) ;
      }
      ioArgument_ioObject = var_resultingValue_435 ;
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
      result_result = GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 50)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_lessThan:
    {
      result_result = GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 51)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseAndOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 52)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseOrOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 53)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseXorOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 54)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_addOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 55)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_subOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 56)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_mulOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 57)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 58)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divNoOvf:
    {
      result_result = GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 59)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_modOp:
    {
      result_result = GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 60)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_moduloNoOvf:
    {
      result_result = GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 61)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_leftShift:
    {
      result_result = GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 62)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_rightShift:
    {
      result_result = GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 63)) ;
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

GGS_compileTimeInfixOperatorAST_2E_weak::GGS_compileTimeInfixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST_2E_weak & GGS_compileTimeInfixOperatorAST_2E_weak::operator = (const GGS_compileTimeInfixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_compileTimeInfixOperatorUsage_2E_weak::GGS_compileTimeInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage_2E_weak & GGS_compileTimeInfixOperatorUsage_2E_weak::operator = (const GGS_compileTimeInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak::operator = (const GGS_compileTimeInfixInfEqualOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_isrDeclarationAST_2E_weak::objectCompare (const GGS_isrDeclarationAST_2E_weak & inOperand) const {
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

GGS_isrDeclarationAST_2E_weak::GGS_isrDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak & GGS_isrDeclarationAST_2E_weak::operator = (const GGS_isrDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak::GGS_isrDeclarationAST_2E_weak (const GGS_isrDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak GGS_isrDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_isrDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_isrDeclarationAST result ;
  if (isValid ()) {
    const cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_isrDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST_2E_weak::bang_isrDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_isrDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_isrDeclarationAST) ;
      result = GGS_isrDeclarationAST ((cPtr_isrDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @isrDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ("isrDeclarationAST.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_isrDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_isrDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_isrDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak GGS_isrDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_isrDeclarationAST_2E_weak result ;
  const GGS_isrDeclarationAST_2E_weak * p = (const GGS_isrDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_isrDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedISRDeclaration_2E_weak::objectCompare (const GGS_decoratedISRDeclaration_2E_weak & inOperand) const {
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

GGS_decoratedISRDeclaration_2E_weak::GGS_decoratedISRDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak & GGS_decoratedISRDeclaration_2E_weak::operator = (const GGS_decoratedISRDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak::GGS_decoratedISRDeclaration_2E_weak (const GGS_decoratedISRDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak GGS_decoratedISRDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedISRDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedISRDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedISRDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration_2E_weak::bang_decoratedISRDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedISRDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedISRDeclaration) ;
      result = GGS_decoratedISRDeclaration ((cPtr_decoratedISRDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedISRDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ("decoratedISRDeclaration.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedISRDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedISRDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedISRDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak GGS_decoratedISRDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedISRDeclaration_2E_weak result ;
  const GGS_decoratedISRDeclaration_2E_weak * p = (const GGS_decoratedISRDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedISRDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @interruptMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::GGS_interruptMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::~ GGS_interruptMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::GGS_interruptMapIR (const GGS_interruptMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR & GGS_interruptMapIR::operator = (const GGS_interruptMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_interruptMapIR::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_interruptMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_interruptMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_interruptMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_interruptMapIR::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_interruptMapIR::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_interruptMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::performInsert (const GGS_interruptMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>
GGS_interruptMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_interruptMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>>
GGS_interruptMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_interruptMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_ GGS_interruptMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_interruptMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_interruptMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_interruptMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSelfType = info->mProperty_mSelfType ;
      element.mProperty_mDriverName = info->mProperty_mDriverName ;
      element.mProperty_mMode = info->mProperty_mMode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::class_func_mapWithMapToOverride (const GGS_interruptMapIR & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_interruptMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_interruptMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_insertKey (GGS_lstring inLKey,
                                           GGS_omnibusType inArgument0,
                                           GGS_string inArgument1,
                                           GGS_mode inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_interruptMapIR_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_interruptMapIR::getter_mSelfTypeForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSelfType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_interruptMapIR::getter_mDriverNameForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDriverName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_mode GGS_interruptMapIR::getter_mModeForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_mode result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMode ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMSelfTypeForKey (GGS_omnibusType inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSelfType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMDriverNameForKey (GGS_string inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDriverName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMModeForKey (GGS_mode inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMode = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_interruptMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>> & inArray,
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
    ioString.appendString ("mSelfType:") ;
    inArray (i COMMA_HERE)->mProperty_mSelfType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDriverName:") ;
    inArray (i COMMA_HERE)->mProperty_mDriverName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMode:") ;
    inArray (i COMMA_HERE)->mProperty_mMode.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_interruptMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_interruptMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_interruptMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @interruptMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_interruptMapIR::DownEnumerator_interruptMapIR (const GGS_interruptMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element DownEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMode ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @interruptMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_interruptMapIR::UpEnumerator_interruptMapIR (const GGS_interruptMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element UpEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMode ;
}


//--------------------------------------------------------------------------------------------------
//     @interruptMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  const GGS_interruptMapIR * p = (const GGS_interruptMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@interruptMapIR interruptCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_interruptCodeGeneration (const GGS_interruptMapIR inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              GGS_string & ioArgument_ioAScode,
                                              const GGS_string constinArgument_inUndefinedInterruptString,
                                              const GGS_string constinArgument_inXTRInterruptHandlerString,
                                              const GGS_generationContext constinArgument_inGenerationContext,
                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 163)) ;
  GGS_stringset var_definedInterrupts_6923 = temp_0 ;
  const GGS_interruptMapIR temp_1 = inObject ;
  UpEnumerator_interruptMapIR enumerator_6966 (temp_1) ;
  while (enumerator_6966.hasCurrentObject ()) {
    var_definedInterrupts_6923.plusPlusAssignOperation (enumerator_6966.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)) ;
    GGS_string temp_2 ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_6966.current (HERE).readProperty_mMode ().objectCompare (GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 166)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = function_llvmNameForServiceInterrupt (enumerator_6966.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)).readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = function_llvmNameForSectionInterrupt (enumerator_6966.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
    }
    GGS_string var_interruptImplementationName_7030 = temp_2 ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (var_interruptImplementationName_7030, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (var_interruptImplementationName_7030, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
    GGS_string var_varName_7437 = function_llvmNameForGlobalVariable (enumerator_6966.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 174)) ;
    GGS_string var_llvmTypeName_7506 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6966.current (HERE).readProperty_mSelfType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)) ;
    GGS_string var_driverLLVMBaseTypeName_7594 = enumerator_6966.current (HERE).readProperty_mSelfType ().readProperty_llvmBaseTypeName () ;
    GGS_routineFormalArgumentListAST temp_4 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    GGS_lstring var_isrRoutineMangledName_7664 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_7594, enumerator_6966.current (HERE).readProperty_lkey (), temp_4, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    GGS_string var_isrRoutineLLVMName_7769 = function_llvmNameForFunction (var_isrRoutineMangledName_7664.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_isrRoutineLLVMName_7769, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (var_llvmTypeName_7506, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (var_varName_7437, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::equal, enumerator_6966.current (HERE).readProperty_mMode ().objectCompare (GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 185)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_string var_interruptHandlerName_8108 = function_llvmNameForServiceInterrupt (enumerator_6966.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 186)).readProperty_string () ;
        GGS_string var_isrName_8193 = function_llvmNameForSectionInterrupt (enumerator_6966.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)) ;
        GGS_string var_s_31__8265 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GGS_string ("!ISR!"), var_isrName_8193, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)) ;
        GGS_string var_s_32__8359 = var_s_31__8265.getter_stringByReplacingStringByString (GGS_string ("!HANDLER!"), var_interruptHandlerName_8108, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 189)) ;
        ioArgument_ioAScode.plusAssignOperation(var_s_32__8359, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
      }
    }
    enumerator_6966.gotoNextObject () ;
  }
  UpEnumerator_availableInterruptMap enumerator_8535 (constinArgument_inGenerationContext.readProperty_mAvailableInterruptMap ()) ;
  while (enumerator_8535.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_definedInterrupts_6923.getter_hasKey (enumerator_8535.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 195)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        switch (enumerator_8535.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GGS_interruptionPanicCode::Enumeration::invalid:
          break ;
        case GGS_interruptionPanicCode::Enumeration::enum_noCode:
          {
            GGS_string var_s_8706 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GGS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_8535.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)) ;
            ioArgument_ioAScode.plusAssignOperation(var_s_8706, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 199)) ;
          }
          break ;
        case GGS_interruptionPanicCode::Enumeration::enum_code:
          {
            GGS_lbigint extractedValue_8872_value_0 ;
            enumerator_8535.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_8872_value_0) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GGS_string var_s_8960 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GGS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_8535.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)) ;
                ioArgument_ioAScode.plusAssignOperation(var_s_8960, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 203)) ;
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GGS_string var_name_9129 = function_llvmNameForSectionInterrupt (enumerator_8535.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 205)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Panic code for ").add_operation (var_name_9129, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (var_name_9129, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (GGS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (extractedValue_8872_value_0.readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GGS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)) ;
            }
          }
          break ;
        }
      }
    }
    enumerator_8535.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @booleanShortCircuitAndOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanShortCircuitAndOperatorExpressionAST::objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const {
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

GGS_booleanShortCircuitAndOperatorExpressionAST::GGS_booleanShortCircuitAndOperatorExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mLeftExpression,
                  const GGS_location & in_mOperatorLocation,
                  const GGS_expressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_booleanShortCircuitAndOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_booleanShortCircuitAndOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mRightExpression, inCompiler) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::
booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mLeftExpression,
                                                              const GGS_location & in_mOperatorLocation,
                                                              const GGS_expressionAST & in_mRightExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST::GGS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mLeftExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mRightExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @booleanShortCircuitAndOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (const GGS_expressionAST & in_mLeftExpression,
                                                                                                    const GGS_location & in_mOperatorLocation,
                                                                                                    const GGS_expressionAST & in_mRightExpression,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_booleanShortCircuitAndOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

void cPtr_booleanShortCircuitAndOperatorExpressionAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@booleanShortCircuitAndOperatorExpressionAST:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanShortCircuitAndOperatorExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_booleanShortCircuitAndOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_booleanShortCircuitAndOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @booleanShortCircuitAndOperatorExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ("booleanShortCircuitAndOperatorExpressionAST",
                                                                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanShortCircuitAndOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanShortCircuitAndOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanShortCircuitAndOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST * p = (const GGS_booleanShortCircuitAndOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanShortCircuitAndOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & inOperand) const {
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

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::operator = (const GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (const GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (isValid ()) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_booleanShortCircuitAndOperatorExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::bang_booleanShortCircuitAndOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
      result = GGS_booleanShortCircuitAndOperatorExpressionAST ((cPtr_booleanShortCircuitAndOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @booleanShortCircuitAndOperatorExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ("booleanShortCircuitAndOperatorExpressionAST.weak",
                                                                                                        & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak result ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak * p = (const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerInExpressionAST_2E_weak::objectCompare (const GGS_registerInExpressionAST_2E_weak & inOperand) const {
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

GGS_registerInExpressionAST_2E_weak::GGS_registerInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak & GGS_registerInExpressionAST_2E_weak::operator = (const GGS_registerInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak::GGS_registerInExpressionAST_2E_weak (const GGS_registerInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak GGS_registerInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_registerInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_registerInExpressionAST result ;
  if (isValid ()) {
    const cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_registerInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST_2E_weak::bang_registerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_registerInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerInExpressionAST) ;
      result = GGS_registerInExpressionAST ((cPtr_registerInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @registerInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ("registerInExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak GGS_registerInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerInExpressionAST_2E_weak result ;
  const GGS_registerInExpressionAST_2E_weak * p = (const GGS_registerInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssignOperation (GGS_binaryOperationIR::init_21__21__21__21__21__21_ (constinArgument_inTarget, constinArgument_inOperandType, constinArgument_inLeft, constinArgument_inOperation, constinArgument_inRight, constinArgument_inLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51)) ;
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

GGS_binaryOperationIR GGS_binaryOperationIR_2E_weak::unwrappedValue (void) const {
  GGS_binaryOperationIR result ;
  if (isValid ()) {
    const cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_binaryOperationIR (p) ;
    }
  }
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
//     @binaryOperationIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperationIR_2E_weak ("binaryOperationIR.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperationIR_2E_weak::staticTypeDescriptor (void) const {
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
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_omnibus_5F_lexique::cTokenFor_omnibus_5F_lexique (void) :
mLexicalAttribute_bigInteger (),
mLexicalAttribute_tokenString () {
}

//--------------------------------------------------------------------------------------------------

Lexique_omnibus_5F_lexique::Lexique_omnibus_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceFileName
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_omnibus_5F_lexique::Lexique_omnibus_5F_lexique (Compiler * inCallerCompiler,
                                                        const String & inSourceString,
                                                        const String & inStringForError
                                                        COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_omnibus_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_omnibus_5F_lexique_binaryDigitError = "0b should be followed by a binary digit" ;

static const char * gLexicalMessage_omnibus_5F_lexique_groupError = "in a register group name, a letter or a digit should follow the '©' character" ;

static const char * gLexicalMessage_omnibus_5F_lexique_hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_omnibus_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_omnibus_5F_lexique_internalError = "internal error" ;

static const char * gLexicalMessage_omnibus_5F_lexique_typeError = "in a type name, a letter or a digit should follow the '$' character" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 119)) {
    static const char * syntaxErrorMessageArray [119] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "an attribute @...",
        "a literal integer",
        "a literal character string \"...\"",
        "a comment",
        "a comment",
        "the '\?' or '\?selector:' delimitor",
        "the '\?!' or '\?!selector:' delimitor",
        "the '!' or '!selector:' delimitor",
        "the '!\?' or '!\?selector:' delimitor",
        "a type $...",
        "a control register group ©...",
        "the 'addressof' keyword",
        "the 'assert' keyword",
        "the 'boot' keyword",
        "the 'case' keyword",
        "the 'convert' keyword",
        "the 'ctAssert' keyword",
        "the 'compiletime' keyword",
        "the 'driver' keyword",
        "the 'else' keyword",
        "the 'enum' keyword",
        "the 'event' keyword",
        "the 'extend' keyword",
        "the 'extern' keyword",
        "the 'for' keyword",
        "the 'func' keyword",
        "the 'guard' keyword",
        "the 'if' keyword",
        "the 'import' keyword",
        "the 'in' keyword",
        "the 'interrupt' keyword",
        "the 'let' keyword",
        "the 'llvm' keyword",
        "the 'no' keyword",
        "the 'not' keyword",
        "the 'opaque' keyword",
        "the 'option' keyword",
        "the 'panic' keyword",
        "the 'primitive' keyword",
        "the 'public' keyword",
        "the 'registers' keyword",
        "the 'required' keyword",
        "the 'safe' keyword",
        "the 'section' keyword",
        "the 'self' keyword",
        "the 'service' keyword",
        "the 'sizeof' keyword",
        "the 'startup' keyword",
        "the 'struct' keyword",
        "the 'staticArray' keyword",
        "the 'switch' keyword",
        "the 'sync' keyword",
        "the 'target' keyword",
        "the 'task' keyword",
        "the 'truncate' keyword",
        "the 'typealias' keyword",
        "the 'var' keyword",
        "the 'until' keyword",
        "the 'user' keyword",
        "the 'where' keyword",
        "the 'when' keyword",
        "the 'while' keyword",
        "the 'yes' keyword",
        "the ':' delimitor",
        "the '.' delimitor",
        "the ',' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '=' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '_' delimitor",
        "the '==' delimitor",
        "the '≠' delimitor",
        "the '<' delimitor",
        "the '≤' delimitor",
        "the '>' delimitor",
        "the '≥' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the ']!' delimitor",
        "the '<<' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '||' delimitor",
        "the '&&' delimitor",
        "the '->' delimitor",
        "the '..<' delimitor",
        "the '...' delimitor",
        "the '|' delimitor",
        "the '|=' delimitor",
        "the '&' delimitor",
        "the '&=' delimitor",
        "the '^' delimitor",
        "the '^=' delimitor",
        "the '+' delimitor",
        "the '+%' delimitor",
        "the '+=' delimitor",
        "the '+%=' delimitor",
        "the '-' delimitor",
        "the '-%' delimitor",
        "the '-=' delimitor",
        "the '-%=' delimitor",
        "the '*' delimitor",
        "the '*%' delimitor",
        "the '*=' delimitor",
        "the '*%=' delimitor",
        "the '/' delimitor",
        "the '!/' delimitor",
        "the '/=' delimitor",
        "the '!/=' delimitor",
        "the '%' delimitor",
        "the '!%' delimitor",
        "the '%=' delimitor",
        "the '!%=' delimitor",
        "the '<<=' delimitor",
        "the '>>=' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__25_ = {
  utf32 ('!'),
  utf32 ('%'),
} ;

//--- Unicode string for '$!%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__25__3D_ = {
  utf32 ('!'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$!/$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__2F_ = {
  utf32 ('!'),
  utf32 ('/'),
} ;

//--- Unicode string for '$!/=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__21__2F__3D_ = {
  utf32 ('!'),
  utf32 ('/'),
  utf32 ('='),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__25_ = {
  utf32 ('%'),
} ;

//--- Unicode string for '$%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__25__3D_ = {
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$&&$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26__26_ = {
  utf32 ('&'),
  utf32 ('&'),
} ;

//--- Unicode string for '$&=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__26__3D_ = {
  utf32 ('&'),
  utf32 ('='),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$*%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__25_ = {
  utf32 ('*'),
  utf32 ('%'),
} ;

//--- Unicode string for '$*%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__25__3D_ = {
  utf32 ('*'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$*=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2A__3D_ = {
  utf32 ('*'),
  utf32 ('='),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$+%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__25_ = {
  utf32 ('+'),
  utf32 ('%'),
} ;

//--- Unicode string for '$+%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__25__3D_ = {
  utf32 ('+'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2B__3D_ = {
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$-%$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__25_ = {
  utf32 ('-'),
  utf32 ('%'),
} ;

//--- Unicode string for '$-%=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__25__3D_ = {
  utf32 ('-'),
  utf32 ('%'),
  utf32 ('='),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__3D_ = {
  utf32 ('-'),
  utf32 ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E__2E__2E_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('.'),
} ;

//--- Unicode string for '$..<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2E__2E__3C_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('<'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F_ = {
  utf32 ('/'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__2F_ = {
  utf32 ('/'),
  utf32 ('/'),
} ;

//--- Unicode string for '$//!$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__2F__21_ = {
  utf32 ('/'),
  utf32 ('/'),
  utf32 ('!'),
} ;

//--- Unicode string for '$/=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2F__3D_ = {
  utf32 ('/'),
  utf32 ('='),
} ;

//--- Unicode string for '$0b$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__30_b = {
  utf32 ('0'),
  utf32 ('b'),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__30_x = {
  utf32 ('0'),
  utf32 ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$<<$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C__3C_ = {
  utf32 ('<'),
  utf32 ('<'),
} ;

//--- Unicode string for '$<<=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3C__3C__3D_ = {
  utf32 ('<'),
  utf32 ('<'),
  utf32 ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E__3E_ = {
  utf32 ('>'),
  utf32 ('>'),
} ;

//--- Unicode string for '$>>=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__3E__3E__3D_ = {
  utf32 ('>'),
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$\\\"$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5C__22_ = {
  utf32 ('\\'),
  utf32 ('\"'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$]!$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5D__21_ = {
  utf32 (']'),
  utf32 ('!'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$^=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5E__3D_ = {
  utf32 ('^'),
  utf32 ('='),
} ;

//--- Unicode string for '$_$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__5F_ = {
  utf32 ('_'),
} ;

//--- Unicode string for '$addressof$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_addressof = {
  utf32 ('a'),
  utf32 ('d'),
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('f'),
} ;

//--- Unicode string for '$assert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_assert = {
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$boot$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_boot = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_case = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$compiletime$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_compiletime = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('e'),
} ;

//--- Unicode string for '$convert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_convert = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$ctAssert$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_ctAssert = {
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$driver$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_driver = {
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_else = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_enum = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('m'),
} ;

//--- Unicode string for '$event$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_event = {
  utf32 ('e'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
} ;

//--- Unicode string for '$extend$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_extend = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_extern = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
} ;

//--- Unicode string for '$for$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_for = {
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_func = {
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$guard$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_guard = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('d'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_if = {
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$import$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_import = {
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('t'),
} ;

//--- Unicode string for '$in$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_in = {
  utf32 ('i'),
  utf32 ('n'),
} ;

//--- Unicode string for '$interrupt$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_interrupt = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('p'),
  utf32 ('t'),
} ;

//--- Unicode string for '$let$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_let = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$llvm$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_llvm = {
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('v'),
  utf32 ('m'),
} ;

//--- Unicode string for '$no$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_no = {
  utf32 ('n'),
  utf32 ('o'),
} ;

//--- Unicode string for '$not$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_not = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$opaque$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_opaque = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_option = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$panic$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_panic = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$primitive$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_primitive = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('m'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('e'),
} ;

//--- Unicode string for '$public$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_public = {
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$registers$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_registers = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('s'),
} ;

//--- Unicode string for '$required$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_required = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$safe$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_safe = {
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('f'),
  utf32 ('e'),
} ;

//--- Unicode string for '$section$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_section = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_self = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('f'),
} ;

//--- Unicode string for '$service$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_service = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('v'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('e'),
} ;

//--- Unicode string for '$sizeof$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_sizeof = {
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('z'),
  utf32 ('e'),
  utf32 ('o'),
  utf32 ('f'),
} ;

//--- Unicode string for '$startup$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_startup = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('u'),
  utf32 ('p'),
} ;

//--- Unicode string for '$staticArray$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_staticArray = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('A'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('y'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_struct = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_switch = {
  utf32 ('s'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('c'),
  utf32 ('h'),
} ;

//--- Unicode string for '$sync$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_sync = {
  utf32 ('s'),
  utf32 ('y'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$target$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_target = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('g'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$task$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_task = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('k'),
} ;

//--- Unicode string for '$truncate$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_truncate = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$typealias$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_typealias = {
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('a'),
  utf32 ('s'),
} ;

//--- Unicode string for '$until$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_until = {
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('l'),
} ;

//--- Unicode string for '$user$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_user = {
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$var$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_var = {
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('r'),
} ;

//--- Unicode string for '$when$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_when = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$where$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_where = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_while = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$yes$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique_yes = {
  utf32 ('y'),
  utf32 ('e'),
  utf32 ('s'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$|=$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C__3D_ = {
  utf32 ('|'),
  utf32 ('='),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7C__7C_ = {
  utf32 ('|'),
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__7E_ = {
  utf32 ('~'),
} ;

//--- Unicode string for '$\xE2""\x89""\xA0""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2260_ = {
  utf32 (8800),
} ;

//--- Unicode string for '$\xE2""\x89""\xA4""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2264_ = {
  utf32 (8804),
} ;

//--- Unicode string for '$\xE2""\x89""\xA5""$'
static const std::initializer_list <utf32> kUnicodeString_omnibus_5F_lexique__2265_ = {
  utf32 (8805),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_omnibus_5F_lexique_delimitorsList = 54 ;

static const C_unicode_lexique_table_entry ktable_for_omnibus_5F_lexique_delimitorsList [ktable_size_omnibus_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__25_, Lexique_omnibus_5F_lexique::kToken__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26_, Lexique_omnibus_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__28_, Lexique_omnibus_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__29_, Lexique_omnibus_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A_, Lexique_omnibus_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B_, Lexique_omnibus_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2C_, Lexique_omnibus_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D_, Lexique_omnibus_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E_, Lexique_omnibus_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2F_, Lexique_omnibus_5F_lexique::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3A_, Lexique_omnibus_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C_, Lexique_omnibus_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3D_, Lexique_omnibus_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E_, Lexique_omnibus_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5B_, Lexique_omnibus_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5D_, Lexique_omnibus_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5E_, Lexique_omnibus_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5F_, Lexique_omnibus_5F_lexique::kToken__5F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7B_, Lexique_omnibus_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C_, Lexique_omnibus_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7D_, Lexique_omnibus_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7E_, Lexique_omnibus_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2260_, Lexique_omnibus_5F_lexique::kToken__2260_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2264_, Lexique_omnibus_5F_lexique::kToken__2264_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2265_, Lexique_omnibus_5F_lexique::kToken__2265_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__25_, Lexique_omnibus_5F_lexique::kToken__21__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__2F_, Lexique_omnibus_5F_lexique::kToken__21__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__25__3D_, Lexique_omnibus_5F_lexique::kToken__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26__26_, Lexique_omnibus_5F_lexique::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__26__3D_, Lexique_omnibus_5F_lexique::kToken__26__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__25_, Lexique_omnibus_5F_lexique::kToken__2A__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__3D_, Lexique_omnibus_5F_lexique::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__25_, Lexique_omnibus_5F_lexique::kToken__2B__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__3D_, Lexique_omnibus_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__25_, Lexique_omnibus_5F_lexique::kToken__2D__25_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__3D_, Lexique_omnibus_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__3E_, Lexique_omnibus_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2F__3D_, Lexique_omnibus_5F_lexique::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C__3C_, Lexique_omnibus_5F_lexique::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3D__3D_, Lexique_omnibus_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E__3E_, Lexique_omnibus_5F_lexique::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5D__21_, Lexique_omnibus_5F_lexique::kToken__5D__21_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__5E__3D_, Lexique_omnibus_5F_lexique::kToken__5E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C__3D_, Lexique_omnibus_5F_lexique::kToken__7C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__7C__7C_, Lexique_omnibus_5F_lexique::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__25__3D_, Lexique_omnibus_5F_lexique::kToken__21__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__21__2F__3D_, Lexique_omnibus_5F_lexique::kToken__21__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2A__25__3D_, Lexique_omnibus_5F_lexique::kToken__2A__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2B__25__3D_, Lexique_omnibus_5F_lexique::kToken__2B__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2D__25__3D_, Lexique_omnibus_5F_lexique::kToken__2D__25__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E__2E__2E_, Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__2E__2E__3C_, Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3C__3C__3D_, Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique__3E__3E__3D_, Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_)
} ;

int32_t Lexique_omnibus_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_omnibus_5F_lexique_delimitorsList, ktable_size_omnibus_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_omnibus_5F_lexique_keyWordList = 52 ;

static const C_unicode_lexique_table_entry ktable_for_omnibus_5F_lexique_keyWordList [ktable_size_omnibus_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_if, Lexique_omnibus_5F_lexique::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_in, Lexique_omnibus_5F_lexique::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_no, Lexique_omnibus_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_for, Lexique_omnibus_5F_lexique::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_let, Lexique_omnibus_5F_lexique::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_not, Lexique_omnibus_5F_lexique::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_var, Lexique_omnibus_5F_lexique::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_yes, Lexique_omnibus_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_boot, Lexique_omnibus_5F_lexique::kToken_boot),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_case, Lexique_omnibus_5F_lexique::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_else, Lexique_omnibus_5F_lexique::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_enum, Lexique_omnibus_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_func, Lexique_omnibus_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_llvm, Lexique_omnibus_5F_lexique::kToken_llvm),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_safe, Lexique_omnibus_5F_lexique::kToken_safe),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_self, Lexique_omnibus_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_sync, Lexique_omnibus_5F_lexique::kToken_sync),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_task, Lexique_omnibus_5F_lexique::kToken_task),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_user, Lexique_omnibus_5F_lexique::kToken_user),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_when, Lexique_omnibus_5F_lexique::kToken_when),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_event, Lexique_omnibus_5F_lexique::kToken_event),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_guard, Lexique_omnibus_5F_lexique::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_panic, Lexique_omnibus_5F_lexique::kToken_panic),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_until, Lexique_omnibus_5F_lexique::kToken_until),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_where, Lexique_omnibus_5F_lexique::kToken_where),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_while, Lexique_omnibus_5F_lexique::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_assert, Lexique_omnibus_5F_lexique::kToken_assert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_driver, Lexique_omnibus_5F_lexique::kToken_driver),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_extend, Lexique_omnibus_5F_lexique::kToken_extend),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_extern, Lexique_omnibus_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_import, Lexique_omnibus_5F_lexique::kToken_import),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_opaque, Lexique_omnibus_5F_lexique::kToken_opaque),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_option, Lexique_omnibus_5F_lexique::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_public, Lexique_omnibus_5F_lexique::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_sizeof, Lexique_omnibus_5F_lexique::kToken_sizeof),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_struct, Lexique_omnibus_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_switch, Lexique_omnibus_5F_lexique::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_target, Lexique_omnibus_5F_lexique::kToken_target),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_convert, Lexique_omnibus_5F_lexique::kToken_convert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_section, Lexique_omnibus_5F_lexique::kToken_section),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_service, Lexique_omnibus_5F_lexique::kToken_service),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_startup, Lexique_omnibus_5F_lexique::kToken_startup),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_ctAssert, Lexique_omnibus_5F_lexique::kToken_ctAssert),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_required, Lexique_omnibus_5F_lexique::kToken_required),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_truncate, Lexique_omnibus_5F_lexique::kToken_truncate),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_addressof, Lexique_omnibus_5F_lexique::kToken_addressof),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_interrupt, Lexique_omnibus_5F_lexique::kToken_interrupt),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_primitive, Lexique_omnibus_5F_lexique::kToken_primitive),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_registers, Lexique_omnibus_5F_lexique::kToken_registers),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_typealias, Lexique_omnibus_5F_lexique::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_compiletime, Lexique_omnibus_5F_lexique::kToken_compiletime),
  C_unicode_lexique_table_entry (kUnicodeString_omnibus_5F_lexique_staticArray, Lexique_omnibus_5F_lexique::kToken_staticArray)
} ;

int32_t Lexique_omnibus_5F_lexique::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_omnibus_5F_lexique_keyWordList, ktable_size_omnibus_5F_lexique_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_omnibus_5F_lexique * ptr = (const cTokenFor_omnibus_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@attribute") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigInteger.decimalString ()) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__24_type:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("$type") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__A9_group:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("©group") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_addressof:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("addressof") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_assert:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("assert") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_boot:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("boot") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_convert:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("convert") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ctAssert:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ctAssert") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_compiletime:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("compiletime") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_driver:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("driver") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_event:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("event") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extend:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extend") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_for:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("for") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_guard:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("guard") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_import:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("import") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_in:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("in") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_interrupt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("interrupt") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_let:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("let") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_llvm:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("llvm") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_no:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("no") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_not:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("not") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_opaque:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("opaque") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_panic:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("panic") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_primitive:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("primitive") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_public:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("public") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_registers:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("registers") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_required:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("required") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_safe:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("safe") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_section:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("section") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_service:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("service") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sizeof:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sizeof") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_startup:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("startup") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_staticArray:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("staticArray") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sync:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sync") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_target:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("target") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_task:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("task") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_truncate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("truncate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_typealias:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("typealias") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_var:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("var") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_until:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("until") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_user:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("user") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_where:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("where") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_when:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("when") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_yes:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("yes") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("_") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2260_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("≠") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2264_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("≤") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2265_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("≥") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("..<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__2F__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!/=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__25_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!%") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__25__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!%=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_omnibus_5F_lexique::internalParseLexicalToken (cTokenFor_omnibus_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigInteger = BigSigned () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForChar_isUnicodeLetter ()) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('@'))) {
      if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('.'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_attribute ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__30_b, true)) {
      do {
        if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('1'))) {
        ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('1'))) {
            ::scanner_routine_enterBinaryDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_binaryDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__30_x, true)) {
      do {
        if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
        ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterDecimalDigitIntoBigInt (*this, previousChar (), token.mLexicalAttribute_bigInteger, gLexicalMessage_omnibus_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5C__22_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F__21_, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_commentMark) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__2F_, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E__2E__3C_, true)) {
      token.mTokenCode = kToken__2E__2E__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__25__3D_, true)) {
      token.mTokenCode = kToken__2D__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__25__3D_, true)) {
      token.mTokenCode = kToken__2B__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__25__3D_, true)) {
      token.mTokenCode = kToken__2A__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__2F__3D_, true)) {
      token.mTokenCode = kToken__21__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__25__3D_, true)) {
      token.mTokenCode = kToken__21__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C__7C_, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C__3D_, true)) {
      token.mTokenCode = kToken__7C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5E__3D_, true)) {
      token.mTokenCode = kToken__5E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5D__21_, true)) {
      token.mTokenCode = kToken__5D__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C__3C_, true)) {
      token.mTokenCode = kToken__3C__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F__3D_, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__3D_, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D__25_, true)) {
      token.mTokenCode = kToken__2D__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__3D_, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B__25_, true)) {
      token.mTokenCode = kToken__2B__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__3D_, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A__25_, true)) {
      token.mTokenCode = kToken__2A__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26__3D_, true)) {
      token.mTokenCode = kToken__26__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26__26_, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__25__3D_, true)) {
      token.mTokenCode = kToken__25__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__2F_, true)) {
      token.mTokenCode = kToken__21__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__21__25_, true)) {
      token.mTokenCode = kToken__21__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2265_, true)) {
      token.mTokenCode = kToken__2265_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2264_, true)) {
      token.mTokenCode = kToken__2264_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2260_, true)) {
      token.mTokenCode = kToken__2260_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5F_, true)) {
      token.mTokenCode = kToken__5F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_omnibus_5F_lexique__25_, true)) {
      token.mTokenCode = kToken__25_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForInputUTF32Char (utf32 ('!'))) {
        const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (utf32 (':'))) {
            token.mTokenCode = kToken__3F__21_selector_3A_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
            mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
            mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
            token.mTokenCode = kToken__3F__21_selector_3A_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3F__21_selector_3A_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationMark ;
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F_selector_3A_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('!'))) {
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForInputUTF32Char (utf32 ('\?'))) {
        const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (utf32 (':'))) {
            token.mTokenCode = kToken__21__3F_selector_3A_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
            mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
            mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
            token.mTokenCode = kToken__21__3F_selector_3A_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__21__3F_selector_3A_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationMark ;
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21_selector_3A_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('$'))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_typeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_type ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 (169))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_omnibus_5F_lexique_groupError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__A9_group ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_omnibus_5F_lexique::parseLexicalToken (void) {
  cTokenFor_omnibus_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_omnibus_5F_lexique::enterToken (cTokenFor_omnibus_5F_lexique & ioToken) {
  cTokenFor_omnibus_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_omnibus_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigInteger = ioToken.mLexicalAttribute_bigInteger ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_omnibus_5F_lexique::attributeValue_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigInteger ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lbigint Lexique_omnibus_5F_lexique::synthetizedAttribute_bigInteger (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_bigint value (ptr->mLexicalAttribute_bigInteger) ;
  GGS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_omnibus_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_omnibus_5F_lexique * ptr = (cTokenFor_omnibus_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_omnibus_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

 GGS_stringlist Lexique_omnibus_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@attribute") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("$type") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("©group") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("addressof") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("assert") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("boot") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("convert") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ctAssert") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("compiletime") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("driver") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("event") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extend") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("for") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("guard") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("import") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("in") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("interrupt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("let") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("llvm") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("no") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("not") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("opaque") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("panic") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("primitive") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("public") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("registers") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("required") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("safe") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("section") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("service") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sizeof") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("startup") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("staticArray") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sync") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("target") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("task") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("truncate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("typealias") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("until") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("user") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("where") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("when") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("yes") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("_") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("≠") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("≤") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("≥") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("..<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!%") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!%=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_omnibus_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("omnibus_lexique:delimitorsList") ;
  ioList.appendObject ("omnibus_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_omnibus_5F_lexique (const String & inIdentifier,
                                                         bool & ioFound,
                                                         GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "omnibus_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("%") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("_") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("≠") ;
    ioList.appendObject ("≤") ;
    ioList.appendObject ("≥") ;
    ioList.appendObject ("!%") ;
    ioList.appendObject ("!/") ;
    ioList.appendObject ("%=") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&=") ;
    ioList.appendObject ("*%") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("+%") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("-%") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject ("<<") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("]!") ;
    ioList.appendObject ("^=") ;
    ioList.appendObject ("|=") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!%=") ;
    ioList.appendObject ("!/=") ;
    ioList.appendObject ("*%=") ;
    ioList.appendObject ("+%=") ;
    ioList.appendObject ("-%=") ;
    ioList.appendObject ("...") ;
    ioList.appendObject ("..<") ;
    ioList.appendObject ("<<=") ;
    ioList.appendObject (">>=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "omnibus_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("boot") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("llvm") ;
    ioList.appendObject ("safe") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("sync") ;
    ioList.appendObject ("task") ;
    ioList.appendObject ("user") ;
    ioList.appendObject ("when") ;
    ioList.appendObject ("event") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("panic") ;
    ioList.appendObject ("until") ;
    ioList.appendObject ("where") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("assert") ;
    ioList.appendObject ("driver") ;
    ioList.appendObject ("extend") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("import") ;
    ioList.appendObject ("opaque") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("sizeof") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("target") ;
    ioList.appendObject ("convert") ;
    ioList.appendObject ("section") ;
    ioList.appendObject ("service") ;
    ioList.appendObject ("startup") ;
    ioList.appendObject ("ctAssert") ;
    ioList.appendObject ("required") ;
    ioList.appendObject ("truncate") ;
    ioList.appendObject ("addressof") ;
    ioList.appendObject ("interrupt") ;
    ioList.appendObject ("primitive") ;
    ioList.appendObject ("registers") ;
    ioList.appendObject ("typealias") ;
    ioList.appendObject ("compiletime") ;
    ioList.appendObject ("staticArray") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_omnibus_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_omnibus_5F_lexique, getKeywordsForIdentifier_omnibus_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_omnibus_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [119] = {0,
    0 /* omnibus_lexique_1_identifier */,
    2 /* omnibus_lexique_1__40_attribute */,
    3 /* omnibus_lexique_1_integer */,
    4 /* omnibus_lexique_1__22_string_22_ */,
    5 /* omnibus_lexique_1_comment */,
    5 /* omnibus_lexique_1_commentMark */,
    7 /* omnibus_lexique_1__3F_selector_3A_ */,
    7 /* omnibus_lexique_1__3F__21_selector_3A_ */,
    7 /* omnibus_lexique_1__21_selector_3A_ */,
    7 /* omnibus_lexique_1__21__3F_selector_3A_ */,
    8 /* omnibus_lexique_1__24_type */,
    9 /* omnibus_lexique_1__A9_group */,
    1 /* omnibus_lexique_1_addressof */,
    1 /* omnibus_lexique_1_assert */,
    1 /* omnibus_lexique_1_boot */,
    1 /* omnibus_lexique_1_case */,
    1 /* omnibus_lexique_1_convert */,
    1 /* omnibus_lexique_1_ctAssert */,
    1 /* omnibus_lexique_1_compiletime */,
    1 /* omnibus_lexique_1_driver */,
    1 /* omnibus_lexique_1_else */,
    1 /* omnibus_lexique_1_enum */,
    1 /* omnibus_lexique_1_event */,
    1 /* omnibus_lexique_1_extend */,
    1 /* omnibus_lexique_1_extern */,
    1 /* omnibus_lexique_1_for */,
    1 /* omnibus_lexique_1_func */,
    1 /* omnibus_lexique_1_guard */,
    1 /* omnibus_lexique_1_if */,
    1 /* omnibus_lexique_1_import */,
    1 /* omnibus_lexique_1_in */,
    1 /* omnibus_lexique_1_interrupt */,
    1 /* omnibus_lexique_1_let */,
    1 /* omnibus_lexique_1_llvm */,
    1 /* omnibus_lexique_1_no */,
    1 /* omnibus_lexique_1_not */,
    1 /* omnibus_lexique_1_opaque */,
    1 /* omnibus_lexique_1_option */,
    1 /* omnibus_lexique_1_panic */,
    1 /* omnibus_lexique_1_primitive */,
    1 /* omnibus_lexique_1_public */,
    1 /* omnibus_lexique_1_registers */,
    1 /* omnibus_lexique_1_required */,
    1 /* omnibus_lexique_1_safe */,
    1 /* omnibus_lexique_1_section */,
    1 /* omnibus_lexique_1_self */,
    1 /* omnibus_lexique_1_service */,
    1 /* omnibus_lexique_1_sizeof */,
    1 /* omnibus_lexique_1_startup */,
    1 /* omnibus_lexique_1_struct */,
    1 /* omnibus_lexique_1_staticArray */,
    1 /* omnibus_lexique_1_switch */,
    1 /* omnibus_lexique_1_sync */,
    1 /* omnibus_lexique_1_target */,
    1 /* omnibus_lexique_1_task */,
    1 /* omnibus_lexique_1_truncate */,
    1 /* omnibus_lexique_1_typealias */,
    1 /* omnibus_lexique_1_var */,
    1 /* omnibus_lexique_1_until */,
    1 /* omnibus_lexique_1_user */,
    1 /* omnibus_lexique_1_where */,
    1 /* omnibus_lexique_1_when */,
    1 /* omnibus_lexique_1_while */,
    1 /* omnibus_lexique_1_yes */,
    6 /* omnibus_lexique_1__3A_ */,
    6 /* omnibus_lexique_1__2E_ */,
    6 /* omnibus_lexique_1__2C_ */,
    6 /* omnibus_lexique_1__7B_ */,
    6 /* omnibus_lexique_1__7D_ */,
    6 /* omnibus_lexique_1__3D_ */,
    6 /* omnibus_lexique_1__28_ */,
    6 /* omnibus_lexique_1__29_ */,
    6 /* omnibus_lexique_1__5F_ */,
    6 /* omnibus_lexique_1__3D__3D_ */,
    6 /* omnibus_lexique_1__2260_ */,
    6 /* omnibus_lexique_1__3C_ */,
    6 /* omnibus_lexique_1__2264_ */,
    6 /* omnibus_lexique_1__3E_ */,
    6 /* omnibus_lexique_1__2265_ */,
    6 /* omnibus_lexique_1__5B_ */,
    6 /* omnibus_lexique_1__5D_ */,
    6 /* omnibus_lexique_1__5D__21_ */,
    6 /* omnibus_lexique_1__3C__3C_ */,
    6 /* omnibus_lexique_1__3E__3E_ */,
    6 /* omnibus_lexique_1__7E_ */,
    6 /* omnibus_lexique_1__7C__7C_ */,
    6 /* omnibus_lexique_1__26__26_ */,
    6 /* omnibus_lexique_1__2D__3E_ */,
    6 /* omnibus_lexique_1__2E__2E__3C_ */,
    6 /* omnibus_lexique_1__2E__2E__2E_ */,
    6 /* omnibus_lexique_1__7C_ */,
    6 /* omnibus_lexique_1__7C__3D_ */,
    6 /* omnibus_lexique_1__26_ */,
    6 /* omnibus_lexique_1__26__3D_ */,
    6 /* omnibus_lexique_1__5E_ */,
    6 /* omnibus_lexique_1__5E__3D_ */,
    6 /* omnibus_lexique_1__2B_ */,
    6 /* omnibus_lexique_1__2B__25_ */,
    6 /* omnibus_lexique_1__2B__3D_ */,
    6 /* omnibus_lexique_1__2B__25__3D_ */,
    6 /* omnibus_lexique_1__2D_ */,
    6 /* omnibus_lexique_1__2D__25_ */,
    6 /* omnibus_lexique_1__2D__3D_ */,
    6 /* omnibus_lexique_1__2D__25__3D_ */,
    6 /* omnibus_lexique_1__2A_ */,
    6 /* omnibus_lexique_1__2A__25_ */,
    6 /* omnibus_lexique_1__2A__3D_ */,
    6 /* omnibus_lexique_1__2A__25__3D_ */,
    6 /* omnibus_lexique_1__2F_ */,
    6 /* omnibus_lexique_1__21__2F_ */,
    6 /* omnibus_lexique_1__2F__3D_ */,
    6 /* omnibus_lexique_1__21__2F__3D_ */,
    6 /* omnibus_lexique_1__25_ */,
    6 /* omnibus_lexique_1__21__25_ */,
    6 /* omnibus_lexique_1__25__3D_ */,
    6 /* omnibus_lexique_1__21__25__3D_ */,
    6 /* omnibus_lexique_1__3C__3C__3D_ */,
    6 /* omnibus_lexique_1__3E__3E__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_omnibus_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 10) {
    static const char * kStyleArray [10] = {
      "",
      "keywordsStyle",
      "attributeStyle",
      "integerStyle",
      "stringStyle",
      "commentStyle",
      "delimitersStyle",
      "selectorStyle",
      "typeStyle",
      "groupStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
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
      var_s_1596.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)) ;
    }
  }
  var_s_1596.plusAssignOperation(constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  const GGS_effectiveArgumentListAST temp_1 = inObject ;
  UpEnumerator_effectiveArgumentListAST enumerator_1749 (temp_1) ;
  while (enumerator_1749.hasCurrentObject ()) {
    var_s_1596.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_1749.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (enumerator_1749.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)) ;
    enumerator_1749.gotoNextObject () ;
  }
  var_s_1596.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 46)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1596, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Class for element of '@registerIntegerFieldListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_registerIntegerFieldListAST : public cCollectionElement {
  public: GGS_registerIntegerFieldListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_registerIntegerFieldListAST (const GGS_lstring & in_mFieldName,
                                                          const GGS_expressionAST & in_mExpression,
                                                          const GGS_location & in_mExpressionLocation
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_registerIntegerFieldListAST::cCollectionElement_registerIntegerFieldListAST (const GGS_lstring & in_mFieldName,
                                                                                                const GGS_expressionAST & in_mExpression,
                                                                                                const GGS_location & in_mExpressionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mExpression, in_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_registerIntegerFieldListAST::cCollectionElement_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFieldName, inElement.mProperty_mExpression, inElement.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_registerIntegerFieldListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_registerIntegerFieldListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_registerIntegerFieldListAST (mObject.mProperty_mFieldName, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @registerIntegerFieldListAST
//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST::GGS_registerIntegerFieldListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST::GGS_registerIntegerFieldListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    const GGS_registerIntegerFieldListAST_2E_element element (p->mObject.mProperty_mFieldName, p->mObject.mProperty_mExpression, p->mObject.mProperty_mExpressionLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIntegerFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mFieldName,
                                                                 const GGS_expressionAST & in_mExpression,
                                                                 const GGS_location & in_mExpressionLocation
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (in_mFieldName, in_mExpression, in_mExpressionLocation COMMA_THERE)) ;
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

GGS_registerConstantExpressionAST_2E_weak::GGS_registerConstantExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST_2E_weak & GGS_registerConstantExpressionAST_2E_weak::operator = (const GGS_registerConstantExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::operator = (const GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (const GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_fixedSizeArrayAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::bang_fixedSizeArrayAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
      result = GGS_fixedSizeArrayAssignmentOperatorUsage ((cPtr_fixedSizeArrayAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @fixedSizeArrayAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ("fixedSizeArrayAssignmentOperatorUsage.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak * p = (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & inOperand) const {
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

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::operator = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (isValid ()) {
    const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
      result = GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ((cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak * p = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//
//Extension method '@LValueOperandAST buildExpressionAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildExpressionAccessList (const GGS_LValueOperandAST inObject,
                                                GGS_primaryInExpressionAccessListAST & ioArgument_ioExpressionAccessList,
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
      GGS_lstring extractedValue_3121_name_0 ;
      GGS_LValueOperandAST extractedValue_3144_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_3121_name_0, extractedValue_3144_next_1) ;
      ioArgument_ioExpressionAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_property (extractedValue_3121_name_0  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3144_next_1, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_3303_index_0 ;
      GGS_location extractedValue_3319_endOfIndex_1 ;
      GGS_bool extractedValue_3336_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_3375_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_3303_index_0, extractedValue_3319_endOfIndex_1, extractedValue_3336_checkIndexExpression_2, extractedValue_3375_next_3) ;
      ioArgument_ioExpressionAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_arrayAccess (extractedValue_3303_index_0, extractedValue_3319_endOfIndex_1, extractedValue_3336_checkIndexExpression_2  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3375_next_3, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 97)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (cPtr_abstractInstructionIR * inObject,
                                              GGS_string & io_ioLLVMcode,
                                              const GGS_generationContext constin_inGenerationContext,
                                              GGS_generationAdds & io_ioGenerationAdds,
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
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractInstructionIR::method_enterAccessibleEntities (GGS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                                 GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractInstructionIR * inObject,
                                                  GGS_stringset & io_ioInvokedRoutineSet,
                                                  GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_enterAccessibleEntities (io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@instructionListListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListListIR : public cCollectionElement {
  public: GGS_instructionListListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListListIR (const GGS_instructionListIR & in_mInstructionList
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListListIR (const GGS_instructionListListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GGS_instructionListIR & in_mInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GGS_instructionListListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @instructionListListIR
//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR::GGS_instructionListListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR::GGS_instructionListListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    const GGS_instructionListListIR_2E_element element (p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_instructionListIR & in_mInstructionList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListListIR (in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instructionListListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_instructionListListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::description (String & ioString,
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
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::plusPlusAssignOperation (const GGS_instructionListListIR_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::class_func_listWithValue (const GGS_instructionListIR & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_instructionListListIR_2E_element element (inOperand0) ;
  GGS_instructionListListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::addAssignOperation (const GGS_instructionListIR & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  const GGS_instructionListListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_append (const GGS_instructionListIR inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_instructionListListIR_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::setter_insertAtIndex (const GGS_instructionListIR inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_instructionListListIR_2E_element newElement (inOperand0) ;
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

void GGS_instructionListListIR::setter_removeAtIndex (GGS_instructionListIR & outOperand0,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
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

void GGS_instructionListListIR::setter_popFirst (GGS_instructionListIR & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
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

void GGS_instructionListListIR::setter_popLast (GGS_instructionListIR & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
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

void GGS_instructionListListIR::method_first (GGS_instructionListIR & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
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

void GGS_instructionListListIR::method_last (GGS_instructionListIR & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
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

GGS_instructionListListIR GGS_instructionListListIR::add_operation (const GGS_instructionListListIR & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instructionListListIR result ;
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

GGS_instructionListListIR GGS_instructionListListIR::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result ;
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

GGS_instructionListListIR GGS_instructionListListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_instructionListListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListListIR::plusAssignOperation (const GGS_instructionListListIR inList,
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

void GGS_instructionListListIR::setter_setMInstructionListAtIndex (GGS_instructionListIR inOperand,
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
  
GGS_instructionListIR GGS_instructionListListIR::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
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
// Down Enumerator for @instructionListListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_instructionListListIR::DownEnumerator_instructionListListIR (const GGS_instructionListListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element DownEnumerator_instructionListListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR DownEnumerator_instructionListListIR::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @instructionListListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_instructionListListIR::UpEnumerator_instructionListListIR (const GGS_instructionListListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR_2E_element UpEnumerator_instructionListListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR UpEnumerator_instructionListListIR::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @instructionListListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListListIR ("instructionListListIR",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListListIR GGS_instructionListListIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_instructionListListIR result ;
  const GGS_instructionListListIR * p = (const GGS_instructionListListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @availableInterruptMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap::GGS_availableInterruptMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap::~ GGS_availableInterruptMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap::GGS_availableInterruptMap (const GGS_availableInterruptMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap & GGS_availableInterruptMap::operator = (const GGS_availableInterruptMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_availableInterruptMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_availableInterruptMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_availableInterruptMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_availableInterruptMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_availableInterruptMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_availableInterruptMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_availableInterruptMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_availableInterruptMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::performInsert (const GGS_availableInterruptMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_availableInterruptMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element>
GGS_availableInterruptMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_availableInterruptMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element>>
GGS_availableInterruptMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_availableInterruptMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_ GGS_availableInterruptMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_availableInterruptMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_availableInterruptMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_availableInterruptMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInterruptionPanicCode = info->mProperty_mInterruptionPanicCode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::class_func_mapWithMapToOverride (const GGS_availableInterruptMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_availableInterruptMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_availableInterruptMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_interruptionPanicCode inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_availableInterruptMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_interruptionPanicCode & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "interrupt '%K' is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mInterruptionPanicCode ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode GGS_availableInterruptMap::getter_mInterruptionPanicCodeForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_interruptionPanicCode result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInterruptionPanicCode ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::setter_setMInterruptionPanicCodeForKey (GGS_interruptionPanicCode inValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_availableInterruptMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInterruptionPanicCode = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_availableInterruptMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element>> & inArray,
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
    ioString.appendString ("mInterruptionPanicCode:") ;
    inArray (i COMMA_HERE)->mProperty_mInterruptionPanicCode.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_availableInterruptMap_2E_element>> array = sortedInfoArray () ;
    GGS_availableInterruptMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_availableInterruptMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_availableInterruptMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @availableInterruptMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_availableInterruptMap::DownEnumerator_availableInterruptMap (const GGS_availableInterruptMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element DownEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode DownEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInterruptionPanicCode ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @availableInterruptMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_availableInterruptMap::UpEnumerator_availableInterruptMap (const GGS_availableInterruptMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element UpEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode UpEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInterruptionPanicCode ;
}


//--------------------------------------------------------------------------------------------------
//     @availableInterruptMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  const GGS_availableInterruptMap * p = (const GGS_availableInterruptMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_availableInterruptMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//     @accessInAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ("accessInAssignmentAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentAST::staticTypeDescriptor (void) const {
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
      GGS_lstring extractedValue_4219__0 ;
      GGS_LValueOperandAST extractedValue_4239_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4219__0, extractedValue_4239_next_1) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4239_next_1, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_4341_indexExpression_0 ;
      GGS_location extractedValue_4358__1 ;
      GGS_bool extractedValue_4358__2 ;
      GGS_LValueOperandAST extractedValue_4378_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_4341_indexExpression_0, extractedValue_4358__1, extractedValue_4358__2, extractedValue_4378_next_3) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4341_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 110)) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4378_next_3, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 111)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntegerInExpressionAST_2E_weak::objectCompare (const GGS_literalIntegerInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalIntegerInExpressionAST_2E_weak::GGS_literalIntegerInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak & GGS_literalIntegerInExpressionAST_2E_weak::operator = (const GGS_literalIntegerInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak::GGS_literalIntegerInExpressionAST_2E_weak (const GGS_literalIntegerInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak GGS_literalIntegerInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalIntegerInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalIntegerInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST_2E_weak::bang_literalIntegerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalIntegerInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntegerInExpressionAST) ;
      result = GGS_literalIntegerInExpressionAST ((cPtr_literalIntegerInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalIntegerInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2E_weak ("literalIntegerInExpressionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalIntegerInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntegerInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntegerInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak GGS_literalIntegerInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST_2E_weak result ;
  const GGS_literalIntegerInExpressionAST_2E_weak * p = (const GGS_literalIntegerInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntegerInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_letInstructionWithAssignmentAST_2E_weak::objectCompare (const GGS_letInstructionWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_letInstructionWithAssignmentAST_2E_weak::GGS_letInstructionWithAssignmentAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST_2E_weak & GGS_letInstructionWithAssignmentAST_2E_weak::operator = (const GGS_letInstructionWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST_2E_weak::GGS_letInstructionWithAssignmentAST_2E_weak (const GGS_letInstructionWithAssignmentAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST_2E_weak GGS_letInstructionWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_letInstructionWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_letInstructionWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_letInstructionWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST_2E_weak::bang_letInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_letInstructionWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_letInstructionWithAssignmentAST) ;
      result = GGS_letInstructionWithAssignmentAST ((cPtr_letInstructionWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @letInstructionWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2E_weak ("letInstructionWithAssignmentAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_letInstructionWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_letInstructionWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_letInstructionWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST_2E_weak GGS_letInstructionWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_letInstructionWithAssignmentAST_2E_weak result ;
  const GGS_letInstructionWithAssignmentAST_2E_weak * p = (const GGS_letInstructionWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_letInstructionWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  ioObject.addAssignOperation (GGS_freeStringIR::init_21__21_ (constinArgument_inString, constinArgument_inInvokedFunctionSet, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeStringIR reference class
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

cPtr_freeStringIR::cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (const GGS_string & in_mString,
                                      const GGS_stringset & in_mInvokedFunctionSet,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
  mProperty_mString = in_mString ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_freeStringIR::classDescriptor (void) const {
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

acPtr_class * cPtr_freeStringIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeStringIR (mProperty_mString, mProperty_mInvokedFunctionSet, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @freeStringIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeStringIR ("freeStringIR",
                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeStringIR::staticTypeDescriptor (void) const {
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

GGS_freeStringIR GGS_freeStringIR_2E_weak::unwrappedValue (void) const {
  GGS_freeStringIR result ;
  if (isValid ()) {
    const cPtr_freeStringIR * p = (cPtr_freeStringIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_freeStringIR (p) ;
    }
  }
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
//     @freeStringIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeStringIR_2E_weak ("freeStringIR.weak",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeStringIR_2E_weak::staticTypeDescriptor (void) const {
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
//Extension method '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (GGS_instructionListIR & ioObject,
                                                          const GGS_omnibusType constinArgument_inType,
                                                          const GGS_string constinArgument_inLLVMName,
                                                          const GGS_string constinArgument_inElementLLVMName,
                                                          const GGS_uint constinArgument_inPropertyIndex,
                                                          const GGS_string constinArgument_inPropertyName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_getUniversalPropertyReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementLLVMName, constinArgument_inPropertyIndex, constinArgument_inPropertyName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalPropertyReferenceIR_2E_weak::objectCompare (const GGS_getUniversalPropertyReferenceIR_2E_weak & inOperand) const {
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

GGS_getUniversalPropertyReferenceIR_2E_weak::GGS_getUniversalPropertyReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak & GGS_getUniversalPropertyReferenceIR_2E_weak::operator = (const GGS_getUniversalPropertyReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak::GGS_getUniversalPropertyReferenceIR_2E_weak (const GGS_getUniversalPropertyReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak GGS_getUniversalPropertyReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_getUniversalPropertyReferenceIR result ;
  if (isValid ()) {
    const cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getUniversalPropertyReferenceIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR_2E_weak::bang_getUniversalPropertyReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getUniversalPropertyReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalPropertyReferenceIR) ;
      result = GGS_getUniversalPropertyReferenceIR ((cPtr_getUniversalPropertyReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getUniversalPropertyReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ("getUniversalPropertyReferenceIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalPropertyReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalPropertyReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalPropertyReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak GGS_getUniversalPropertyReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR_2E_weak result ;
  const GGS_getUniversalPropertyReferenceIR_2E_weak * p = (const GGS_getUniversalPropertyReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalPropertyReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typedConstantCallAST_2E_weak::objectCompare (const GGS_typedConstantCallAST_2E_weak & inOperand) const {
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

GGS_typedConstantCallAST_2E_weak::GGS_typedConstantCallAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak & GGS_typedConstantCallAST_2E_weak::operator = (const GGS_typedConstantCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @compileTimeIntAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntAST::objectCompare (const GGS_compileTimeIntAST & inOperand) const {
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

GGS_compileTimeIntAST::GGS_compileTimeIntAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntAST GGS_compileTimeIntAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntAST (inCompiler COMMA_THERE)) ;
  object->compileTimeIntAST_init (inCompiler) ;
  const GGS_compileTimeIntAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::
compileTimeIntAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST::GGS_compileTimeIntAST (const cPtr_compileTimeIntAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntAST::cPtr_compileTimeIntAST (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST ;
}

void cPtr_compileTimeIntAST::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntAST ("compileTimeIntAST",
                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST GGS_compileTimeIntAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAST result ;
  const GGS_compileTimeIntAST * p = (const GGS_compileTimeIntAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntAST_2E_weak::objectCompare (const GGS_compileTimeIntAST_2E_weak & inOperand) const {
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

GGS_compileTimeIntAST_2E_weak::GGS_compileTimeIntAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST_2E_weak & GGS_compileTimeIntAST_2E_weak::operator = (const GGS_compileTimeIntAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST_2E_weak::GGS_compileTimeIntAST_2E_weak (const GGS_compileTimeIntAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST_2E_weak GGS_compileTimeIntAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST GGS_compileTimeIntAST_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntAST result ;
  if (isValid ()) {
    const cPtr_compileTimeIntAST * p = (cPtr_compileTimeIntAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST GGS_compileTimeIntAST_2E_weak::bang_compileTimeIntAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntAST) ;
      result = GGS_compileTimeIntAST ((cPtr_compileTimeIntAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntAST_2E_weak ("compileTimeIntAST.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntAST_2E_weak GGS_compileTimeIntAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAST_2E_weak result ;
  const GGS_compileTimeIntAST_2E_weak * p = (const GGS_compileTimeIntAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntModuloOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntModuloOperator::objectCompare (const GGS_compileTimeIntModuloOperator & inOperand) const {
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

GGS_compileTimeIntModuloOperator::GGS_compileTimeIntModuloOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntModuloOperator GGS_compileTimeIntModuloOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntModuloOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntModuloOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntModuloOperator_init (inCompiler) ;
  const GGS_compileTimeIntModuloOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloOperator::
compileTimeIntModuloOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator::GGS_compileTimeIntModuloOperator (const cPtr_compileTimeIntModuloOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntModuloOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntModuloOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntModuloOperator::cPtr_compileTimeIntModuloOperator (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntModuloOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;
}

void cPtr_compileTimeIntModuloOperator::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntModuloOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntModuloOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntModuloOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntModuloOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntModuloOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ("compileTimeIntModuloOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntModuloOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntModuloOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntModuloOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator GGS_compileTimeIntModuloOperator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntModuloOperator result ;
  const GGS_compileTimeIntModuloOperator * p = (const GGS_compileTimeIntModuloOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntModuloOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntModuloOperator_2E_weak::objectCompare (const GGS_compileTimeIntModuloOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntModuloOperator_2E_weak::GGS_compileTimeIntModuloOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator_2E_weak & GGS_compileTimeIntModuloOperator_2E_weak::operator = (const GGS_compileTimeIntModuloOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator_2E_weak::GGS_compileTimeIntModuloOperator_2E_weak (const GGS_compileTimeIntModuloOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator_2E_weak GGS_compileTimeIntModuloOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntModuloOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator GGS_compileTimeIntModuloOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntModuloOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntModuloOperator * p = (cPtr_compileTimeIntModuloOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntModuloOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator GGS_compileTimeIntModuloOperator_2E_weak::bang_compileTimeIntModuloOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntModuloOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntModuloOperator) ;
      result = GGS_compileTimeIntModuloOperator ((cPtr_compileTimeIntModuloOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntModuloOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2E_weak ("compileTimeIntModuloOperator.weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntModuloOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntModuloOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntModuloOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloOperator_2E_weak GGS_compileTimeIntModuloOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntModuloOperator_2E_weak result ;
  const GGS_compileTimeIntModuloOperator_2E_weak * p = (const GGS_compileTimeIntModuloOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntModuloOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntModuloZeroOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntModuloZeroOperator::objectCompare (const GGS_compileTimeIntModuloZeroOperator & inOperand) const {
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

GGS_compileTimeIntModuloZeroOperator::GGS_compileTimeIntModuloZeroOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator GGS_compileTimeIntModuloZeroOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntModuloZeroOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntModuloZeroOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntModuloZeroOperator_init (inCompiler) ;
  const GGS_compileTimeIntModuloZeroOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloZeroOperator::
compileTimeIntModuloZeroOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator::GGS_compileTimeIntModuloZeroOperator (const cPtr_compileTimeIntModuloZeroOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntModuloZeroOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntModuloZeroOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntModuloZeroOperator::cPtr_compileTimeIntModuloZeroOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntModuloZeroOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;
}

void cPtr_compileTimeIntModuloZeroOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntModuloZeroOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntModuloZeroOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntModuloZeroOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntModuloZeroOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntModuloZeroOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ("compileTimeIntModuloZeroOperator",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntModuloZeroOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntModuloZeroOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntModuloZeroOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator GGS_compileTimeIntModuloZeroOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntModuloZeroOperator result ;
  const GGS_compileTimeIntModuloZeroOperator * p = (const GGS_compileTimeIntModuloZeroOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntModuloZeroOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloZeroOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntModuloZeroOperator_2E_weak::objectCompare (const GGS_compileTimeIntModuloZeroOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntModuloZeroOperator_2E_weak::GGS_compileTimeIntModuloZeroOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator_2E_weak & GGS_compileTimeIntModuloZeroOperator_2E_weak::operator = (const GGS_compileTimeIntModuloZeroOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator_2E_weak::GGS_compileTimeIntModuloZeroOperator_2E_weak (const GGS_compileTimeIntModuloZeroOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator_2E_weak GGS_compileTimeIntModuloZeroOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntModuloZeroOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator GGS_compileTimeIntModuloZeroOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntModuloZeroOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntModuloZeroOperator * p = (cPtr_compileTimeIntModuloZeroOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntModuloZeroOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator GGS_compileTimeIntModuloZeroOperator_2E_weak::bang_compileTimeIntModuloZeroOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntModuloZeroOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntModuloZeroOperator) ;
      result = GGS_compileTimeIntModuloZeroOperator ((cPtr_compileTimeIntModuloZeroOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntModuloZeroOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2E_weak ("compileTimeIntModuloZeroOperator.weak",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntModuloZeroOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntModuloZeroOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntModuloZeroOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntModuloZeroOperator_2E_weak GGS_compileTimeIntModuloZeroOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntModuloZeroOperator_2E_weak result ;
  const GGS_compileTimeIntModuloZeroOperator_2E_weak * p = (const GGS_compileTimeIntModuloZeroOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntModuloZeroOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloZeroOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntDivideOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntDivideOperator::objectCompare (const GGS_compileTimeIntDivideOperator & inOperand) const {
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

GGS_compileTimeIntDivideOperator::GGS_compileTimeIntDivideOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntDivideOperator GGS_compileTimeIntDivideOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntDivideOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntDivideOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntDivideOperator_init (inCompiler) ;
  const GGS_compileTimeIntDivideOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideOperator::
compileTimeIntDivideOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator::GGS_compileTimeIntDivideOperator (const cPtr_compileTimeIntDivideOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntDivideOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntDivideOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntDivideOperator::cPtr_compileTimeIntDivideOperator (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntDivideOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;
}

void cPtr_compileTimeIntDivideOperator::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntDivideOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntDivideOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntDivideOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntDivideOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntDivideOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ("compileTimeIntDivideOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntDivideOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntDivideOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntDivideOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator GGS_compileTimeIntDivideOperator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntDivideOperator result ;
  const GGS_compileTimeIntDivideOperator * p = (const GGS_compileTimeIntDivideOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntDivideOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntDivideOperator_2E_weak::objectCompare (const GGS_compileTimeIntDivideOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntDivideOperator_2E_weak::GGS_compileTimeIntDivideOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator_2E_weak & GGS_compileTimeIntDivideOperator_2E_weak::operator = (const GGS_compileTimeIntDivideOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator_2E_weak::GGS_compileTimeIntDivideOperator_2E_weak (const GGS_compileTimeIntDivideOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator_2E_weak GGS_compileTimeIntDivideOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntDivideOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator GGS_compileTimeIntDivideOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntDivideOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntDivideOperator * p = (cPtr_compileTimeIntDivideOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntDivideOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator GGS_compileTimeIntDivideOperator_2E_weak::bang_compileTimeIntDivideOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntDivideOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntDivideOperator) ;
      result = GGS_compileTimeIntDivideOperator ((cPtr_compileTimeIntDivideOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntDivideOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2E_weak ("compileTimeIntDivideOperator.weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntDivideOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntDivideOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntDivideOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideOperator_2E_weak GGS_compileTimeIntDivideOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntDivideOperator_2E_weak result ;
  const GGS_compileTimeIntDivideOperator_2E_weak * p = (const GGS_compileTimeIntDivideOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntDivideOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntDivideZeroOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntDivideZeroOperator::objectCompare (const GGS_compileTimeIntDivideZeroOperator & inOperand) const {
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

GGS_compileTimeIntDivideZeroOperator::GGS_compileTimeIntDivideZeroOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator GGS_compileTimeIntDivideZeroOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntDivideZeroOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntDivideZeroOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntDivideZeroOperator_init (inCompiler) ;
  const GGS_compileTimeIntDivideZeroOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideZeroOperator::
compileTimeIntDivideZeroOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator::GGS_compileTimeIntDivideZeroOperator (const cPtr_compileTimeIntDivideZeroOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntDivideZeroOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntDivideZeroOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntDivideZeroOperator::cPtr_compileTimeIntDivideZeroOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntDivideZeroOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;
}

void cPtr_compileTimeIntDivideZeroOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntDivideZeroOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntDivideZeroOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntDivideZeroOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntDivideZeroOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntDivideZeroOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ("compileTimeIntDivideZeroOperator",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntDivideZeroOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntDivideZeroOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntDivideZeroOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator GGS_compileTimeIntDivideZeroOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntDivideZeroOperator result ;
  const GGS_compileTimeIntDivideZeroOperator * p = (const GGS_compileTimeIntDivideZeroOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntDivideZeroOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideZeroOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntDivideZeroOperator_2E_weak::objectCompare (const GGS_compileTimeIntDivideZeroOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntDivideZeroOperator_2E_weak::GGS_compileTimeIntDivideZeroOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator_2E_weak & GGS_compileTimeIntDivideZeroOperator_2E_weak::operator = (const GGS_compileTimeIntDivideZeroOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator_2E_weak::GGS_compileTimeIntDivideZeroOperator_2E_weak (const GGS_compileTimeIntDivideZeroOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator_2E_weak GGS_compileTimeIntDivideZeroOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntDivideZeroOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator GGS_compileTimeIntDivideZeroOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntDivideZeroOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntDivideZeroOperator * p = (cPtr_compileTimeIntDivideZeroOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntDivideZeroOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator GGS_compileTimeIntDivideZeroOperator_2E_weak::bang_compileTimeIntDivideZeroOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntDivideZeroOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntDivideZeroOperator) ;
      result = GGS_compileTimeIntDivideZeroOperator ((cPtr_compileTimeIntDivideZeroOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntDivideZeroOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2E_weak ("compileTimeIntDivideZeroOperator.weak",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntDivideZeroOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntDivideZeroOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntDivideZeroOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntDivideZeroOperator_2E_weak GGS_compileTimeIntDivideZeroOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntDivideZeroOperator_2E_weak result ;
  const GGS_compileTimeIntDivideZeroOperator_2E_weak * p = (const GGS_compileTimeIntDivideZeroOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntDivideZeroOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideZeroOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntMultiplyOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntMultiplyOperator::objectCompare (const GGS_compileTimeIntMultiplyOperator & inOperand) const {
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

GGS_compileTimeIntMultiplyOperator::GGS_compileTimeIntMultiplyOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator GGS_compileTimeIntMultiplyOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntMultiplyOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntMultiplyOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntMultiplyOperator_init (inCompiler) ;
  const GGS_compileTimeIntMultiplyOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMultiplyOperator::
compileTimeIntMultiplyOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator::GGS_compileTimeIntMultiplyOperator (const cPtr_compileTimeIntMultiplyOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMultiplyOperator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMultiplyOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMultiplyOperator::cPtr_compileTimeIntMultiplyOperator (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_compileTimeIntMultiplyOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;
}

void cPtr_compileTimeIntMultiplyOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntMultiplyOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMultiplyOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntMultiplyOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntMultiplyOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntMultiplyOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ("compileTimeIntMultiplyOperator",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntMultiplyOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntMultiplyOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntMultiplyOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator GGS_compileTimeIntMultiplyOperator::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMultiplyOperator result ;
  const GGS_compileTimeIntMultiplyOperator * p = (const GGS_compileTimeIntMultiplyOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntMultiplyOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMultiplyOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntMultiplyOperator_2E_weak::objectCompare (const GGS_compileTimeIntMultiplyOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntMultiplyOperator_2E_weak::GGS_compileTimeIntMultiplyOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator_2E_weak & GGS_compileTimeIntMultiplyOperator_2E_weak::operator = (const GGS_compileTimeIntMultiplyOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator_2E_weak::GGS_compileTimeIntMultiplyOperator_2E_weak (const GGS_compileTimeIntMultiplyOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator_2E_weak GGS_compileTimeIntMultiplyOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntMultiplyOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator GGS_compileTimeIntMultiplyOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeIntMultiplyOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeIntMultiplyOperator * p = (cPtr_compileTimeIntMultiplyOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeIntMultiplyOperator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator GGS_compileTimeIntMultiplyOperator_2E_weak::bang_compileTimeIntMultiplyOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntMultiplyOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMultiplyOperator) ;
      result = GGS_compileTimeIntMultiplyOperator ((cPtr_compileTimeIntMultiplyOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeIntMultiplyOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2E_weak ("compileTimeIntMultiplyOperator.weak",
                                                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeIntMultiplyOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntMultiplyOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntMultiplyOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMultiplyOperator_2E_weak GGS_compileTimeIntMultiplyOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMultiplyOperator_2E_weak result ;
  const GGS_compileTimeIntMultiplyOperator_2E_weak * p = (const GGS_compileTimeIntMultiplyOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntMultiplyOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMultiplyOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

