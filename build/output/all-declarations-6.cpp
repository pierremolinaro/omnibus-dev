#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

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

GGS_registerIntegerFieldListAST GGS_registerIntegerFieldListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_registerIntegerFieldListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//  Enum primaryInExpressionAccessAST
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST::GGS_primaryInExpressionAccessAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST GGS_primaryInExpressionAccessAST::class_func_property (const GGS_lstring & inAssociatedValue0
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_primaryInExpressionAccessAST_2E_property (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST GGS_primaryInExpressionAccessAST::class_func_integerSlice (const GGS_lbigint & inAssociatedValue0,
                                                                                            const GGS_lbigint & inAssociatedValue1
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST result ;
  result.mEnum = Enumeration::enum_integerSlice ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_primaryInExpressionAccessAST_2E_integerSlice (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST GGS_primaryInExpressionAccessAST::class_func_arrayAccess (const GGS_expressionAST & inAssociatedValue0,
                                                                                           const GGS_location & inAssociatedValue1,
                                                                                           const GGS_bool & inAssociatedValue2
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST result ;
  result.mEnum = Enumeration::enum_arrayAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_primaryInExpressionAccessAST_2E_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST GGS_primaryInExpressionAccessAST::class_func_funcCall (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_effectiveArgumentListAST & inAssociatedValue1,
                                                                                        const GGS_location & inAssociatedValue2
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST result ;
  result.mEnum = Enumeration::enum_funcCall ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_primaryInExpressionAccessAST_2E_funcCall (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::method_extractProperty (GGS_lstring & outAssociatedValue_name,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_primaryInExpressionAccessAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::method_extractIntegerSlice (GGS_lbigint & outAssociatedValue_low,
                                                                   GGS_lbigint & outAssociatedValue_high,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_integerSlice) {
    outAssociatedValue_low.drop () ;
    outAssociatedValue_high.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST.integerSlice invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_primaryInExpressionAccessAST_2E_integerSlice *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_low = ptr->mProperty_low ;
    outAssociatedValue_high = ptr->mProperty_high ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::method_extractArrayAccess (GGS_expressionAST & outAssociatedValue_index,
                                                                  GGS_location & outAssociatedValue_endOfIndex,
                                                                  GGS_bool & outAssociatedValue_checkIndexExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayAccess) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST.arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_primaryInExpressionAccessAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::method_extractFuncCall (GGS_lstring & outAssociatedValue_methodName,
                                                               GGS_effectiveArgumentListAST & outAssociatedValue_arguments,
                                                               GGS_location & outAssociatedValue_endOfArguments,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_funcCall) {
    outAssociatedValue_methodName.drop () ;
    outAssociatedValue_arguments.drop () ;
    outAssociatedValue_endOfArguments.drop () ;
    String s ;
    s.appendCString ("method @primaryInExpressionAccessAST.funcCall invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_primaryInExpressionAccessAST_2E_funcCall *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_methodName = ptr->mProperty_methodName ;
    outAssociatedValue_arguments = ptr->mProperty_arguments ;
    outAssociatedValue_endOfArguments = ptr->mProperty_endOfArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_property_3F_ GGS_primaryInExpressionAccessAST::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessAST_2E_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_primaryInExpressionAccessAST_2E_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::getAssociatedValuesFor_property (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ GGS_primaryInExpressionAccessAST::getter_getIntegerSlice (UNUSED_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ result ;
  if (mEnum == Enumeration::enum_integerSlice) {
    const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_integerSlice *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_primaryInExpressionAccessAST_2E_integerSlice (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::getAssociatedValuesFor_integerSlice (GGS_lbigint & out_low,
                                                                            GGS_lbigint & out_high) const {
  const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_integerSlice *) mAssociatedValues.associatedValuesPointer () ;
  out_low = ptr->mProperty_low ;
  out_high = ptr->mProperty_high ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ GGS_primaryInExpressionAccessAST::getter_getArrayAccess (UNUSED_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ result ;
  if (mEnum == Enumeration::enum_arrayAccess) {
    const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_primaryInExpressionAccessAST_2E_arrayAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::getAssociatedValuesFor_arrayAccess (GGS_expressionAST & out_index,
                                                                           GGS_location & out_endOfIndex,
                                                                           GGS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ GGS_primaryInExpressionAccessAST::getter_getFuncCall (UNUSED_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ result ;
  if (mEnum == Enumeration::enum_funcCall) {
    const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_funcCall *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_primaryInExpressionAccessAST_2E_funcCall (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::getAssociatedValuesFor_funcCall (GGS_lstring & out_methodName,
                                                                        GGS_effectiveArgumentListAST & out_arguments,
                                                                        GGS_location & out_endOfArguments) const {
  const auto ptr = (const GGS_primaryInExpressionAccessAST_2E_funcCall *) mAssociatedValues.associatedValuesPointer () ;
  out_methodName = ptr->mProperty_methodName ;
  out_arguments = ptr->mProperty_arguments ;
  out_endOfArguments = ptr->mProperty_endOfArguments ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_primaryInExpressionAccessAST [5] = {
  "(not built)",
  "property",
  "integerSlice",
  "arrayAccess",
  "funcCall"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primaryInExpressionAccessAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primaryInExpressionAccessAST::getter_isIntegerSlice (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_integerSlice == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primaryInExpressionAccessAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primaryInExpressionAccessAST::getter_isFuncCall (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_funcCall == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @primaryInExpressionAccessAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_primaryInExpressionAccessAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @primaryInExpressionAccessAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ("primaryInExpressionAccessAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST GGS_primaryInExpressionAccessAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessAST result ;
  const GGS_primaryInExpressionAccessAST * p = (const GGS_primaryInExpressionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primaryInExpressionAST_2E_weak::objectCompare (const GGS_primaryInExpressionAST_2E_weak & inOperand) const {
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

GGS_primaryInExpressionAST_2E_weak::GGS_primaryInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST_2E_weak & GGS_primaryInExpressionAST_2E_weak::operator = (const GGS_primaryInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST_2E_weak::GGS_primaryInExpressionAST_2E_weak (const GGS_primaryInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST_2E_weak GGS_primaryInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_primaryInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_primaryInExpressionAST result ;
  if (isValid ()) {
    const cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_primaryInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST_2E_weak::bang_primaryInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_primaryInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primaryInExpressionAST) ;
      result = GGS_primaryInExpressionAST ((cPtr_primaryInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @primaryInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2E_weak ("primaryInExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST_2E_weak GGS_primaryInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAST_2E_weak result ;
  const GGS_primaryInExpressionAST_2E_weak * p = (const GGS_primaryInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_standaloneFunctionInExpressionAST_2E_weak::objectCompare (const GGS_standaloneFunctionInExpressionAST_2E_weak & inOperand) const {
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

GGS_standaloneFunctionInExpressionAST_2E_weak::GGS_standaloneFunctionInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak & GGS_standaloneFunctionInExpressionAST_2E_weak::operator = (const GGS_standaloneFunctionInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak::GGS_standaloneFunctionInExpressionAST_2E_weak (const GGS_standaloneFunctionInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak GGS_standaloneFunctionInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_standaloneFunctionInExpressionAST result ;
  if (isValid ()) {
    const cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_standaloneFunctionInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST_2E_weak::bang_standaloneFunctionInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_standaloneFunctionInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standaloneFunctionInExpressionAST) ;
      result = GGS_standaloneFunctionInExpressionAST ((cPtr_standaloneFunctionInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @standaloneFunctionInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ("standaloneFunctionInExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_standaloneFunctionInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standaloneFunctionInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standaloneFunctionInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST_2E_weak GGS_standaloneFunctionInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST_2E_weak result ;
  const GGS_standaloneFunctionInExpressionAST_2E_weak * p = (const GGS_standaloneFunctionInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standaloneFunctionInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_functionCallEffectiveParameterListAST GGS_functionCallEffectiveParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_functionCallEffectiveParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//  Enum compileTimeInfixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration::GGS_compileTimeInfixOperatorEnumeration (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_lessThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_bitWiseAndOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_bitWiseOrOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_bitWiseXorOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_addOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_subOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_subOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_mulOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_divOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_modOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_divNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_moduloNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_leftShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (UNUSED_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_rightShift ;
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

static const char * gEnumNameArrayFor_compileTimeInfixOperatorEnumeration [15] = {
  "(not built)",
  "equal",
  "lessThan",
  "bitWiseAndOp",
  "bitWiseOrOp",
  "bitWiseXorOp",
  "addOp",
  "subOp",
  "mulOp",
  "divOp",
  "modOp",
  "divNoOvf",
  "moduloNoOvf",
  "leftShift",
  "rightShift"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isLessThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lessThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isBitWiseAndOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseAndOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isBitWiseOrOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseOrOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isBitWiseXorOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseXorOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_modOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isDivNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isModuloNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_moduloNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_leftShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimeInfixOperatorEnumeration::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rightShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorEnumeration::description (String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @compileTimeInfixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_compileTimeInfixOperatorEnumeration [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixOperatorEnumeration::objectCompare (const GGS_compileTimeInfixOperatorEnumeration & inOperand) const {
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
//     @compileTimeInfixOperatorEnumeration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorEnumeration ("compileTimeInfixOperatorEnumeration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeInfixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorEnumeration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorEnumeration result ;
  const GGS_compileTimeInfixOperatorEnumeration * p = (const GGS_compileTimeInfixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//  Enum omnibusInfixOperator
//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator::GGS_omnibusInfixOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_lessThan (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_lessThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_infEqual (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_infEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_bitWiseAndOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_bitWiseAndOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_bitWiseOrOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_bitWiseOrOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_bitWiseXorOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_bitWiseXorOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_addOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_addOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_addOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_addOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_subOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_subOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_subOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_subOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_mulOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_mulOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_mulOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_mulOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_divOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_divOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_divOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_divOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_modOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_modOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_modOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_modOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_leftShiftOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_leftShiftOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::class_func_rightShiftOp (UNUSED_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  result.mEnum = Enumeration::enum_rightShiftOp ;
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

static const char * gEnumNameArrayFor_omnibusInfixOperator [19] = {
  "(not built)",
  "equal",
  "lessThan",
  "infEqual",
  "bitWiseAndOp",
  "bitWiseOrOp",
  "bitWiseXorOp",
  "addOp",
  "addOpNoOvf",
  "subOp",
  "subOpNoOvf",
  "mulOp",
  "mulOpNoOvf",
  "divOp",
  "divOpNoOvf",
  "modOp",
  "modOpNoOvf",
  "leftShiftOp",
  "rightShiftOp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isLessThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lessThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isInfEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_infEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isBitWiseAndOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseAndOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isBitWiseOrOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseOrOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isBitWiseXorOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseXorOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isAddOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isSubOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isMulOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isDivOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_modOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isModOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_modOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isLeftShiftOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_leftShiftOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusInfixOperator::getter_isRightShiftOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rightShiftOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusInfixOperator::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @omnibusInfixOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_omnibusInfixOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @omnibusInfixOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperator ("omnibusInfixOperator",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusInfixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusInfixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusInfixOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperator::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperator result ;
  const GGS_omnibusInfixOperator * p = (const GGS_omnibusInfixOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusInfixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@genericFormalParameterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_genericFormalParameterList : public cCollectionElement {
  public: GGS_genericFormalParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_genericFormalParameterList (const GGS_genericFormalParameter & in_mParameter
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_genericFormalParameterList (const GGS_genericFormalParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_genericFormalParameterList::cCollectionElement_genericFormalParameterList (const GGS_genericFormalParameter & in_mParameter
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_genericFormalParameterList::cCollectionElement_genericFormalParameterList (const GGS_genericFormalParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_genericFormalParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_genericFormalParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_genericFormalParameterList (mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @genericFormalParameterList
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList::GGS_genericFormalParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList::GGS_genericFormalParameterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_genericFormalParameterList * p = (cCollectionElement_genericFormalParameterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_genericFormalParameterList) ;
    const GGS_genericFormalParameterList_2E_element element (p->mObject.mProperty_mParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_genericFormalParameter & in_mParameter
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_genericFormalParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_genericFormalParameterList (in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_genericFormalParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_genericFormalParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::description (String & ioString,
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
      ioString.appendString ("mParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_genericFormalParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_genericFormalParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::plusPlusAssignOperation (const GGS_genericFormalParameterList_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_genericFormalParameterList::class_func_listWithValue (const GGS_genericFormalParameter & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_genericFormalParameterList_2E_element element (inOperand0) ;
  GGS_genericFormalParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::addAssignOperation (const GGS_genericFormalParameter & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  const GGS_genericFormalParameterList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::setter_append (const GGS_genericFormalParameter inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_genericFormalParameterList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::setter_insertAtIndex (const GGS_genericFormalParameter inOperand0,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_genericFormalParameterList_2E_element newElement (inOperand0) ;
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

void GGS_genericFormalParameterList::setter_removeAtIndex (GGS_genericFormalParameter & outOperand0,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameter ;
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

void GGS_genericFormalParameterList::setter_popFirst (GGS_genericFormalParameter & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameter ;
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

void GGS_genericFormalParameterList::setter_popLast (GGS_genericFormalParameter & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameter ;
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

void GGS_genericFormalParameterList::method_first (GGS_genericFormalParameter & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameter ;
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

void GGS_genericFormalParameterList::method_last (GGS_genericFormalParameter & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameter ;
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

GGS_genericFormalParameterList GGS_genericFormalParameterList::add_operation (const GGS_genericFormalParameterList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameterList result ;
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

GGS_genericFormalParameterList GGS_genericFormalParameterList::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_genericFormalParameterList result ;
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

GGS_genericFormalParameterList GGS_genericFormalParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_genericFormalParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_genericFormalParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_genericFormalParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_genericFormalParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_genericFormalParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::plusAssignOperation (const GGS_genericFormalParameterList inList,
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

void GGS_genericFormalParameterList::setter_setMParameterAtIndex (GGS_genericFormalParameter inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameter = inOperand ;
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
  
GGS_genericFormalParameter GGS_genericFormalParameterList::getter_mParameterAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_genericFormalParameter result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameter ;
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

ComparisonResult GGS_genericFormalParameterList::objectCompare (const GGS_genericFormalParameterList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_genericFormalParameterList_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_genericFormalParameterList_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @genericFormalParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_genericFormalParameterList::DownEnumerator_genericFormalParameterList (const GGS_genericFormalParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element DownEnumerator_genericFormalParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter DownEnumerator_genericFormalParameterList::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @genericFormalParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_genericFormalParameterList::UpEnumerator_genericFormalParameterList (const GGS_genericFormalParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList_2E_element UpEnumerator_genericFormalParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter UpEnumerator_genericFormalParameterList::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @genericFormalParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameterList ("genericFormalParameterList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_genericFormalParameterList::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameterList result ;
  const GGS_genericFormalParameterList * p = (const GGS_genericFormalParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInfixOperatorAST_2E_weak::objectCompare (const GGS_llvmInfixOperatorAST_2E_weak & inOperand) const {
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

GGS_llvmInfixOperatorAST_2E_weak::GGS_llvmInfixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST_2E_weak & GGS_llvmInfixOperatorAST_2E_weak::operator = (const GGS_llvmInfixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST_2E_weak::GGS_llvmInfixOperatorAST_2E_weak (const GGS_llvmInfixOperatorAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST_2E_weak GGS_llvmInfixOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmInfixOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_llvmInfixOperatorAST result ;
  if (isValid ()) {
    const cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmInfixOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST_2E_weak::bang_llvmInfixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmInfixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInfixOperatorAST) ;
      result = GGS_llvmInfixOperatorAST ((cPtr_llvmInfixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmInfixOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2E_weak ("llvmInfixOperatorAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInfixOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST_2E_weak GGS_llvmInfixOperatorAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorAST_2E_weak result ;
  const GGS_llvmInfixOperatorAST_2E_weak * p = (const GGS_llvmInfixOperatorAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInfixOperatorUsage_2E_weak::objectCompare (const GGS_llvmInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmInfixOperatorUsage_2E_weak::GGS_llvmInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak & GGS_llvmInfixOperatorUsage_2E_weak::operator = (const GGS_llvmInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak::GGS_llvmInfixOperatorUsage_2E_weak (const GGS_llvmInfixOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak GGS_llvmInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage_2E_weak::bang_llvmInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInfixOperatorUsage) ;
      result = GGS_llvmInfixOperatorUsage ((cPtr_llvmInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ("llvmInfixOperatorUsage.weak",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak GGS_llvmInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage_2E_weak result ;
  const GGS_llvmInfixOperatorUsage_2E_weak * p = (const GGS_llvmInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInlineInfixOperatorUsage_2E_weak::objectCompare (const GGS_llvmInlineInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmInlineInfixOperatorUsage_2E_weak::GGS_llvmInlineInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage_2E_weak & GGS_llvmInlineInfixOperatorUsage_2E_weak::operator = (const GGS_llvmInlineInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage_2E_weak::GGS_llvmInlineInfixOperatorUsage_2E_weak (const GGS_llvmInlineInfixOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage_2E_weak GGS_llvmInlineInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmInlineInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmInlineInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmInlineInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage_2E_weak::bang_llvmInlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmInlineInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInlineInfixOperatorUsage) ;
      result = GGS_llvmInlineInfixOperatorUsage ((cPtr_llvmInlineInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmInlineInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2E_weak ("llvmInlineInfixOperatorUsage.weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInlineInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInlineInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInlineInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage_2E_weak GGS_llvmInlineInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmInlineInfixOperatorUsage_2E_weak result ;
  const GGS_llvmInlineInfixOperatorUsage_2E_weak * p = (const GGS_llvmInlineInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInlineInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInlineInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_infixOperatorRoutineIR_2E_weak::objectCompare (const GGS_infixOperatorRoutineIR_2E_weak & inOperand) const {
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

GGS_infixOperatorRoutineIR_2E_weak::GGS_infixOperatorRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR_2E_weak & GGS_infixOperatorRoutineIR_2E_weak::operator = (const GGS_infixOperatorRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR_2E_weak::GGS_infixOperatorRoutineIR_2E_weak (const GGS_infixOperatorRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR_2E_weak GGS_infixOperatorRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_infixOperatorRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_infixOperatorRoutineIR result ;
  if (isValid ()) {
    const cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_infixOperatorRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR_2E_weak::bang_infixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_infixOperatorRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_infixOperatorRoutineIR) ;
      result = GGS_infixOperatorRoutineIR ((cPtr_infixOperatorRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @infixOperatorRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2E_weak ("infixOperatorRoutineIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_infixOperatorRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR_2E_weak GGS_infixOperatorRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_infixOperatorRoutineIR_2E_weak result ;
  const GGS_infixOperatorRoutineIR_2E_weak * p = (const GGS_infixOperatorRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_omnibusInfixOperatorUsage * inObject,
                                       const GGS_objectIR constin_inLeftOperand,
                                       const GGS_location constin_inOperatorLocation,
                                       const GGS_objectIR constin_inRightOperand,
                                       const GGS_omnibusType constin_inResultType,
                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       GGS_allocaList & io_ioAllocaList,
                                       GGS_instructionListIR & io_ioInstructionGenerationList,
                                       GGS_objectIR & out_outResultValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusInfixOperatorUsage) ;
    inObject->method_generateCode (constin_inLeftOperand, constin_inOperatorLocation, constin_inRightOperand, constin_inResultType, io_ioTemporaries, io_ioAllocaList, io_ioInstructionGenerationList, out_outResultValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const GGS_infixOperatorMap inObject,
                                                const GGS_objectIR constinArgument_inLeftOperand,
                                                const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                const GGS_location constinArgument_inOperatorLocation,
                                                const GGS_objectIR constinArgument_inRightOperand,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_objectIR & outArgument_outResultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValue.drop () ; // Release 'out' argument
  GGS_lstring var_key_1583 = function_infixOperatorMapKey (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)), constinArgument_inInfixOperator, constinArgument_inOperatorLocation, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 41)) ;
  GGS_omnibusType var_resultType_1721 ;
  GGS_omnibusInfixOperatorUsage var_operatorUsage_1737 ;
  const GGS_infixOperatorMap temp_0 = inObject ;
  temp_0.method_searchKey (var_key_1583, var_resultType_1721, var_operatorUsage_1737, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 42)) ;
  callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_1737.ptr (), constinArgument_inLeftOperand, constinArgument_inOperatorLocation, constinArgument_inRightOperand, var_resultType_1721, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 43)) ;
}


//--------------------------------------------------------------------------------------------------
// @inlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfixOperatorUsage::objectCompare (const GGS_inlineInfixOperatorUsage & inOperand) const {
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

GGS_inlineInfixOperatorUsage::GGS_inlineInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage::
init_21_ (const GGS_string & in_mLLVMOperation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inlineInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_inlineInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->inlineInfixOperatorUsage_init_21_ (in_mLLVMOperation, inCompiler) ;
  const GGS_inlineInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfixOperatorUsage::
inlineInfixOperatorUsage_init_21_ (const GGS_string & in_mLLVMOperation,
                                   Compiler * /* inCompiler */) {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage::GGS_inlineInfixOperatorUsage (const cPtr_inlineInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage::class_func_new (const GGS_string & in_mLLVMOperation,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_inlineInfixOperatorUsage (in_mLLVMOperation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_inlineInfixOperatorUsage::readProperty_mLLVMOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    return p->mProperty_mLLVMOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_inlineInfixOperatorUsage::setProperty_mLLVMOperation (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (const GGS_string & in_mLLVMOperation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLLVMOperation () {
  mProperty_mLLVMOperation = in_mLLVMOperation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

void cPtr_inlineInfixOperatorUsage::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@inlineInfixOperatorUsage:") ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inlineInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inlineInfixOperatorUsage (mProperty_mLLVMOperation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inlineInfixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ("inlineInfixOperatorUsage",
                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage result ;
  const GGS_inlineInfixOperatorUsage * p = (const GGS_inlineInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inlineInfixOperatorUsage_2E_weak::objectCompare (const GGS_inlineInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_inlineInfixOperatorUsage_2E_weak::GGS_inlineInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak & GGS_inlineInfixOperatorUsage_2E_weak::operator = (const GGS_inlineInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak::GGS_inlineInfixOperatorUsage_2E_weak (const GGS_inlineInfixOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak GGS_inlineInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_inlineInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_inlineInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage GGS_inlineInfixOperatorUsage_2E_weak::bang_inlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inlineInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inlineInfixOperatorUsage) ;
      result = GGS_inlineInfixOperatorUsage ((cPtr_inlineInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inlineInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ("inlineInfixOperatorUsage.weak",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inlineInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inlineInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inlineInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inlineInfixOperatorUsage_2E_weak GGS_inlineInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_inlineInfixOperatorUsage_2E_weak result ;
  const GGS_inlineInfixOperatorUsage_2E_weak * p = (const GGS_inlineInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inlineInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inlineInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@omnibusInfixOperator string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_omnibusInfixOperator & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusInfixOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_omnibusInfixOperator::Enumeration::invalid:
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_equal:
    {
      result_result = GGS_string ("==") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_lessThan:
    {
      result_result = GGS_string ("<") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_infEqual:
    {
      result_result = GGS_string ("≤") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseAndOp:
    {
      result_result = GGS_string ("&") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseOrOp:
    {
      result_result = GGS_string ("|") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseXorOp:
    {
      result_result = GGS_string ("^") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOp:
    {
      result_result = GGS_string ("+") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOpNoOvf:
    {
      result_result = GGS_string ("+%") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOp:
    {
      result_result = GGS_string ("-") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOpNoOvf:
    {
      result_result = GGS_string ("-%") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOp:
    {
      result_result = GGS_string ("*") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOpNoOvf:
    {
      result_result = GGS_string ("*%") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOp:
    {
      result_result = GGS_string ("/") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOpNoOvf:
    {
      result_result = GGS_string ("!/") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOp:
    {
      result_result = GGS_string ("%") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOpNoOvf:
    {
      result_result = GGS_string ("!%") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_leftShiftOp:
    {
      result_result = GGS_string ("<<") ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_rightShiftOp:
    {
      result_result = GGS_string (">>") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @omnibusInfixOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusInfixOperatorExpressionAST::objectCompare (const GGS_omnibusInfixOperatorExpressionAST & inOperand) const {
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

GGS_omnibusInfixOperatorExpressionAST::GGS_omnibusInfixOperatorExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST GGS_omnibusInfixOperatorExpressionAST::
init_21__21__21__21_ (const GGS_expressionAST & in_mLeftExpression,
                      const GGS_location & in_mOperatorLocation,
                      const GGS_omnibusInfixOperator & in_mInfixOperator,
                      const GGS_expressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_omnibusInfixOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_omnibusInfixOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->omnibusInfixOperatorExpressionAST_init_21__21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression, inCompiler) ;
  const GGS_omnibusInfixOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::
omnibusInfixOperatorExpressionAST_init_21__21__21__21_ (const GGS_expressionAST & in_mLeftExpression,
                                                        const GGS_location & in_mOperatorLocation,
                                                        const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                        const GGS_expressionAST & in_mRightExpression,
                                                        Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST::GGS_omnibusInfixOperatorExpressionAST (const cPtr_omnibusInfixOperatorExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusInfixOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST GGS_omnibusInfixOperatorExpressionAST::class_func_new (const GGS_expressionAST & in_mLeftExpression,
                                                                                             const GGS_location & in_mOperatorLocation,
                                                                                             const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                                                             const GGS_expressionAST & in_mRightExpression,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperatorExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_omnibusInfixOperatorExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_omnibusInfixOperatorExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusInfixOperatorExpressionAST::setProperty_mLeftExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_omnibusInfixOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusInfixOperatorExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_omnibusInfixOperatorExpressionAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusInfixOperator () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusInfixOperatorExpressionAST::setProperty_mInfixOperator (const GGS_omnibusInfixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_omnibusInfixOperatorExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusInfixOperatorExpressionAST::setProperty_mRightExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusInfixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorExpressionAST::cPtr_omnibusInfixOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorExpressionAST::cPtr_omnibusInfixOperatorExpressionAST (const GGS_expressionAST & in_mLeftExpression,
                                                                                const GGS_location & in_mOperatorLocation,
                                                                                const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                                                const GGS_expressionAST & in_mRightExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_omnibusInfixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ;
}

void cPtr_omnibusInfixOperatorExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@omnibusInfixOperatorExpressionAST:") ;
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

acPtr_class * cPtr_omnibusInfixOperatorExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_omnibusInfixOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusInfixOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @omnibusInfixOperatorExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ("omnibusInfixOperatorExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusInfixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusInfixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusInfixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST GGS_omnibusInfixOperatorExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperatorExpressionAST result ;
  const GGS_omnibusInfixOperatorExpressionAST * p = (const GGS_omnibusInfixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusInfixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusInfixOperatorExpressionAST_2E_weak::objectCompare (const GGS_omnibusInfixOperatorExpressionAST_2E_weak & inOperand) const {
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

GGS_omnibusInfixOperatorExpressionAST_2E_weak::GGS_omnibusInfixOperatorExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST_2E_weak & GGS_omnibusInfixOperatorExpressionAST_2E_weak::operator = (const GGS_omnibusInfixOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST_2E_weak::GGS_omnibusInfixOperatorExpressionAST_2E_weak (const GGS_omnibusInfixOperatorExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST_2E_weak GGS_omnibusInfixOperatorExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_omnibusInfixOperatorExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST GGS_omnibusInfixOperatorExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_omnibusInfixOperatorExpressionAST result ;
  if (isValid ()) {
    const cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_omnibusInfixOperatorExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST GGS_omnibusInfixOperatorExpressionAST_2E_weak::bang_omnibusInfixOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusInfixOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusInfixOperatorExpressionAST) ;
      result = GGS_omnibusInfixOperatorExpressionAST ((cPtr_omnibusInfixOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusInfixOperatorExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2E_weak ("omnibusInfixOperatorExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusInfixOperatorExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusInfixOperatorExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusInfixOperatorExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorExpressionAST_2E_weak GGS_omnibusInfixOperatorExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperatorExpressionAST_2E_weak result ;
  const GGS_omnibusInfixOperatorExpressionAST_2E_weak * p = (const GGS_omnibusInfixOperatorExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusInfixOperatorExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum compileTimePrefixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration::GGS_compileTimePrefixOperatorEnumeration (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_compileTimePrefixOperatorEnumeration [3] = {
  "(not built)",
  "notOp",
  "minusOp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimePrefixOperatorEnumeration::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_compileTimePrefixOperatorEnumeration::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorEnumeration::description (String & ioString,
                                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @compileTimePrefixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_compileTimePrefixOperatorEnumeration [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimePrefixOperatorEnumeration::objectCompare (const GGS_compileTimePrefixOperatorEnumeration & inOperand) const {
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
//     @compileTimePrefixOperatorEnumeration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorEnumeration ("compileTimePrefixOperatorEnumeration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimePrefixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimePrefixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimePrefixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_compileTimePrefixOperatorEnumeration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorEnumeration result ;
  const GGS_compileTimePrefixOperatorEnumeration * p = (const GGS_compileTimePrefixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimePrefixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//  Enum llvmPrefixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration::GGS_llvmPrefixOperatorEnumeration (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_bitWiseComplement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_minusOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmPrefixOperatorEnumeration [5] = {
  "(not built)",
  "notOp",
  "bitWiseComplement",
  "minusOp",
  "minusOpNoOvf"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isBitWiseComplement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseComplement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isMinusOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorEnumeration::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @llvmPrefixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmPrefixOperatorEnumeration [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @llvmPrefixOperatorEnumeration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ("llvmPrefixOperatorEnumeration",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmPrefixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  const GGS_llvmPrefixOperatorEnumeration * p = (const GGS_llvmPrefixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@llvmPrefixOperatorEnumeration string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_llvmPrefixOperatorEnumeration & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_llvmPrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_string ("not") ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_string ("-") ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOpNoOvf:
    {
      result_result = GGS_string ("-%") ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_bitWiseComplement:
    {
      result_result = GGS_string ("~") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@llvmPrefixOperatorEnumeration prefixOperator'
//--------------------------------------------------------------------------------------------------

GGS_prefixOperator extensionGetter_prefixOperator (const GGS_llvmPrefixOperatorEnumeration & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result_result ; // Returned variable
  const GGS_llvmPrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 27)) ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 28)) ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOpNoOvf:
    {
      result_result = GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 29)) ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_bitWiseComplement:
    {
      result_result = GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 30)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmPrefixOperatorAST_2E_weak::objectCompare (const GGS_llvmPrefixOperatorAST_2E_weak & inOperand) const {
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

GGS_llvmPrefixOperatorAST_2E_weak::GGS_llvmPrefixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak & GGS_llvmPrefixOperatorAST_2E_weak::operator = (const GGS_llvmPrefixOperatorAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak::GGS_llvmPrefixOperatorAST_2E_weak (const GGS_llvmPrefixOperatorAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak GGS_llvmPrefixOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmPrefixOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_llvmPrefixOperatorAST result ;
  if (isValid ()) {
    const cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmPrefixOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST_2E_weak::bang_llvmPrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmPrefixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmPrefixOperatorAST) ;
      result = GGS_llvmPrefixOperatorAST ((cPtr_llvmPrefixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmPrefixOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ("llvmPrefixOperatorAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmPrefixOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak GGS_llvmPrefixOperatorAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorAST_2E_weak result ;
  const GGS_llvmPrefixOperatorAST_2E_weak * p = (const GGS_llvmPrefixOperatorAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmPrefixOperatorUsage_2E_weak::objectCompare (const GGS_llvmPrefixOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmPrefixOperatorUsage_2E_weak::GGS_llvmPrefixOperatorUsage_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak & GGS_llvmPrefixOperatorUsage_2E_weak::operator = (const GGS_llvmPrefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak::GGS_llvmPrefixOperatorUsage_2E_weak (const GGS_llvmPrefixOperatorUsage & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak GGS_llvmPrefixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmPrefixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmPrefixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmPrefixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage_2E_weak::bang_llvmPrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmPrefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmPrefixOperatorUsage) ;
      result = GGS_llvmPrefixOperatorUsage ((cPtr_llvmPrefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmPrefixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ("llvmPrefixOperatorUsage.weak",
                                                                                    & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmPrefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak GGS_llvmPrefixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorUsage_2E_weak result ;
  const GGS_llvmPrefixOperatorUsage_2E_weak * p = (const GGS_llvmPrefixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorRoutineIR_2E_weak::objectCompare (const GGS_prefixOperatorRoutineIR_2E_weak & inOperand) const {
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

GGS_prefixOperatorRoutineIR_2E_weak::GGS_prefixOperatorRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak & GGS_prefixOperatorRoutineIR_2E_weak::operator = (const GGS_prefixOperatorRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak::GGS_prefixOperatorRoutineIR_2E_weak (const GGS_prefixOperatorRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak GGS_prefixOperatorRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefixOperatorRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_prefixOperatorRoutineIR result ;
  if (isValid ()) {
    const cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefixOperatorRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR_2E_weak::bang_prefixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorRoutineIR) ;
      result = GGS_prefixOperatorRoutineIR ((cPtr_prefixOperatorRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ("prefixOperatorRoutineIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak GGS_prefixOperatorRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorRoutineIR_2E_weak result ;
  const GGS_prefixOperatorRoutineIR_2E_weak * p = (const GGS_prefixOperatorRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@prefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_prefixOperatorUsage * inObject,
                                       const GGS_objectIR constin_inReceiverOperand,
                                       const GGS_location constin_inOperatorLocation,
                                       const GGS_omnibusType constin_inResultType,
                                       const GGS_bool constin_inDoNotGeneratePanicCode,
                                       const GGS_bool constin_inSafeMode,
                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       GGS_instructionListIR & io_ioInstructionGenerationList,
                                       GGS_objectIR & out_outResultValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_prefixOperatorUsage) ;
    inObject->method_generateCode (constin_inReceiverOperand, constin_inOperatorLocation, constin_inResultType, constin_inDoNotGeneratePanicCode, constin_inSafeMode, io_ioTemporaries, io_ioInstructionGenerationList, out_outResultValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@prefixOperatorMap generatePrefixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generatePrefixOperatorCode (const GGS_prefixOperatorMap inObject,
                                                 const GGS_objectIR constinArgument_inReceiverOperand,
                                                 const GGS_prefixOperator constinArgument_inPrefixOperator,
                                                 const GGS_location constinArgument_inOperatorLocation,
                                                 const GGS_bool constinArgument_inSafeMode,
                                                 const GGS_bool constinArgument_inDoNotGeneratePanicCode,
                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                 GGS_objectIR & outArgument_outResultValue,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValue.drop () ; // Release 'out' argument
  GGS_lstring var_key_2179 = function_prefixOperatorMapKey (extensionGetter_type (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 59)), constinArgument_inPrefixOperator, constinArgument_inOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 59)) ;
  GGS_omnibusType var_resultType_2304 ;
  GGS_prefixOperatorUsage var_operatorUsage_2320 ;
  const GGS_prefixOperatorMap temp_0 = inObject ;
  GGS_omnibusType joker_2295_1 ; // Joker input parameter
  temp_0.method_searchKey (var_key_2179, joker_2295_1, var_resultType_2304, var_operatorUsage_2320, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 60)) ;
  callExtensionMethod_generateCode ((cPtr_prefixOperatorUsage *) var_operatorUsage_2320.ptr (), constinArgument_inReceiverOperand, constinArgument_inOperatorLocation, var_resultType_2304, constinArgument_inDoNotGeneratePanicCode, constinArgument_inSafeMode, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 61)) ;
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

GGS_prefixOperatorExpressionAST GGS_prefixOperatorExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                                 const GGS_prefixOperator & in_mOp,
                                                                                 const GGS_expressionAST & in_mExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionAST (in_mOperatorLocation, in_mOp, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_prefixOperatorExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_prefixOperatorExpressionAST_2E_weak::GGS_prefixOperatorExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorExpressionAST_2E_weak & GGS_prefixOperatorExpressionAST_2E_weak::operator = (const GGS_prefixOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @instructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_instructionAST::objectCompare (const GGS_instructionAST & inOperand) const {
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

GGS_instructionAST::GGS_instructionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_instructionAST::
instructionAST_init_21_ (const GGS_location & in_mInstructionLocation,
                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST::GGS_instructionAST (const cPtr_instructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_instructionAST::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionAST::setProperty_mInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_instructionAST * p = (cPtr_instructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_instructionAST) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (const GGS_location & in_mInstructionLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @instructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionAST ("instructionAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST GGS_instructionAST::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_instructionAST result ;
  const GGS_instructionAST * p = (const GGS_instructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_instructionAST_2E_weak::objectCompare (const GGS_instructionAST_2E_weak & inOperand) const {
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

GGS_instructionAST_2E_weak::GGS_instructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak & GGS_instructionAST_2E_weak::operator = (const GGS_instructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak::GGS_instructionAST_2E_weak (const GGS_instructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak GGS_instructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_instructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST GGS_instructionAST_2E_weak::unwrappedValue (void) const {
  GGS_instructionAST result ;
  if (isValid ()) {
    const cPtr_instructionAST * p = (cPtr_instructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_instructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST GGS_instructionAST_2E_weak::bang_instructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_instructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_instructionAST) ;
      result = GGS_instructionAST ((cPtr_instructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @instructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionAST_2E_weak ("instructionAST.weak",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak GGS_instructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_instructionAST_2E_weak result ;
  const GGS_instructionAST_2E_weak * p = (const GGS_instructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  UpEnumerator_instructionListAST enumerator_2311 (temp_0) ;
  while (enumerator_2311.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((cPtr_instructionAST *) enumerator_2311.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 56)) ;
    enumerator_2311.gotoNextObject () ;
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
  UpEnumerator_instructionListAST enumerator_4158 (temp_0) ;
  while (enumerator_4158.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4158.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 99)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_4158.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 100)) ;
    enumerator_4158.gotoNextObject () ;
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
  UpEnumerator_instructionListAST enumerator_5339 (temp_0) ;
  while (enumerator_5339.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_5339.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 130)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_5339.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 131)) ;
    enumerator_5339.gotoNextObject () ;
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
  UpEnumerator_instructionListIR enumerator_6310 (temp_0) ;
  while (enumerator_6310.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((cPtr_abstractInstructionIR *) enumerator_6310.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 155)) ;
    enumerator_6310.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_checkInstructionAST_2E_weak::objectCompare (const GGS_checkInstructionAST_2E_weak & inOperand) const {
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

GGS_checkInstructionAST_2E_weak::GGS_checkInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak & GGS_checkInstructionAST_2E_weak::operator = (const GGS_checkInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak::GGS_checkInstructionAST_2E_weak (const GGS_checkInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak GGS_checkInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_checkInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_checkInstructionAST result ;
  if (isValid ()) {
    const cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_checkInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST_2E_weak::bang_checkInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_checkInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_checkInstructionAST) ;
      result = GGS_checkInstructionAST ((cPtr_checkInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @checkInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ("checkInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_checkInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak GGS_checkInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_checkInstructionAST_2E_weak result ;
  const GGS_checkInstructionAST_2E_weak * p = (const GGS_checkInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionAST::objectCompare (const GGS_assertInstructionAST & inOperand) const {
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

GGS_assertInstructionAST::GGS_assertInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_expressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionAST (inCompiler COMMA_THERE)) ;
  object->assertInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_assertInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::
assertInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                   const GGS_expressionAST & in_mExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST::GGS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_expressionAST & in_mExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_assertInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_assertInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_assertInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_expressionAST & in_mExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assertInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

void cPtr_assertInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assertInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assertInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST ("assertInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_assertInstructionAST result ;
  const GGS_assertInstructionAST * p = (const GGS_assertInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionAST_2E_weak::objectCompare (const GGS_assertInstructionAST_2E_weak & inOperand) const {
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

GGS_assertInstructionAST_2E_weak::GGS_assertInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak & GGS_assertInstructionAST_2E_weak::operator = (const GGS_assertInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak::GGS_assertInstructionAST_2E_weak (const GGS_assertInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak GGS_assertInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assertInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_assertInstructionAST result ;
  if (isValid ()) {
    const cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_assertInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST_2E_weak::bang_assertInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assertInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionAST) ;
      result = GGS_assertInstructionAST ((cPtr_assertInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assertInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ("assertInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak GGS_assertInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_assertInstructionAST_2E_weak result ;
  const GGS_assertInstructionAST_2E_weak * p = (const GGS_assertInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionIR::objectCompare (const GGS_assertInstructionIR & inOperand) const {
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

GGS_assertInstructionIR::GGS_assertInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR::
init_21__21__21_ (const GGS_location & in_mAssertInstructionLocation,
                  const GGS_instructionListIR & in_mInstructionList,
                  const GGS_objectIR & in_mExpressionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionIR (inCompiler COMMA_THERE)) ;
  object->assertInstructionIR_init_21__21__21_ (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue, inCompiler) ;
  const GGS_assertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::
assertInstructionIR_init_21__21__21_ (const GGS_location & in_mAssertInstructionLocation,
                                      const GGS_instructionListIR & in_mInstructionList,
                                      const GGS_objectIR & in_mExpressionValue,
                                      Compiler * /* inCompiler */) {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR::GGS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR::class_func_new (const GGS_location & in_mAssertInstructionLocation,
                                                                 const GGS_instructionListIR & in_mInstructionList,
                                                                 const GGS_objectIR & in_mExpressionValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_assertInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assertInstructionIR (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_assertInstructionIR::readProperty_mAssertInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mAssertInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionIR::setProperty_mAssertInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mAssertInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_assertInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionIR::setProperty_mInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_assertInstructionIR::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionIR::setProperty_mExpressionValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mExpressionValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GGS_location & in_mAssertInstructionLocation,
                                                    const GGS_instructionListIR & in_mInstructionList,
                                                    const GGS_objectIR & in_mExpressionValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

void cPtr_assertInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionIR:") ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assertInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionIR (mProperty_mAssertInstructionLocation, mProperty_mInstructionList, mProperty_mExpressionValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssertInstructionLocation.printNonNullClassInstanceProperties ("mAssertInstructionLocation") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assertInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR ("assertInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_assertInstructionIR result ;
  const GGS_assertInstructionIR * p = (const GGS_assertInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionIR_2E_weak::objectCompare (const GGS_assertInstructionIR_2E_weak & inOperand) const {
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

GGS_assertInstructionIR_2E_weak::GGS_assertInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak & GGS_assertInstructionIR_2E_weak::operator = (const GGS_assertInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak::GGS_assertInstructionIR_2E_weak (const GGS_assertInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak GGS_assertInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assertInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_assertInstructionIR result ;
  if (isValid ()) {
    const cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_assertInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR_2E_weak::bang_assertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assertInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionIR) ;
      result = GGS_assertInstructionIR ((cPtr_assertInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assertInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ("assertInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak GGS_assertInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_assertInstructionIR_2E_weak result ;
  const GGS_assertInstructionIR_2E_weak * p = (const GGS_assertInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST_2E_weak::objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_assignmentInstructionAST_2E_weak::GGS_assignmentInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak & GGS_assignmentInstructionAST_2E_weak::operator = (const GGS_assignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak::GGS_assignmentInstructionAST_2E_weak (const GGS_assignmentInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak GGS_assignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_assignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST_2E_weak::bang_assignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionAST) ;
      result = GGS_assignmentInstructionAST ((cPtr_assignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ("assignmentInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak GGS_assignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionAST_2E_weak result ;
  const GGS_assignmentInstructionAST_2E_weak * p = (const GGS_assignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum controlRegisterAssignmentOperatorKind
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind::GGS_controlRegisterAssignmentOperatorKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind GGS_controlRegisterAssignmentOperatorKind::class_func_assignment (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind result ;
  result.mEnum = Enumeration::enum_assignment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind GGS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (const GGS_omnibusInfixOperator & inAssociatedValue0,
                                                                                                                        const GGS_location & inAssociatedValue1
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind result ;
  result.mEnum = Enumeration::enum_assignmentWithOperator ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind::method_extractAssignmentWithOperator (GGS_omnibusInfixOperator & outAssociatedValue_infixOperator,
                                                                                      GGS_location & outAssociatedValue_operatorLocation,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_assignmentWithOperator) {
    outAssociatedValue_infixOperator.drop () ;
    outAssociatedValue_operatorLocation.drop () ;
    String s ;
    s.appendCString ("method @controlRegisterAssignmentOperatorKind.assignmentWithOperator invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_infixOperator = ptr->mProperty_infixOperator ;
    outAssociatedValue_operatorLocation = ptr->mProperty_operatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ GGS_controlRegisterAssignmentOperatorKind::getter_getAssignmentWithOperator (UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ result ;
  if (mEnum == Enumeration::enum_assignmentWithOperator) {
    const auto ptr = (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind::getAssociatedValuesFor_assignmentWithOperator (GGS_omnibusInfixOperator & out_infixOperator,
                                                                                               GGS_location & out_operatorLocation) const {
  const auto ptr = (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator *) mAssociatedValues.associatedValuesPointer () ;
  out_infixOperator = ptr->mProperty_infixOperator ;
  out_operatorLocation = ptr->mProperty_operatorLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_controlRegisterAssignmentOperatorKind [3] = {
  "(not built)",
  "assignment",
  "assignmentWithOperator"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterAssignmentOperatorKind::getter_isAssignment (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_assignment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterAssignmentOperatorKind::getter_isAssignmentWithOperator (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_assignmentWithOperator == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentOperatorKind::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @controlRegisterAssignmentOperatorKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_controlRegisterAssignmentOperatorKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterAssignmentOperatorKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind ("controlRegisterAssignmentOperatorKind",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentOperatorKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentOperatorKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentOperatorKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind GGS_controlRegisterAssignmentOperatorKind::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentOperatorKind result ;
  const GGS_controlRegisterAssignmentOperatorKind * p = (const GGS_controlRegisterAssignmentOperatorKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentOperatorKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentOperatorKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_controlRegisterAssignmentInstructionAST_2E_weak::objectCompare (const GGS_controlRegisterAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_controlRegisterAssignmentInstructionAST_2E_weak::GGS_controlRegisterAssignmentInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak & GGS_controlRegisterAssignmentInstructionAST_2E_weak::operator = (const GGS_controlRegisterAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak::GGS_controlRegisterAssignmentInstructionAST_2E_weak (const GGS_controlRegisterAssignmentInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak GGS_controlRegisterAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_controlRegisterAssignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_controlRegisterAssignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST_2E_weak::bang_controlRegisterAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_controlRegisterAssignmentInstructionAST) ;
      result = GGS_controlRegisterAssignmentInstructionAST ((cPtr_controlRegisterAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterAssignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ("controlRegisterAssignmentInstructionAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak GGS_controlRegisterAssignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST_2E_weak result ;
  const GGS_controlRegisterAssignmentInstructionAST_2E_weak * p = (const GGS_controlRegisterAssignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sliceAssignmentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sliceAssignmentListAST : public cCollectionElement {
  public: GGS_sliceAssignmentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_sliceAssignmentListAST (const GGS_lstring & in_mSliceWidth,
                                                     const GGS_sliceTargetAST & in_mSliceKind
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sliceAssignmentListAST (const GGS_sliceAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GGS_lstring & in_mSliceWidth,
                                                                                      const GGS_sliceTargetAST & in_mSliceKind
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceWidth, in_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sliceAssignmentListAST::cCollectionElement_sliceAssignmentListAST (const GGS_sliceAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSliceWidth, inElement.mProperty_mSliceKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sliceAssignmentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sliceAssignmentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sliceAssignmentListAST (mObject.mProperty_mSliceWidth, mObject.mProperty_mSliceKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @sliceAssignmentListAST
//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST::GGS_sliceAssignmentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST::GGS_sliceAssignmentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_sliceAssignmentListAST * p = (cCollectionElement_sliceAssignmentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_sliceAssignmentListAST) ;
    const GGS_sliceAssignmentListAST_2E_element element (p->mObject.mProperty_mSliceWidth, p->mObject.mProperty_mSliceKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mSliceWidth,
                                                            const GGS_sliceTargetAST & in_mSliceKind
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_sliceAssignmentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sliceAssignmentListAST (in_mSliceWidth, in_mSliceKind COMMA_THERE)) ;
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

GGS_sliceAssignmentListAST GGS_sliceAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_sliceAssignmentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_sliceAssignmentInstructionAST_2E_weak::GGS_sliceAssignmentInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST_2E_weak & GGS_sliceAssignmentInstructionAST_2E_weak::operator = (const GGS_sliceAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_bitbandInstructionAST_2E_weak::objectCompare (const GGS_bitbandInstructionAST_2E_weak & inOperand) const {
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

GGS_bitbandInstructionAST_2E_weak::GGS_bitbandInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST_2E_weak & GGS_bitbandInstructionAST_2E_weak::operator = (const GGS_bitbandInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST_2E_weak::GGS_bitbandInstructionAST_2E_weak (const GGS_bitbandInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST_2E_weak GGS_bitbandInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitbandInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_bitbandInstructionAST result ;
  if (isValid ()) {
    const cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_bitbandInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST_2E_weak::bang_bitbandInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitbandInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitbandInstructionAST) ;
      result = GGS_bitbandInstructionAST ((cPtr_bitbandInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitbandInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2E_weak ("bitbandInstructionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitbandInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitbandInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitbandInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST_2E_weak GGS_bitbandInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionAST_2E_weak result ;
  const GGS_bitbandInstructionAST_2E_weak * p = (const GGS_bitbandInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitbandInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitbandInstructionIR::objectCompare (const GGS_bitbandInstructionIR & inOperand) const {
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

GGS_bitbandInstructionIR::GGS_bitbandInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mRegisterAddressLLVMname,
                                  const GGS_objectIR & in_mBitExpressionOperand,
                                  const GGS_objectIR & in_mSourceExpressionOperand,
                                  const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                  const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                  const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                  const GGS_bigint & in_mBitbandRegisterBitMultiplier,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionIR (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionIR_init_21__21__21__21__21__21__21_ (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier, inCompiler) ;
  const GGS_bitbandInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::
bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const GGS_string & in_mRegisterAddressLLVMname,
                                                       const GGS_objectIR & in_mBitExpressionOperand,
                                                       const GGS_objectIR & in_mSourceExpressionOperand,
                                                       const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                                       const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                                       const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                       const GGS_bigint & in_mBitbandRegisterBitMultiplier,
                                                       Compiler * /* inCompiler */) {
  mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR::GGS_bitbandInstructionIR (const cPtr_bitbandInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR::class_func_new (const GGS_string & in_mRegisterAddressLLVMname,
                                                                   const GGS_objectIR & in_mBitExpressionOperand,
                                                                   const GGS_objectIR & in_mSourceExpressionOperand,
                                                                   const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                                                   const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                                                   const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                                   const GGS_bigint & in_mBitbandRegisterBitMultiplier,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionIR (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bitbandInstructionIR::readProperty_mRegisterAddressLLVMname (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mRegisterAddressLLVMname ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mRegisterAddressLLVMname (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mRegisterAddressLLVMname = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_bitbandInstructionIR::readProperty_mBitExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitExpressionOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_bitbandInstructionIR::readProperty_mSourceExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mSourceExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mSourceExpressionOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mSourceExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterBaseAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterBaseAddress (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBaseAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterRelocationAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterRelocationAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterRelocationAddress (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterRelocationAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterOffsetMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterOffsetMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterOffsetMultiplier (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterBitMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBitMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterBitMultiplier (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBitMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mRegisterAddressLLVMname (),
mProperty_mBitExpressionOperand (),
mProperty_mSourceExpressionOperand (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (const GGS_string & in_mRegisterAddressLLVMname,
                                                      const GGS_objectIR & in_mBitExpressionOperand,
                                                      const GGS_objectIR & in_mSourceExpressionOperand,
                                                      const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                                      const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                                      const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                      const GGS_bigint & in_mBitbandRegisterBitMultiplier,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mRegisterAddressLLVMname (),
mProperty_mBitExpressionOperand (),
mProperty_mSourceExpressionOperand (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier () {
  mProperty_mRegisterAddressLLVMname = in_mRegisterAddressLLVMname ;
  mProperty_mBitExpressionOperand = in_mBitExpressionOperand ;
  mProperty_mSourceExpressionOperand = in_mSourceExpressionOperand ;
  mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bitbandInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

void cPtr_bitbandInstructionIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@bitbandInstructionIR:") ;
  mProperty_mRegisterAddressLLVMname.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpressionOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionIR (mProperty_mRegisterAddressLLVMname, mProperty_mBitExpressionOperand, mProperty_mSourceExpressionOperand, mProperty_mBitbandRegisterBaseAddress, mProperty_mBitbandRegisterRelocationAddress, mProperty_mBitbandRegisterOffsetMultiplier, mProperty_mBitbandRegisterBitMultiplier, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitbandInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterAddressLLVMname.printNonNullClassInstanceProperties ("mRegisterAddressLLVMname") ;
    mProperty_mBitExpressionOperand.printNonNullClassInstanceProperties ("mBitExpressionOperand") ;
    mProperty_mSourceExpressionOperand.printNonNullClassInstanceProperties ("mSourceExpressionOperand") ;
    mProperty_mBitbandRegisterBaseAddress.printNonNullClassInstanceProperties ("mBitbandRegisterBaseAddress") ;
    mProperty_mBitbandRegisterRelocationAddress.printNonNullClassInstanceProperties ("mBitbandRegisterRelocationAddress") ;
    mProperty_mBitbandRegisterOffsetMultiplier.printNonNullClassInstanceProperties ("mBitbandRegisterOffsetMultiplier") ;
    mProperty_mBitbandRegisterBitMultiplier.printNonNullClassInstanceProperties ("mBitbandRegisterBitMultiplier") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitbandInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ("bitbandInstructionIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitbandInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitbandInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitbandInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionIR result ;
  const GGS_bitbandInstructionIR * p = (const GGS_bitbandInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitbandInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitbandInstructionIR_2E_weak::objectCompare (const GGS_bitbandInstructionIR_2E_weak & inOperand) const {
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

GGS_bitbandInstructionIR_2E_weak::GGS_bitbandInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR_2E_weak & GGS_bitbandInstructionIR_2E_weak::operator = (const GGS_bitbandInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR_2E_weak::GGS_bitbandInstructionIR_2E_weak (const GGS_bitbandInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR_2E_weak GGS_bitbandInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bitbandInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_bitbandInstructionIR result ;
  if (isValid ()) {
    const cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_bitbandInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR_2E_weak::bang_bitbandInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bitbandInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bitbandInstructionIR) ;
      result = GGS_bitbandInstructionIR ((cPtr_bitbandInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bitbandInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2E_weak ("bitbandInstructionIR.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitbandInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitbandInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitbandInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR_2E_weak GGS_bitbandInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionIR_2E_weak result ;
  const GGS_bitbandInstructionIR_2E_weak * p = (const GGS_bitbandInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitbandInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
      GGS_lstring extractedValue_3101_name_0 ;
      GGS_LValueOperandAST extractedValue_3124_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_3101_name_0, extractedValue_3124_next_1) ;
      ioArgument_ioExpressionAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_property (extractedValue_3101_name_0  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3124_next_1, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_3283_index_0 ;
      GGS_location extractedValue_3299_endOfIndex_1 ;
      GGS_bool extractedValue_3316_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_3355_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_3283_index_0, extractedValue_3299_endOfIndex_1, extractedValue_3316_checkIndexExpression_2, extractedValue_3355_next_3) ;
      ioArgument_ioExpressionAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_arrayAccess (extractedValue_3283_index_0, extractedValue_3299_endOfIndex_1, extractedValue_3316_checkIndexExpression_2  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96))  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 96)) ;
      extensionMethod_buildExpressionAccessList (extractedValue_3355_next_3, ioArgument_ioExpressionAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 97)) ;
    }
    break ;
  }
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
// @instructionNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_instructionNOP::objectCompare (const GGS_instructionNOP & inOperand) const {
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

GGS_instructionNOP::GGS_instructionNOP (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_instructionNOP GGS_instructionNOP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_instructionNOP * object = nullptr ;
  macroMyNew (object, cPtr_instructionNOP (inCompiler COMMA_THERE)) ;
  object->instructionNOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_instructionNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::
instructionNOP_init_21_ (const GGS_location & in_mInstructionLocation,
                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionNOP::GGS_instructionNOP (const cPtr_instructionNOP * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_instructionNOP GGS_instructionNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_instructionNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_instructionNOP (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @instructionNOP class
//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_instructionNOP::cPtr_instructionNOP (const GGS_location & in_mInstructionLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_instructionNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP ;
}

void cPtr_instructionNOP::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@instructionNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_instructionNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_instructionNOP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @instructionNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionNOP ("instructionNOP",
                                                                   & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionNOP GGS_instructionNOP::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_instructionNOP result ;
  const GGS_instructionNOP * p = (const GGS_instructionNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GGS_instructionNOP GGS_instructionNOP_2E_weak::unwrappedValue (void) const {
  GGS_instructionNOP result ;
  if (isValid ()) {
    const cPtr_instructionNOP * p = (cPtr_instructionNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_instructionNOP (p) ;
    }
  }
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
//     @instructionNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionNOP_2E_weak ("instructionNOP.weak",
                                                                           & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionNOP_2E_weak::staticTypeDescriptor (void) const {
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
                                                                 const GGS_expressionAST & in_mCodeExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_panicInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionAST (in_mInstructionLocation, in_mCodeExpression,  inCompiler COMMA_THERE)) ;
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

cPtr_panicInstructionAST::cPtr_panicInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCodeExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_expressionAST & in_mCodeExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCodeExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_panicInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_panicInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionAST (mProperty_mInstructionLocation, mProperty_mCodeExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCodeExpression.printNonNullClassInstanceProperties ("mCodeExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @panicInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST ("panicInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionAST::staticTypeDescriptor (void) const {
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

GGS_panicInstructionAST GGS_panicInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_panicInstructionAST result ;
  if (isValid ()) {
    const cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_panicInstructionAST (p) ;
    }
  }
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
//     @panicInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ("panicInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
                                                               const GGS_bigint & in_mPanicCode,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_panicInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (in_mThrowLocation, in_mPanicCode,  inCompiler COMMA_THERE)) ;
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

cPtr_panicInstructionIR::cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GGS_location & in_mThrowLocation,
                                                  const GGS_bigint & in_mPanicCode,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_panicInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mProperty_mThrowLocation, mProperty_mPanicCode, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @panicInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR ("panicInstructionIR",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionIR::staticTypeDescriptor (void) const {
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

GGS_panicInstructionIR GGS_panicInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_panicInstructionIR result ;
  if (isValid ()) {
    const cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_panicInstructionIR (p) ;
    }
  }
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
//     @panicInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ("panicInstructionIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionIR_2E_weak::staticTypeDescriptor (void) const {
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
                                                           const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction,  inCompiler COMMA_THERE)) ;
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

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_expressionAST & in_mTestExpression,
                                              const GGS_location & in_mTestExpressionEndLocation,
                                              const GGS_bool & in_mStaticIfExpression,
                                              const GGS_instructionListAST & in_mThenInstructionList,
                                              const GGS_location & in_mEndOfThenInstructionList,
                                              const GGS_instructionListAST & in_mElseInstructionList,
                                              const GGS_location & in_mEndOfElseInstructionList,
                                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_ifInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mTestExpression, mProperty_mTestExpressionEndLocation, mProperty_mStaticIfExpression, mProperty_mThenInstructionList, mProperty_mEndOfThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ifInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST::staticTypeDescriptor (void) const {
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

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionAST result ;
  if (isValid ()) {
    const cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionAST (p) ;
    }
  }
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
//     @ifInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ("ifInstructionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
                                                         const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_ifInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList,  inCompiler COMMA_THERE)) ;
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

cPtr_ifInstructionIR::cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GGS_string & in_mLLVMTestName,
                                            const GGS_location & in_mLocation,
                                            const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_ifInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_ifInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionIR (mProperty_mLLVMTestName, mProperty_mLocation, mProperty_mThenInstructionGenerationList, mProperty_mElseInstructionGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ifInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR ("ifInstructionIR",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionIR::staticTypeDescriptor (void) const {
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

GGS_ifInstructionIR GGS_ifInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionIR result ;
  if (isValid ()) {
    const cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionIR (p) ;
    }
  }
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
//     @ifInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ("ifInstructionIR.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_syncInstructionAST GGS_syncInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                               const GGS_syncInstructionBranchListAST & in_mBranchList,
                                                               const GGS_location & in_mEndOf_5F_on_5F_instruction,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_syncInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionAST (in_mInstructionLocation, in_mBranchList, in_mEndOf_5F_on_5F_instruction,  inCompiler COMMA_THERE)) ;
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

GGS_syncInstructionBranchListIR GGS_syncInstructionBranchListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_guardedCommandIRList GGS_guardedCommandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIRList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_syncInstructionIR GGS_syncInstructionIR::class_func_new (const GGS_location & in_mSelectInstructionLocation,
                                                             const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_syncInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (in_mSelectInstructionLocation, in_mOnInstructionBranchListIR,  inCompiler COMMA_THERE)) ;
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
// @whileInstructionAST reference class
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
                                                                 const GGS_location & in_mEndOf_5F_while_5F_instruction,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_whileInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (in_mInstructionLocation, in_m_5F_while_5F_Expression, in_mEndOf_5F_test_5F_expression, in_mWhileInstructionList, in_mEndOf_5F_while_5F_instruction,  inCompiler COMMA_THERE)) ;
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

cPtr_whileInstructionAST::cPtr_whileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_m_5F_while_5F_Expression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mWhileInstructionList (),
mProperty_mEndOf_5F_while_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionAST::cPtr_whileInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_expressionAST & in_m_5F_while_5F_Expression,
                                                    const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GGS_instructionListAST & in_mWhileInstructionList,
                                                    const GGS_location & in_mEndOf_5F_while_5F_instruction,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_whileInstructionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_whileInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mProperty_mInstructionLocation, mProperty_m_5F_while_5F_Expression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mWhileInstructionList, mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @whileInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionAST ("whileInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_whileInstructionAST::staticTypeDescriptor (void) const {
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

GGS_whileInstructionAST GGS_whileInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_whileInstructionAST result ;
  if (isValid ()) {
    const cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_whileInstructionAST (p) ;
    }
  }
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
//     @whileInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionAST_2E_weak ("whileInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_whileInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
                                                               const GGS_instructionListIR & in_mInstructionGenerationList,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_whileInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (in_mLabelIndex, in_mTestInstructionGenerationList, in_m_5F_while_5F_llvmName, in_mInstructionGenerationList,  inCompiler COMMA_THERE)) ;
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

cPtr_whileInstructionIR::cPtr_whileInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mTestInstructionGenerationList (),
mProperty_m_5F_while_5F_llvmName (),
mProperty_mInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_whileInstructionIR::cPtr_whileInstructionIR (const GGS_uint & in_mLabelIndex,
                                                  const GGS_instructionListIR & in_mTestInstructionGenerationList,
                                                  const GGS_string & in_m_5F_while_5F_llvmName,
                                                  const GGS_instructionListIR & in_mInstructionGenerationList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_whileInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_whileInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_whileInstructionIR (mProperty_mLabelIndex, mProperty_mTestInstructionGenerationList, mProperty_m_5F_while_5F_llvmName, mProperty_mInstructionGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @whileInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionIR ("whileInstructionIR",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_whileInstructionIR::staticTypeDescriptor (void) const {
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

GGS_whileInstructionIR GGS_whileInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_whileInstructionIR result ;
  if (isValid ()) {
    const cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_whileInstructionIR (p) ;
    }
  }
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
//     @whileInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionIR_2E_weak ("whileInstructionIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_whileInstructionIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_callInstructionAST GGS_callInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_callInstructionAST result ;
  if (isValid ()) {
    const cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_callInstructionAST (p) ;
    }
  }
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
//     @callInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_callInstructionAST_2E_weak ("callInstructionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_callInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

GGS_standAloneProcedureCallInstructionAST GGS_standAloneProcedureCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_standAloneProcedureCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_standAloneProcedureCallInstructionAST * p = (cPtr_standAloneProcedureCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_standAloneProcedureCallInstructionAST (p) ;
    }
  }
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
//     @standAloneProcedureCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2E_weak ("standAloneProcedureCallInstructionAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_callInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_standAloneProcedureCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@accessInAssignmentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_accessInAssignmentListAST : public cCollectionElement {
  public: GGS_accessInAssignmentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_accessInAssignmentListAST (const GGS_accessInAssignmentAST & in_mAccess
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_accessInAssignmentListAST (const GGS_accessInAssignmentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @accessInAssignmentListAST
//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST::GGS_accessInAssignmentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST::GGS_accessInAssignmentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_accessInAssignmentListAST * p = (cCollectionElement_accessInAssignmentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_accessInAssignmentListAST) ;
    const GGS_accessInAssignmentListAST_2E_element element (p->mObject.mProperty_mAccess) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_accessInAssignmentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_accessInAssignmentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::description (String & ioString,
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
      ioString.appendString ("mAccess:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAccess.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_accessInAssignmentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::plusPlusAssignOperation (const GGS_accessInAssignmentListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::class_func_listWithValue (const GGS_accessInAssignmentAST & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_accessInAssignmentListAST_2E_element element (inOperand0) ;
  GGS_accessInAssignmentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::addAssignOperation (const GGS_accessInAssignmentAST & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_accessInAssignmentListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::setter_append (const GGS_accessInAssignmentAST inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_accessInAssignmentListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::setter_insertAtIndex (const GGS_accessInAssignmentAST inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_accessInAssignmentListAST_2E_element newElement (inOperand0) ;
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

void GGS_accessInAssignmentListAST::setter_removeAtIndex (GGS_accessInAssignmentAST & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAccess ;
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

void GGS_accessInAssignmentListAST::setter_popFirst (GGS_accessInAssignmentAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAccess ;
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

void GGS_accessInAssignmentListAST::setter_popLast (GGS_accessInAssignmentAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAccess ;
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

void GGS_accessInAssignmentListAST::method_first (GGS_accessInAssignmentAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAccess ;
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

void GGS_accessInAssignmentListAST::method_last (GGS_accessInAssignmentAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAccess ;
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

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::add_operation (const GGS_accessInAssignmentListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result ;
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

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result ;
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

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST GGS_accessInAssignmentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_accessInAssignmentListAST::plusAssignOperation (const GGS_accessInAssignmentListAST inList,
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

void GGS_accessInAssignmentListAST::setter_setMAccessAtIndex (GGS_accessInAssignmentAST inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAccess = inOperand ;
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
  
GGS_accessInAssignmentAST GGS_accessInAssignmentListAST::getter_mAccessAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_accessInAssignmentAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAccess ;
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
// Down Enumerator for @accessInAssignmentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_accessInAssignmentListAST::DownEnumerator_accessInAssignmentListAST (const GGS_accessInAssignmentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element DownEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST DownEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAccess ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @accessInAssignmentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_accessInAssignmentListAST::UpEnumerator_accessInAssignmentListAST (const GGS_accessInAssignmentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentListAST_2E_element UpEnumerator_accessInAssignmentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_accessInAssignmentAST UpEnumerator_accessInAssignmentListAST::current_mAccess (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAccess ;
}




//--------------------------------------------------------------------------------------------------
//     @accessInAssignmentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST ("accessInAssignmentListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_accessInAssignmentListAST::staticTypeDescriptor (void) const {
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

GGS_procedureCallInstructionAST GGS_procedureCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_procedureCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_procedureCallInstructionAST (p) ;
    }
  }
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
//     @procedureCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2E_weak ("procedureCallInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_callInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procedureCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
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

