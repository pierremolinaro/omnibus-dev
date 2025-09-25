#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

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
      GGS_lstring extractedValue_3022_name_0 ;
      GGS_LValueOperandAST extractedValue_3045_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_3022_name_0, extractedValue_3045_next_1) ;
      ioArgument_ioAccessList.addAssignOperation (GGS_accessInAssignmentAST::class_func_property (extractedValue_3022_name_0  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3045_next_1, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 73)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_3187_index_0 ;
      GGS_location extractedValue_3203_endOfIndex_1 ;
      GGS_bool extractedValue_3220_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_3259_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_3187_index_0, extractedValue_3203_endOfIndex_1, extractedValue_3220_checkIndexExpression_2, extractedValue_3259_next_3) ;
      ioArgument_ioAccessList.addAssignOperation (GGS_accessInAssignmentAST::class_func_arrayAccess (extractedValue_3187_index_0, extractedValue_3203_endOfIndex_1, extractedValue_3220_checkIndexExpression_2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      extensionMethod_buildProcedureCallAccessList (extractedValue_3259_next_3, ioArgument_ioAccessList, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 76)) ;
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
//Class for element of '@procEffectiveParameterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public: GGS_procEffectiveParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_procEffectiveParameterList (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                         const GGS_lstring & in_mSelector,
                                                         const GGS_omnibusType & in_mParameterType
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procEffectiveParameterList (const GGS_procEffectiveParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @procEffectiveParameterList
//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList::GGS_procEffectiveParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList::GGS_procEffectiveParameterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    const GGS_procEffectiveParameterList_2E_element element (p->mObject.mProperty_mEffectiveParameterPassingMode, p->mObject.mProperty_mSelector, p->mObject.mProperty_mParameterType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                const GGS_lstring & in_mSelector,
                                                                const GGS_omnibusType & in_mParameterType
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_procEffectiveParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_procEffectiveParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::description (String & ioString,
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
      ioString.appendString ("mEffectiveParameterPassingMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::plusPlusAssignOperation (const GGS_procEffectiveParameterList_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::class_func_listWithValue (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS_omnibusType & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_procEffectiveParameterList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_procEffectiveParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::addAssignOperation (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS_omnibusType & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_procEffectiveParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_append (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_omnibusType inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_procEffectiveParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::setter_insertAtIndex (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS_omnibusType inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_procEffectiveParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_procEffectiveParameterList::setter_removeAtIndex (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_omnibusType & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mParameterType ;
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

void GGS_procEffectiveParameterList::setter_popFirst (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_omnibusType & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
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

void GGS_procEffectiveParameterList::setter_popLast (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_omnibusType & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameterType ;
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

void GGS_procEffectiveParameterList::method_first (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_omnibusType & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
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

void GGS_procEffectiveParameterList::method_last (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_omnibusType & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameterType ;
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

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::add_operation (const GGS_procEffectiveParameterList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result ;
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

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result ;
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

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList GGS_procEffectiveParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procEffectiveParameterList::plusAssignOperation (const GGS_procEffectiveParameterList inList,
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

void GGS_procEffectiveParameterList::setter_setMEffectiveParameterPassingModeAtIndex (GGS_effectiveArgumentPassingModeAST inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterPassingMode = inOperand ;
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
  
GGS_effectiveArgumentPassingModeAST GGS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentPassingModeAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterPassingMode ;
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

void GGS_procEffectiveParameterList::setter_setMSelectorAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_procEffectiveParameterList::getter_mSelectorAtIndex (const GGS_uint & inIndex,
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

void GGS_procEffectiveParameterList::setter_setMParameterTypeAtIndex (GGS_omnibusType inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType = inOperand ;
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
  
GGS_omnibusType GGS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType ;
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
// Down Enumerator for @procEffectiveParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_procEffectiveParameterList::DownEnumerator_procEffectiveParameterList (const GGS_procEffectiveParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element DownEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST DownEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @procEffectiveParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_procEffectiveParameterList::UpEnumerator_procEffectiveParameterList (const GGS_procEffectiveParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterList_2E_element UpEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST UpEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}




//--------------------------------------------------------------------------------------------------
//     @procEffectiveParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ("procEffectiveParameterList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procEffectiveParameterList::staticTypeDescriptor (void) const {
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
//     @procEffectiveParameterPassingModeIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ("procEffectiveParameterPassingModeIR",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
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
//Class for element of '@procCallEffectiveParameterListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_procCallEffectiveParameterListIR : public cCollectionElement {
  public: GGS_procCallEffectiveParameterListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_procCallEffectiveParameterListIR (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                               const GGS_objectIR & in_mParameter
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @procCallEffectiveParameterListIR
//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR::GGS_procCallEffectiveParameterListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR::GGS_procCallEffectiveParameterListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    const GGS_procCallEffectiveParameterListIR_2E_element element (p->mObject.mProperty_mEffectiveParameterPassingMode, p->mObject.mProperty_mParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                      const GGS_objectIR & in_mParameter
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode, in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_procCallEffectiveParameterListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_procCallEffectiveParameterListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::description (String & ioString,
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
      ioString.appendString ("mEffectiveParameterPassingMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation + 1) ;
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

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_procCallEffectiveParameterListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procCallEffectiveParameterListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::plusPlusAssignOperation (const GGS_procCallEffectiveParameterListIR_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::class_func_listWithValue (const GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                     const GGS_objectIR & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_procCallEffectiveParameterListIR_2E_element element (inOperand0, inOperand1) ;
  GGS_procCallEffectiveParameterListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::addAssignOperation (const GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                               const GGS_objectIR & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  const GGS_procCallEffectiveParameterListIR_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::setter_append (const GGS_procEffectiveParameterPassingModeIR inOperand0,
                                                          const GGS_objectIR inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_procCallEffectiveParameterListIR_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::setter_insertAtIndex (const GGS_procEffectiveParameterPassingModeIR inOperand0,
                                                                 const GGS_objectIR inOperand1,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_procCallEffectiveParameterListIR_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_procCallEffectiveParameterListIR::setter_removeAtIndex (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                 GGS_objectIR & outOperand1,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameter ;
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

void GGS_procCallEffectiveParameterListIR::setter_popFirst (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GGS_objectIR & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameter ;
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

void GGS_procCallEffectiveParameterListIR::setter_popLast (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GGS_objectIR & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameter ;
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

void GGS_procCallEffectiveParameterListIR::method_first (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                         GGS_objectIR & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameter ;
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

void GGS_procCallEffectiveParameterListIR::method_last (GGS_procEffectiveParameterPassingModeIR & outOperand0,
                                                        GGS_objectIR & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEffectiveParameterPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameter ;
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

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::add_operation (const GGS_procCallEffectiveParameterListIR & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result ;
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

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result ;
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

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR GGS_procCallEffectiveParameterListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_procCallEffectiveParameterListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procCallEffectiveParameterListIR::plusAssignOperation (const GGS_procCallEffectiveParameterListIR inList,
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

void GGS_procCallEffectiveParameterListIR::setter_setMEffectiveParameterPassingModeAtIndex (GGS_procEffectiveParameterPassingModeIR inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterPassingMode = inOperand ;
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
  
GGS_procEffectiveParameterPassingModeIR GGS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_procEffectiveParameterPassingModeIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEffectiveParameterPassingMode ;
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

void GGS_procCallEffectiveParameterListIR::setter_setMParameterAtIndex (GGS_objectIR inOperand,
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
  
GGS_objectIR GGS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
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
// Down Enumerator for @procCallEffectiveParameterListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_procCallEffectiveParameterListIR::DownEnumerator_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element DownEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR DownEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @procCallEffectiveParameterListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_procCallEffectiveParameterListIR::UpEnumerator_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallEffectiveParameterListIR_2E_element UpEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procEffectiveParameterPassingModeIR UpEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEffectiveParameterPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @procCallEffectiveParameterListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
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
//Class for element of '@switchCaseListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchCaseListAST : public cCollectionElement {
  public: GGS_switchCaseListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchCaseListAST (const GGS_lstringlist & in_mCaseIdentifiers,
                                                const GGS_instructionListAST & in_mCaseInstructionList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchCaseListAST (const GGS_switchCaseListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @switchCaseListAST
//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST::GGS_switchCaseListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST::GGS_switchCaseListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_switchCaseListAST * p = (cCollectionElement_switchCaseListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_switchCaseListAST) ;
    const GGS_switchCaseListAST_2E_element element (p->mObject.mProperty_mCaseIdentifiers, p->mObject.mProperty_mCaseInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstringlist & in_mCaseIdentifiers,
                                                       const GGS_instructionListAST & in_mCaseInstructionList
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchCaseListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchCaseListAST (in_mCaseIdentifiers, in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchCaseListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_switchCaseListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::description (String & ioString,
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
      ioString.appendString ("mCaseIdentifiers:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseIdentifiers.description (ioString, inIndentation + 1) ;
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

GGS_switchCaseListAST GGS_switchCaseListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::plusPlusAssignOperation (const GGS_switchCaseListAST_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::class_func_listWithValue (const GGS_lstringlist & inOperand0,
                                                                       const GGS_instructionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_switchCaseListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::addAssignOperation (const GGS_lstringlist & inOperand0,
                                                const GGS_instructionListAST & inOperand1
                                                COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_append (const GGS_lstringlist inOperand0,
                                           const GGS_instructionListAST inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_insertAtIndex (const GGS_lstringlist inOperand0,
                                                  const GGS_instructionListAST inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_switchCaseListAST::setter_removeAtIndex (GGS_lstringlist & outOperand0,
                                                  GGS_instructionListAST & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCaseIdentifiers ;
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

void GGS_switchCaseListAST::setter_popFirst (GGS_lstringlist & outOperand0,
                                             GGS_instructionListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifiers ;
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

void GGS_switchCaseListAST::setter_popLast (GGS_lstringlist & outOperand0,
                                            GGS_instructionListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifiers ;
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

void GGS_switchCaseListAST::method_first (GGS_lstringlist & outOperand0,
                                          GGS_instructionListAST & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifiers ;
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

void GGS_switchCaseListAST::method_last (GGS_lstringlist & outOperand0,
                                         GGS_instructionListAST & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifiers ;
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

GGS_switchCaseListAST GGS_switchCaseListAST::add_operation (const GGS_switchCaseListAST & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
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

GGS_switchCaseListAST GGS_switchCaseListAST::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
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

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::plusAssignOperation (const GGS_switchCaseListAST inList,
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

void GGS_switchCaseListAST::setter_setMCaseIdentifiersAtIndex (GGS_lstringlist inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifiers = inOperand ;
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
  
GGS_lstringlist GGS_switchCaseListAST::getter_mCaseIdentifiersAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifiers ;
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

void GGS_switchCaseListAST::setter_setMCaseInstructionListAtIndex (GGS_instructionListAST inOperand,
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
  
GGS_instructionListAST GGS_switchCaseListAST::getter_mCaseInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
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
// Down Enumerator for @switchCaseListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_switchCaseListAST::DownEnumerator_switchCaseListAST (const GGS_switchCaseListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element DownEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @switchCaseListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_switchCaseListAST::UpEnumerator_switchCaseListAST (const GGS_switchCaseListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element UpEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @switchCaseListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListAST ("switchCaseListAST",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchCaseListAST::staticTypeDescriptor (void) const {
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
                                                                   const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction,  inCompiler COMMA_THERE)) ;
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

GGS_switchCaseListIR GGS_switchCaseListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_switchInstructionIR GGS_switchInstructionIR::class_func_new (const GGS_uint & in_mLabelIndex,
                                                                 const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                                 const GGS_objectIR & in_mSwitchExpression,
                                                                 const GGS_switchCaseListIR & in_mCaseGenerationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_switchInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionIR (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList,  inCompiler COMMA_THERE)) ;
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
      GGS_lstring extractedValue_4200__0 ;
      GGS_LValueOperandAST extractedValue_4220_next_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4200__0, extractedValue_4220_next_1) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4220_next_1, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_4322_indexExpression_0 ;
      GGS_location extractedValue_4339__1 ;
      GGS_bool extractedValue_4339__2 ;
      GGS_LValueOperandAST extractedValue_4359_next_3 ;
      temp_0.getAssociatedValuesFor_arrayAccess (extractedValue_4322_indexExpression_0, extractedValue_4339__1, extractedValue_4339__2, extractedValue_4359_next_3) ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4322_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 110)) ;
      extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_4359_next_3, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 111)) ;
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
//     @registerGroupIndexAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST ("registerGroupIndexAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupIndexAST::staticTypeDescriptor (void) const {
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
//     @registerIndexAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST ("registerIndexAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerIndexAST::staticTypeDescriptor (void) const {
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
//  Extension Getter '@effectiveArgumentListAST mangledName'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_mangledName (const GGS_effectiveArgumentListAST & inObject,
                                         const GGS_string & constinArgument_inReceiverTypeName,
                                         const GGS_lstring & constinArgument_inFunctionName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1591 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_1591.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 40)) ;
    }
  }
  var_s_1591.plusAssignOperation(constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 42)) ;
  const GGS_effectiveArgumentListAST temp_1 = inObject ;
  UpEnumerator_effectiveArgumentListAST enumerator_1744 (temp_1) ;
  while (enumerator_1744.hasCurrentObject ()) {
    var_s_1591.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_1744.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (enumerator_1744.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 44)) ;
    enumerator_1744.gotoNextObject () ;
  }
  var_s_1591.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 46)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1591, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@objectIR llvmName'
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
      GenericArray <FixItDescription> fixItArray1 ;
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
      UpEnumerator_sortedOperandIRList enumerator_1636 (extractedValue_1589_inValues_1) ;
      while (enumerator_1636.hasCurrentObject ()) {
        result_result.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_1636.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)).add_operation (extensionGetter_llvmName (enumerator_1636.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 38)) ;
        enumerator_1636.gotoNextObject () ;
        if (enumerator_1636.hasCurrentObject ()) {
          result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 39)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 41)) ;
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
      result_result.plusAssignOperation(function_literalCharacterArrayName (extractedValue_1972_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)).add_operation (GGS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 49)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_2209__0 ;
      GGS_uint extractedValue_2209__1 ;
      GGS_objectIR extractedValue_2209__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_2209__0, extractedValue_2209__1, extractedValue_2209__2) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 51)), GGS_string ("<< ERROR @objectIR llvmName llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 51)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_2341__0 ;
      GGS_operandIRList extractedValue_2341__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_2341__0, extractedValue_2341__1) ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 53)), GGS_string ("<< ERROR @objectIR llvmName llvmArrayDynamicValues >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 53)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@objectIR llvmValue'
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
      GenericArray <FixItDescription> fixItArray1 ;
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
      result_result.plusAssignOperation(function_literalCharacterArrayName (extractedValue_2957_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)).add_operation (GGS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 70)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_3182__0 ;
      GGS_sortedOperandIRList extractedValue_3205_inValues_1 ;
      temp_0.getAssociatedValuesFor_llvmStructureValue (extractedValue_3182__0, extractedValue_3205_inValues_1) ;
      result_result = GGS_string ("{") ;
      UpEnumerator_sortedOperandIRList enumerator_3252 (extractedValue_3205_inValues_1) ;
      while (enumerator_3252.hasCurrentObject ()) {
        result_result.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_3252.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)).add_operation (extensionGetter_llvmValue (enumerator_3252.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 74)) ;
        enumerator_3252.gotoNextObject () ;
        if (enumerator_3252.hasCurrentObject ()) {
          result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 75)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 77)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_3424__0 ;
      GGS_operandIRList extractedValue_3441_inValues_1 ;
      GGS_uint extractedValue_3450__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_3424__0, extractedValue_3441_inValues_1, extractedValue_3450__2) ;
      result_result = GGS_string ("[") ;
      UpEnumerator_operandIRList enumerator_3481 (extractedValue_3441_inValues_1) ;
      while (enumerator_3481.hasCurrentObject ()) {
        result_result.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_3481.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)).add_operation (extensionGetter_llvmValue (enumerator_3481.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 81)) ;
        enumerator_3481.gotoNextObject () ;
        if (enumerator_3481.hasCurrentObject ()) {
          result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 82)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 84)) ;
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
      UpEnumerator_range enumerator_3721 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_3669_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 87)))) ;
      while (enumerator_3721.hasCurrentObject ()) {
        result_result.plusAssignOperation(extensionGetter_llvmTypeName (extractedValue_3674_value_2, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)).add_operation (extensionGetter_llvmValue (extractedValue_3674_value_2, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 88)) ;
        enumerator_3721.gotoNextObject () ;
        if (enumerator_3721.hasCurrentObject ()) {
          result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 89)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 91)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_3886__0 ;
      GGS_uint extractedValue_3886__1 ;
      GGS_objectIR extractedValue_3886__2 ;
      temp_0.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_3886__0, extractedValue_3886__1, extractedValue_3886__2) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 93)), GGS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray2  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 93)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_4019__0 ;
      GGS_operandIRList extractedValue_4019__1 ;
      temp_0.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_4019__0, extractedValue_4019__1) ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 95)), GGS_string ("<< ERROR @objectIR llvmValue llvmArrayRepeatedDynamicValue >>\n"), fixItArray3  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 95)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@objectIR type'
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
      GenericArray <FixItDescription> fixItArray1 ;
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
//  Extension Getter '@objectIR llvmTypeName'
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
//  Extension Getter '@objectIR omnibusTypeDescriptionName'
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
//  Extension Getter '@objectIR withType'
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
      GenericArray <FixItDescription> fixItArray1 ;
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
//  Extension Getter '@objectIR name'
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
      GenericArray <FixItDescription> fixItArray1 ;
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
      result_result.plusAssignOperation(function_literalCharacterArrayName (extractedValue_7552_index_1, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)).add_operation (GGS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@objectIR isStatic'
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
      GenericArray <FixItDescription> fixItArray1 ;
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

GGS_routineListIR GGS_routineListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
  UpEnumerator_routineListIR enumerator_3748 (temp_0) ;
  while (enumerator_3748.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Routine ").add_operation (enumerator_3748.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 109)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex = GGS_uint (uint32_t (0U)) ;
    callExtensionMethod_llvmCodeGeneration ((cPtr_abstractRoutineIR *) enumerator_3748.current (HERE).readProperty_mRoutine ().ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 111)) ;
    enumerator_3748.gotoNextObject () ;
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
  ioObject.addAssignOperation (GGS_nopIR::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @nopIR reference class
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

GGS_nopIR GGS_nopIR::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_nopIR result ;
  macroMyNew (result.mObjectPtr, cPtr_nopIR (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nopIR class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_nopIR::cPtr_nopIR (Compiler * inCompiler
                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nopIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

void cPtr_nopIR::description (String & ioString,
                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@nopIR]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nopIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nopIR (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nopIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nopIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nopIR ("nopIR",
                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nopIR::staticTypeDescriptor (void) const {
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

GGS_nopIR GGS_nopIR_2E_weak::unwrappedValue (void) const {
  GGS_nopIR result ;
  if (isValid ()) {
    const cPtr_nopIR * p = (cPtr_nopIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_nopIR (p) ;
    }
  }
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
//     @nopIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nopIR_2E_weak ("nopIR.weak",
                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nopIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_freeStringIR GGS_freeStringIR::class_func_new (const GGS_string & in_mString,
                                                   const GGS_stringset & in_mInvokedFunctionSet,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GGS_freeStringIR result ;
  macroMyNew (result.mObjectPtr, cPtr_freeStringIR (in_mString, in_mInvokedFunctionSet,  inCompiler COMMA_THERE)) ;
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
//Extension method '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (GGS_instructionListIR & ioObject,
                                   const GGS_objectIR constinArgument_inResult,
                                   const GGS_objectIR constinArgument_inSource,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_extendIR::init_21__21_ (constinArgument_inResult, constinArgument_inSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @extendIR reference class
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
                                           const GGS_objectIR & in_mSource,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_extendIR result ;
  macroMyNew (result.mObjectPtr, cPtr_extendIR (in_mResult, in_mSource,  inCompiler COMMA_THERE)) ;
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

cPtr_extendIR::cPtr_extendIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (const GGS_objectIR & in_mResult,
                              const GGS_objectIR & in_mSource,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extendIR::classDescriptor (void) const {
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

acPtr_class * cPtr_extendIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendIR (mProperty_mResult, mProperty_mSource, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @extendIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendIR ("extendIR",
                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendIR::staticTypeDescriptor (void) const {
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

GGS_extendIR GGS_extendIR_2E_weak::unwrappedValue (void) const {
  GGS_extendIR result ;
  if (isValid ()) {
    const cPtr_extendIR * p = (cPtr_extendIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_extendIR (p) ;
    }
  }
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
//     @extendIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendIR_2E_weak ("extendIR.weak",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendIR_2E_weak::staticTypeDescriptor (void) const {
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioObject.getter_isLiteralInteger (SOURCE_FILE ("intermediate-trunc.galgas", 8)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bigint var_value_342 ;
      GGS_omnibusType joker_315 ; // Joker input parameter
      ioArgument_ioObject.method_extractLiteralInteger (joker_315, var_value_342, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 9)) ;
      ioArgument_ioObject = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_value_342  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 10)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_objectIR var_result_477 ;
    {
    routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, var_result_477, inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 12)) ;
    }
    ioObject.addAssignOperation (GGS_truncIR::init_21__21_ (var_result_477, ioArgument_ioObject, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 13)) ;
    ioArgument_ioObject = var_result_477 ;
  }
}


//--------------------------------------------------------------------------------------------------
// @truncIR reference class
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
                                         const GGS_objectIR & in_mSource,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_truncIR result ;
  macroMyNew (result.mObjectPtr, cPtr_truncIR (in_mResult, in_mSource,  inCompiler COMMA_THERE)) ;
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

cPtr_truncIR::cPtr_truncIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
}

//--------------------------------------------------------------------------------------------------

cPtr_truncIR::cPtr_truncIR (const GGS_objectIR & in_mResult,
                            const GGS_objectIR & in_mSource,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_truncIR::classDescriptor (void) const {
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

acPtr_class * cPtr_truncIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncIR (mProperty_mResult, mProperty_mSource, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @truncIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncIR ("truncIR",
                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_truncIR::staticTypeDescriptor (void) const {
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

GGS_truncIR GGS_truncIR_2E_weak::unwrappedValue (void) const {
  GGS_truncIR result ;
  if (isValid ()) {
    const cPtr_truncIR * p = (cPtr_truncIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_truncIR (p) ;
    }
  }
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
//     @truncIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncIR_2E_weak ("truncIR.weak",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_truncIR_2E_weak::staticTypeDescriptor (void) const {
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
  ioObject.addAssignOperation (GGS_boolToUIntIR::init_21__21_ (constinArgument_inUIntResult, constinArgument_inBoolSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @boolToUIntIR reference class
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
                                                   const GGS_objectIR & in_mBoolSource,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GGS_boolToUIntIR result ;
  macroMyNew (result.mObjectPtr, cPtr_boolToUIntIR (in_mUIntResult, in_mBoolSource,  inCompiler COMMA_THERE)) ;
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

cPtr_boolToUIntIR::cPtr_boolToUIntIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mUIntResult (),
mProperty_mBoolSource () {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolToUIntIR::cPtr_boolToUIntIR (const GGS_objectIR & in_mUIntResult,
                                      const GGS_objectIR & in_mBoolSource,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mUIntResult (),
mProperty_mBoolSource () {
  mProperty_mUIntResult = in_mUIntResult ;
  mProperty_mBoolSource = in_mBoolSource ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolToUIntIR::classDescriptor (void) const {
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

acPtr_class * cPtr_boolToUIntIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolToUIntIR (mProperty_mUIntResult, mProperty_mBoolSource, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @boolToUIntIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolToUIntIR ("boolToUIntIR",
                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolToUIntIR::staticTypeDescriptor (void) const {
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

GGS_boolToUIntIR GGS_boolToUIntIR_2E_weak::unwrappedValue (void) const {
  GGS_boolToUIntIR result ;
  if (isValid ()) {
    const cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolToUIntIR (p) ;
    }
  }
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
//     @boolToUIntIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolToUIntIR_2E_weak ("boolToUIntIR.weak",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolToUIntIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_leftShiftIR GGS_leftShiftIR::class_func_new (const GGS_objectIR & in_mResult,
                                                 const GGS_objectIR & in_mSource,
                                                 const GGS_uint & in_mShiftAmount,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_leftShiftIR result ;
  macroMyNew (result.mObjectPtr, cPtr_leftShiftIR (in_mResult, in_mSource, in_mShiftAmount,  inCompiler COMMA_THERE)) ;
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

GGS_logicalRightShiftIR GGS_logicalRightShiftIR::class_func_new (const GGS_objectIR & in_mResult,
                                                                 const GGS_objectIR & in_mSource,
                                                                 const GGS_uint & in_mShiftAmount,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_logicalRightShiftIR result ;
  macroMyNew (result.mObjectPtr, cPtr_logicalRightShiftIR (in_mResult, in_mSource, in_mShiftAmount,  inCompiler COMMA_THERE)) ;
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
  ioObject.addAssignOperation (GGS_shortCircuitAndOperationIR::init_21__21__21__21__21__21_ (constinArgument_inTargetOperand, constinArgument_inLeftOperandLLVMName, constinArgument_inLeftInstructionList, constinArgument_inRightOperandLLVMName, constinArgument_inRightInstructionList, constinArgument_inLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
// @shortCircuitAndOperationIR reference class
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
                                                                               const GGS_location & in_mLocation,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_shortCircuitAndOperationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_shortCircuitAndOperationIR (in_mTargetOperand, in_mLeftOperandLLVMName, in_mLeftInstructionList, in_mRightOperandLLVMName, in_mRightInstructionList, in_mLocation,  inCompiler COMMA_THERE)) ;
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

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (const GGS_objectIR & in_mTargetOperand,
                                                                  const GGS_string & in_mLeftOperandLLVMName,
                                                                  const GGS_instructionListIR & in_mLeftInstructionList,
                                                                  const GGS_string & in_mRightOperandLLVMName,
                                                                  const GGS_instructionListIR & in_mRightInstructionList,
                                                                  const GGS_location & in_mLocation,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_shortCircuitAndOperationIR::classDescriptor (void) const {
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

acPtr_class * cPtr_shortCircuitAndOperationIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_shortCircuitAndOperationIR (mProperty_mTargetOperand, mProperty_mLeftOperandLLVMName, mProperty_mLeftInstructionList, mProperty_mRightOperandLLVMName, mProperty_mRightInstructionList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @shortCircuitAndOperationIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ("shortCircuitAndOperationIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_shortCircuitAndOperationIR::staticTypeDescriptor (void) const {
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

GGS_shortCircuitAndOperationIR GGS_shortCircuitAndOperationIR_2E_weak::unwrappedValue (void) const {
  GGS_shortCircuitAndOperationIR result ;
  if (isValid ()) {
    const cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_shortCircuitAndOperationIR (p) ;
    }
  }
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
//     @shortCircuitAndOperationIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2E_weak ("shortCircuitAndOperationIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_shortCircuitAndOperationIR_2E_weak::staticTypeDescriptor (void) const {
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
  ioObject.addAssignOperation (GGS_loadFromReferenceIR::init_21__21_ (constinArgument_inTargetValue, constinArgument_inLLVMName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 6)) ;
}


//--------------------------------------------------------------------------------------------------
// @loadFromReferenceIR reference class
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
                                                                 const GGS_string & in_mLLVMName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_loadFromReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_loadFromReferenceIR (in_mTargetValue, in_mLLVMName,  inCompiler COMMA_THERE)) ;
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

cPtr_loadFromReferenceIR::cPtr_loadFromReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_mLLVMName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loadFromReferenceIR::cPtr_loadFromReferenceIR (const GGS_objectIR & in_mTargetValue,
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

const GALGAS_TypeDescriptor * cPtr_loadFromReferenceIR::classDescriptor (void) const {
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

acPtr_class * cPtr_loadFromReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loadFromReferenceIR (mProperty_mTargetValue, mProperty_mLLVMName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @loadFromReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ("loadFromReferenceIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loadFromReferenceIR::staticTypeDescriptor (void) const {
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

GGS_loadFromReferenceIR GGS_loadFromReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_loadFromReferenceIR result ;
  if (isValid ()) {
    const cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_loadFromReferenceIR (p) ;
    }
  }
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
//     @loadFromReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2E_weak ("loadFromReferenceIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loadFromReferenceIR_2E_weak::staticTypeDescriptor (void) const {
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
  ioObject.addAssignOperation (GGS_storeToUniversalReferenceIR::init_21__21__21_ (constinArgument_inLLVMVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 9)) ;
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
  ioObject.addAssignOperation (GGS_storeFromTemporaryReferenceIR::init_21__21__21_ (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 8)) ;
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

GGS_storeFromTemporaryReferenceIR GGS_storeFromTemporaryReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_storeFromTemporaryReferenceIR result ;
  if (isValid ()) {
    const cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_storeFromTemporaryReferenceIR (p) ;
    }
  }
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
//     @storeFromTemporaryReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2E_weak ("storeFromTemporaryReferenceIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeFromTemporaryReferenceIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_standaloneRoutineCallIR GGS_standaloneRoutineCallIR_2E_weak::unwrappedValue (void) const {
  GGS_standaloneRoutineCallIR result ;
  if (isValid ()) {
    const cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_standaloneRoutineCallIR (p) ;
    }
  }
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
//     @standaloneRoutineCallIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2E_weak ("standaloneRoutineCallIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_standaloneRoutineCallIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_computeSubscriptedVolatileRegisterAddress GGS_computeSubscriptedVolatileRegisterAddress::class_func_new (const GGS_string & in_mLLVMResultVarName,
                                                                                                             const GGS_objectIR & in_mIndexResult,
                                                                                                             const GGS_string & in_mAddressLLVMname,
                                                                                                             const GGS_uint & in_mElementSize,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_computeSubscriptedVolatileRegisterAddress result ;
  macroMyNew (result.mObjectPtr, cPtr_computeSubscriptedVolatileRegisterAddress (in_mLLVMResultVarName, in_mIndexResult, in_mAddressLLVMname, in_mElementSize,  inCompiler COMMA_THERE)) ;
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
  ioObject.addAssignOperation (GGS_enterRegisterAddressIR::init_21__21__21__21_ (outArgument_out_5F_llvmName, constinArgument_inBaseAddress, constinArgument_inAddressOffset, constinArgument_inRegisterName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @enterRegisterAddressIR reference class
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
                                                                       const GGS_string & in_mRegisterName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_enterRegisterAddressIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enterRegisterAddressIR (in_mLLVMName, in_mBaseAddress, in_mAddressOffset, in_mRegisterName,  inCompiler COMMA_THERE)) ;
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

cPtr_enterRegisterAddressIR::cPtr_enterRegisterAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMName (),
mProperty_mBaseAddress (),
mProperty_mAddressOffset (),
mProperty_mRegisterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterAddressIR::cPtr_enterRegisterAddressIR (const GGS_string & in_mLLVMName,
                                                          const GGS_bigint & in_mBaseAddress,
                                                          const GGS_bigint & in_mAddressOffset,
                                                          const GGS_string & in_mRegisterName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_enterRegisterAddressIR::classDescriptor (void) const {
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

acPtr_class * cPtr_enterRegisterAddressIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enterRegisterAddressIR (mProperty_mLLVMName, mProperty_mBaseAddress, mProperty_mAddressOffset, mProperty_mRegisterName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @enterRegisterAddressIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR ("enterRegisterAddressIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enterRegisterAddressIR::staticTypeDescriptor (void) const {
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

GGS_enterRegisterAddressIR GGS_enterRegisterAddressIR_2E_weak::unwrappedValue (void) const {
  GGS_enterRegisterAddressIR result ;
  if (isValid ()) {
    const cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_enterRegisterAddressIR (p) ;
    }
  }
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
//     @enterRegisterAddressIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR_2E_weak ("enterRegisterAddressIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enterRegisterAddressIR_2E_weak::staticTypeDescriptor (void) const {
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
  ioObject.addAssignOperation (GGS_enterRegisterGroupSubscriptedAddressIR::init_21__21__21__21_ (outArgument_out_5F_llvmName, constinArgument_inGroupName, constinArgument_inGroupSize, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @enterRegisterGroupSubscriptedAddressIR reference class
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
                                                                                                       const GGS_objectIR & in_mIndexIR,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_enterRegisterGroupSubscriptedAddressIR result ;
  macroMyNew (result.mObjectPtr, cPtr_enterRegisterGroupSubscriptedAddressIR (in_mLLVMName, in_mGroupName, in_mGroupSize, in_mIndexIR,  inCompiler COMMA_THERE)) ;
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

cPtr_enterRegisterGroupSubscriptedAddressIR::cPtr_enterRegisterGroupSubscriptedAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMName (),
mProperty_mGroupName (),
mProperty_mGroupSize (),
mProperty_mIndexIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enterRegisterGroupSubscriptedAddressIR::cPtr_enterRegisterGroupSubscriptedAddressIR (const GGS_string & in_mLLVMName,
                                                                                          const GGS_string & in_mGroupName,
                                                                                          const GGS_uint & in_mGroupSize,
                                                                                          const GGS_objectIR & in_mIndexIR,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_enterRegisterGroupSubscriptedAddressIR::classDescriptor (void) const {
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

acPtr_class * cPtr_enterRegisterGroupSubscriptedAddressIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enterRegisterGroupSubscriptedAddressIR (mProperty_mLLVMName, mProperty_mGroupName, mProperty_mGroupSize, mProperty_mIndexIR, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @enterRegisterGroupSubscriptedAddressIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ("enterRegisterGroupSubscriptedAddressIR",
                                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enterRegisterGroupSubscriptedAddressIR::staticTypeDescriptor (void) const {
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

GGS_enterRegisterGroupSubscriptedAddressIR GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::unwrappedValue (void) const {
  GGS_enterRegisterGroupSubscriptedAddressIR result ;
  if (isValid ()) {
    const cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_enterRegisterGroupSubscriptedAddressIR (p) ;
    }
  }
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
//     @enterRegisterGroupSubscriptedAddressIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2E_weak ("enterRegisterGroupSubscriptedAddressIR.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak::staticTypeDescriptor (void) const {
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

GGS_loadIndirectVolatileIR GGS_loadIndirectVolatileIR::class_func_new (const GGS_objectIR & in_mTargetValue,
                                                                       const GGS_string & in_mLLVMName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_loadIndirectVolatileIR result ;
  macroMyNew (result.mObjectPtr, cPtr_loadIndirectVolatileIR (in_mTargetValue, in_mLLVMName,  inCompiler COMMA_THERE)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).operator_not (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
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
  if (GalgasBool::boolFalse == test_0) {
    GGS_omnibusType var_sourceType_1034 ;
    GGS_string var_sourceLLVMName_1059 ;
    constinArgument_inSourcePossibleReference.method_extractReference (var_sourceType_1034, var_sourceLLVMName_1059, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 26)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_sourceType_1034.readProperty_omnibusTypeDescriptionName ().objectCompare (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("object of type ").add_operation (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (GGS_string (" cannot be assigned from expression of type "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (var_sourceType_1034.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 30)), fixItArray2  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 28)) ;
      }
    }
    ioObject.addAssignOperation (GGS_copyFromReferencesIR::init_21__21_ (constinArgument_inTargetReference, var_sourceLLVMName_1059, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 32)) ;
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

GGS_copyFromReferencesIR GGS_copyFromReferencesIR_2E_weak::unwrappedValue (void) const {
  GGS_copyFromReferencesIR result ;
  if (isValid ()) {
    const cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_copyFromReferencesIR (p) ;
    }
  }
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
//     @copyFromReferencesIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2E_weak ("copyFromReferencesIR.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_copyFromReferencesIR_2E_weak::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR referenceFromPossibleValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (GGS_instructionListIR & ioObject,
                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                 GGS_objectIR & ioArgument_ioObjectIR,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_performStore_296 ;
  switch (ioArgument_ioObjectIR.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      var_performStore_296 = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_399__0 ;
      GGS_string extractedValue_401__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_reference (extractedValue_399__0, extractedValue_401__1) ;
      var_performStore_296 = GGS_bool (false) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_488__0 ;
      GGS_string extractedValue_490__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmNamedValue (extractedValue_488__0, extractedValue_490__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_543__0 ;
      GGS_bigint extractedValue_545__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_literalInteger (extractedValue_543__0, extractedValue_545__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_587__0 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_null (extractedValue_587__0) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_643__0 ;
      GGS_sortedOperandIRList extractedValue_645__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmStructureValue (extractedValue_643__0, extractedValue_645__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_705__0 ;
      GGS_operandIRList extractedValue_705__1 ;
      GGS_uint extractedValue_705__2 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_705__0, extractedValue_705__1, extractedValue_705__2) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_757__0 ;
      GGS_uint extractedValue_759__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_literalString (extractedValue_757__0, extractedValue_759__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_801__0 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_zero (extractedValue_801__0) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_868__0 ;
      GGS_uint extractedValue_868__1 ;
      GGS_objectIR extractedValue_868__2 ;
      GGS_uint extractedValue_868__3 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_868__0, extractedValue_868__1, extractedValue_868__2, extractedValue_868__3) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_936__0 ;
      GGS_uint extractedValue_936__1 ;
      GGS_objectIR extractedValue_936__2 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_936__0, extractedValue_936__1, extractedValue_936__2) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_997__0 ;
      GGS_operandIRList extractedValue_997__1 ;
      ioArgument_ioObjectIR.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_997__0, extractedValue_997__1) ;
      var_performStore_296 = GGS_bool (true) ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_performStore_296.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_llvmTemporaryName_1123 = function_llvmNameForLocalVariable (GGS_string ("temp.").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 39)) ;
      ioArgument_ioAllocaList.addAssignOperation (var_llvmTemporaryName_1123, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)), GGS_bool (false)  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)), var_llvmTemporaryName_1123, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)) ;
      }
      ioArgument_ioObjectIR = GGS_objectIR::class_func_reference (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)), var_llvmTemporaryName_1123  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)) ;
    }
  }
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
//
//Extension method '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (GGS_instructionListIR & ioObject,
                                                              const GGS_omnibusType constinArgument_inType,
                                                              const GGS_string constinArgument_inLLVMName,
                                                              const GGS_omnibusType constinArgument_inElementType,
                                                              const GGS_string constinArgument_inElementLLVMName,
                                                              const GGS_objectIR constinArgument_inIndexIR,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_getUniversalArrayElementReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementType, constinArgument_inElementLLVMName, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalArrayElementReferenceIR_2E_weak::objectCompare (const GGS_getUniversalArrayElementReferenceIR_2E_weak & inOperand) const {
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

GGS_getUniversalArrayElementReferenceIR_2E_weak::GGS_getUniversalArrayElementReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak & GGS_getUniversalArrayElementReferenceIR_2E_weak::operator = (const GGS_getUniversalArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak::GGS_getUniversalArrayElementReferenceIR_2E_weak (const GGS_getUniversalArrayElementReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak GGS_getUniversalArrayElementReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_getUniversalArrayElementReferenceIR result ;
  if (isValid ()) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getUniversalArrayElementReferenceIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR_2E_weak::bang_getUniversalArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getUniversalArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalArrayElementReferenceIR) ;
      result = GGS_getUniversalArrayElementReferenceIR ((cPtr_getUniversalArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getUniversalArrayElementReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ("getUniversalArrayElementReferenceIR.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalArrayElementReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalArrayElementReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalArrayElementReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak GGS_getUniversalArrayElementReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
  const GGS_getUniversalArrayElementReferenceIR_2E_weak * p = (const GGS_getUniversalArrayElementReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalArrayElementReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (GGS_instructionListIR & ioObject,
                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GGS_objectIR constinArgument_inReceiverIR,
                                                     const GGS_string constinArgument_inLLVMGetterName,
                                                     const GGS_omnibusType constinArgument_inResultType,
                                                     GGS_objectIR & outArgument_outResultValueIR,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValueIR.drop () ; // Release 'out' argument
  GGS_string var_result_5F_llvmName_268 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_result_5F_llvmName_268, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 9)) ;
  }
  outArgument_outResultValueIR = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inResultType, var_result_5F_llvmName_268  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 10)) ;
  ioObject.addAssignOperation (GGS_getComputedPropertyValueIR::init_21__21__21_ (constinArgument_inReceiverIR, constinArgument_inLLVMGetterName, outArgument_outResultValueIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 11)) ;
}


//--------------------------------------------------------------------------------------------------
// @getComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getComputedPropertyValueIR::objectCompare (const GGS_getComputedPropertyValueIR & inOperand) const {
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

GGS_getComputedPropertyValueIR::GGS_getComputedPropertyValueIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR::
init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                  const GGS_string & in_mLLVMGetterName,
                  const GGS_objectIR & in_mResultValueIR,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_getComputedPropertyValueIR * object = nullptr ;
  macroMyNew (object, cPtr_getComputedPropertyValueIR (inCompiler COMMA_THERE)) ;
  object->getComputedPropertyValueIR_init_21__21__21_ (in_mReceiverIR, in_mLLVMGetterName, in_mResultValueIR, inCompiler) ;
  const GGS_getComputedPropertyValueIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getComputedPropertyValueIR::
getComputedPropertyValueIR_init_21__21__21_ (const GGS_objectIR & in_mReceiverIR,
                                             const GGS_string & in_mLLVMGetterName,
                                             const GGS_objectIR & in_mResultValueIR,
                                             Compiler * /* inCompiler */) {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR::GGS_getComputedPropertyValueIR (const cPtr_getComputedPropertyValueIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getComputedPropertyValueIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR::class_func_new (const GGS_objectIR & in_mReceiverIR,
                                                                               const GGS_string & in_mLLVMGetterName,
                                                                               const GGS_objectIR & in_mResultValueIR,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getComputedPropertyValueIR (in_mReceiverIR, in_mLLVMGetterName, in_mResultValueIR,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getComputedPropertyValueIR::setProperty_mReceiverIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getComputedPropertyValueIR::readProperty_mLLVMGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mLLVMGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getComputedPropertyValueIR::setProperty_mLLVMGetterName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mLLVMGetterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getComputedPropertyValueIR::readProperty_mResultValueIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mResultValueIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getComputedPropertyValueIR::setProperty_mResultValueIR (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mResultValueIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                                                  const GGS_string & in_mLLVMGetterName,
                                                                  const GGS_objectIR & in_mResultValueIR,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mReceiverIR (),
mProperty_mLLVMGetterName (),
mProperty_mResultValueIR () {
  mProperty_mReceiverIR = in_mReceiverIR ;
  mProperty_mLLVMGetterName = in_mLLVMGetterName ;
  mProperty_mResultValueIR = in_mResultValueIR ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getComputedPropertyValueIR::classDescriptor (void) const {
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

acPtr_class * cPtr_getComputedPropertyValueIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMGetterName, mProperty_mResultValueIR, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @getComputedPropertyValueIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ("getComputedPropertyValueIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR result ;
  const GGS_getComputedPropertyValueIR * p = (const GGS_getComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getComputedPropertyValueIR_2E_weak::objectCompare (const GGS_getComputedPropertyValueIR_2E_weak & inOperand) const {
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

GGS_getComputedPropertyValueIR_2E_weak::GGS_getComputedPropertyValueIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak & GGS_getComputedPropertyValueIR_2E_weak::operator = (const GGS_getComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak::GGS_getComputedPropertyValueIR_2E_weak (const GGS_getComputedPropertyValueIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak GGS_getComputedPropertyValueIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR_2E_weak::unwrappedValue (void) const {
  GGS_getComputedPropertyValueIR result ;
  if (isValid ()) {
    const cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getComputedPropertyValueIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR GGS_getComputedPropertyValueIR_2E_weak::bang_getComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getComputedPropertyValueIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getComputedPropertyValueIR) ;
      result = GGS_getComputedPropertyValueIR ((cPtr_getComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getComputedPropertyValueIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ("getComputedPropertyValueIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getComputedPropertyValueIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getComputedPropertyValueIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getComputedPropertyValueIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getComputedPropertyValueIR_2E_weak GGS_getComputedPropertyValueIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_getComputedPropertyValueIR_2E_weak result ;
  const GGS_getComputedPropertyValueIR_2E_weak * p = (const GGS_getComputedPropertyValueIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getComputedPropertyValueIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_storeComputedPropertyValueIR GGS_storeComputedPropertyValueIR::class_func_new (const GGS_objectIR & in_mReceiverIR,
                                                                                   const GGS_string & in_mLLVMSetterName,
                                                                                   const GGS_objectIR & in_mValueIR,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_storeComputedPropertyValueIR result ;
  macroMyNew (result.mObjectPtr, cPtr_storeComputedPropertyValueIR (in_mReceiverIR, in_mLLVMSetterName, in_mValueIR,  inCompiler COMMA_THERE)) ;
  return result ;
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
//Extension method '@instructionListIR appendGetArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (GGS_instructionListIR & ioObject,
                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GGS_objectIR constinArgument_inArrayIR,
                                                     const GGS_omnibusType constinArgument_inElementType,
                                                     const GGS_objectIR constinArgument_inIndexIR,
                                                     GGS_objectIR & outArgument_outElementPtr,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outElementPtr.drop () ; // Release 'out' argument
  GGS_string var_llvmName_313 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_313, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 9)) ;
  }
  outArgument_outElementPtr = GGS_objectIR::class_func_reference (constinArgument_inElementType, var_llvmName_313  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 11)) ;
  ioObject.addAssignOperation (GGS_getArrayElementReferenceIR::init_21__21__21_ (outArgument_outElementPtr, constinArgument_inArrayIR, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 12)) ;
}


//--------------------------------------------------------------------------------------------------
// @getArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getArrayElementReferenceIR::objectCompare (const GGS_getArrayElementReferenceIR & inOperand) const {
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

GGS_getArrayElementReferenceIR::GGS_getArrayElementReferenceIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR::
init_21__21__21_ (const GGS_objectIR & in_mTarget,
                  const GGS_objectIR & in_mArray,
                  const GGS_objectIR & in_mIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_getArrayElementReferenceIR * object = nullptr ;
  macroMyNew (object, cPtr_getArrayElementReferenceIR (inCompiler COMMA_THERE)) ;
  object->getArrayElementReferenceIR_init_21__21__21_ (in_mTarget, in_mArray, in_mIndex, inCompiler) ;
  const GGS_getArrayElementReferenceIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getArrayElementReferenceIR::
getArrayElementReferenceIR_init_21__21__21_ (const GGS_objectIR & in_mTarget,
                                             const GGS_objectIR & in_mArray,
                                             const GGS_objectIR & in_mIndex,
                                             Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mArray = in_mArray ;
  mProperty_mIndex = in_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR::GGS_getArrayElementReferenceIR (const cPtr_getArrayElementReferenceIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getArrayElementReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                               const GGS_objectIR & in_mArray,
                                                                               const GGS_objectIR & in_mIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR result ;
  macroMyNew (result.mObjectPtr, cPtr_getArrayElementReferenceIR (in_mTarget, in_mArray, in_mIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getArrayElementReferenceIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getArrayElementReferenceIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getArrayElementReferenceIR::readProperty_mArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mArray ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getArrayElementReferenceIR::setProperty_mArray (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mArray = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_getArrayElementReferenceIR::readProperty_mIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getArrayElementReferenceIR::setProperty_mIndex (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mArray (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (const GGS_objectIR & in_mTarget,
                                                                  const GGS_objectIR & in_mArray,
                                                                  const GGS_objectIR & in_mIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mArray (),
mProperty_mIndex () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mArray = in_mArray ;
  mProperty_mIndex = in_mIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getArrayElementReferenceIR::classDescriptor (void) const {
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

acPtr_class * cPtr_getArrayElementReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getArrayElementReferenceIR (mProperty_mTarget, mProperty_mArray, mProperty_mIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @getArrayElementReferenceIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ("getArrayElementReferenceIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR result ;
  const GGS_getArrayElementReferenceIR * p = (const GGS_getArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getArrayElementReferenceIR_2E_weak::objectCompare (const GGS_getArrayElementReferenceIR_2E_weak & inOperand) const {
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

GGS_getArrayElementReferenceIR_2E_weak::GGS_getArrayElementReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak & GGS_getArrayElementReferenceIR_2E_weak::operator = (const GGS_getArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak::GGS_getArrayElementReferenceIR_2E_weak (const GGS_getArrayElementReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak GGS_getArrayElementReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_getArrayElementReferenceIR result ;
  if (isValid ()) {
    const cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getArrayElementReferenceIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR GGS_getArrayElementReferenceIR_2E_weak::bang_getArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getArrayElementReferenceIR) ;
      result = GGS_getArrayElementReferenceIR ((cPtr_getArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getArrayElementReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2E_weak ("getArrayElementReferenceIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getArrayElementReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getArrayElementReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getArrayElementReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getArrayElementReferenceIR_2E_weak GGS_getArrayElementReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_getArrayElementReferenceIR_2E_weak result ;
  const GGS_getArrayElementReferenceIR_2E_weak * p = (const GGS_getArrayElementReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getArrayElementReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (GGS_instructionListIR & ioObject,
                                            const GGS_objectIR constinArgument_inTargetValue,
                                            const GGS_string constinArgument_in_5F_if_5F_variableLLVMName,
                                            const GGS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GGS_objectIR constinArgument_in_5F_else_5F_variable,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_selectInstructionIR::init_21__21__21__21_ (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variableLLVMName, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8)) ;
}


//--------------------------------------------------------------------------------------------------
// @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR::objectCompare (const GGS_selectInstructionIR & inOperand) const {
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

GGS_selectInstructionIR::GGS_selectInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::
init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                      const GGS_string & in_m_5F_if_5F_variableLLVMName,
                      const GGS_objectIR & in_m_5F_then_5F_variable,
                      const GGS_objectIR & in_m_5F_else_5F_variable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionIR (inCompiler COMMA_THERE)) ;
  object->selectInstructionIR_init_21__21__21__21_ (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable, inCompiler) ;
  const GGS_selectInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionIR::
selectInstructionIR_init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                                          const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                          const GGS_objectIR & in_m_5F_then_5F_variable,
                                          const GGS_objectIR & in_m_5F_else_5F_variable,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR::GGS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::class_func_new (const GGS_objectIR & in_mTargetValue,
                                                                 const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                                 const GGS_objectIR & in_m_5F_then_5F_variable,
                                                                 const GGS_objectIR & in_m_5F_else_5F_variable,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_mTargetValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionIR::readProperty_m_5F_if_5F_variableLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_if_5F_variableLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_if_5F_variableLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_if_5F_variableLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_then_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_then_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_then_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_then_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_else_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_else_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_else_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_else_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GGS_objectIR & in_mTargetValue,
                                                    const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                    const GGS_objectIR & in_m_5F_then_5F_variable,
                                                    const GGS_objectIR & in_m_5F_else_5F_variable,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_selectInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variableLLVMName, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @selectInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  const GGS_selectInstructionIR * p = (const GGS_selectInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR_2E_weak::objectCompare (const GGS_selectInstructionIR_2E_weak & inOperand) const {
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

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak & GGS_selectInstructionIR_2E_weak::operator = (const GGS_selectInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (const GGS_selectInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionIR result ;
  if (isValid ()) {
    const cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::bang_selectInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionIR) ;
      result = GGS_selectInstructionIR ((cPtr_selectInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ("selectInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  const GGS_selectInstructionIR_2E_weak * p = (const GGS_selectInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR testArrayIndex'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (GGS_instructionListIR & ioObject,
                                     const GGS_objectIR constinArgument_inIndex,
                                     const GGS_location constinArgument_inErrorLocation,
                                     const GGS_bigint constinArgument_inSize,
                                     GGS_bool & outArgument_outGeneratePanicInstruction,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratePanicInstruction.drop () ; // Release 'out' argument
  GGS_bigint var_max_212 ;
  GGS_bool var_isUnsigned_230 ;
  GGS_bigint joker_199_1 ; // Joker input parameter
  GGS_uint joker_241_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)).readProperty_kind ().method_extractInteger (joker_199_1, var_max_212, var_isUnsigned_230, joker_241_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)) ;
  GGS_bool test_0 = var_isUnsigned_230.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 9)) ;
  if (GalgasBool::boolTrue != test_0.boolEnum ()) {
    test_0 = GGS_bool (ComparisonKind::greaterOrEqual, var_max_212.objectCompare (constinArgument_inSize)) ;
  }
  outArgument_outGeneratePanicInstruction = test_0 ;
  ioObject.addAssignOperation (GGS_testArrayIndexIR::init_21__21__21_ (constinArgument_inIndex, constinArgument_inErrorLocation, constinArgument_inSize, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10)) ;
}


//--------------------------------------------------------------------------------------------------
// @testArrayIndexIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testArrayIndexIR::objectCompare (const GGS_testArrayIndexIR & inOperand) const {
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

GGS_testArrayIndexIR::GGS_testArrayIndexIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR::
init_21__21__21_ (const GGS_objectIR & in_mIndex,
                  const GGS_location & in_mErrorLocation,
                  const GGS_bigint & in_mSize,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_testArrayIndexIR * object = nullptr ;
  macroMyNew (object, cPtr_testArrayIndexIR (inCompiler COMMA_THERE)) ;
  object->testArrayIndexIR_init_21__21__21_ (in_mIndex, in_mErrorLocation, in_mSize, inCompiler) ;
  const GGS_testArrayIndexIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::
testArrayIndexIR_init_21__21__21_ (const GGS_objectIR & in_mIndex,
                                   const GGS_location & in_mErrorLocation,
                                   const GGS_bigint & in_mSize,
                                   Compiler * /* inCompiler */) {
  mProperty_mIndex = in_mIndex ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR::GGS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testArrayIndexIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR::class_func_new (const GGS_objectIR & in_mIndex,
                                                           const GGS_location & in_mErrorLocation,
                                                           const GGS_bigint & in_mSize,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_testArrayIndexIR result ;
  macroMyNew (result.mObjectPtr, cPtr_testArrayIndexIR (in_mIndex, in_mErrorLocation, in_mSize,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_testArrayIndexIR::readProperty_mIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_testArrayIndexIR::setProperty_mIndex (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testArrayIndexIR::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_testArrayIndexIR::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_testArrayIndexIR::readProperty_mSize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_testArrayIndexIR::setProperty_mSize (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testArrayIndexIR class
//--------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mIndex (),
mProperty_mErrorLocation (),
mProperty_mSize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (const GGS_objectIR & in_mIndex,
                                              const GGS_location & in_mErrorLocation,
                                              const GGS_bigint & in_mSize,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mIndex (),
mProperty_mErrorLocation (),
mProperty_mSize () {
  mProperty_mIndex = in_mIndex ;
  mProperty_mErrorLocation = in_mErrorLocation ;
  mProperty_mSize = in_mSize ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_testArrayIndexIR::classDescriptor (void) const {
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

acPtr_class * cPtr_testArrayIndexIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testArrayIndexIR (mProperty_mIndex, mProperty_mErrorLocation, mProperty_mSize, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @testArrayIndexIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testArrayIndexIR ("testArrayIndexIR",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testArrayIndexIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testArrayIndexIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testArrayIndexIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_testArrayIndexIR result ;
  const GGS_testArrayIndexIR * p = (const GGS_testArrayIndexIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testArrayIndexIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testArrayIndexIR_2E_weak::objectCompare (const GGS_testArrayIndexIR_2E_weak & inOperand) const {
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

GGS_testArrayIndexIR_2E_weak::GGS_testArrayIndexIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak & GGS_testArrayIndexIR_2E_weak::operator = (const GGS_testArrayIndexIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak::GGS_testArrayIndexIR_2E_weak (const GGS_testArrayIndexIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak GGS_testArrayIndexIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testArrayIndexIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR_2E_weak::unwrappedValue (void) const {
  GGS_testArrayIndexIR result ;
  if (isValid ()) {
    const cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_testArrayIndexIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR GGS_testArrayIndexIR_2E_weak::bang_testArrayIndexIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testArrayIndexIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testArrayIndexIR) ;
      result = GGS_testArrayIndexIR ((cPtr_testArrayIndexIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testArrayIndexIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testArrayIndexIR_2E_weak ("testArrayIndexIR.weak",
                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testArrayIndexIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testArrayIndexIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testArrayIndexIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testArrayIndexIR_2E_weak GGS_testArrayIndexIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_testArrayIndexIR_2E_weak result ;
  const GGS_testArrayIndexIR_2E_weak * p = (const GGS_testArrayIndexIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testArrayIndexIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (GGS_instructionListIR & ioObject,
                                              const GGS_location constinArgument_inSourceLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_sourceLocationIR::init_21_ (constinArgument_inSourceLocation, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @sourceLocationIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sourceLocationIR::objectCompare (const GGS_sourceLocationIR & inOperand) const {
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

GGS_sourceLocationIR::GGS_sourceLocationIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR::
init_21_ (const GGS_location & in_mSourceLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sourceLocationIR * object = nullptr ;
  macroMyNew (object, cPtr_sourceLocationIR (inCompiler COMMA_THERE)) ;
  object->sourceLocationIR_init_21_ (in_mSourceLocation, inCompiler) ;
  const GGS_sourceLocationIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sourceLocationIR::
sourceLocationIR_init_21_ (const GGS_location & in_mSourceLocation,
                           Compiler * /* inCompiler */) {
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR::GGS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sourceLocationIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR::class_func_new (const GGS_location & in_mSourceLocation,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_sourceLocationIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sourceLocationIR (in_mSourceLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_sourceLocationIR::readProperty_mSourceLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    return p->mProperty_mSourceLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sourceLocationIR::setProperty_mSourceLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    p->mProperty_mSourceLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sourceLocationIR class
//--------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSourceLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (const GGS_location & in_mSourceLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mSourceLocation () {
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sourceLocationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

void cPtr_sourceLocationIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@sourceLocationIR:") ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sourceLocationIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sourceLocationIR (mProperty_mSourceLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sourceLocationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mSourceLocation.printNonNullClassInstanceProperties ("mSourceLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sourceLocationIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sourceLocationIR ("sourceLocationIR",
                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sourceLocationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sourceLocationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sourceLocationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_sourceLocationIR result ;
  const GGS_sourceLocationIR * p = (const GGS_sourceLocationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sourceLocationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sourceLocationIR_2E_weak::objectCompare (const GGS_sourceLocationIR_2E_weak & inOperand) const {
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

GGS_sourceLocationIR_2E_weak::GGS_sourceLocationIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak & GGS_sourceLocationIR_2E_weak::operator = (const GGS_sourceLocationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak::GGS_sourceLocationIR_2E_weak (const GGS_sourceLocationIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak GGS_sourceLocationIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sourceLocationIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR_2E_weak::unwrappedValue (void) const {
  GGS_sourceLocationIR result ;
  if (isValid ()) {
    const cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_sourceLocationIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR GGS_sourceLocationIR_2E_weak::bang_sourceLocationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sourceLocationIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sourceLocationIR) ;
      result = GGS_sourceLocationIR ((cPtr_sourceLocationIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sourceLocationIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sourceLocationIR_2E_weak ("sourceLocationIR.weak",
                                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sourceLocationIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sourceLocationIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sourceLocationIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sourceLocationIR_2E_weak GGS_sourceLocationIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sourceLocationIR_2E_weak result ;
  const GGS_sourceLocationIR_2E_weak * p = (const GGS_sourceLocationIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sourceLocationIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (GGS_instructionListIR & ioObject,
                                        const GGS_string constinArgument_inComment,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_freeCommentIR::init_21_ (constinArgument_inComment, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeCommentIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeCommentIR::objectCompare (const GGS_freeCommentIR & inOperand) const {
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

GGS_freeCommentIR::GGS_freeCommentIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::
init_21_ (const GGS_string & in_mComment,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_freeCommentIR * object = nullptr ;
  macroMyNew (object, cPtr_freeCommentIR (inCompiler COMMA_THERE)) ;
  object->freeCommentIR_init_21_ (in_mComment, inCompiler) ;
  const GGS_freeCommentIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeCommentIR::
freeCommentIR_init_21_ (const GGS_string & in_mComment,
                        Compiler * /* inCompiler */) {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR::GGS_freeCommentIR (const cPtr_freeCommentIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeCommentIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::class_func_new (const GGS_string & in_mComment,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR result ;
  macroMyNew (result.mObjectPtr, cPtr_freeCommentIR (in_mComment,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_freeCommentIR::readProperty_mComment (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    return p->mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeCommentIR::setProperty_mComment (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    p->mProperty_mComment = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeCommentIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (const GGS_string & in_mComment,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mComment () {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_freeCommentIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

void cPtr_freeCommentIR::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@freeCommentIR:") ;
  mProperty_mComment.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeCommentIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeCommentIR (mProperty_mComment, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeCommentIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mComment.printNonNullClassInstanceProperties ("mComment") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @freeCommentIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR ("freeCommentIR",
                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeCommentIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeCommentIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeCommentIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR result ;
  const GGS_freeCommentIR * p = (const GGS_freeCommentIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeCommentIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeCommentIR_2E_weak::objectCompare (const GGS_freeCommentIR_2E_weak & inOperand) const {
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

GGS_freeCommentIR_2E_weak::GGS_freeCommentIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak & GGS_freeCommentIR_2E_weak::operator = (const GGS_freeCommentIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak::GGS_freeCommentIR_2E_weak (const GGS_freeCommentIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak GGS_freeCommentIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_freeCommentIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR_2E_weak::unwrappedValue (void) const {
  GGS_freeCommentIR result ;
  if (isValid ()) {
    const cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_freeCommentIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR_2E_weak::bang_freeCommentIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_freeCommentIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeCommentIR) ;
      result = GGS_freeCommentIR ((cPtr_freeCommentIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @freeCommentIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ("freeCommentIR.weak",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeCommentIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeCommentIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeCommentIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak GGS_freeCommentIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR_2E_weak result ;
  const GGS_freeCommentIR_2E_weak * p = (const GGS_freeCommentIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeCommentIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  UpEnumerator_instructionListIR enumerator_715 (temp_0) ;
  while (enumerator_715.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_715.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 10)) ;
    enumerator_715.gotoNextObject () ;
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

GGS_routineAccessibilityIR GGS_routineAccessibilityIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineAccessibilityIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_instructionListListIR GGS_instructionListListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_instructionListListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

ComparisonResult GGS_ctExpressionAST_2E_weak::objectCompare (const GGS_ctExpressionAST_2E_weak & inOperand) const {
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

GGS_ctExpressionAST_2E_weak::GGS_ctExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak & GGS_ctExpressionAST_2E_weak::operator = (const GGS_ctExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak::GGS_ctExpressionAST_2E_weak (const GGS_ctExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak GGS_ctExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ctExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ctExpressionAST result ;
  if (isValid ()) {
    const cPtr_ctExpressionAST * p = (cPtr_ctExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ctExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctExpressionAST_2E_weak::bang_ctExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ctExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctExpressionAST) ;
      result = GGS_ctExpressionAST ((cPtr_ctExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ctExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak ("ctExpressionAST.weak",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST_2E_weak GGS_ctExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ctExpressionAST_2E_weak result ;
  const GGS_ctExpressionAST_2E_weak * p = (const GGS_ctExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctInfixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctInfixExpressionAST::objectCompare (const GGS_ctInfixExpressionAST & inOperand) const {
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

GGS_ctInfixExpressionAST::GGS_ctInfixExpressionAST (void) :
GGS_ctExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST::
init_21__21__21__21_ (const GGS_ctExpressionAST & in_mLeftExpression,
                      const GGS_location & in_mOperatorLocation,
                      const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                      const GGS_ctExpressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ctInfixExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ctInfixExpressionAST (inCompiler COMMA_THERE)) ;
  object->ctInfixExpressionAST_init_21__21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression, inCompiler) ;
  const GGS_ctInfixExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::
ctInfixExpressionAST_init_21__21__21__21_ (const GGS_ctExpressionAST & in_mLeftExpression,
                                           const GGS_location & in_mOperatorLocation,
                                           const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                           const GGS_ctExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST::GGS_ctInfixExpressionAST (const cPtr_ctInfixExpressionAST * inSourcePtr) :
GGS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctInfixExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST::class_func_new (const GGS_ctExpressionAST & in_mLeftExpression,
                                                                   const GGS_location & in_mOperatorLocation,
                                                                   const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                   const GGS_ctExpressionAST & in_mRightExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_ctInfixExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctInfixExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mInfixOperator, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctInfixExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mLeftExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ctInfixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_ctInfixExpressionAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctInfixExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ctInfixExpressionAST::setProperty_mRightExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctInfixExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mInfixOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (const GGS_ctExpressionAST & in_mLeftExpression,
                                                      const GGS_location & in_mOperatorLocation,
                                                      const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                      const GGS_ctExpressionAST & in_mRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_ctInfixExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_ctInfixExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctInfixExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ctInfixExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST ("ctInfixExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctInfixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctInfixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctInfixExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctInfixExpressionAST GGS_ctInfixExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_ctInfixExpressionAST result ;
  const GGS_ctInfixExpressionAST * p = (const GGS_ctInfixExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctInfixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

