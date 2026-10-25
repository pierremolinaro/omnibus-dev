#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr__32_lstringlist : public CollectionElementPtr {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                const GGS_lstring & in_mValue_31_
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                            const GGS_lstring & in_mValue_31_
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr__32_lstringlist::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr__32_lstringlist * p = (CollectionElementPtr__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr__32_lstringlist * p = nullptr ;
  macroMyNew (p, CollectionElementPtr__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
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
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
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

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
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

GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
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

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
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

GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
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
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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

ComparisonResult GGS_expressionAST_2E_weak::objectCompare (const GGS_expressionAST_2E_weak & inOperand) const {
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

GGS_expressionAST_2E_weak::GGS_expressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak & GGS_expressionAST_2E_weak::operator = (const GGS_expressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak::GGS_expressionAST_2E_weak (const GGS_expressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak GGS_expressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_expressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_expressionAST_2E_weak::unwrappedValue (void) const {
  GGS_expressionAST result ;
  if (isValid ()) {
    const cPtr_expressionAST * p = (cPtr_expressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_expressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_expressionAST_2E_weak::bang_expressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionAST) ;
      result = GGS_expressionAST ((cPtr_expressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @expressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionAST_2E_weak ("expressionAST.weak",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak GGS_expressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_expressionAST_2E_weak result ;
  const GGS_expressionAST_2E_weak * p = (const GGS_expressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@decoratedRegularRoutineList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_decoratedRegularRoutineList : public CollectionElementPtr {
  public: GGS_decoratedRegularRoutineList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_decoratedRegularRoutineList (const GGS_lstring & in_receiverTypeName,
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
                                                            const GGS_lstring & in_returnTypeName
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_decoratedRegularRoutineList::CollectionElementPtr_decoratedRegularRoutineList (const GGS_lstring & in_receiverTypeName,
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
                                                                                                    const GGS_lstring & in_returnTypeName
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_receiverTypeName, in_mode, in_isRequired, in_routineKind, in_warnIfUnused, in_exportedRoutine, in_routineAttributes, in_routineMangledLLVMName, in_formalArgumentList, in_warningOnUnusedArgs, in_mInstructionList, in_mEndOfRoutineDeclaration, in_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_decoratedRegularRoutineList::CollectionElementPtr_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_receiverTypeName, inElement.mProperty_mode, inElement.mProperty_isRequired, inElement.mProperty_routineKind, inElement.mProperty_warnIfUnused, inElement.mProperty_exportedRoutine, inElement.mProperty_routineAttributes, inElement.mProperty_routineMangledLLVMName, inElement.mProperty_formalArgumentList, inElement.mProperty_warningOnUnusedArgs, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineDeclaration, inElement.mProperty_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_decoratedRegularRoutineList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_decoratedRegularRoutineList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_decoratedRegularRoutineList (mObject.mProperty_receiverTypeName, mObject.mProperty_mode, mObject.mProperty_isRequired, mObject.mProperty_routineKind, mObject.mProperty_warnIfUnused, mObject.mProperty_exportedRoutine, mObject.mProperty_routineAttributes, mObject.mProperty_routineMangledLLVMName, mObject.mProperty_formalArgumentList, mObject.mProperty_warningOnUnusedArgs, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineDeclaration, mObject.mProperty_returnTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList::GGS_decoratedRegularRoutineList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList::GGS_decoratedRegularRoutineList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_decoratedRegularRoutineList * p = (CollectionElementPtr_decoratedRegularRoutineList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_decoratedRegularRoutineList) ;
    const GGS_decoratedRegularRoutineList_2E_element element (p->mObject.mProperty_receiverTypeName, p->mObject.mProperty_mode, p->mObject.mProperty_isRequired, p->mObject.mProperty_routineKind, p->mObject.mProperty_warnIfUnused, p->mObject.mProperty_exportedRoutine, p->mObject.mProperty_routineAttributes, p->mObject.mProperty_routineMangledLLVMName, p->mObject.mProperty_formalArgumentList, p->mObject.mProperty_warningOnUnusedArgs, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineDeclaration, p->mObject.mProperty_returnTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_receiverTypeName,
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
                                                                 const GGS_lstring & in_returnTypeName
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_decoratedRegularRoutineList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_decoratedRegularRoutineList (in_receiverTypeName, in_mode, in_isRequired, in_routineKind, in_warnIfUnused, in_exportedRoutine, in_routineAttributes, in_routineMangledLLVMName, in_formalArgumentList, in_warningOnUnusedArgs, in_mInstructionList, in_mEndOfRoutineDeclaration, in_returnTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_decoratedRegularRoutineList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_decoratedRegularRoutineList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::description (String & ioString,
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
      ioString.appendString ("receiverTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_receiverTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("isRequired:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_isRequired.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("routineKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_routineKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("warnIfUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_warnIfUnused.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("exportedRoutine:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_exportedRoutine.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("routineAttributes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_routineAttributes.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("routineMangledLLVMName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_routineMangledLLVMName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("formalArgumentList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_formalArgumentList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("warningOnUnusedArgs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_warningOnUnusedArgs.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfRoutineDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("returnTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_returnTypeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::plusPlusAssignOperation (const GGS_decoratedRegularRoutineList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::class_func_listWithValue (const GGS_lstring & inOperand0,
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
                                                                                           const GGS_lstring & inOperand12
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  GGS_decoratedRegularRoutineList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::addAssignOperation (const GGS_lstring & inOperand0,
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
                                                          const GGS_lstring & inOperand12
                                                          COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_mode inOperand1,
                                                     const GGS_bool inOperand2,
                                                     const GGS_routineKind inOperand3,
                                                     const GGS_bool inOperand4,
                                                     const GGS_bool inOperand5,
                                                     const GGS_routineAttributes inOperand6,
                                                     const GGS_lstring inOperand7,
                                                     const GGS_routineFormalArgumentListAST inOperand8,
                                                     const GGS_bool inOperand9,
                                                     const GGS_instructionListAST inOperand10,
                                                     const GGS_location inOperand11,
                                                     const GGS_lstring inOperand12,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_mode inOperand1,
                                                            const GGS_bool inOperand2,
                                                            const GGS_routineKind inOperand3,
                                                            const GGS_bool inOperand4,
                                                            const GGS_bool inOperand5,
                                                            const GGS_routineAttributes inOperand6,
                                                            const GGS_lstring inOperand7,
                                                            const GGS_routineFormalArgumentListAST inOperand8,
                                                            const GGS_bool inOperand9,
                                                            const GGS_instructionListAST inOperand10,
                                                            const GGS_location inOperand11,
                                                            const GGS_lstring inOperand12,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
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

void GGS_decoratedRegularRoutineList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_mode & outOperand1,
                                                            GGS_bool & outOperand2,
                                                            GGS_routineKind & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            GGS_bool & outOperand5,
                                                            GGS_routineAttributes & outOperand6,
                                                            GGS_lstring & outOperand7,
                                                            GGS_routineFormalArgumentListAST & outOperand8,
                                                            GGS_bool & outOperand9,
                                                            GGS_instructionListAST & outOperand10,
                                                            GGS_location & outOperand11,
                                                            GGS_lstring & outOperand12,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_receiverTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mode ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_isRequired ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_routineKind ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_warnIfUnused ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_exportedRoutine ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_routineAttributes ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_formalArgumentList ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand11 = mArray (idx COMMA_HERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray (idx COMMA_HERE).mProperty_returnTypeName ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_mode & outOperand1,
                                                       GGS_bool & outOperand2,
                                                       GGS_routineKind & outOperand3,
                                                       GGS_bool & outOperand4,
                                                       GGS_bool & outOperand5,
                                                       GGS_routineAttributes & outOperand6,
                                                       GGS_lstring & outOperand7,
                                                       GGS_routineFormalArgumentListAST & outOperand8,
                                                       GGS_bool & outOperand9,
                                                       GGS_instructionListAST & outOperand10,
                                                       GGS_location & outOperand11,
                                                       GGS_lstring & outOperand12,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_receiverTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mode ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_isRequired ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_routineKind ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_warnIfUnused ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_exportedRoutine ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_routineAttributes ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_formalArgumentList ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_returnTypeName ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_mode & outOperand1,
                                                      GGS_bool & outOperand2,
                                                      GGS_routineKind & outOperand3,
                                                      GGS_bool & outOperand4,
                                                      GGS_bool & outOperand5,
                                                      GGS_routineAttributes & outOperand6,
                                                      GGS_lstring & outOperand7,
                                                      GGS_routineFormalArgumentListAST & outOperand8,
                                                      GGS_bool & outOperand9,
                                                      GGS_instructionListAST & outOperand10,
                                                      GGS_location & outOperand11,
                                                      GGS_lstring & outOperand12,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_receiverTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mode ;
      outOperand2 = mArray.lastObject (HERE).mProperty_isRequired ;
      outOperand3 = mArray.lastObject (HERE).mProperty_routineKind ;
      outOperand4 = mArray.lastObject (HERE).mProperty_warnIfUnused ;
      outOperand5 = mArray.lastObject (HERE).mProperty_exportedRoutine ;
      outOperand6 = mArray.lastObject (HERE).mProperty_routineAttributes ;
      outOperand7 = mArray.lastObject (HERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray.lastObject (HERE).mProperty_formalArgumentList ;
      outOperand9 = mArray.lastObject (HERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray.lastObject (HERE).mProperty_returnTypeName ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::method_first (GGS_lstring & outOperand0,
                                                    GGS_mode & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    GGS_routineKind & outOperand3,
                                                    GGS_bool & outOperand4,
                                                    GGS_bool & outOperand5,
                                                    GGS_routineAttributes & outOperand6,
                                                    GGS_lstring & outOperand7,
                                                    GGS_routineFormalArgumentListAST & outOperand8,
                                                    GGS_bool & outOperand9,
                                                    GGS_instructionListAST & outOperand10,
                                                    GGS_location & outOperand11,
                                                    GGS_lstring & outOperand12,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_receiverTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mode ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_isRequired ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_routineKind ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_warnIfUnused ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_exportedRoutine ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_routineAttributes ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_formalArgumentList ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_returnTypeName ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::method_last (GGS_lstring & outOperand0,
                                                   GGS_mode & outOperand1,
                                                   GGS_bool & outOperand2,
                                                   GGS_routineKind & outOperand3,
                                                   GGS_bool & outOperand4,
                                                   GGS_bool & outOperand5,
                                                   GGS_routineAttributes & outOperand6,
                                                   GGS_lstring & outOperand7,
                                                   GGS_routineFormalArgumentListAST & outOperand8,
                                                   GGS_bool & outOperand9,
                                                   GGS_instructionListAST & outOperand10,
                                                   GGS_location & outOperand11,
                                                   GGS_lstring & outOperand12,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_receiverTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mode ;
      outOperand2 = mArray.lastObject (HERE).mProperty_isRequired ;
      outOperand3 = mArray.lastObject (HERE).mProperty_routineKind ;
      outOperand4 = mArray.lastObject (HERE).mProperty_warnIfUnused ;
      outOperand5 = mArray.lastObject (HERE).mProperty_exportedRoutine ;
      outOperand6 = mArray.lastObject (HERE).mProperty_routineAttributes ;
      outOperand7 = mArray.lastObject (HERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray.lastObject (HERE).mProperty_formalArgumentList ;
      outOperand9 = mArray.lastObject (HERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray.lastObject (HERE).mProperty_returnTypeName ;
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
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::add_operation (const GGS_decoratedRegularRoutineList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
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

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
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

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::plusAssignOperation (const GGS_decoratedRegularRoutineList inList,
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

void GGS_decoratedRegularRoutineList::setter_setReceiverTypeNameAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_receiverTypeName = inOperand ;
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

GGS_lstring GGS_decoratedRegularRoutineList::getter_receiverTypeNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_receiverTypeName ;
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

void GGS_decoratedRegularRoutineList::setter_setModeAtIndex (GGS_mode inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mode = inOperand ;
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

GGS_mode GGS_decoratedRegularRoutineList::getter_modeAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_mode result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mode ;
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

void GGS_decoratedRegularRoutineList::setter_setIsRequiredAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_isRequired = inOperand ;
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

GGS_bool GGS_decoratedRegularRoutineList::getter_isRequiredAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_isRequired ;
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

void GGS_decoratedRegularRoutineList::setter_setRoutineKindAtIndex (GGS_routineKind inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_routineKind = inOperand ;
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

GGS_routineKind GGS_decoratedRegularRoutineList::getter_routineKindAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_routineKind ;
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

void GGS_decoratedRegularRoutineList::setter_setWarnIfUnusedAtIndex (GGS_bool inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_warnIfUnused = inOperand ;
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

GGS_bool GGS_decoratedRegularRoutineList::getter_warnIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_warnIfUnused ;
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

void GGS_decoratedRegularRoutineList::setter_setExportedRoutineAtIndex (GGS_bool inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_exportedRoutine = inOperand ;
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

GGS_bool GGS_decoratedRegularRoutineList::getter_exportedRoutineAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_exportedRoutine ;
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

void GGS_decoratedRegularRoutineList::setter_setRoutineAttributesAtIndex (GGS_routineAttributes inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_routineAttributes = inOperand ;
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

GGS_routineAttributes GGS_decoratedRegularRoutineList::getter_routineAttributesAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_routineAttributes ;
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

void GGS_decoratedRegularRoutineList::setter_setRoutineMangledLLVMNameAtIndex (GGS_lstring inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_routineMangledLLVMName = inOperand ;
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

GGS_lstring GGS_decoratedRegularRoutineList::getter_routineMangledLLVMNameAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_routineMangledLLVMName ;
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

void GGS_decoratedRegularRoutineList::setter_setFormalArgumentListAtIndex (GGS_routineFormalArgumentListAST inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_formalArgumentList = inOperand ;
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

GGS_routineFormalArgumentListAST GGS_decoratedRegularRoutineList::getter_formalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_formalArgumentList ;
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

void GGS_decoratedRegularRoutineList::setter_setWarningOnUnusedArgsAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_warningOnUnusedArgs = inOperand ;
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

GGS_bool GGS_decoratedRegularRoutineList::getter_warningOnUnusedArgsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_warningOnUnusedArgs ;
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

void GGS_decoratedRegularRoutineList::setter_setMInstructionListAtIndex (GGS_instructionListAST inOperand,
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

GGS_instructionListAST GGS_decoratedRegularRoutineList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
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

void GGS_decoratedRegularRoutineList::setter_setMEndOfRoutineDeclarationAtIndex (GGS_location inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfRoutineDeclaration = inOperand ;
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

GGS_location GGS_decoratedRegularRoutineList::getter_mEndOfRoutineDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfRoutineDeclaration ;
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

void GGS_decoratedRegularRoutineList::setter_setReturnTypeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_returnTypeName = inOperand ;
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

GGS_lstring GGS_decoratedRegularRoutineList::getter_returnTypeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_returnTypeName ;
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
// Down Enumerator for @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedRegularRoutineList::DownEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element DownEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind DownEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes DownEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST DownEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_returnTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedRegularRoutineList::UpEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element UpEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind UpEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes UpEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST UpEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_returnTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @decoratedRegularRoutineList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ("decoratedRegularRoutineList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRegularRoutineList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRegularRoutineList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRegularRoutineList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList result ;
  const GGS_decoratedRegularRoutineList * p = (const GGS_decoratedRegularRoutineList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRegularRoutineList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum mode
//--------------------------------------------------------------------------------------------------

GGS_mode::GGS_mode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_userMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_userMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_sectionMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_sectionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_serviceMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_serviceMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_primitiveMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_primitiveMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_guardMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_guardMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_anyMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_anyMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_anySafeMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_anySafeMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeUserMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeUserMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeSectionMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeSectionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeServiceMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeServiceMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safePrimitiveMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safePrimitiveMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeGuardMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeGuardMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_panicMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_panicMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_bootMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_bootMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_startupMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_startupMode ;
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

static const char * gEnumNameArrayFor_mode [16] = {
  "(not built)",
  "userMode",
  "sectionMode",
  "serviceMode",
  "primitiveMode",
  "guardMode",
  "anyMode",
  "anySafeMode",
  "safeUserMode",
  "safeSectionMode",
  "safeServiceMode",
  "safePrimitiveMode",
  "safeGuardMode",
  "panicMode",
  "bootMode",
  "startupMode"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isUserMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_userMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSectionMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sectionMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isServiceMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_serviceMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isPrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_primitiveMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isGuardMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_guardMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isAnyMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_anyMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isAnySafeMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_anySafeMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeUserMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeUserMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeSectionMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeSectionMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeServiceMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeServiceMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafePrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safePrimitiveMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeGuardMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeGuardMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isPanicMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_panicMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isBootMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bootMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isStartupMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_startupMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mode::description (String & ioString,
                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @mode: ") ;
  ioString.appendCString (gEnumNameArrayFor_mode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mode::objectCompare (const GGS_mode & inOperand) const {
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
//     @mode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mode ("mode",
                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_mode result ;
  const GGS_mode * p = (const GGS_mode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum routineKind
//--------------------------------------------------------------------------------------------------

GGS_routineKind::GGS_routineKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_function (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_function ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_section (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_section ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_service (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_service ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_primitive (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_primitive ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_section == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_service == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_primitive == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineKind::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @routineKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_routineKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineKind::objectCompare (const GGS_routineKind & inOperand) const {
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
//     @routineKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_routineKind result ;
  const GGS_routineKind * p = (const GGS_routineKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes::GGS_routineAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes::GGS_routineAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::class_func_mutatingRoutine (UNUSED_LOCATION_ARGS) {
  return GGS_routineAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::class_func_isGuard (UNUSED_LOCATION_ARGS) {
  return GGS_routineAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineAttributes::getter_contains (const GGS_routineAttributes & inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::andAssignOperation (const GGS_routineAttributes inOperand,
                                                class Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::orAssignOperation (const GGS_routineAttributes inOperand,
                                               class Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::xorAssignOperation (const GGS_routineAttributes inOperand,
                                                class Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::minusAssignOperation (const GGS_routineAttributes inOperand,
                                                  class Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_or (const GGS_routineAttributes & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_and (const GGS_routineAttributes & inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_xor (const GGS_routineAttributes & inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::substract_operation (const GGS_routineAttributes & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid) {
    result = GGS_routineAttributes (uint64_t (0x3) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @routineAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" mutatingRoutine") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" isGuard") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineAttributes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAttributes ("routineAttributes",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_routineAttributes result ;
  const GGS_routineAttributes * p = (const GGS_routineAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@routineFormalArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_routineFormalArgumentListAST : public CollectionElementPtr {
  public: GGS_routineFormalArgumentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_routineFormalArgumentListAST (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                             const GGS_lstring & in_mSelector,
                                                             const GGS_lstring & in_mFormalArgumentTypeName,
                                                             const GGS_lstring & in_mFormalArgumentName
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineFormalArgumentListAST::CollectionElementPtr_routineFormalArgumentListAST (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                      const GGS_lstring & in_mSelector,
                                                                                                      const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                      const GGS_lstring & in_mFormalArgumentName
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineFormalArgumentListAST::CollectionElementPtr_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_routineFormalArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_routineFormalArgumentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_routineFormalArgumentListAST (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineFormalArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST::GGS_routineFormalArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST::GGS_routineFormalArgumentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_routineFormalArgumentListAST * p = (CollectionElementPtr_routineFormalArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_routineFormalArgumentListAST) ;
    const GGS_routineFormalArgumentListAST_2E_element element (p->mObject.mProperty_mFormalArgumentPassingMode, p->mObject.mProperty_mSelector, p->mObject.mProperty_mFormalArgumentTypeName, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                  const GGS_lstring & in_mSelector,
                                                                  const GGS_lstring & in_mFormalArgumentTypeName,
                                                                  const GGS_lstring & in_mFormalArgumentName
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_routineFormalArgumentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_routineFormalArgumentListAST (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineFormalArgumentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineFormalArgumentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::description (String & ioString,
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
      ioString.appendString ("mFormalArgumentPassingMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::plusPlusAssignOperation (const GGS_routineFormalArgumentListAST_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_lstring & inOperand2,
                                                                                             const GGS_lstring & inOperand3
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_routineFormalArgumentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                           const GGS_lstring & inOperand1,
                                                           const GGS_lstring & inOperand2,
                                                           const GGS_lstring & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_lstring inOperand2,
                                                      const GGS_lstring inOperand3,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_lstring inOperand2,
                                                             const GGS_lstring inOperand3,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_routineFormalArgumentListAST::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_lstring & outOperand2,
                                                             GGS_lstring & outOperand3,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentTypeName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListAST::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_lstring & outOperand2,
                                                        GGS_lstring & outOperand3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentTypeName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListAST::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_lstring & outOperand2,
                                                       GGS_lstring & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentTypeName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListAST::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_lstring & outOperand2,
                                                     GGS_lstring & outOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentTypeName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListAST::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lstring & outOperand2,
                                                    GGS_lstring & outOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentTypeName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::add_operation (const GGS_routineFormalArgumentListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
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

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
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

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::plusAssignOperation (const GGS_routineFormalArgumentListAST inList,
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

void GGS_routineFormalArgumentListAST::setter_setMFormalArgumentPassingModeAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentPassingMode = inOperand ;
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

GGS_procFormalArgumentPassingMode GGS_routineFormalArgumentListAST::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_procFormalArgumentPassingMode result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentPassingMode ;
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

void GGS_routineFormalArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
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

GGS_lstring GGS_routineFormalArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
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

void GGS_routineFormalArgumentListAST::setter_setMFormalArgumentTypeNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentTypeName = inOperand ;
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

GGS_lstring GGS_routineFormalArgumentListAST::getter_mFormalArgumentTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentTypeName ;
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

void GGS_routineFormalArgumentListAST::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
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

GGS_lstring GGS_routineFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
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
// Down Enumerator for @routineFormalArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineFormalArgumentListAST::DownEnumerator_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element DownEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineFormalArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineFormalArgumentListAST::UpEnumerator_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element UpEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineFormalArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST ("routineFormalArgumentListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST result ;
  const GGS_routineFormalArgumentListAST * p = (const GGS_routineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@instructionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_instructionListAST : public CollectionElementPtr {
  public: GGS_instructionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_instructionListAST (const GGS_instructionAST & in_mInstruction
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_instructionListAST (const GGS_instructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_instructionListAST::CollectionElementPtr_instructionListAST (const GGS_instructionAST & in_mInstruction
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_instructionListAST::CollectionElementPtr_instructionListAST (const GGS_instructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_instructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_instructionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_instructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @instructionListAST
//--------------------------------------------------------------------------------------------------

GGS_instructionListAST::GGS_instructionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST::GGS_instructionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_instructionListAST * p = (CollectionElementPtr_instructionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_instructionListAST) ;
    const GGS_instructionListAST_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_instructionAST & in_mInstruction
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_instructionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_instructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instructionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_instructionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_instructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::plusPlusAssignOperation (const GGS_instructionListAST_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_instructionListAST::class_func_listWithValue (const GGS_instructionAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_instructionListAST_2E_element element (inOperand0) ;
  GGS_instructionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::addAssignOperation (const GGS_instructionAST & inOperand0
                                                 COMMA_LOCATION_ARGS) {
  const GGS_instructionListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::setter_append (const GGS_instructionAST inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_instructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::setter_insertAtIndex (const GGS_instructionAST inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_instructionListAST_2E_element newElement (inOperand0) ;
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

void GGS_instructionListAST::setter_removeAtIndex (GGS_instructionAST & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
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

void GGS_instructionListAST::setter_popFirst (GGS_instructionAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_instructionListAST::setter_popLast (GGS_instructionAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

void GGS_instructionListAST::method_first (GGS_instructionAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_instructionListAST::method_last (GGS_instructionAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

GGS_instructionListAST GGS_instructionListAST::add_operation (const GGS_instructionListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
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

GGS_instructionListAST GGS_instructionListAST::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
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

GGS_instructionListAST GGS_instructionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_instructionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_instructionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::plusAssignOperation (const GGS_instructionListAST inList,
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

void GGS_instructionListAST::setter_setMInstructionAtIndex (GGS_instructionAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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

GGS_instructionAST GGS_instructionListAST::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_instructionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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
// Down Enumerator for @instructionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_instructionListAST::DownEnumerator_instructionListAST (const GGS_instructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element DownEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST DownEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @instructionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_instructionListAST::UpEnumerator_instructionListAST (const GGS_instructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST_2E_element UpEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST UpEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @instructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_instructionListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_instructionListAST result ;
  const GGS_instructionListAST * p = (const GGS_instructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@decoratedRegularRoutineList routineSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_routineSemanticAnalysis (const GGS_decoratedRegularRoutineList inObject,
                                              const GGS_semanticContext constinArgument_inContext,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList temp_0 = inObject ;
  UpEnumerator_decoratedRegularRoutineList enumerator_1365 (temp_0) ;
  while (enumerator_1365.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_1365.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 29)) ;
    enumerator_1365.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@allocaList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_allocaList : public CollectionElementPtr {
  public: GGS_allocaList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_allocaList (const GGS_string & in_mVarLLVMName,
                                           const GGS_omnibusType & in_mLLVMType,
                                           const GGS_bool & in_mFormalInputArgument
                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_allocaList (const GGS_allocaList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_allocaList::CollectionElementPtr_allocaList (const GGS_string & in_mVarLLVMName,
                                                                  const GGS_omnibusType & in_mLLVMType,
                                                                  const GGS_bool & in_mFormalInputArgument
                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_allocaList::CollectionElementPtr_allocaList (const GGS_allocaList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mVarLLVMName, inElement.mProperty_mLLVMType, inElement.mProperty_mFormalInputArgument) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_allocaList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_allocaList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_allocaList (mObject.mProperty_mVarLLVMName, mObject.mProperty_mLLVMType, mObject.mProperty_mFormalInputArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @allocaList
//--------------------------------------------------------------------------------------------------

GGS_allocaList::GGS_allocaList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList::GGS_allocaList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_allocaList * p = (CollectionElementPtr_allocaList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_allocaList) ;
    const GGS_allocaList_2E_element element (p->mObject.mProperty_mVarLLVMName, p->mObject.mProperty_mLLVMType, p->mObject.mProperty_mFormalInputArgument) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                const GGS_string & in_mVarLLVMName,
                                                const GGS_omnibusType & in_mLLVMType,
                                                const GGS_bool & in_mFormalInputArgument
                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_allocaList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_allocaList (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_allocaList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_allocaList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::description (String & ioString,
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
      ioString.appendString ("mVarLLVMName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mVarLLVMName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLLVMType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLLVMType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalInputArgument:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalInputArgument.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_allocaList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::plusPlusAssignOperation (const GGS_allocaList_2E_element & inValue
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::class_func_listWithValue (const GGS_string & inOperand0,
                                                         const GGS_omnibusType & inOperand1,
                                                         const GGS_bool & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_allocaList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::addAssignOperation (const GGS_string & inOperand0,
                                         const GGS_omnibusType & inOperand1,
                                         const GGS_bool & inOperand2
                                         COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_append (const GGS_string inOperand0,
                                    const GGS_omnibusType inOperand1,
                                    const GGS_bool inOperand2,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_insertAtIndex (const GGS_string inOperand0,
                                           const GGS_omnibusType inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_allocaList::setter_removeAtIndex (GGS_string & outOperand0,
                                           GGS_omnibusType & outOperand1,
                                           GGS_bool & outOperand2,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLLVMType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::setter_popFirst (GGS_string & outOperand0,
                                      GGS_omnibusType & outOperand1,
                                      GGS_bool & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLLVMType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::setter_popLast (GGS_string & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     GGS_bool & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLLVMType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::method_first (GGS_string & outOperand0,
                                   GGS_omnibusType & outOperand1,
                                   GGS_bool & outOperand2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLLVMType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::method_last (GGS_string & outOperand0,
                                  GGS_omnibusType & outOperand1,
                                  GGS_bool & outOperand2,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLLVMType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalInputArgument ;
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

GGS_allocaList GGS_allocaList::add_operation (const GGS_allocaList & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_allocaList result ;
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

GGS_allocaList GGS_allocaList::subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
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

GGS_allocaList GGS_allocaList::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::plusAssignOperation (const GGS_allocaList inList,
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

void GGS_allocaList::setter_setMVarLLVMNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mVarLLVMName = inOperand ;
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

GGS_string GGS_allocaList::getter_mVarLLVMNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mVarLLVMName ;
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

void GGS_allocaList::setter_setMLLVMTypeAtIndex (GGS_omnibusType inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLLVMType = inOperand ;
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

GGS_omnibusType GGS_allocaList::getter_mLLVMTypeAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLLVMType ;
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

void GGS_allocaList::setter_setMFormalInputArgumentAtIndex (GGS_bool inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalInputArgument = inOperand ;
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

GGS_bool GGS_allocaList::getter_mFormalInputArgumentAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalInputArgument ;
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
// Down Enumerator for @allocaList
//--------------------------------------------------------------------------------------------------

DownEnumerator_allocaList::DownEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element DownEnumerator_allocaList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalInputArgument ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @allocaList
//--------------------------------------------------------------------------------------------------

UpEnumerator_allocaList::UpEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element UpEnumerator_allocaList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalInputArgument ;
}




//--------------------------------------------------------------------------------------------------
//     @allocaList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_allocaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_allocaList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_allocaList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_allocaList result ;
  const GGS_allocaList * p = (const GGS_allocaList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_allocaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@allocaList generateAllocaList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const GGS_allocaList inObject,
                                         GGS_string & ioArgument_ioLLVMcode,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_allocaList temp_0 = inObject ;
  UpEnumerator_allocaList enumerator_4515 (temp_0) ;
  while (enumerator_4515.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_4515.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 121)).add_operation (GGS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 121)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4515.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 121)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 121)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 121)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 121)) ;
    enumerator_4515.gotoNextObject () ;
  }
  const GGS_allocaList temp_1 = inObject ;
  UpEnumerator_allocaList enumerator_4657 (temp_1) ;
  while (enumerator_4657.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bool test_3 = enumerator_4657.current_mLLVMType (HERE).readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("regular-routine-analysis.galgas3", 125)) ;
      if (GalgasBool::boolTrue == test_3.boolEnum ()) {
        test_3 = enumerator_4657.current_mFormalInputArgument (HERE).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas3", 125)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- init dynamic array type '").add_operation (enumerator_4657.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 126)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 126)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 126)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4657.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4657.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)).add_operation (enumerator_4657.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)).add_operation (GGS_string (" ; init ARC value\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas3", 127)) ;
      }
    }
    enumerator_4657.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@routineFormalArgumentListIR' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_routineFormalArgumentListIR : public CollectionElementPtr {
  public: GGS_routineFormalArgumentListIR_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_routineFormalArgumentListIR (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                            const GGS_omnibusType & in_mFormalArgumentType,
                                                            const GGS_string & in_mFormalArgumentName
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineFormalArgumentListIR::CollectionElementPtr_routineFormalArgumentListIR (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                    const GGS_omnibusType & in_mFormalArgumentType,
                                                                                                    const GGS_string & in_mFormalArgumentName
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineFormalArgumentListIR::CollectionElementPtr_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFormalArgumentKind, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_routineFormalArgumentListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_routineFormalArgumentListIR::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_routineFormalArgumentListIR (mObject.mProperty_mFormalArgumentKind, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR::GGS_routineFormalArgumentListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR::GGS_routineFormalArgumentListIR (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_routineFormalArgumentListIR * p = (CollectionElementPtr_routineFormalArgumentListIR *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_routineFormalArgumentListIR) ;
    const GGS_routineFormalArgumentListIR_2E_element element (p->mObject.mProperty_mFormalArgumentKind, p->mObject.mProperty_mFormalArgumentType, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                 const GGS_omnibusType & in_mFormalArgumentType,
                                                                 const GGS_string & in_mFormalArgumentName
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_routineFormalArgumentListIR * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_routineFormalArgumentListIR (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineFormalArgumentListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineFormalArgumentListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::description (String & ioString,
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
      ioString.appendString ("mFormalArgumentKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::plusPlusAssignOperation (const GGS_routineFormalArgumentListIR_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                           const GGS_omnibusType & inOperand1,
                                                                                           const GGS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_routineFormalArgumentListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                          const GGS_omnibusType & inOperand1,
                                                          const GGS_string & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                                     const GGS_omnibusType inOperand1,
                                                     const GGS_string inOperand2,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                            const GGS_omnibusType inOperand1,
                                                            const GGS_string inOperand2,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_routineFormalArgumentListIR::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                            GGS_omnibusType & outOperand1,
                                                            GGS_string & outOperand2,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                       GGS_omnibusType & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                      GGS_omnibusType & outOperand1,
                                                      GGS_string & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                                    GGS_omnibusType & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                                   GGS_omnibusType & outOperand1,
                                                   GGS_string & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::add_operation (const GGS_routineFormalArgumentListIR & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::plusAssignOperation (const GGS_routineFormalArgumentListIR inList,
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

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentKindAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentKind = inOperand ;
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

GGS_procFormalArgumentPassingMode GGS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_procFormalArgumentPassingMode result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentKind ;
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

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentTypeAtIndex (GGS_omnibusType inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType = inOperand ;
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

GGS_omnibusType GGS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType ;
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

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
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

GGS_string GGS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
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
// Down Enumerator for @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineFormalArgumentListIR::DownEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element DownEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineFormalArgumentListIR::UpEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element UpEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineFormalArgumentListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineFormalArgumentListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineFormalArgumentListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR result ;
  const GGS_routineFormalArgumentListIR * p = (const GGS_routineFormalArgumentListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineFormalArgumentListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@instructionListIR' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_instructionListIR : public CollectionElementPtr {
  public: GGS_instructionListIR_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_instructionListIR (const GGS_abstractInstructionIR & in_mInstructionGeneration
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_instructionListIR (const GGS_instructionListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_instructionListIR::CollectionElementPtr_instructionListIR (const GGS_abstractInstructionIR & in_mInstructionGeneration
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstructionGeneration) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_instructionListIR::CollectionElementPtr_instructionListIR (const GGS_instructionListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstructionGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_instructionListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_instructionListIR::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_instructionListIR (mObject.mProperty_mInstructionGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @instructionListIR
//--------------------------------------------------------------------------------------------------

GGS_instructionListIR::GGS_instructionListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR::GGS_instructionListIR (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_instructionListIR * p = (CollectionElementPtr_instructionListIR *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_instructionListIR) ;
    const GGS_instructionListIR_2E_element element (p->mObject.mProperty_mInstructionGeneration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_abstractInstructionIR & in_mInstructionGeneration
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_instructionListIR * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instructionListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_instructionListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::description (String & ioString,
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
      ioString.appendString ("mInstructionGeneration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionGeneration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::plusPlusAssignOperation (const GGS_instructionListIR_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::class_func_listWithValue (const GGS_abstractInstructionIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element element (inOperand0) ;
  GGS_instructionListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::addAssignOperation (const GGS_abstractInstructionIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_append (const GGS_abstractInstructionIR inOperand0,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_insertAtIndex (const GGS_abstractInstructionIR inOperand0,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_instructionListIR_2E_element newElement (inOperand0) ;
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

void GGS_instructionListIR::setter_removeAtIndex (GGS_abstractInstructionIR & outOperand0,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionGeneration ;
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

void GGS_instructionListIR::setter_popFirst (GGS_abstractInstructionIR & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionGeneration ;
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

void GGS_instructionListIR::setter_popLast (GGS_abstractInstructionIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionGeneration ;
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

void GGS_instructionListIR::method_first (GGS_abstractInstructionIR & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionGeneration ;
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

void GGS_instructionListIR::method_last (GGS_abstractInstructionIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionGeneration ;
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

GGS_instructionListIR GGS_instructionListIR::add_operation (const GGS_instructionListIR & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
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

GGS_instructionListIR GGS_instructionListIR::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
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

GGS_instructionListIR GGS_instructionListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::plusAssignOperation (const GGS_instructionListIR inList,
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

void GGS_instructionListIR::setter_setMInstructionGenerationAtIndex (GGS_abstractInstructionIR inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionGeneration = inOperand ;
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

GGS_abstractInstructionIR GGS_instructionListIR::getter_mInstructionGenerationAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_abstractInstructionIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionGeneration ;
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
// Down Enumerator for @instructionListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_instructionListIR::DownEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element DownEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR DownEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @instructionListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_instructionListIR::UpEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element UpEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR UpEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @instructionListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instructionListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_instructionListIR result ;
  const GGS_instructionListIR * p = (const GGS_instructionListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instructionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractRoutineIR_2E_weak::objectCompare (const GGS_abstractRoutineIR_2E_weak & inOperand) const {
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

GGS_abstractRoutineIR_2E_weak::GGS_abstractRoutineIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR_2E_weak & GGS_abstractRoutineIR_2E_weak::operator = (const GGS_abstractRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//
//Extension proc '@instructionListIR appendStoreToUniversalReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreToUniversalReference (GGS_instructionListIR & ioObject,
                                                      const GGS_string constinArgument_inLLVMVarName,
                                                      const GGS_omnibusType constinArgument_inTargetVarType,
                                                      const GGS_objectIR constinArgument_inSourceValue,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_storeToUniversalReferenceIR::init_21__21__21_ (constinArgument_inLLVMVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas3", 8)) ;
}


//--------------------------------------------------------------------------------------------------
// @abstractInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInstructionIR::objectCompare (const GGS_abstractInstructionIR & inOperand) const {
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

GGS_abstractInstructionIR::GGS_abstractInstructionIR (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractInstructionIR::
abstractInstructionIR_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR::GGS_abstractInstructionIR (const cPtr_abstractInstructionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractInstructionIR class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractInstructionIR::cPtr_abstractInstructionIR (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInstructionIR::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR ("abstractInstructionIR",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR GGS_abstractInstructionIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractInstructionIR result ;
  const GGS_abstractInstructionIR * p = (const GGS_abstractInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum objectIR
//--------------------------------------------------------------------------------------------------

GGS_objectIR::GGS_objectIR (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_void (UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_void ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_reference (const GGS_omnibusType & inAssociatedValue0,
                                                 const GGS_string & inAssociatedValue1
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_reference ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_reference (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_null (const GGS_omnibusType & inAssociatedValue0
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_null ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_null (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_llvmNamedValue (const GGS_omnibusType & inAssociatedValue0,
                                                      const GGS_string & inAssociatedValue1
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_llvmNamedValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_llvmNamedValue (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_literalInteger (const GGS_omnibusType & inAssociatedValue0,
                                                      const GGS_bigint & inAssociatedValue1
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_literalInteger ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_literalInteger (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_llvmStructureValue (const GGS_omnibusType & inAssociatedValue0,
                                                          const GGS_sortedOperandIRList & inAssociatedValue1
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_llvmStructureValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_llvmStructureValue (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_literalString (const GGS_uint & inAssociatedValue0,
                                                     const GGS_uint & inAssociatedValue1
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_literalString ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_literalString (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_zero (const GGS_omnibusType & inAssociatedValue0
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_zero ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_zero (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_llvmArrayStaticValues (const GGS_omnibusType & inAssociatedValue0,
                                                             const GGS_operandIRList & inAssociatedValue1,
                                                             const GGS_uint & inAssociatedValue2
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_llvmArrayStaticValues ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_llvmArrayStaticValues (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_llvmArrayDynamicValues (const GGS_omnibusType & inAssociatedValue0,
                                                              const GGS_operandIRList & inAssociatedValue1
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_llvmArrayDynamicValues ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_llvmArrayDynamicValues (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_llvmArrayRepeatedStaticValue (const GGS_omnibusType & inAssociatedValue0,
                                                                    const GGS_uint & inAssociatedValue1,
                                                                    const GGS_objectIR & inAssociatedValue2,
                                                                    const GGS_uint & inAssociatedValue3
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_llvmArrayRepeatedStaticValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_llvmArrayRepeatedStaticValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::class_func_llvmArrayRepeatedDynamicValue (const GGS_omnibusType & inAssociatedValue0,
                                                                     const GGS_uint & inAssociatedValue1,
                                                                     const GGS_objectIR & inAssociatedValue2
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result ;
  result.mEnum = Enumeration::enum_llvmArrayRepeatedDynamicValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractReference (GGS_omnibusType & outAssociatedValue_type,
                                            GGS_string & outAssociatedValue_llvmName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_reference) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_llvmName.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.reference invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_reference *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_llvmName = ptr->mProperty_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractNull (GGS_omnibusType & outAssociatedValue_type,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_null) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.null invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_null *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLlvmNamedValue (GGS_omnibusType & outAssociatedValue_type,
                                                 GGS_string & outAssociatedValue_llvmName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmNamedValue) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_llvmName.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.llvmNamedValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_llvmNamedValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_llvmName = ptr->mProperty_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLiteralInteger (GGS_omnibusType & outAssociatedValue_type,
                                                 GGS_bigint & outAssociatedValue_value,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_literalInteger) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.literalInteger invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_literalInteger *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLlvmStructureValue (GGS_omnibusType & outAssociatedValue_type,
                                                     GGS_sortedOperandIRList & outAssociatedValue_values,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmStructureValue) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_values.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.llvmStructureValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_llvmStructureValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_values = ptr->mProperty_values ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLiteralString (GGS_uint & outAssociatedValue_utf8Size,
                                                GGS_uint & outAssociatedValue_index,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_literalString) {
    outAssociatedValue_utf8Size.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.literalString invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_literalString *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_utf8Size = ptr->mProperty_utf_38_Size ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractZero (GGS_omnibusType & outAssociatedValue_type,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_zero) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.zero invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_zero *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLlvmArrayStaticValues (GGS_omnibusType & outAssociatedValue_type,
                                                        GGS_operandIRList & outAssociatedValue_values,
                                                        GGS_uint & outAssociatedValue_index,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmArrayStaticValues) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_values.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.llvmArrayStaticValues invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_llvmArrayStaticValues *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_values = ptr->mProperty_values ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLlvmArrayDynamicValues (GGS_omnibusType & outAssociatedValue_type,
                                                         GGS_operandIRList & outAssociatedValue_values,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmArrayDynamicValues) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_values.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.llvmArrayDynamicValues invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_llvmArrayDynamicValues *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_values = ptr->mProperty_values ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLlvmArrayRepeatedStaticValue (GGS_omnibusType & outAssociatedValue_type,
                                                               GGS_uint & outAssociatedValue_arraySize,
                                                               GGS_objectIR & outAssociatedValue_value,
                                                               GGS_uint & outAssociatedValue_index,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmArrayRepeatedStaticValue) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_arraySize.drop () ;
    outAssociatedValue_value.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.llvmArrayRepeatedStaticValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_llvmArrayRepeatedStaticValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_arraySize = ptr->mProperty_arraySize ;
    outAssociatedValue_value = ptr->mProperty_value ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::method_extractLlvmArrayRepeatedDynamicValue (GGS_omnibusType & outAssociatedValue_type,
                                                                GGS_uint & outAssociatedValue_arraySize,
                                                                GGS_objectIR & outAssociatedValue_value,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmArrayRepeatedDynamicValue) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_arraySize.drop () ;
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("proc @objectIR.llvmArrayRepeatedDynamicValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_arraySize = ptr->mProperty_arraySize ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_reference_3F_ GGS_objectIR::getter_getReference (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_reference_3F_ result ;
  if (mEnum == Enumeration::enum_reference) {
    const auto ptr = (const GGS_objectIR_2E_reference *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_reference (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_reference (GGS_omnibusType & out_type,
                                                     GGS_string & out_llvmName) const {
  const auto ptr = (const GGS_objectIR_2E_reference *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_llvmName = ptr->mProperty_llvmName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_null_3F_ GGS_objectIR::getter_getNull (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_null_3F_ result ;
  if (mEnum == Enumeration::enum_null) {
    const auto ptr = (const GGS_objectIR_2E_null *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_null (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_null (GGS_omnibusType & out_type) const {
  const auto ptr = (const GGS_objectIR_2E_null *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmNamedValue_3F_ GGS_objectIR::getter_getLlvmNamedValue (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_llvmNamedValue_3F_ result ;
  if (mEnum == Enumeration::enum_llvmNamedValue) {
    const auto ptr = (const GGS_objectIR_2E_llvmNamedValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_llvmNamedValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_llvmNamedValue (GGS_omnibusType & out_type,
                                                          GGS_string & out_llvmName) const {
  const auto ptr = (const GGS_objectIR_2E_llvmNamedValue *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_llvmName = ptr->mProperty_llvmName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalInteger_3F_ GGS_objectIR::getter_getLiteralInteger (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_literalInteger_3F_ result ;
  if (mEnum == Enumeration::enum_literalInteger) {
    const auto ptr = (const GGS_objectIR_2E_literalInteger *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_literalInteger (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_literalInteger (GGS_omnibusType & out_type,
                                                          GGS_bigint & out_value) const {
  const auto ptr = (const GGS_objectIR_2E_literalInteger *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmStructureValue_3F_ GGS_objectIR::getter_getLlvmStructureValue (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_llvmStructureValue_3F_ result ;
  if (mEnum == Enumeration::enum_llvmStructureValue) {
    const auto ptr = (const GGS_objectIR_2E_llvmStructureValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_llvmStructureValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_llvmStructureValue (GGS_omnibusType & out_type,
                                                              GGS_sortedOperandIRList & out_values) const {
  const auto ptr = (const GGS_objectIR_2E_llvmStructureValue *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_values = ptr->mProperty_values ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_literalString_3F_ GGS_objectIR::getter_getLiteralString (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_literalString_3F_ result ;
  if (mEnum == Enumeration::enum_literalString) {
    const auto ptr = (const GGS_objectIR_2E_literalString *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_literalString (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_literalString (GGS_uint & out_utf8Size,
                                                         GGS_uint & out_index) const {
  const auto ptr = (const GGS_objectIR_2E_literalString *) mAssociatedValues.associatedValuesPointer () ;
  out_utf8Size = ptr->mProperty_utf_38_Size ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_zero_3F_ GGS_objectIR::getter_getZero (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_zero_3F_ result ;
  if (mEnum == Enumeration::enum_zero) {
    const auto ptr = (const GGS_objectIR_2E_zero *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_zero (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_zero (GGS_omnibusType & out_type) const {
  const auto ptr = (const GGS_objectIR_2E_zero *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayStaticValues_3F_ GGS_objectIR::getter_getLlvmArrayStaticValues (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_llvmArrayStaticValues_3F_ result ;
  if (mEnum == Enumeration::enum_llvmArrayStaticValues) {
    const auto ptr = (const GGS_objectIR_2E_llvmArrayStaticValues *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_llvmArrayStaticValues (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_llvmArrayStaticValues (GGS_omnibusType & out_type,
                                                                 GGS_operandIRList & out_values,
                                                                 GGS_uint & out_index) const {
  const auto ptr = (const GGS_objectIR_2E_llvmArrayStaticValues *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_values = ptr->mProperty_values ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayDynamicValues_3F_ GGS_objectIR::getter_getLlvmArrayDynamicValues (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_llvmArrayDynamicValues_3F_ result ;
  if (mEnum == Enumeration::enum_llvmArrayDynamicValues) {
    const auto ptr = (const GGS_objectIR_2E_llvmArrayDynamicValues *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_llvmArrayDynamicValues (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_llvmArrayDynamicValues (GGS_omnibusType & out_type,
                                                                  GGS_operandIRList & out_values) const {
  const auto ptr = (const GGS_objectIR_2E_llvmArrayDynamicValues *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_values = ptr->mProperty_values ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ GGS_objectIR::getter_getLlvmArrayRepeatedStaticValue (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ result ;
  if (mEnum == Enumeration::enum_llvmArrayRepeatedStaticValue) {
    const auto ptr = (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_llvmArrayRepeatedStaticValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_llvmArrayRepeatedStaticValue (GGS_omnibusType & out_type,
                                                                        GGS_uint & out_arraySize,
                                                                        GGS_objectIR & out_value,
                                                                        GGS_uint & out_index) const {
  const auto ptr = (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_arraySize = ptr->mProperty_arraySize ;
  out_value = ptr->mProperty_value ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ GGS_objectIR::getter_getLlvmArrayRepeatedDynamicValue (UNUSED_LOCATION_ARGS) const {
  GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ result ;
  if (mEnum == Enumeration::enum_llvmArrayRepeatedDynamicValue) {
    const auto ptr = (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (GGS_omnibusType & out_type,
                                                                         GGS_uint & out_arraySize,
                                                                         GGS_objectIR & out_value) const {
  const auto ptr = (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_arraySize = ptr->mProperty_arraySize ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_objectIR [13] = {
  "(not built)",
  "void",
  "reference",
  "null",
  "llvmNamedValue",
  "literalInteger",
  "llvmStructureValue",
  "literalString",
  "zero",
  "llvmArrayStaticValues",
  "llvmArrayDynamicValues",
  "llvmArrayRepeatedStaticValue",
  "llvmArrayRepeatedDynamicValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_void == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isReference (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_reference == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLlvmNamedValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmNamedValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_literalInteger == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLlvmStructureValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmStructureValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_zero == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLlvmArrayStaticValues (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmArrayStaticValues == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLlvmArrayDynamicValues (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmArrayDynamicValues == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLlvmArrayRepeatedStaticValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmArrayRepeatedStaticValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_objectIR::getter_isLlvmArrayRepeatedDynamicValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmArrayRepeatedDynamicValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_objectIR::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @objectIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_objectIR [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_objectIR::objectCompare (const GGS_objectIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_reference: {
        const auto left = (GGS_objectIR_2E_reference *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_reference *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_null: {
        const auto left = (GGS_objectIR_2E_null *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_null *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmNamedValue: {
        const auto left = (GGS_objectIR_2E_llvmNamedValue *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_llvmNamedValue *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_literalInteger: {
        const auto left = (GGS_objectIR_2E_literalInteger *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_literalInteger *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmStructureValue: {
        const auto left = (GGS_objectIR_2E_llvmStructureValue *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_llvmStructureValue *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_literalString: {
        const auto left = (GGS_objectIR_2E_literalString *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_literalString *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_zero: {
        const auto left = (GGS_objectIR_2E_zero *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_zero *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmArrayStaticValues: {
        const auto left = (GGS_objectIR_2E_llvmArrayStaticValues *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_llvmArrayStaticValues *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmArrayDynamicValues: {
        const auto left = (GGS_objectIR_2E_llvmArrayDynamicValues *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_llvmArrayDynamicValues *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmArrayRepeatedStaticValue: {
        const auto left = (GGS_objectIR_2E_llvmArrayRepeatedStaticValue *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_llvmArrayRepeatedStaticValue *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmArrayRepeatedDynamicValue: {
        const auto left = (GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_objectIR_2E_llvmArrayRepeatedDynamicValue *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @objectIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_objectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_objectIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_objectIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_objectIR::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_objectIR result ;
  const GGS_objectIR * p = (const GGS_objectIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_objectIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInstructionIR_2E_weak::objectCompare (const GGS_abstractInstructionIR_2E_weak & inOperand) const {
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

GGS_abstractInstructionIR_2E_weak::GGS_abstractInstructionIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak & GGS_abstractInstructionIR_2E_weak::operator = (const GGS_abstractInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak::GGS_abstractInstructionIR_2E_weak (const GGS_abstractInstructionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak GGS_abstractInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR GGS_abstractInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_abstractInstructionIR result ;
  if (isValid ()) {
    const cPtr_abstractInstructionIR * p = (cPtr_abstractInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR GGS_abstractInstructionIR_2E_weak::bang_abstractInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInstructionIR) ;
      result = GGS_abstractInstructionIR ((cPtr_abstractInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ("abstractInstructionIR.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR_2E_weak GGS_abstractInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractInstructionIR_2E_weak result ;
  const GGS_abstractInstructionIR_2E_weak * p = (const GGS_abstractInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@declarationListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_declarationListAST : public CollectionElementPtr {
  public: GGS_declarationListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_declarationListAST (const GGS_abstractDeclarationAST & in_mDeclaration
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_declarationListAST::CollectionElementPtr_declarationListAST (const GGS_abstractDeclarationAST & in_mDeclaration
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_declarationListAST::CollectionElementPtr_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_declarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_declarationListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_declarationListAST (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @declarationListAST
//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_declarationListAST * p = (CollectionElementPtr_declarationListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_declarationListAST) ;
    const GGS_declarationListAST_2E_element element (p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_abstractDeclarationAST & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_declarationListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_declarationListAST (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declarationListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_declarationListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::description (String & ioString,
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
      ioString.appendString ("mDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclaration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::plusPlusAssignOperation (const GGS_declarationListAST_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::class_func_listWithValue (const GGS_abstractDeclarationAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element element (inOperand0) ;
  GGS_declarationListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::addAssignOperation (const GGS_abstractDeclarationAST & inOperand0
                                                 COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_append (const GGS_abstractDeclarationAST inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_insertAtIndex (const GGS_abstractDeclarationAST inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element newElement (inOperand0) ;
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

void GGS_declarationListAST::setter_removeAtIndex (GGS_abstractDeclarationAST & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDeclaration ;
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

void GGS_declarationListAST::setter_popFirst (GGS_abstractDeclarationAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_declarationListAST::setter_popLast (GGS_abstractDeclarationAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

void GGS_declarationListAST::method_first (GGS_abstractDeclarationAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDeclaration ;
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

void GGS_declarationListAST::method_last (GGS_abstractDeclarationAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDeclaration ;
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

GGS_declarationListAST GGS_declarationListAST::add_operation (const GGS_declarationListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
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

GGS_declarationListAST GGS_declarationListAST::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
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

GGS_declarationListAST GGS_declarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::plusAssignOperation (const GGS_declarationListAST inList,
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

void GGS_declarationListAST::setter_setMDeclarationAtIndex (GGS_abstractDeclarationAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration = inOperand ;
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

GGS_abstractDeclarationAST GGS_declarationListAST::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_abstractDeclarationAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaration ;
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
// Down Enumerator for @declarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_declarationListAST::DownEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element DownEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST DownEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @declarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_declarationListAST::UpEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element UpEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST UpEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @declarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  const GGS_declarationListAST * p = (const GGS_declarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDeclarationAST::objectCompare (const GGS_abstractDeclarationAST & inOperand) const {
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

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractDeclarationAST::
abstractDeclarationAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST result ;
  const GGS_abstractDeclarationAST * p = (const GGS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractDeclarationAST keyRepresentationForErrorSignaling'
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

AbstractPtrClass * cPtr_compileTimeDeclarationBarrierAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

ComparisonResult GGS_abstractDeclarationAST_2E_weak::objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const {
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

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak & GGS_abstractDeclarationAST_2E_weak::operator = (const GGS_abstractDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (const GGS_abstractDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractDeclarationAST result ;
  if (isValid ()) {
    const cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST_2E_weak::bang_abstractDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDeclarationAST) ;
      result = GGS_abstractDeclarationAST ((cPtr_abstractDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ("abstractDeclarationAST.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  const GGS_abstractDeclarationAST_2E_weak * p = (const GGS_abstractDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@genericFormalParameterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_genericFormalParameterList : public CollectionElementPtr {
  public: GGS_genericFormalParameterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_genericFormalParameterList (const GGS_genericFormalParameter & in_mParameter
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_genericFormalParameterList (const GGS_genericFormalParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_genericFormalParameterList::CollectionElementPtr_genericFormalParameterList (const GGS_genericFormalParameter & in_mParameter
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_genericFormalParameterList::CollectionElementPtr_genericFormalParameterList (const GGS_genericFormalParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_genericFormalParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_genericFormalParameterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_genericFormalParameterList (mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @genericFormalParameterList
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList::GGS_genericFormalParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList::GGS_genericFormalParameterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_genericFormalParameterList * p = (CollectionElementPtr_genericFormalParameterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_genericFormalParameterList) ;
    const GGS_genericFormalParameterList_2E_element element (p->mObject.mProperty_mParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_genericFormalParameter & in_mParameter
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_genericFormalParameterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_genericFormalParameterList (in_mParameter COMMA_THERE)) ;
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
// @ctExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctExpressionAST::objectCompare (const GGS_ctExpressionAST & inOperand) const {
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

GGS_ctExpressionAST::GGS_ctExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ctExpressionAST::
ctExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST::GGS_ctExpressionAST (const cPtr_ctExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ctExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_ctExpressionAST::cPtr_ctExpressionAST (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctExpressionAST ("ctExpressionAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctExpressionAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_ctExpressionAST result ;
  const GGS_ctExpressionAST * p = (const GGS_ctExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@llvmGenerationInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_llvmGenerationInstructionList : public CollectionElementPtr {
  public: GGS_llvmGenerationInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_llvmGenerationInstructionList (const GGS_abstractLLVMInstruction & in_mInstruction
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_llvmGenerationInstructionList::CollectionElementPtr_llvmGenerationInstructionList (const GGS_abstractLLVMInstruction & in_mInstruction
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_llvmGenerationInstructionList::CollectionElementPtr_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_llvmGenerationInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_llvmGenerationInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_llvmGenerationInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @llvmGenerationInstructionList
//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList::GGS_llvmGenerationInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList::GGS_llvmGenerationInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_llvmGenerationInstructionList * p = (CollectionElementPtr_llvmGenerationInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_llvmGenerationInstructionList) ;
    const GGS_llvmGenerationInstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_abstractLLVMInstruction & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_llvmGenerationInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_llvmGenerationInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_llvmGenerationInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_llvmGenerationInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::plusPlusAssignOperation (const GGS_llvmGenerationInstructionList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::class_func_listWithValue (const GGS_abstractLLVMInstruction & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element element (inOperand0) ;
  GGS_llvmGenerationInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::addAssignOperation (const GGS_abstractLLVMInstruction & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_append (const GGS_abstractLLVMInstruction inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::setter_insertAtIndex (const GGS_abstractLLVMInstruction inOperand0,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_llvmGenerationInstructionList_2E_element newElement (inOperand0) ;
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

void GGS_llvmGenerationInstructionList::setter_removeAtIndex (GGS_abstractLLVMInstruction & outOperand0,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
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

void GGS_llvmGenerationInstructionList::setter_popFirst (GGS_abstractLLVMInstruction & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_llvmGenerationInstructionList::setter_popLast (GGS_abstractLLVMInstruction & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

void GGS_llvmGenerationInstructionList::method_first (GGS_abstractLLVMInstruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_llvmGenerationInstructionList::method_last (GGS_abstractLLVMInstruction & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::add_operation (const GGS_llvmGenerationInstructionList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
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

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
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

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmGenerationInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmGenerationInstructionList::plusAssignOperation (const GGS_llvmGenerationInstructionList inList,
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

void GGS_llvmGenerationInstructionList::setter_setMInstructionAtIndex (GGS_abstractLLVMInstruction inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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

GGS_abstractLLVMInstruction GGS_llvmGenerationInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_abstractLLVMInstruction result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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
// Down Enumerator for @llvmGenerationInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_llvmGenerationInstructionList::DownEnumerator_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element DownEnumerator_llvmGenerationInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction DownEnumerator_llvmGenerationInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @llvmGenerationInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_llvmGenerationInstructionList::UpEnumerator_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList_2E_element UpEnumerator_llvmGenerationInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLLVMInstruction UpEnumerator_llvmGenerationInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @llvmGenerationInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList ("llvmGenerationInstructionList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenerationInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenerationInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenerationInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList result ;
  const GGS_llvmGenerationInstructionList * p = (const GGS_llvmGenerationInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenerationInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::objectCompare (const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak & inOperand) const {
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

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak & GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::operator = (const GGS_llvmAssignmentOperatorDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (const GGS_llvmAssignmentOperatorDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  if (isValid ()) {
    const cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmAssignmentOperatorDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::bang_llvmAssignmentOperatorDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmAssignmentOperatorDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
      result = GGS_llvmAssignmentOperatorDeclarationAST ((cPtr_llvmAssignmentOperatorDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmAssignmentOperatorDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2E_weak ("llvmAssignmentOperatorDeclarationAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorDeclarationAST_2E_weak GGS_llvmAssignmentOperatorDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorDeclarationAST_2E_weak result ;
  const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak * p = (const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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

GGS_abstractAssignmentOperatorUsage_2E_weak::GGS_abstractAssignmentOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak & GGS_abstractAssignmentOperatorUsage_2E_weak::operator = (const GGS_abstractAssignmentOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//
//Abstract extension proc '@abstractAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractAssignmentOperatorUsage * inObject,
                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       GGS_instructionListIR & io_ioInstructionListIR,
                                       GGS_allocaList & io_ioAllocaList,
                                       const GGS_omnibusType constin_inTargetType,
                                       const GGS_string constin_inTargetLLVMName,
                                       const GGS_objectIR constin_inSourcePossibleReference,
                                       const GGS_location constin_inErrorLocation,
                                       const GGS_bool constin_inTargetIsInitialized,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractAssignmentOperatorUsage) ;
    inObject->method_generateCode (io_ioTemporaries, io_ioInstructionListIR, io_ioAllocaList, constin_inTargetType, constin_inTargetLLVMName, constin_inSourcePossibleReference, constin_inErrorLocation, constin_inTargetIsInitialized, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @assignmentOperatorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap::GGS_assignmentOperatorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap::~ GGS_assignmentOperatorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap::GGS_assignmentOperatorMap (const GGS_assignmentOperatorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap & GGS_assignmentOperatorMap::operator = (const GGS_assignmentOperatorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_assignmentOperatorMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_assignmentOperatorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignmentOperatorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignmentOperatorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_assignmentOperatorMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_assignmentOperatorMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentOperatorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_assignmentOperatorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::performInsert (const GGS_assignmentOperatorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_assignmentOperatorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element>
GGS_assignmentOperatorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_assignmentOperatorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element>>
GGS_assignmentOperatorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_assignmentOperatorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element_3F_ GGS_assignmentOperatorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_assignmentOperatorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_assignmentOperatorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_assignmentOperatorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOperatorUsage = info->mProperty_mOperatorUsage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::class_func_mapWithMapToOverride (const GGS_assignmentOperatorMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_assignmentOperatorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_assignmentOperatorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_abstractAssignmentOperatorUsage inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_assignmentOperatorMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' assignment is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_abstractAssignmentOperatorUsage & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' assignment" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mOperatorUsage ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_assignmentOperatorMap::getter_mOperatorUsageForKey (const GGS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_abstractAssignmentOperatorUsage result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOperatorUsage ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::setter_setMOperatorUsageForKey (GGS_abstractAssignmentOperatorUsage inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_assignmentOperatorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOperatorUsage = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_assignmentOperatorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element>> & inArray,
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
    ioString.appendString ("mOperatorUsage:") ;
    inArray (i COMMA_HERE)->mProperty_mOperatorUsage.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentOperatorMap_2E_element>> array = sortedInfoArray () ;
    GGS_assignmentOperatorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_assignmentOperatorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_assignmentOperatorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @assignmentOperatorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_assignmentOperatorMap::DownEnumerator_assignmentOperatorMap (const GGS_assignmentOperatorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element DownEnumerator_assignmentOperatorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_assignmentOperatorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage DownEnumerator_assignmentOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @assignmentOperatorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_assignmentOperatorMap::UpEnumerator_assignmentOperatorMap (const GGS_assignmentOperatorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element UpEnumerator_assignmentOperatorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_assignmentOperatorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage UpEnumerator_assignmentOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOperatorUsage ;
}


//--------------------------------------------------------------------------------------------------
//     @assignmentOperatorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentOperatorMap ("assignmentOperatorMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  const GGS_assignmentOperatorMap * p = (const GGS_assignmentOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_llvmAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmAssignmentOperatorUsage_2E_weak::GGS_llvmAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak & GGS_llvmAssignmentOperatorUsage_2E_weak::operator = (const GGS_llvmAssignmentOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak::GGS_llvmAssignmentOperatorUsage_2E_weak (const GGS_llvmAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak GGS_llvmAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage GGS_llvmAssignmentOperatorUsage_2E_weak::bang_llvmAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorUsage) ;
      result = GGS_llvmAssignmentOperatorUsage ((cPtr_llvmAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2E_weak ("llvmAssignmentOperatorUsage.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmAssignmentOperatorUsage_2E_weak GGS_llvmAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmAssignmentOperatorUsage_2E_weak result ;
  const GGS_llvmAssignmentOperatorUsage_2E_weak * p = (const GGS_llvmAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendAssignmentIR'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (GGS_instructionListIR & ioObject,
                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                         GGS_allocaList & ioArgument_ioAllocaList,
                                         const GGS_omnibusType constinArgument_inTargetType,
                                         const GGS_string constinArgument_inTargetLLVMName,
                                         const GGS_objectIR constinArgument_inSourcePossibleReference,
                                         const GGS_location constinArgument_inErrorLocation,
                                         const GGS_bool constinArgument_inTargetIsInitialized,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_key_12629 = function_assignmentOperatorKey (constinArgument_inTargetType, constinArgument_inErrorLocation, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 281)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 281)) ;
  GGS_abstractAssignmentOperatorUsage var_operatorUsage_12770 ;
  constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_12629, var_operatorUsage_12770, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 282)) ;
  GGS_instructionListIR var_instructions_12810 = GGS_instructionListIR::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_generateCode ((cPtr_abstractAssignmentOperatorUsage *) var_operatorUsage_12770.ptr (), ioArgument_ioTemporaries, var_instructions_12810, ioArgument_ioAllocaList, constinArgument_inTargetType, constinArgument_inTargetLLVMName, constinArgument_inSourcePossibleReference, constinArgument_inErrorLocation, constinArgument_inTargetIsInitialized, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 284)) ;
  ioObject.plusAssignOperation(var_instructions_12810, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 294)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentRoutineIR_2E_weak::objectCompare (const GGS_assignmentRoutineIR_2E_weak & inOperand) const {
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

GGS_assignmentRoutineIR_2E_weak::GGS_assignmentRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak & GGS_assignmentRoutineIR_2E_weak::operator = (const GGS_assignmentRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak::GGS_assignmentRoutineIR_2E_weak (const GGS_assignmentRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak GGS_assignmentRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_assignmentRoutineIR result ;
  if (isValid ()) {
    const cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignmentRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR GGS_assignmentRoutineIR_2E_weak::bang_assignmentRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentRoutineIR) ;
      result = GGS_assignmentRoutineIR ((cPtr_assignmentRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignmentRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentRoutineIR_2E_weak ("assignmentRoutineIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentRoutineIR_2E_weak GGS_assignmentRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_assignmentRoutineIR_2E_weak result ;
  const GGS_assignmentRoutineIR_2E_weak * p = (const GGS_assignmentRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleAssignmentCopyRoutineIR_2E_weak::objectCompare (const GGS_simpleAssignmentCopyRoutineIR_2E_weak & inOperand) const {
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

GGS_simpleAssignmentCopyRoutineIR_2E_weak::GGS_simpleAssignmentCopyRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak & GGS_simpleAssignmentCopyRoutineIR_2E_weak::operator = (const GGS_simpleAssignmentCopyRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak::GGS_simpleAssignmentCopyRoutineIR_2E_weak (const GGS_simpleAssignmentCopyRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak GGS_simpleAssignmentCopyRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_simpleAssignmentCopyRoutineIR result ;
  if (isValid ()) {
    const cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_simpleAssignmentCopyRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR GGS_simpleAssignmentCopyRoutineIR_2E_weak::bang_simpleAssignmentCopyRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_simpleAssignmentCopyRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleAssignmentCopyRoutineIR) ;
      result = GGS_simpleAssignmentCopyRoutineIR ((cPtr_simpleAssignmentCopyRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @simpleAssignmentCopyRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2E_weak ("simpleAssignmentCopyRoutineIR.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleAssignmentCopyRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleAssignmentCopyRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleAssignmentCopyRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleAssignmentCopyRoutineIR_2E_weak GGS_simpleAssignmentCopyRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_simpleAssignmentCopyRoutineIR_2E_weak result ;
  const GGS_simpleAssignmentCopyRoutineIR_2E_weak * p = (const GGS_simpleAssignmentCopyRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleAssignmentCopyRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleCopyAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleCopyAssignmentOperatorUsage::objectCompare (const GGS_simpleCopyAssignmentOperatorUsage & inOperand) const {
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

GGS_simpleCopyAssignmentOperatorUsage::GGS_simpleCopyAssignmentOperatorUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_simpleCopyAssignmentOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  object->simpleCopyAssignmentOperatorUsage_init (inCompiler) ;
  const GGS_simpleCopyAssignmentOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::
simpleCopyAssignmentOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage::GGS_simpleCopyAssignmentOperatorUsage (const cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleCopyAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_simpleCopyAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

void cPtr_simpleCopyAssignmentOperatorUsage::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@simpleCopyAssignmentOperatorUsage]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_simpleCopyAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleCopyAssignmentOperatorUsage (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleCopyAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @simpleCopyAssignmentOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ("simpleCopyAssignmentOperatorUsage",
                                                                                      & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleCopyAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleCopyAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleCopyAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  const GGS_simpleCopyAssignmentOperatorUsage * p = (const GGS_simpleCopyAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleCopyAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_simpleCopyAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_simpleCopyAssignmentOperatorUsage_2E_weak & inOperand) const {
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

GGS_simpleCopyAssignmentOperatorUsage_2E_weak::GGS_simpleCopyAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak & GGS_simpleCopyAssignmentOperatorUsage_2E_weak::operator = (const GGS_simpleCopyAssignmentOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak::GGS_simpleCopyAssignmentOperatorUsage_2E_weak (const GGS_simpleCopyAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak GGS_simpleCopyAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_simpleCopyAssignmentOperatorUsage * p = (cPtr_simpleCopyAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_simpleCopyAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage GGS_simpleCopyAssignmentOperatorUsage_2E_weak::bang_simpleCopyAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_simpleCopyAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
      result = GGS_simpleCopyAssignmentOperatorUsage ((cPtr_simpleCopyAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @simpleCopyAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2E_weak ("simpleCopyAssignmentOperatorUsage.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleCopyAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleCopyAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleCopyAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleCopyAssignmentOperatorUsage_2E_weak GGS_simpleCopyAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_simpleCopyAssignmentOperatorUsage_2E_weak result ;
  const GGS_simpleCopyAssignmentOperatorUsage_2E_weak * p = (const GGS_simpleCopyAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleCopyAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @prefixOperatorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap::GGS_prefixOperatorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap::~ GGS_prefixOperatorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap::GGS_prefixOperatorMap (const GGS_prefixOperatorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap & GGS_prefixOperatorMap::operator = (const GGS_prefixOperatorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_prefixOperatorMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_prefixOperatorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_prefixOperatorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_prefixOperatorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_prefixOperatorMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_prefixOperatorMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_prefixOperatorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_prefixOperatorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::performInsert (const GGS_prefixOperatorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_prefixOperatorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element>
GGS_prefixOperatorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_prefixOperatorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element>>
GGS_prefixOperatorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_prefixOperatorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element_3F_ GGS_prefixOperatorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_prefixOperatorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_prefixOperatorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_prefixOperatorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mReceiverType = info->mProperty_mReceiverType ;
      element.mProperty_mResultType = info->mProperty_mResultType ;
      element.mProperty_mOperator = info->mProperty_mOperator ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::class_func_mapWithMapToOverride (const GGS_prefixOperatorMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_prefixOperatorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_omnibusType inArgument0,
                                              GGS_omnibusType inArgument1,
                                              GGS_prefixOperatorUsage inArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_prefixOperatorMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_omnibusType & outArgument0,
                                              GGS_omnibusType & outArgument1,
                                              GGS_prefixOperatorUsage & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' infix operator" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mReceiverType ;
    outArgument1 = info->mProperty_mResultType ;
    outArgument2 = info->mProperty_mOperator ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_prefixOperatorMap::getter_mReceiverTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReceiverType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_prefixOperatorMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> info = infoForKey (key) ;
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

GGS_prefixOperatorUsage GGS_prefixOperatorMap::getter_mOperatorForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorUsage result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOperator ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_setMReceiverTypeForKey (GGS_omnibusType inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_prefixOperatorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReceiverType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_setMResultTypeForKey (GGS_omnibusType inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_prefixOperatorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_prefixOperatorMap::setter_setMOperatorForKey (GGS_prefixOperatorUsage inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_prefixOperatorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOperator = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_prefixOperatorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element>> & inArray,
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
    ioString.appendString ("mReceiverType:") ;
    inArray (i COMMA_HERE)->mProperty_mReceiverType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mResultType:") ;
    inArray (i COMMA_HERE)->mProperty_mResultType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOperator:") ;
    inArray (i COMMA_HERE)->mProperty_mOperator.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_prefixOperatorMap_2E_element>> array = sortedInfoArray () ;
    GGS_prefixOperatorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_prefixOperatorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_prefixOperatorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @prefixOperatorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_prefixOperatorMap::DownEnumerator_prefixOperatorMap (const GGS_prefixOperatorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element DownEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_prefixOperatorMap::current_mReceiverType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReceiverType ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_prefixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage DownEnumerator_prefixOperatorMap::current_mOperator (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOperator ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @prefixOperatorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_prefixOperatorMap::UpEnumerator_prefixOperatorMap (const GGS_prefixOperatorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element UpEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_prefixOperatorMap::current_mReceiverType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReceiverType ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_prefixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage UpEnumerator_prefixOperatorMap::current_mOperator (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOperator ;
}


//--------------------------------------------------------------------------------------------------
//     @prefixOperatorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  const GGS_prefixOperatorMap * p = (const GGS_prefixOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorUsage::objectCompare (const GGS_prefixOperatorUsage & inOperand) const {
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

GGS_prefixOperatorUsage::GGS_prefixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}


void cPtr_prefixOperatorUsage::
prefixOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage::GGS_prefixOperatorUsage (const cPtr_prefixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorUsage::cPtr_prefixOperatorUsage (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ("prefixOperatorUsage",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorUsage result ;
  const GGS_prefixOperatorUsage * p = (const GGS_prefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorUsage_2E_weak::objectCompare (const GGS_prefixOperatorUsage_2E_weak & inOperand) const {
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

GGS_prefixOperatorUsage_2E_weak::GGS_prefixOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak & GGS_prefixOperatorUsage_2E_weak::operator = (const GGS_prefixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak::GGS_prefixOperatorUsage_2E_weak (const GGS_prefixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak GGS_prefixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_prefixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_prefixOperatorUsage * p = (cPtr_prefixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage_2E_weak::bang_prefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorUsage) ;
      result = GGS_prefixOperatorUsage ((cPtr_prefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ("prefixOperatorUsage.weak",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak GGS_prefixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorUsage_2E_weak result ;
  const GGS_prefixOperatorUsage_2E_weak * p = (const GGS_prefixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@prefixOperatorUsage generateCode'
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
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_prefixOperatorUsage) ;
    inObject->method_generateCode (constin_inReceiverOperand, constin_inOperatorLocation, constin_inResultType, constin_inDoNotGeneratePanicCode, constin_inSafeMode, io_ioTemporaries, io_ioInstructionGenerationList, out_outResultValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension proc '@prefixOperatorMap generatePrefixOperatorCode'
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
  GGS_lstring var_key_1676 = function_prefixOperatorMapKey (extensionGetter_type (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas3", 41)), constinArgument_inPrefixOperator, constinArgument_inOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas3", 41)) ;
  GGS_omnibusType var_resultType_1801 ;
  GGS_prefixOperatorUsage var_operatorUsage_1818 ;
  const GGS_prefixOperatorMap temp_0 = inObject ;
  GGS_omnibusType joker_1791_1 ; // Joker input parameter
  temp_0.method_searchKey (var_key_1676, joker_1791_1, var_resultType_1801, var_operatorUsage_1818, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas3", 42)) ;
  callExtensionMethod_generateCode ((cPtr_prefixOperatorUsage *) var_operatorUsage_1818.ptr (), constinArgument_inReceiverOperand, constinArgument_inOperatorLocation, var_resultType_1801, constinArgument_inDoNotGeneratePanicCode, constinArgument_inSafeMode, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas3", 43)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (GGS_instructionListIR & ioObject,
                                                    const GGS_string constinArgument_inString,
                                                    const GGS_stringset constinArgument_inInvokedFunctionSet,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_freeStringIR::init_21__21_ (constinArgument_inString, constinArgument_inInvokedFunctionSet, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-free-string.galgas3", 4)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeStringIR_2E_weak::objectCompare (const GGS_freeStringIR_2E_weak & inOperand) const {
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

GGS_freeStringIR_2E_weak::GGS_freeStringIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR_2E_weak & GGS_freeStringIR_2E_weak::operator = (const GGS_freeStringIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
    s.appendCString ("proc @controlRegisterAssignmentOperatorKind.assignmentWithOperator invoked with an invalid enum value") ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_instructionAST::cPtr_instructionAST (const GGS_location & in_mInstructionLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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

GGS_instructionAST_2E_weak::GGS_instructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionAST_2E_weak & GGS_instructionAST_2E_weak::operator = (const GGS_instructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_llvmInfixOperatorAST_2E_weak::objectCompare (const GGS_llvmInfixOperatorAST_2E_weak & inOperand) const {
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

GGS_llvmInfixOperatorAST_2E_weak::GGS_llvmInfixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST_2E_weak & GGS_llvmInfixOperatorAST_2E_weak::operator = (const GGS_llvmInfixOperatorAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @omnibusInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusInfixOperatorUsage::objectCompare (const GGS_omnibusInfixOperatorUsage & inOperand) const {
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

GGS_omnibusInfixOperatorUsage::GGS_omnibusInfixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}


void cPtr_omnibusInfixOperatorUsage::
omnibusInfixOperatorUsage_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage::GGS_omnibusInfixOperatorUsage (const cPtr_omnibusInfixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorUsage::cPtr_omnibusInfixOperatorUsage (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @omnibusInfixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ("omnibusInfixOperatorUsage",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_omnibusInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperatorUsage result ;
  const GGS_omnibusInfixOperatorUsage * p = (const GGS_omnibusInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusInfixOperatorUsage_2E_weak::objectCompare (const GGS_omnibusInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_omnibusInfixOperatorUsage_2E_weak::GGS_omnibusInfixOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak & GGS_omnibusInfixOperatorUsage_2E_weak::operator = (const GGS_omnibusInfixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak::GGS_omnibusInfixOperatorUsage_2E_weak (const GGS_omnibusInfixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak GGS_omnibusInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_omnibusInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_omnibusInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_omnibusInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_omnibusInfixOperatorUsage * p = (cPtr_omnibusInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_omnibusInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_omnibusInfixOperatorUsage_2E_weak::bang_omnibusInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusInfixOperatorUsage) ;
      result = GGS_omnibusInfixOperatorUsage ((cPtr_omnibusInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ("omnibusInfixOperatorUsage.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak GGS_omnibusInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_omnibusInfixOperatorUsage_2E_weak result ;
  const GGS_omnibusInfixOperatorUsage_2E_weak * p = (const GGS_omnibusInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInlineInfixOperatorUsage_2E_weak::objectCompare (const GGS_llvmInlineInfixOperatorUsage_2E_weak & inOperand) const {
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

GGS_llvmInlineInfixOperatorUsage_2E_weak::GGS_llvmInlineInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage_2E_weak & GGS_llvmInlineInfixOperatorUsage_2E_weak::operator = (const GGS_llvmInlineInfixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_infixOperatorRoutineIR_2E_weak::GGS_infixOperatorRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR_2E_weak & GGS_infixOperatorRoutineIR_2E_weak::operator = (const GGS_infixOperatorRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//Extension proc '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (GGS_instructionListIR & ioObject,
                                   const GGS_objectIR constinArgument_inResult,
                                   const GGS_objectIR constinArgument_inSource,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_extendIR::init_21__21_ (constinArgument_inResult, constinArgument_inSource, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-extend.galgas3", 6)) ;
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

AbstractPtrClass * cPtr_extendIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_extendIR_2E_weak::GGS_extendIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendIR_2E_weak & GGS_extendIR_2E_weak::operator = (const GGS_extendIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//Extension proc '@instructionListIR appendLogicalShiftRight'
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
    test_0 = ioArgument_ioResult.getter_isLiteralInteger (SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 7)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_omnibusType var_type_255 ;
      GGS_bigint var_value_280 ;
      ioArgument_ioResult.method_extractLiteralInteger (var_type_255, var_value_280, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 8)) ;
      ioArgument_ioResult = GGS_objectIR::class_func_literalInteger (var_type_255, var_value_280.right_shift_operation (constinArgument_inShiftAmount, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 9))  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 9)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 11)) ;
    }
    GGS_objectIR var_source_442 = ioArgument_ioResult ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_source_442, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 13)), ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 13)) ;
    }
    ioObject.addAssignOperation (GGS_logicalRightShiftIR::init_21__21__21_ (ioArgument_ioResult, var_source_442, constinArgument_inShiftAmount, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas3", 14)) ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logicalRightShiftIR_2E_weak::objectCompare (const GGS_logicalRightShiftIR_2E_weak & inOperand) const {
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

GGS_logicalRightShiftIR_2E_weak::GGS_logicalRightShiftIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR_2E_weak & GGS_logicalRightShiftIR_2E_weak::operator = (const GGS_logicalRightShiftIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_whileInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_whileInstructionAST_2E_weak::GGS_whileInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionAST_2E_weak & GGS_whileInstructionAST_2E_weak::operator = (const GGS_whileInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_whileInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_whileInstructionIR_2E_weak::GGS_whileInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_whileInstructionIR_2E_weak & GGS_whileInstructionIR_2E_weak::operator = (const GGS_whileInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@structurePropertyListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_structurePropertyListAST : public CollectionElementPtr {
  public: GGS_structurePropertyListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_structurePropertyListAST (const GGS_lstring & in_mPropertyName,
                                                         const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                         const GGS_propertyVisibility & in_mVisibility,
                                                         const GGS_lstring & in_mPropertyTypeName,
                                                         const GGS_propertyKindAST & in_mPropertyKind
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_structurePropertyListAST (const GGS_structurePropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_structurePropertyListAST::CollectionElementPtr_structurePropertyListAST (const GGS_lstring & in_mPropertyName,
                                                                                              const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                              const GGS_propertyVisibility & in_mVisibility,
                                                                                              const GGS_lstring & in_mPropertyTypeName,
                                                                                              const GGS_propertyKindAST & in_mPropertyKind
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_structurePropertyListAST::CollectionElementPtr_structurePropertyListAST (const GGS_structurePropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mVisibility, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyKind) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_structurePropertyListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_structurePropertyListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mVisibility, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @structurePropertyListAST
//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST::GGS_structurePropertyListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST::GGS_structurePropertyListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_structurePropertyListAST * p = (CollectionElementPtr_structurePropertyListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_structurePropertyListAST) ;
    const GGS_structurePropertyListAST_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyAttributeList, p->mObject.mProperty_mVisibility, p->mObject.mProperty_mPropertyTypeName, p->mObject.mProperty_mPropertyKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_lstring & in_mPropertyName,
                                                              const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                              const GGS_propertyVisibility & in_mVisibility,
                                                              const GGS_lstring & in_mPropertyTypeName,
                                                              const GGS_propertyKindAST & in_mPropertyKind
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_structurePropertyListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_structurePropertyListAST (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind COMMA_THERE)) ;
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

ComparisonResult GGS_syncDeclarationAST_2E_weak::objectCompare (const GGS_syncDeclarationAST_2E_weak & inOperand) const {
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

GGS_syncDeclarationAST_2E_weak::GGS_syncDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST_2E_weak & GGS_syncDeclarationAST_2E_weak::operator = (const GGS_syncDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum subscript
//--------------------------------------------------------------------------------------------------

GGS_subscript::GGS_subscript (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::class_func_noSubscript (UNUSED_LOCATION_ARGS) {
  GGS_subscript result ;
  result.mEnum = Enumeration::enum_noSubscript ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::class_func_staticSubscript (const GGS_omnibusType & inAssociatedValue0,
                                                         const GGS_bigint & inAssociatedValue1
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscript result ;
  result.mEnum = Enumeration::enum_staticSubscript ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_subscript_2E_staticSubscript (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::class_func_literalString (UNUSED_LOCATION_ARGS) {
  GGS_subscript result ;
  result.mEnum = Enumeration::enum_literalString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript::method_extractStaticSubscript (GGS_omnibusType & outAssociatedValue_elementType,
                                                   GGS_bigint & outAssociatedValue_size,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_staticSubscript) {
    outAssociatedValue_elementType.drop () ;
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("proc @subscript.staticSubscript invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_subscript_2E_staticSubscript *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_subscript_2E_staticSubscript_3F_ GGS_subscript::getter_getStaticSubscript (UNUSED_LOCATION_ARGS) const {
  GGS_subscript_2E_staticSubscript_3F_ result ;
  if (mEnum == Enumeration::enum_staticSubscript) {
    const auto ptr = (const GGS_subscript_2E_staticSubscript *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_subscript_2E_staticSubscript (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript::getAssociatedValuesFor_staticSubscript (GGS_omnibusType & out_elementType,
                                                            GGS_bigint & out_size) const {
  const auto ptr = (const GGS_subscript_2E_staticSubscript *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
  out_size = ptr->mProperty_size ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_subscript [4] = {
  "(not built)",
  "noSubscript",
  "staticSubscript",
  "literalString"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscript::getter_isNoSubscript (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noSubscript == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscript::getter_isStaticSubscript (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_staticSubscript == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscript::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscript::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @subscript: ") ;
  ioString.appendCString (gEnumNameArrayFor_subscript [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @subscript generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscript ("subscript",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscript::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscript ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscript::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscript (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscript GGS_subscript::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_subscript result ;
  const GGS_subscript * p = (const GGS_subscript *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscript *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscript", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes::GGS_omnibusTypeAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes::GGS_omnibusTypeAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_omnibusTypeAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::class_func_instanciable (UNUSED_LOCATION_ARGS) {
  return GGS_omnibusTypeAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::class_func_copyable (UNUSED_LOCATION_ARGS) {
  return GGS_omnibusTypeAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_omnibusTypeAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_omnibusTypeAttributes::getter_contains (const GGS_omnibusTypeAttributes & inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::andAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                    class Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::orAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                   class Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::xorAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                    class Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::minusAssignOperation (const GGS_omnibusTypeAttributes inOperand,
                                                      class Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_or (const GGS_omnibusTypeAttributes & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_and (const GGS_omnibusTypeAttributes & inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_xor (const GGS_omnibusTypeAttributes & inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::substract_operation (const GGS_omnibusTypeAttributes & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_omnibusTypeAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_omnibusTypeAttributes result ;
  if (mIsValid) {
    result = GGS_omnibusTypeAttributes (uint64_t (0x3) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @omnibusTypeAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" instanciable") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" copyable") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusTypeAttributes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ("omnibusTypeAttributes",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusTypeAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusTypeAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusTypeAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusTypeAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusTypeAttributes GGS_omnibusTypeAttributes::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_omnibusTypeAttributes result ;
  const GGS_omnibusTypeAttributes * p = (const GGS_omnibusTypeAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusTypeAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusTypeAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum typeKind
//--------------------------------------------------------------------------------------------------

GGS_typeKind::GGS_typeKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_void (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_void ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_boolean (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_boolean ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_literalString (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_literalString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_enumeration (const GGS_uint & inAssociatedValue0
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_enumeration ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_enumeration (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_structure (const GGS_propertyList & inAssociatedValue0
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_structure ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_structure (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_syncTool (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_syncTool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_integer (const GGS_bigint & inAssociatedValue0,
                                               const GGS_bigint & inAssociatedValue1,
                                               const GGS_bool & inAssociatedValue2,
                                               const GGS_uint & inAssociatedValue3
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_integer ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_integer (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_compileTimeInteger (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_compileTimeInteger ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_compileTimeBool (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_compileTimeBool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_llvmType (const GGS_bigint & inAssociatedValue0
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_llvmType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_llvmType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_generic (const GGS_genericFormalParameterList & inAssociatedValue0,
                                               const GGS_ctExpressionAST & inAssociatedValue1,
                                               const GGS_llvmStringDefinition & inAssociatedValue2
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_generic ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_generic (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_opaque (const GGS_bigint & inAssociatedValue0
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_opaque ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_opaque (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_staticArrayType (const GGS_omnibusType & inAssociatedValue0,
                                                       const GGS_bigint & inAssociatedValue1
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_staticArrayType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_staticArrayType (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dynamicArrayType (const GGS_omnibusType & inAssociatedValue0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dynamicArrayType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_dynamicArrayType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_function (const GGS_mode & inAssociatedValue0,
                                                const GGS_routineTypedSignature & inAssociatedValue1,
                                                const GGS_unifiedTypeMapEntry & inAssociatedValue2
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_function ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEnumeration (GGS_uint & outAssociatedValue_bitCount,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumeration) {
    outAssociatedValue_bitCount.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.enumeration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_bitCount = ptr->mProperty_bitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractStructure (GGS_propertyList & outAssociatedValue_propertyList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_structure) {
    outAssociatedValue_propertyList.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.structure invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyList = ptr->mProperty_propertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractInteger (GGS_bigint & outAssociatedValue_min,
                                          GGS_bigint & outAssociatedValue_max,
                                          GGS_bool & outAssociatedValue_unsigned,
                                          GGS_uint & outAssociatedValue_bitCount,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_integer) {
    outAssociatedValue_min.drop () ;
    outAssociatedValue_max.drop () ;
    outAssociatedValue_unsigned.drop () ;
    outAssociatedValue_bitCount.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.integer invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_min = ptr->mProperty_min ;
    outAssociatedValue_max = ptr->mProperty_max ;
    outAssociatedValue_unsigned = ptr->mProperty_unsigned ;
    outAssociatedValue_bitCount = ptr->mProperty_bitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractLlvmType (GGS_bigint & outAssociatedValue_bitSize,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmType) {
    outAssociatedValue_bitSize.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.llvmType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_bitSize = ptr->mProperty_bitSize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractGeneric (GGS_genericFormalParameterList & outAssociatedValue_parameters,
                                          GGS_ctExpressionAST & outAssociatedValue_whereClause,
                                          GGS_llvmStringDefinition & outAssociatedValue_llvmNativeTypeNameExpression,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_generic) {
    outAssociatedValue_parameters.drop () ;
    outAssociatedValue_whereClause.drop () ;
    outAssociatedValue_llvmNativeTypeNameExpression.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.generic invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_parameters = ptr->mProperty_parameters ;
    outAssociatedValue_whereClause = ptr->mProperty_whereClause ;
    outAssociatedValue_llvmNativeTypeNameExpression = ptr->mProperty_llvmNativeTypeNameExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractOpaque (GGS_bigint & outAssociatedValue_bitCount,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_opaque) {
    outAssociatedValue_bitCount.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.opaque invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_bitCount = ptr->mProperty_bitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractStaticArrayType (GGS_omnibusType & outAssociatedValue_elementType,
                                                  GGS_bigint & outAssociatedValue_size,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_staticArrayType) {
    outAssociatedValue_elementType.drop () ;
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.staticArrayType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractDynamicArrayType (GGS_omnibusType & outAssociatedValue_elementType,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_dynamicArrayType) {
    outAssociatedValue_elementType.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.dynamicArrayType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractFunction (GGS_mode & outAssociatedValue_mode,
                                           GGS_routineTypedSignature & outAssociatedValue_signature,
                                           GGS_unifiedTypeMapEntry & outAssociatedValue_returnTypeProxy,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_function) {
    outAssociatedValue_mode.drop () ;
    outAssociatedValue_signature.drop () ;
    outAssociatedValue_returnTypeProxy.drop () ;
    String s ;
    s.appendCString ("proc @typeKind.function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_mode = ptr->mProperty_mode ;
    outAssociatedValue_signature = ptr->mProperty_signature ;
    outAssociatedValue_returnTypeProxy = ptr->mProperty_returnTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumeration_3F_ GGS_typeKind::getter_getEnumeration (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_enumeration_3F_ result ;
  if (mEnum == Enumeration::enum_enumeration) {
    const auto ptr = (const GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_enumeration (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_enumeration (GGS_uint & out_bitCount) const {
  const auto ptr = (const GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
  out_bitCount = ptr->mProperty_bitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_structure_3F_ GGS_typeKind::getter_getStructure (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_structure_3F_ result ;
  if (mEnum == Enumeration::enum_structure) {
    const auto ptr = (const GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_structure (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_structure (GGS_propertyList & out_propertyList) const {
  const auto ptr = (const GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyList = ptr->mProperty_propertyList ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_integer_3F_ GGS_typeKind::getter_getInteger (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_integer_3F_ result ;
  if (mEnum == Enumeration::enum_integer) {
    const auto ptr = (const GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_integer (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_integer (GGS_bigint & out_min,
                                                   GGS_bigint & out_max,
                                                   GGS_bool & out_unsigned,
                                                   GGS_uint & out_bitCount) const {
  const auto ptr = (const GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
  out_min = ptr->mProperty_min ;
  out_max = ptr->mProperty_max ;
  out_unsigned = ptr->mProperty_unsigned ;
  out_bitCount = ptr->mProperty_bitCount ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_llvmType_3F_ GGS_typeKind::getter_getLlvmType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_llvmType_3F_ result ;
  if (mEnum == Enumeration::enum_llvmType) {
    const auto ptr = (const GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_llvmType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_llvmType (GGS_bigint & out_bitSize) const {
  const auto ptr = (const GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
  out_bitSize = ptr->mProperty_bitSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_generic_3F_ GGS_typeKind::getter_getGeneric (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_generic_3F_ result ;
  if (mEnum == Enumeration::enum_generic) {
    const auto ptr = (const GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_generic (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_generic (GGS_genericFormalParameterList & out_parameters,
                                                   GGS_ctExpressionAST & out_whereClause,
                                                   GGS_llvmStringDefinition & out_llvmNativeTypeNameExpression) const {
  const auto ptr = (const GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
  out_parameters = ptr->mProperty_parameters ;
  out_whereClause = ptr->mProperty_whereClause ;
  out_llvmNativeTypeNameExpression = ptr->mProperty_llvmNativeTypeNameExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_opaque_3F_ GGS_typeKind::getter_getOpaque (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_opaque_3F_ result ;
  if (mEnum == Enumeration::enum_opaque) {
    const auto ptr = (const GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_opaque (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_opaque (GGS_bigint & out_bitCount) const {
  const auto ptr = (const GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
  out_bitCount = ptr->mProperty_bitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_staticArrayType_3F_ GGS_typeKind::getter_getStaticArrayType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_staticArrayType_3F_ result ;
  if (mEnum == Enumeration::enum_staticArrayType) {
    const auto ptr = (const GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_staticArrayType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_staticArrayType (GGS_omnibusType & out_elementType,
                                                           GGS_bigint & out_size) const {
  const auto ptr = (const GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
  out_size = ptr->mProperty_size ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_dynamicArrayType_3F_ GGS_typeKind::getter_getDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_dynamicArrayType_3F_ result ;
  if (mEnum == Enumeration::enum_dynamicArrayType) {
    const auto ptr = (const GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_dynamicArrayType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_dynamicArrayType (GGS_omnibusType & out_elementType) const {
  const auto ptr = (const GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_function_3F_ GGS_typeKind::getter_getFunction (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_function_3F_ result ;
  if (mEnum == Enumeration::enum_function) {
    const auto ptr = (const GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_function (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_function (GGS_mode & out_mode,
                                                    GGS_routineTypedSignature & out_signature,
                                                    GGS_unifiedTypeMapEntry & out_returnTypeProxy) const {
  const auto ptr = (const GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
  out_mode = ptr->mProperty_mode ;
  out_signature = ptr->mProperty_signature ;
  out_returnTypeProxy = ptr->mProperty_returnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKind [16] = {
  "(not built)",
  "void",
  "boolean",
  "literalString",
  "enumeration",
  "structure",
  "syncTool",
  "integer",
  "compileTimeInteger",
  "compileTimeBool",
  "llvmType",
  "generic",
  "opaque",
  "staticArrayType",
  "dynamicArrayType",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_void == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolean == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumeration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_structure == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isSyncTool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_syncTool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_integer == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isCompileTimeInteger (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_compileTimeInteger == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isCompileTimeBool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_compileTimeBool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isLlvmType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isGeneric (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_generic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_opaque == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStaticArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_staticArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dynamicArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind::objectCompare (const GGS_typeKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_enumeration: {
        const auto left = (GGS_typeKind_2E_enumeration *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_enumeration *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_structure: {
        const auto left = (GGS_typeKind_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_structure *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_integer: {
        const auto left = (GGS_typeKind_2E_integer *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_integer *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_llvmType: {
        const auto left = (GGS_typeKind_2E_llvmType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_llvmType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_generic: {
        const auto left = (GGS_typeKind_2E_generic *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_generic *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_opaque: {
        const auto left = (GGS_typeKind_2E_opaque *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_opaque *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_staticArrayType: {
        const auto left = (GGS_typeKind_2E_staticArrayType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_staticArrayType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_dynamicArrayType: {
        const auto left = (GGS_typeKind_2E_dynamicArrayType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_dynamicArrayType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_function: {
        const auto left = (GGS_typeKind_2E_function *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_function *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @typeKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind result ;
  const GGS_typeKind * p = (const GGS_typeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_omnibusType_2E_weak::objectCompare (const GGS_omnibusType_2E_weak & inOperand) const {
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

GGS_omnibusType_2E_weak::GGS_omnibusType_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak & GGS_omnibusType_2E_weak::operator = (const GGS_omnibusType & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak::GGS_omnibusType_2E_weak (const GGS_omnibusType & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak GGS_omnibusType_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_omnibusType_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType_2E_weak::unwrappedValue (void) const {
  GGS_omnibusType result ;
  if (isValid ()) {
    const cPtr_omnibusType * p = (cPtr_omnibusType *) ptr () ;
    if (nullptr != p) {
      result = GGS_omnibusType (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType_2E_weak::bang_omnibusType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusType) ;
      result = GGS_omnibusType ((cPtr_omnibusType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @omnibusType.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusType_2E_weak ("omnibusType.weak",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_omnibusType_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_omnibusType_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_omnibusType_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak GGS_omnibusType_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_omnibusType_2E_weak result ;
  const GGS_omnibusType_2E_weak * p = (const GGS_omnibusType_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_omnibusType_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@arcAssignmentList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_arcAssignmentList : public CollectionElementPtr {
  public: GGS_arcAssignmentList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                  const GGS_omnibusType & in_mPropertyType,
                                                  const GGS_uintlist & in_mPropertyIndexPath
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_arcAssignmentList::CollectionElementPtr_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                                                const GGS_omnibusType & in_mPropertyType,
                                                                                const GGS_uintlist & in_mPropertyIndexPath
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_arcAssignmentList::CollectionElementPtr_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType, inElement.mProperty_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_arcAssignmentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_arcAssignmentList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_arcAssignmentList (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType, mObject.mProperty_mPropertyIndexPath COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @arcAssignmentList
//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_arcAssignmentList * p = (CollectionElementPtr_arcAssignmentList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_arcAssignmentList) ;
    const GGS_arcAssignmentList_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyType, p->mObject.mProperty_mPropertyIndexPath) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_string & in_mPropertyName,
                                                       const GGS_omnibusType & in_mPropertyType,
                                                       const GGS_uintlist & in_mPropertyIndexPath
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_arcAssignmentList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_arcAssignmentList (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_arcAssignmentList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_arcAssignmentList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::description (String & ioString,
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
      ioString.appendString ("mPropertyType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyIndexPath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyIndexPath.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::plusPlusAssignOperation (const GGS_arcAssignmentList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                       const GGS_omnibusType & inOperand1,
                                                                       const GGS_uintlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_arcAssignmentList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::addAssignOperation (const GGS_string & inOperand0,
                                                const GGS_omnibusType & inOperand1,
                                                const GGS_uintlist & inOperand2
                                                COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_append (const GGS_string inOperand0,
                                           const GGS_omnibusType inOperand1,
                                           const GGS_uintlist inOperand2,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_insertAtIndex (const GGS_string inOperand0,
                                                  const GGS_omnibusType inOperand1,
                                                  const GGS_uintlist inOperand2,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_arcAssignmentList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_arcAssignmentList::setter_removeAtIndex (GGS_string & outOperand0,
                                                  GGS_omnibusType & outOperand1,
                                                  GGS_uintlist & outOperand2,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPropertyType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mPropertyIndexPath ;
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

void GGS_arcAssignmentList::setter_popFirst (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_uintlist & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mPropertyIndexPath ;
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

void GGS_arcAssignmentList::setter_popLast (GGS_string & outOperand0,
                                            GGS_omnibusType & outOperand1,
                                            GGS_uintlist & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mPropertyIndexPath ;
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

void GGS_arcAssignmentList::method_first (GGS_string & outOperand0,
                                          GGS_omnibusType & outOperand1,
                                          GGS_uintlist & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mPropertyIndexPath ;
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

void GGS_arcAssignmentList::method_last (GGS_string & outOperand0,
                                         GGS_omnibusType & outOperand1,
                                         GGS_uintlist & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mPropertyIndexPath ;
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

GGS_arcAssignmentList GGS_arcAssignmentList::add_operation (const GGS_arcAssignmentList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
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

GGS_arcAssignmentList GGS_arcAssignmentList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
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

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::plusAssignOperation (const GGS_arcAssignmentList inList,
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

void GGS_arcAssignmentList::setter_setMPropertyNameAtIndex (GGS_string inOperand,
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

GGS_string GGS_arcAssignmentList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
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

void GGS_arcAssignmentList::setter_setMPropertyTypeAtIndex (GGS_omnibusType inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyType = inOperand ;
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

GGS_omnibusType GGS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyType ;
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

void GGS_arcAssignmentList::setter_setMPropertyIndexPathAtIndex (GGS_uintlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyIndexPath = inOperand ;
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

GGS_uintlist GGS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyIndexPath ;
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
// Down Enumerator for @arcAssignmentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_arcAssignmentList::DownEnumerator_arcAssignmentList (const GGS_arcAssignmentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element DownEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyIndexPath ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @arcAssignmentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_arcAssignmentList::UpEnumerator_arcAssignmentList (const GGS_arcAssignmentList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element UpEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyIndexPath ;
}




//--------------------------------------------------------------------------------------------------
//     @arcAssignmentList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arcAssignmentList ("arcAssignmentList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arcAssignmentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arcAssignmentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arcAssignmentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  const GGS_arcAssignmentList * p = (const GGS_arcAssignmentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arcAssignmentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

