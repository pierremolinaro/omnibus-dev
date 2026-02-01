#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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
//Class for element of '@structurePropertyListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public: GGS_structurePropertyListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_structurePropertyListAST (const GGS_lstring & in_mPropertyName,
                                                       const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                       const GGS_propertyVisibility & in_mVisibility,
                                                       const GGS_lstring & in_mPropertyTypeName,
                                                       const GGS_propertyKindAST & in_mPropertyKind
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_structurePropertyListAST (const GGS_structurePropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GGS_lstring & in_mPropertyName,
                                                                                          const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                          const GGS_propertyVisibility & in_mVisibility,
                                                                                          const GGS_lstring & in_mPropertyTypeName,
                                                                                          const GGS_propertyKindAST & in_mPropertyKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GGS_structurePropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mVisibility, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mVisibility, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @structurePropertyListAST
//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST::GGS_structurePropertyListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST::GGS_structurePropertyListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    const GGS_structurePropertyListAST_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyAttributeList, p->mObject.mProperty_mVisibility, p->mObject.mProperty_mPropertyTypeName, p->mObject.mProperty_mPropertyKind) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mPropertyName,
                                                              const GGS_propertyAttributeList & in_mPropertyAttributeList,
                                                              const GGS_propertyVisibility & in_mVisibility,
                                                              const GGS_lstring & in_mPropertyTypeName,
                                                              const GGS_propertyKindAST & in_mPropertyKind
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind COMMA_THERE)) ;
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

ComparisonResult GGS_abstractDeclarationAST_2E_weak::objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const {
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

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak & GGS_abstractDeclarationAST_2E_weak::operator = (const GGS_abstractDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@taskListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_taskListAST : public cCollectionElement {
  public: GGS_taskListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_taskListAST (const GGS_lstring & in_mTaskName,
                                          const GGS_lstringlist & in_mLowerPriorityTaskList,
                                          const GGS_lbigint & in_mStackSize,
                                          const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                          const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                          const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                          const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                          const GGS_location & in_mEndOfTaskDeclaration,
                                          const GGS_bool & in_mAutoStart
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskListAST (const GGS_taskListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GGS_lstring & in_mTaskName,
                                                                const GGS_lstringlist & in_mLowerPriorityTaskList,
                                                                const GGS_lbigint & in_mStackSize,
                                                                const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                const GGS_location & in_mEndOfTaskDeclaration,
                                                                const GGS_bool & in_mAutoStart
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GGS_taskListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mLowerPriorityTaskList, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mGuardedCommandList, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_taskListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_taskListAST (mObject.mProperty_mTaskName, mObject.mProperty_mLowerPriorityTaskList, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @taskListAST
//--------------------------------------------------------------------------------------------------

GGS_taskListAST::GGS_taskListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST::GGS_taskListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    const GGS_taskListAST_2E_element element (p->mObject.mProperty_mTaskName, p->mObject.mProperty_mLowerPriorityTaskList, p->mObject.mProperty_mStackSize, p->mObject.mProperty_mTaskSetupListAST, p->mObject.mProperty_mTaskActivateListAST, p->mObject.mProperty_mTaskDeactivateListAST, p->mObject.mProperty_mGuardedCommandList, p->mObject.mProperty_mEndOfTaskDeclaration, p->mObject.mProperty_mAutoStart) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GGS_lstring & in_mTaskName,
                                                 const GGS_lstringlist & in_mLowerPriorityTaskList,
                                                 const GGS_lbigint & in_mStackSize,
                                                 const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                 const GGS_location & in_mEndOfTaskDeclaration,
                                                 const GGS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskListAST (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_taskListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::description (String & ioString,
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
      ioString.appendString ("mTaskName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLowerPriorityTaskList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLowerPriorityTaskList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStackSize:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStackSize.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskSetupListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskSetupListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskActivateListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskActivateListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskDeactivateListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskDeactivateListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGuardedCommandList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGuardedCommandList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfTaskDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAutoStart:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAutoStart.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::plusPlusAssignOperation (const GGS_taskListAST_2E_element & inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                           const GGS_lstringlist & inOperand1,
                                                           const GGS_lbigint & inOperand2,
                                                           const GGS_taskSetupListAST & inOperand3,
                                                           const GGS_taskSetupListAST & inOperand4,
                                                           const GGS_taskSetupListAST & inOperand5,
                                                           const GGS_syncInstructionBranchListAST & inOperand6,
                                                           const GGS_location & inOperand7,
                                                           const GGS_bool & inOperand8
                                                           COMMA_LOCATION_ARGS) {
  const GGS_taskListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  GGS_taskListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                          const GGS_lstringlist & inOperand1,
                                          const GGS_lbigint & inOperand2,
                                          const GGS_taskSetupListAST & inOperand3,
                                          const GGS_taskSetupListAST & inOperand4,
                                          const GGS_taskSetupListAST & inOperand5,
                                          const GGS_syncInstructionBranchListAST & inOperand6,
                                          const GGS_location & inOperand7,
                                          const GGS_bool & inOperand8
                                          COMMA_LOCATION_ARGS) {
  const GGS_taskListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_append (const GGS_lstring inOperand0,
                                     const GGS_lstringlist inOperand1,
                                     const GGS_lbigint inOperand2,
                                     const GGS_taskSetupListAST inOperand3,
                                     const GGS_taskSetupListAST inOperand4,
                                     const GGS_taskSetupListAST inOperand5,
                                     const GGS_syncInstructionBranchListAST inOperand6,
                                     const GGS_location inOperand7,
                                     const GGS_bool inOperand8,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  const GGS_taskListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                            const GGS_lstringlist inOperand1,
                                            const GGS_lbigint inOperand2,
                                            const GGS_taskSetupListAST inOperand3,
                                            const GGS_taskSetupListAST inOperand4,
                                            const GGS_taskSetupListAST inOperand5,
                                            const GGS_syncInstructionBranchListAST inOperand6,
                                            const GGS_location inOperand7,
                                            const GGS_bool inOperand8,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_taskListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
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

void GGS_taskListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                            GGS_lstringlist & outOperand1,
                                            GGS_lbigint & outOperand2,
                                            GGS_taskSetupListAST & outOperand3,
                                            GGS_taskSetupListAST & outOperand4,
                                            GGS_taskSetupListAST & outOperand5,
                                            GGS_syncInstructionBranchListAST & outOperand6,
                                            GGS_location & outOperand7,
                                            GGS_bool & outOperand8,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLowerPriorityTaskList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mStackSize ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTaskSetupListAST ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mTaskActivateListAST ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mTaskDeactivateListAST ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mGuardedCommandList ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_popFirst (GGS_lstring & outOperand0,
                                       GGS_lstringlist & outOperand1,
                                       GGS_lbigint & outOperand2,
                                       GGS_taskSetupListAST & outOperand3,
                                       GGS_taskSetupListAST & outOperand4,
                                       GGS_taskSetupListAST & outOperand5,
                                       GGS_syncInstructionBranchListAST & outOperand6,
                                       GGS_location & outOperand7,
                                       GGS_bool & outOperand8,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLowerPriorityTaskList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mStackSize ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTaskSetupListAST ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTaskActivateListAST ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mTaskDeactivateListAST ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mGuardedCommandList ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_popLast (GGS_lstring & outOperand0,
                                      GGS_lstringlist & outOperand1,
                                      GGS_lbigint & outOperand2,
                                      GGS_taskSetupListAST & outOperand3,
                                      GGS_taskSetupListAST & outOperand4,
                                      GGS_taskSetupListAST & outOperand5,
                                      GGS_syncInstructionBranchListAST & outOperand6,
                                      GGS_location & outOperand7,
                                      GGS_bool & outOperand8,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLowerPriorityTaskList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTaskSetupListAST ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTaskActivateListAST ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mTaskDeactivateListAST ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mGuardedCommandList ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::method_first (GGS_lstring & outOperand0,
                                    GGS_lstringlist & outOperand1,
                                    GGS_lbigint & outOperand2,
                                    GGS_taskSetupListAST & outOperand3,
                                    GGS_taskSetupListAST & outOperand4,
                                    GGS_taskSetupListAST & outOperand5,
                                    GGS_syncInstructionBranchListAST & outOperand6,
                                    GGS_location & outOperand7,
                                    GGS_bool & outOperand8,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLowerPriorityTaskList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mStackSize ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTaskSetupListAST ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTaskActivateListAST ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mTaskDeactivateListAST ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mGuardedCommandList ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::method_last (GGS_lstring & outOperand0,
                                   GGS_lstringlist & outOperand1,
                                   GGS_lbigint & outOperand2,
                                   GGS_taskSetupListAST & outOperand3,
                                   GGS_taskSetupListAST & outOperand4,
                                   GGS_taskSetupListAST & outOperand5,
                                   GGS_syncInstructionBranchListAST & outOperand6,
                                   GGS_location & outOperand7,
                                   GGS_bool & outOperand8,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLowerPriorityTaskList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTaskSetupListAST ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTaskActivateListAST ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mTaskDeactivateListAST ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mGuardedCommandList ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::add_operation (const GGS_taskListAST & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskListAST result ;
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

GGS_taskListAST GGS_taskListAST::subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result ;
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

GGS_taskListAST GGS_taskListAST::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::plusAssignOperation (const GGS_taskListAST inList,
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

void GGS_taskListAST::setter_setMTaskNameAtIndex (GGS_lstring inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName = inOperand ;
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
  
GGS_lstring GGS_taskListAST::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName ;
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

void GGS_taskListAST::setter_setMLowerPriorityTaskListAtIndex (GGS_lstringlist inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLowerPriorityTaskList = inOperand ;
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
  
GGS_lstringlist GGS_taskListAST::getter_mLowerPriorityTaskListAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLowerPriorityTaskList ;
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

void GGS_taskListAST::setter_setMStackSizeAtIndex (GGS_lbigint inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStackSize = inOperand ;
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
  
GGS_lbigint GGS_taskListAST::getter_mStackSizeAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lbigint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStackSize ;
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

void GGS_taskListAST::setter_setMTaskSetupListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskSetupListAST = inOperand ;
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
  
GGS_taskSetupListAST GGS_taskListAST::getter_mTaskSetupListASTAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskSetupListAST ;
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

void GGS_taskListAST::setter_setMTaskActivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskActivateListAST = inOperand ;
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
  
GGS_taskSetupListAST GGS_taskListAST::getter_mTaskActivateListASTAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskActivateListAST ;
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

void GGS_taskListAST::setter_setMTaskDeactivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskDeactivateListAST = inOperand ;
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
  
GGS_taskSetupListAST GGS_taskListAST::getter_mTaskDeactivateListASTAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskDeactivateListAST ;
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

void GGS_taskListAST::setter_setMGuardedCommandListAtIndex (GGS_syncInstructionBranchListAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGuardedCommandList = inOperand ;
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
  
GGS_syncInstructionBranchListAST GGS_taskListAST::getter_mGuardedCommandListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGuardedCommandList ;
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

void GGS_taskListAST::setter_setMEndOfTaskDeclarationAtIndex (GGS_location inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfTaskDeclaration = inOperand ;
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
  
GGS_location GGS_taskListAST::getter_mEndOfTaskDeclarationAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfTaskDeclaration ;
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

void GGS_taskListAST::setter_setMAutoStartAtIndex (GGS_bool inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAutoStart = inOperand ;
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
  
GGS_bool GGS_taskListAST::getter_mAutoStartAtIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAutoStart ;
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
// Down Enumerator for @taskListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskListAST::DownEnumerator_taskListAST (const GGS_taskListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element DownEnumerator_taskListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskListAST::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_taskListAST::current_mLowerPriorityTaskList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLowerPriorityTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_taskListAST::current_mStackSize (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_taskListAST::current_mTaskSetupListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_taskListAST::current_mTaskActivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_taskListAST::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST DownEnumerator_taskListAST::current_mGuardedCommandList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommandList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_taskListAST::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskListAST::current_mAutoStart (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAutoStart ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @taskListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskListAST::UpEnumerator_taskListAST (const GGS_taskListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element UpEnumerator_taskListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskListAST::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_taskListAST::current_mLowerPriorityTaskList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLowerPriorityTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_taskListAST::current_mStackSize (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_taskListAST::current_mTaskSetupListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_taskListAST::current_mTaskActivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_taskListAST::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST UpEnumerator_taskListAST::current_mGuardedCommandList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGuardedCommandList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_taskListAST::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskListAST::current_mAutoStart (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//     @taskListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskListAST ("taskListAST",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_taskListAST result ;
  const GGS_taskListAST * p = (const GGS_taskListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@taskSetupListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public: GGS_taskSetupListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_taskSetupListAST (const GGS_lstring & in_mName,
                                               const GGS_lstringlist & in_mDependanceList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskSetupListAST (const GGS_taskSetupListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GGS_lstring & in_mName,
                                                                          const GGS_lstringlist & in_mDependanceList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GGS_taskSetupListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_taskSetupListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskSetupListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_taskSetupListAST (mObject.mProperty_mName, mObject.mProperty_mDependanceList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @taskSetupListAST
//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST::GGS_taskSetupListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST::GGS_taskSetupListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    const GGS_taskSetupListAST_2E_element element (p->mObject.mProperty_mName, p->mObject.mProperty_mDependanceList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GGS_lstring & in_mName,
                                                      const GGS_lstringlist & in_mDependanceList
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mName, in_mDependanceList COMMA_THERE)) ;
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

class cCollectionElement_syncInstructionBranchListAST : public cCollectionElement {
  public: GGS_syncInstructionBranchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListAST (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                           const GGS_instructionListAST & in_mInstructionList,
                                                           const GGS_location & in_mEndOfBranch
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                                                  const GGS_instructionListAST & in_mInstructionList,
                                                                                                  const GGS_location & in_mEndOfBranch
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syncInstructionBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syncInstructionBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListAST (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syncInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST::GGS_syncInstructionBranchListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST::GGS_syncInstructionBranchListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    const GGS_syncInstructionBranchListAST_2E_element element (p->mObject.mProperty_mGuardedCommand, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfBranch) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                  const GGS_instructionListAST & in_mInstructionList,
                                                                  const GGS_location & in_mEndOfBranch
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch COMMA_THERE)) ;
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
  UpEnumerator_taskListAST enumerator_5015 (temp_0) ;
  while (enumerator_5015.hasCurrentObject ()) {
    UpEnumerator_syncInstructionBranchListAST enumerator_5055 (enumerator_5015.current_mGuardedCommandList (HERE)) ;
    while (enumerator_5055.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5055.current (HERE).readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 148)) ;
      enumerator_5055.gotoNextObject () ;
    }
    enumerator_5015.gotoNextObject () ;
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

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const GGS_taskListAST inObject,
                                     GGS_semanticContext & ioArgument_ioContext,
                                     GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                     GGS_routineListIR & ioArgument_ioRoutineListIR,
                                     GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskListAST temp_0 = inObject ;
  GGS_taskListAST var_taskList_6276 = temp_0 ;
  GGS_taskListAST temp_1 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 175)) ;
  GGS_taskListAST var_sortedTaskList_6311 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 176)) ;
  GGS_stringset var_handledTaskSet_6349 = temp_2 ;
  GGS_bool var_continue_6376 = GGS_bool (true) ;
  if (var_taskList_6276.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).isValid ()) {
    uint32_t variant_6394 = var_taskList_6276.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).uintValue () ;
    bool loop_6394 = true ;
    while (loop_6394) {
      GGS_bool test_3 = var_continue_6376 ;
      if (GalgasBool::boolTrue == test_3.boolEnum ()) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_taskList_6276.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_6394 = test_3.isValid () ;
      if (loop_6394) {
        loop_6394 = test_3.boolValue () ;
      }
      if (loop_6394 && (0 == variant_6394)) {
        loop_6394 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 178)) ;
      }
      if (loop_6394) {
        variant_6394 -= 1 ;
        var_continue_6376 = GGS_bool (false) ;
        GGS_taskListAST temp_4 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 180)) ;
        GGS_taskListAST var_candidateTaskList_6504 = temp_4 ;
        GGS_bigint var_idx_6536 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 181)) ;
        UpEnumerator_taskListAST enumerator_6560 (var_taskList_6276) ;
        while (enumerator_6560.hasCurrentObject ()) {
          GGS_bool var_allPrecedenceDefined_6582 = GGS_bool (true) ;
          UpEnumerator_lstringlist enumerator_6621 (enumerator_6560.current (HERE).readProperty_mLowerPriorityTaskList ()) ;
          bool bool_5 = var_allPrecedenceDefined_6582.isValidAndTrue () ;
          if (enumerator_6621.hasCurrentObject () && bool_5) {
            while (enumerator_6621.hasCurrentObject () && bool_5) {
              var_allPrecedenceDefined_6582 = var_handledTaskSet_6349.getter_hasKey (enumerator_6621.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 185)) ;
              enumerator_6621.gotoNextObject () ;
              if (enumerator_6621.hasCurrentObject ()) {
                bool_5 = var_allPrecedenceDefined_6582.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_allPrecedenceDefined_6582.boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_candidateTaskList_6504.addAssignOperation (enumerator_6560.current (HERE).readProperty_mTaskName (), enumerator_6560.current (HERE).readProperty_mLowerPriorityTaskList (), enumerator_6560.current (HERE).readProperty_mStackSize (), enumerator_6560.current (HERE).readProperty_mTaskSetupListAST (), enumerator_6560.current (HERE).readProperty_mTaskActivateListAST (), enumerator_6560.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_6560.current (HERE).readProperty_mGuardedCommandList (), enumerator_6560.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_6560.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 188)) ;
              var_continue_6376 = GGS_bool (true) ;
              {
              GGS_lstring joker_7211_9 ; // Joker input parameter
              GGS_lstringlist joker_7211_8 ; // Joker input parameter
              GGS_lbigint joker_7211_7 ; // Joker input parameter
              GGS_taskSetupListAST joker_7211_6 ; // Joker input parameter
              GGS_taskSetupListAST joker_7211_5 ; // Joker input parameter
              GGS_taskSetupListAST joker_7211_4 ; // Joker input parameter
              GGS_syncInstructionBranchListAST joker_7211_3 ; // Joker input parameter
              GGS_location joker_7211_2 ; // Joker input parameter
              GGS_bool joker_7211_1 ; // Joker input parameter
              var_taskList_6276.setter_removeAtIndex (joker_7211_9, joker_7211_8, joker_7211_7, joker_7211_6, joker_7211_5, joker_7211_4, joker_7211_3, joker_7211_2, joker_7211_1, var_idx_6536.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            var_idx_6536 = var_idx_6536.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 201)) ;
          }
          enumerator_6560.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_bool test_8 = GGS_bool (gOption_omnibus_5F_options_taskStrictPriorityOrder.readProperty_value ()) ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6504.getter_count (SOURCE_FILE ("task-declaration.galgas", 204)).objectCompare (GGS_uint (uint32_t (1U)))) ;
          }
          test_7 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            UpEnumerator_taskListAST enumerator_7392 (var_candidateTaskList_6504) ;
            while (enumerator_7392.hasCurrentObject ()) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7392.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string ("this task does not respect a strict priority order"), fixItArray9  COMMA_SOURCE_FILE ("task-declaration.galgas", 206)) ;
              enumerator_7392.gotoNextObject () ;
            }
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6504.getter_count (SOURCE_FILE ("task-declaration.galgas", 209)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            var_continue_6376 = GGS_bool (true) ;
            UpEnumerator_taskListAST enumerator_7597 (var_candidateTaskList_6504) ;
            while (enumerator_7597.hasCurrentObject ()) {
              var_handledTaskSet_6349.plusPlusAssignOperation (enumerator_7597.current (HERE).readProperty_mTaskName ().readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 212)) ;
              enumerator_7597.gotoNextObject () ;
            }
            var_sortedTaskList_6311.plusAssignOperation(var_candidateTaskList_6504, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 214)) ;
          }
        }
      }
    }
  }
  UpEnumerator_taskListAST enumerator_7785 (var_taskList_6276) ;
  while (enumerator_7785.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (enumerator_7785.current_mTaskName (HERE).readProperty_location (), GGS_string ("this task is out of priority order"), fixItArray11  COMMA_SOURCE_FILE ("task-declaration.galgas", 219)) ;
    enumerator_7785.gotoNextObject () ;
  }
  GGS_decoratedTaskList temp_12 = GGS_decoratedTaskList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 222)) ;
  GGS_decoratedTaskList var_decoratedTaskList_7894 = temp_12 ;
  UpEnumerator_taskListAST enumerator_7932 (var_sortedTaskList_6311) ;
  GGS_uint index_7920 (uint32_t (0)) ;
  while (enumerator_7932.hasCurrentObject ()) {
    {
    GGS_lstring joker_8259 ; // Joker input parameter
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("activate"), enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_safeUserMode (SOURCE_FILE ("task-declaration.galgas", 229)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("task-declaration.galgas", 230)), joker_8259, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 225)) ;
    }
    GGS_string var_assemblerTaskName_8292 = enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 233)) ;
    GGS_string var_activateTaskCallName_8361 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)) ;
    GGS_routineFormalArgumentListAST temp_13 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)) ;
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_taskActivateFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (function_routineMangledNameFromAST (enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 236)), temp_13, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)), GGS_bool (false), GGS_bool (false), var_assemblerTaskName_8292, var_activateTaskCallName_8361, index_7920, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 235)) ;
    GGS_instructionListAST temp_14 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 245)) ;
    GGS_instructionListAST var_taskListInstructionList_8865 = temp_14 ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::greaterThan, enumerator_7932.current (HERE).readProperty_mGuardedCommandList ().getter_count (SOURCE_FILE ("task-declaration.galgas", 246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_syncInstructionAST var_syncInstruction_8954 = GGS_syncInstructionAST::init_21__21__21_ (enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_location (), enumerator_7932.current (HERE).readProperty_mGuardedCommandList (), enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
        var_taskListInstructionList_8865.addAssignOperation (var_syncInstruction_8954  COMMA_SOURCE_FILE ("task-declaration.galgas", 248)) ;
      }
    }
    GGS_routineFormalArgumentListAST temp_16 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GGS_lstring var_routineMangledName_9136 = function_routineMangledNameFromAST (enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string (), function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)).getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 250)), temp_16, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GGS_routineFormalArgumentListAST temp_17 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 260)) ;
    ioArgument_ioDecoratedRoutineList.addAssignOperation (enumerator_7932.current (HERE).readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 253)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-declaration.galgas", 255)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-declaration.galgas", 258)), var_routineMangledName_9136, temp_17, GGS_bool (true), var_taskListInstructionList_8865, enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 264))  COMMA_SOURCE_FILE ("task-declaration.galgas", 251)) ;
    GGS_omnibusType var_taskType_9771 ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), enumerator_7932.current (HERE).readProperty_mTaskName (), var_taskType_9771, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 265)) ;
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_7932.current (HERE).readProperty_mTaskName (), var_taskType_9771, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 266)) ;
    }
    GGS_sortedOperandIRList temp_18 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 267)) ;
    GGS_sortedOperandIRList var_initialValueList_9861 = temp_18 ;
    GGS_lstring var_typeName_9913 = GGS_lstring::init_21__21_ (var_taskType_9771.readProperty_omnibusTypeDescriptionName (), enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constructorMap var_constructorMap_10057 ;
    ioArgument_ioContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_9913, var_constructorMap_10057, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 269)) ;
    UpEnumerator_constructorMap enumerator_10086 (var_constructorMap_10057) ;
    while (enumerator_10086.hasCurrentObject ()) {
      enumerator_10086.current_mInitValue (HERE).method_extractStructure (var_initialValueList_9861, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 272)) ;
      enumerator_10086.gotoNextObject () ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssignOperation (enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7932.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_objectIR::class_func_llvmStructureValue (var_taskType_9771, var_initialValueList_9861  COMMA_SOURCE_FILE ("task-declaration.galgas", 277))  COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
    var_decoratedTaskList_7894.addAssignOperation (enumerator_7932.current (HERE).readProperty_mTaskName (), enumerator_7932.current (HERE).readProperty_mStackSize (), enumerator_7932.current (HERE).readProperty_mTaskSetupListAST (), enumerator_7932.current (HERE).readProperty_mTaskActivateListAST (), enumerator_7932.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_7932.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_7932.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 279)) ;
    enumerator_7932.gotoNextObject () ;
    index_7920.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 223)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedTaskListDeclaration::init_21_ (var_decoratedTaskList_7894, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 289)) ;
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@decoratedTaskList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_decoratedTaskList : public cCollectionElement {
  public: GGS_decoratedTaskList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_decoratedTaskList (const GGS_lstring & in_mTaskName,
                                                const GGS_lbigint & in_mStackSize,
                                                const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                const GGS_location & in_mEndOfTaskDeclaration,
                                                const GGS_bool & in_mAutoStart
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_decoratedTaskList (const GGS_decoratedTaskList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GGS_lstring & in_mTaskName,
                                                                            const GGS_lbigint & in_mStackSize,
                                                                            const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                            const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                            const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                            const GGS_location & in_mEndOfTaskDeclaration,
                                                                            const GGS_bool & in_mAutoStart
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GGS_decoratedTaskList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_decoratedTaskList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_decoratedTaskList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_decoratedTaskList (mObject.mProperty_mTaskName, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @decoratedTaskList
//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList::GGS_decoratedTaskList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList::GGS_decoratedTaskList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    const GGS_decoratedTaskList_2E_element element (p->mObject.mProperty_mTaskName, p->mObject.mProperty_mStackSize, p->mObject.mProperty_mTaskSetupListAST, p->mObject.mProperty_mTaskActivateListAST, p->mObject.mProperty_mTaskDeactivateListAST, p->mObject.mProperty_mEndOfTaskDeclaration, p->mObject.mProperty_mAutoStart) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mTaskName,
                                                       const GGS_lbigint & in_mStackSize,
                                                       const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                       const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                       const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                       const GGS_location & in_mEndOfTaskDeclaration,
                                                       const GGS_bool & in_mAutoStart
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_decoratedTaskList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_decoratedTaskList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::description (String & ioString,
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
      ioString.appendString ("mTaskName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStackSize:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStackSize.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskSetupListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskSetupListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskActivateListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskActivateListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskDeactivateListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskDeactivateListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfTaskDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAutoStart:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAutoStart.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::plusPlusAssignOperation (const GGS_decoratedTaskList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_lbigint & inOperand1,
                                                                       const GGS_taskSetupListAST & inOperand2,
                                                                       const GGS_taskSetupListAST & inOperand3,
                                                                       const GGS_taskSetupListAST & inOperand4,
                                                                       const GGS_location & inOperand5,
                                                                       const GGS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_decoratedTaskList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_lbigint & inOperand1,
                                                const GGS_taskSetupListAST & inOperand2,
                                                const GGS_taskSetupListAST & inOperand3,
                                                const GGS_taskSetupListAST & inOperand4,
                                                const GGS_location & inOperand5,
                                                const GGS_bool & inOperand6
                                                COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_lbigint inOperand1,
                                           const GGS_taskSetupListAST inOperand2,
                                           const GGS_taskSetupListAST inOperand3,
                                           const GGS_taskSetupListAST inOperand4,
                                           const GGS_location inOperand5,
                                           const GGS_bool inOperand6,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_lbigint inOperand1,
                                                  const GGS_taskSetupListAST inOperand2,
                                                  const GGS_taskSetupListAST inOperand3,
                                                  const GGS_taskSetupListAST inOperand4,
                                                  const GGS_location inOperand5,
                                                  const GGS_bool inOperand6,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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

void GGS_decoratedTaskList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_lbigint & outOperand1,
                                                  GGS_taskSetupListAST & outOperand2,
                                                  GGS_taskSetupListAST & outOperand3,
                                                  GGS_taskSetupListAST & outOperand4,
                                                  GGS_location & outOperand5,
                                                  GGS_bool & outOperand6,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mStackSize ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_lbigint & outOperand1,
                                             GGS_taskSetupListAST & outOperand2,
                                             GGS_taskSetupListAST & outOperand3,
                                             GGS_taskSetupListAST & outOperand4,
                                             GGS_location & outOperand5,
                                             GGS_bool & outOperand6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStackSize ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_lbigint & outOperand1,
                                            GGS_taskSetupListAST & outOperand2,
                                            GGS_taskSetupListAST & outOperand3,
                                            GGS_taskSetupListAST & outOperand4,
                                            GGS_location & outOperand5,
                                            GGS_bool & outOperand6,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::method_first (GGS_lstring & outOperand0,
                                          GGS_lbigint & outOperand1,
                                          GGS_taskSetupListAST & outOperand2,
                                          GGS_taskSetupListAST & outOperand3,
                                          GGS_taskSetupListAST & outOperand4,
                                          GGS_location & outOperand5,
                                          GGS_bool & outOperand6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStackSize ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::method_last (GGS_lstring & outOperand0,
                                         GGS_lbigint & outOperand1,
                                         GGS_taskSetupListAST & outOperand2,
                                         GGS_taskSetupListAST & outOperand3,
                                         GGS_taskSetupListAST & outOperand4,
                                         GGS_location & outOperand5,
                                         GGS_bool & outOperand6,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mAutoStart ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::add_operation (const GGS_decoratedTaskList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
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

GGS_decoratedTaskList GGS_decoratedTaskList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
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

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::plusAssignOperation (const GGS_decoratedTaskList inList,
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

void GGS_decoratedTaskList::setter_setMTaskNameAtIndex (GGS_lstring inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName = inOperand ;
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
  
GGS_lstring GGS_decoratedTaskList::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName ;
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

void GGS_decoratedTaskList::setter_setMStackSizeAtIndex (GGS_lbigint inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStackSize = inOperand ;
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
  
GGS_lbigint GGS_decoratedTaskList::getter_mStackSizeAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lbigint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStackSize ;
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

void GGS_decoratedTaskList::setter_setMTaskSetupListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskSetupListAST = inOperand ;
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
  
GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskSetupListASTAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskSetupListAST ;
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

void GGS_decoratedTaskList::setter_setMTaskActivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskActivateListAST = inOperand ;
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
  
GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskActivateListASTAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskActivateListAST ;
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

void GGS_decoratedTaskList::setter_setMTaskDeactivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskDeactivateListAST = inOperand ;
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
  
GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskDeactivateListASTAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskDeactivateListAST ;
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

void GGS_decoratedTaskList::setter_setMEndOfTaskDeclarationAtIndex (GGS_location inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfTaskDeclaration = inOperand ;
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
  
GGS_location GGS_decoratedTaskList::getter_mEndOfTaskDeclarationAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfTaskDeclaration ;
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

void GGS_decoratedTaskList::setter_setMAutoStartAtIndex (GGS_bool inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAutoStart = inOperand ;
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
  
GGS_bool GGS_decoratedTaskList::getter_mAutoStartAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAutoStart ;
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
// Down Enumerator for @decoratedTaskList
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedTaskList::DownEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element DownEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAutoStart ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @decoratedTaskList
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedTaskList::UpEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element UpEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//     @decoratedTaskList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  const GGS_decoratedTaskList * p = (const GGS_decoratedTaskList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

GGS_abstractDecoratedDeclaration_2E_weak::GGS_abstractDecoratedDeclaration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration_2E_weak & GGS_abstractDecoratedDeclaration_2E_weak::operator = (const GGS_abstractDecoratedDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//  Map type @taskMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::GGS_taskMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::~ GGS_taskMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::GGS_taskMapIR (const GGS_taskMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR & GGS_taskMapIR::operator = (const GGS_taskMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                              const GGS_uint & inLevel
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_taskMapIR::getter_locationForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_taskMapIR::getter_keyList (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_taskMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::performInsert (const GGS_taskMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>
GGS_taskMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_taskMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>>
GGS_taskMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_taskMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_ GGS_taskMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_taskMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_taskMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTaskType = info->mProperty_mTaskType ;
      element.mProperty_mPriority = info->mProperty_mPriority ;
      element.mProperty_mStackSize = info->mProperty_mStackSize ;
      element.mProperty_mSetupOrderedList = info->mProperty_mSetupOrderedList ;
      element.mProperty_mActivateOrderedList = info->mProperty_mActivateOrderedList ;
      element.mProperty_mDeactivateOrderedList = info->mProperty_mDeactivateOrderedList ;
      element.mProperty_mTaskNameStringIndex = info->mProperty_mTaskNameStringIndex ;
      element.mProperty_mActivate = info->mProperty_mActivate ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::class_func_mapWithMapToOverride (const GGS_taskMapIR & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_taskMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_taskMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_insertKey (GGS_lstring inLKey,
                                      GGS_omnibusType inArgument0,
                                      GGS_uint inArgument1,
                                      GGS_bigint inArgument2,
                                      GGS_stringlist inArgument3,
                                      GGS_stringlist inArgument4,
                                      GGS_stringlist inArgument5,
                                      GGS_uint inArgument6,
                                      GGS_bool inArgument7,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  const GGS_taskMapIR_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::method_searchKey (GGS_lstring inLKey,
                                      GGS_omnibusType & outArgument0,
                                      GGS_uint & outArgument1,
                                      GGS_bigint & outArgument2,
                                      GGS_stringlist & outArgument3,
                                      GGS_stringlist & outArgument4,
                                      GGS_stringlist & outArgument5,
                                      GGS_uint & outArgument6,
                                      GGS_bool & outArgument7,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info ;
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
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
  }else{
    outArgument0 = info->mProperty_mTaskType ;
    outArgument1 = info->mProperty_mPriority ;
    outArgument2 = info->mProperty_mStackSize ;
    outArgument3 = info->mProperty_mSetupOrderedList ;
    outArgument4 = info->mProperty_mActivateOrderedList ;
    outArgument5 = info->mProperty_mDeactivateOrderedList ;
    outArgument6 = info->mProperty_mTaskNameStringIndex ;
    outArgument7 = info->mProperty_mActivate ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_removeKey (GGS_lstring inLKey,
                                      GGS_omnibusType & outArgument0,
                                      GGS_uint & outArgument1,
                                      GGS_bigint & outArgument2,
                                      GGS_stringlist & outArgument3,
                                      GGS_stringlist & outArgument4,
                                      GGS_stringlist & outArgument5,
                                      GGS_uint & outArgument6,
                                      GGS_bool & outArgument7,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "** internal error **" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
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
  }else{
    outArgument0 = info->mProperty_mTaskType ;
    outArgument1 = info->mProperty_mPriority ;
    outArgument2 = info->mProperty_mStackSize ;
    outArgument3 = info->mProperty_mSetupOrderedList ;
    outArgument4 = info->mProperty_mActivateOrderedList ;
    outArgument5 = info->mProperty_mDeactivateOrderedList ;
    outArgument6 = info->mProperty_mTaskNameStringIndex ;
    outArgument7 = info->mProperty_mActivate ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_taskMapIR::getter_mTaskTypeForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
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

GGS_uint GGS_taskMapIR::getter_mPriorityForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPriority ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_taskMapIR::getter_mStackSizeForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStackSize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mSetupOrderedListForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSetupOrderedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mActivateOrderedListForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mActivateOrderedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mDeactivateOrderedListForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDeactivateOrderedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_mTaskNameStringIndexForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTaskNameStringIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_mActivateForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mActivate ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMTaskTypeForKey (GGS_omnibusType inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_taskMapIR::setter_setMPriorityForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPriority = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMStackSizeForKey (GGS_bigint inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStackSize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMSetupOrderedListForKey (GGS_stringlist inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSetupOrderedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMActivateOrderedListForKey (GGS_stringlist inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mActivateOrderedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMDeactivateOrderedListForKey (GGS_stringlist inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDeactivateOrderedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMTaskNameStringIndexForKey (GGS_uint inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTaskNameStringIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMActivateForKey (GGS_bool inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mActivate = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_taskMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>> & inArray,
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
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPriority:") ;
    inArray (i COMMA_HERE)->mProperty_mPriority.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mStackSize:") ;
    inArray (i COMMA_HERE)->mProperty_mStackSize.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSetupOrderedList:") ;
    inArray (i COMMA_HERE)->mProperty_mSetupOrderedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActivateOrderedList:") ;
    inArray (i COMMA_HERE)->mProperty_mActivateOrderedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDeactivateOrderedList:") ;
    inArray (i COMMA_HERE)->mProperty_mDeactivateOrderedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTaskNameStringIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mTaskNameStringIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActivate:") ;
    inArray (i COMMA_HERE)->mProperty_mActivate.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_taskMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_taskMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_taskMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @taskMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskMapIR::DownEnumerator_taskMapIR (const GGS_taskMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element DownEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivate ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @taskMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskMapIR::UpEnumerator_taskMapIR (const GGS_taskMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element UpEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivate ;
}


//--------------------------------------------------------------------------------------------------
//     @taskMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  const GGS_taskMapIR * p = (const GGS_taskMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@taskSortedListIR' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_taskSortedListIR (const GGS_taskSortedListIR_2E_element & inLeft,
                                                   const GGS_taskSortedListIR_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inRight.mProperty_mPriority.objectCompare (inLeft.mProperty_mPriority) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR::GGS_taskSortedListIR (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskSortedListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::plusPlusAssignOperation (const GGS_taskSortedListIR_2E_element & inElement
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_taskSortedListIR) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::class_func_sortedListWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_bigint & inOperand2,
                                                                           const GGS_stringlist & inOperand3,
                                                                           const GGS_stringlist & inOperand4,
                                                                           const GGS_stringlist & inOperand5,
                                                                           const GGS_uint & inOperand6,
                                                                           const GGS_bool & inOperand7
                                                                           COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result = init (nullptr COMMA_THERE) ;
  const GGS_taskSortedListIR_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::addAssignOperation (const GGS_string & inOperand0,
                                               const GGS_uint & inOperand1,
                                               const GGS_bigint & inOperand2,
                                               const GGS_stringlist & inOperand3,
                                               const GGS_stringlist & inOperand4,
                                               const GGS_stringlist & inOperand5,
                                               const GGS_uint & inOperand6,
                                               const GGS_bool & inOperand7
                                               COMMA_LOCATION_ARGS) {
  const GGS_taskSortedListIR_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_insert (const GGS_string inOperand0,
                                          const GGS_uint inOperand1,
                                          const GGS_bigint inOperand2,
                                          const GGS_stringlist inOperand3,
                                          const GGS_stringlist inOperand4,
                                          const GGS_stringlist inOperand5,
                                          const GGS_uint inOperand6,
                                          const GGS_bool inOperand7,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  const GGS_taskSortedListIR_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::plusAssignOperation (const GGS_taskSortedListIR inSortedList,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_taskSortedListIR) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_popSmallest (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_bigint & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_stringlist & outOperand5,
                                               GGS_uint & outOperand6,
                                               GGS_bool & outOperand7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray (0 COMMA_HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray (0 COMMA_HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray (0 COMMA_HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray (0 COMMA_HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray (0 COMMA_HERE).mProperty_mActivate ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_popGreatest (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_bigint & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_stringlist & outOperand5,
                                               GGS_uint & outOperand6,
                                               GGS_bool & outOperand7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray.lastObject (HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray.lastObject (HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray.lastObject (HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray.lastObject (HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray.lastObject (HERE).mProperty_mActivate ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::method_smallest (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_bigint & outOperand2,
                                            GGS_stringlist & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_stringlist & outOperand5,
                                            GGS_uint & outOperand6,
                                            GGS_bool & outOperand7,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray (0 COMMA_HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray (0 COMMA_HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray (0 COMMA_HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray (0 COMMA_HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray (0 COMMA_HERE).mProperty_mActivate ;
      found = true ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::method_greatest (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_bigint & outOperand2,
                                            GGS_stringlist & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_stringlist & outOperand5,
                                            GGS_uint & outOperand6,
                                            GGS_bool & outOperand7,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray.lastObject (HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray.lastObject (HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray.lastObject (HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray.lastObject (HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray.lastObject (HERE).mProperty_mActivate ;
      found = true ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @taskSortedListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskSortedListIR::DownEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element DownEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivate ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @taskSortedListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskSortedListIR::UpEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element UpEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivate ;
}



//--------------------------------------------------------------------------------------------------
//     @taskSortedListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  const GGS_taskSortedListIR * p = (const GGS_taskSortedListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@globalTaskVariableList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_globalTaskVariableList : public cCollectionElement {
  public: GGS_globalTaskVariableList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_globalTaskVariableList (const GGS_string & in_mTaskName,
                                                     const GGS_string & in_mTaskTypeName,
                                                     const GGS_objectIR & in_mInitialValue
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalTaskVariableList (const GGS_globalTaskVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GGS_string & in_mTaskName,
                                                                                      const GGS_string & in_mTaskTypeName,
                                                                                      const GGS_objectIR & in_mInitialValue
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GGS_globalTaskVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mTaskTypeName, inElement.mProperty_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_globalTaskVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_globalTaskVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_globalTaskVariableList (mObject.mProperty_mTaskName, mObject.mProperty_mTaskTypeName, mObject.mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @globalTaskVariableList
//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList::GGS_globalTaskVariableList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList::GGS_globalTaskVariableList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    const GGS_globalTaskVariableList_2E_element element (p->mObject.mProperty_mTaskName, p->mObject.mProperty_mTaskTypeName, p->mObject.mProperty_mInitialValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_string & in_mTaskName,
                                                            const GGS_string & in_mTaskTypeName,
                                                            const GGS_objectIR & in_mInitialValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalTaskVariableList (in_mTaskName, in_mTaskTypeName, in_mInitialValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalTaskVariableList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_globalTaskVariableList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::description (String & ioString,
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
      ioString.appendString ("mTaskName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInitialValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInitialValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::plusPlusAssignOperation (const GGS_globalTaskVariableList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                 const GGS_string & inOperand1,
                                                                                 const GGS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_globalTaskVariableList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::addAssignOperation (const GGS_string & inOperand0,
                                                     const GGS_string & inOperand1,
                                                     const GGS_objectIR & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_append (const GGS_string inOperand0,
                                                const GGS_string inOperand1,
                                                const GGS_objectIR inOperand2,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_insertAtIndex (const GGS_string inOperand0,
                                                       const GGS_string inOperand1,
                                                       const GGS_objectIR inOperand2,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_globalTaskVariableList::setter_removeAtIndex (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_objectIR & outOperand2,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInitialValue ;
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

void GGS_globalTaskVariableList::setter_popFirst (GGS_string & outOperand0,
                                                  GGS_string & outOperand1,
                                                  GGS_objectIR & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValue ;
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

void GGS_globalTaskVariableList::setter_popLast (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_objectIR & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValue ;
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

void GGS_globalTaskVariableList::method_first (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_objectIR & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValue ;
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

void GGS_globalTaskVariableList::method_last (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_objectIR & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValue ;
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

GGS_globalTaskVariableList GGS_globalTaskVariableList::add_operation (const GGS_globalTaskVariableList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
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

GGS_globalTaskVariableList GGS_globalTaskVariableList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
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

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::plusAssignOperation (const GGS_globalTaskVariableList inList,
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

void GGS_globalTaskVariableList::setter_setMTaskNameAtIndex (GGS_string inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName = inOperand ;
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
  
GGS_string GGS_globalTaskVariableList::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName ;
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

void GGS_globalTaskVariableList::setter_setMTaskTypeNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskTypeName = inOperand ;
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
  
GGS_string GGS_globalTaskVariableList::getter_mTaskTypeNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskTypeName ;
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

void GGS_globalTaskVariableList::setter_setMInitialValueAtIndex (GGS_objectIR inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValue = inOperand ;
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
  
GGS_objectIR GGS_globalTaskVariableList::getter_mInitialValueAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValue ;
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
// Down Enumerator for @globalTaskVariableList
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalTaskVariableList::DownEnumerator_globalTaskVariableList (const GGS_globalTaskVariableList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element DownEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @globalTaskVariableList
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalTaskVariableList::UpEnumerator_globalTaskVariableList (const GGS_globalTaskVariableList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element UpEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValue ;
}




//--------------------------------------------------------------------------------------------------
//     @globalTaskVariableList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  const GGS_globalTaskVariableList * p = (const GGS_globalTaskVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalTaskVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    s.appendCString ("method @objectIR.reference invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.null invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.llvmNamedValue invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.literalInteger invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.llvmStructureValue invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.literalString invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.zero invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.llvmArrayStaticValues invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.llvmArrayDynamicValues invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.llvmArrayRepeatedStaticValue invoked with an invalid enum value") ;
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
    s.appendCString ("method @objectIR.llvmArrayRepeatedDynamicValue invoked with an invalid enum value") ;
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
//
//Extension method '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const GGS_taskMapIR inObject,
                                   GGS_string & ioArgument_ioLLVMcode,
                                   const GGS_generationContext constinArgument_inGenerationContext,
                                   GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                   GGS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Activate task service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 480)) ;
  GGS_string var_activateTaskImplementationName_18063 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)) ;
  GGS_string var_activateTaskCallName_18165 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)) ;
  ioArgument_ioServiceList.addAssignOperation (var_activateTaskCallName_18165, var_activateTaskImplementationName_18063, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_activateTaskCallName_18165, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)).add_operation (GGS_string (" (i8 %inTaskIndex) nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 486)) ;
  GGS_string var_waitForActivationImplementationName_18536 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)) ;
  GGS_string var_waitForActivationCallName_18653 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)) ;
  ioArgument_ioServiceList.addAssignOperation (var_waitForActivationCallName_18653, var_waitForActivationImplementationName_18536, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_waitForActivationCallName_18653, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)).add_operation (GGS_string (" () nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 492)) ;
  UpEnumerator_globalTaskVariableList enumerator_19034 (constinArgument_inGenerationContext.readProperty_mGlobalTaskVariableList ()) ;
  while (enumerator_19034.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_19034.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 494)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 495)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(enumerator_19034.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_19034.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
    enumerator_19034.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 499)) ;
  GGS_taskSortedListIR temp_0 = GGS_taskSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 501)) ;
  GGS_taskSortedListIR var_orderedTaskList_19398 = temp_0 ;
  const GGS_taskMapIR temp_1 = inObject ;
  UpEnumerator_taskMapIR enumerator_19434 (temp_1) ;
  while (enumerator_19434.hasCurrentObject ()) {
    var_orderedTaskList_19398.addAssignOperation (enumerator_19434.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_19434.current (HERE).readProperty_mPriority (), enumerator_19434.current (HERE).readProperty_mStackSize (), enumerator_19434.current (HERE).readProperty_mSetupOrderedList (), enumerator_19434.current (HERE).readProperty_mActivateOrderedList (), enumerator_19434.current (HERE).readProperty_mDeactivateOrderedList (), enumerator_19434.current (HERE).readProperty_mTaskNameStringIndex (), enumerator_19434.current (HERE).readProperty_mActivate ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
    enumerator_19434.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 514)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 515)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 516)) ;
  UpEnumerator_taskSortedListIR enumerator_20018 (var_orderedTaskList_19398) ;
  while (enumerator_20018.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task ").add_operation (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 518)) ;
    GGS_string var_assemblerTaskName_20108 = enumerator_20018.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_stackNameForTask (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GGS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (enumerator_20018.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).getter_string (SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GGS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 521)) ;
    GGS_string var_effectiveParameter_20323 = GGS_string ("(%").add_operation (var_assemblerTaskName_20108, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (function_llvmNameForGlobalVariable (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)) ;
    GGS_string var_formalArgument_20436 = GGS_string (" (%").add_operation (var_assemblerTaskName_20108, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (var_formalArgument_20436, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 526)) ;
    UpEnumerator_stringlist enumerator_20724 (enumerator_20018.current (HERE).readProperty_mSetupOrderedList ()) ;
    while (enumerator_20724.hasCurrentObject ()) {
      GGS_string var_mangledName_20774 = GGS_string ("task.setup.").add_operation (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (enumerator_20724.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_20774.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (var_formalArgument_20436, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 529)) ;
      enumerator_20724.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 531)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 532)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 533)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 534)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (function_activateNameForTaskType (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_formalArgument_20436.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 537)) ;
    UpEnumerator_stringlist enumerator_21280 (enumerator_20018.current (HERE).readProperty_mActivateOrderedList ()) ;
    while (enumerator_21280.hasCurrentObject ()) {
      GGS_string var_mangledName_21336 = GGS_string ("task.activate.").add_operation (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (enumerator_21280.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21336.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (var_formalArgument_20436, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 540)) ;
      enumerator_21280.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 542)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 543)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 544)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 545)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (var_formalArgument_20436, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 547)) ;
    UpEnumerator_stringlist enumerator_21809 (enumerator_20018.current (HERE).readProperty_mDeactivateOrderedList ()) ;
    while (enumerator_21809.hasCurrentObject ()) {
      GGS_string var_mangledName_21869 = GGS_string ("task.deactivate.").add_operation (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (enumerator_21809.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21869.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (var_formalArgument_20436, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 550)) ;
      enumerator_21809.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 552)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 553)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 554)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 555)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 557)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (var_effectiveParameter_20323, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 558)) ;
    GGS_string var_taskLoopLabel_22452 = GGS_string ("loop.").add_operation (enumerator_20018.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 559)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_22452, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 560)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_taskLoopLabel_22452.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 561)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_20018.current (HERE).readProperty_mActivate ().operator_not (SOURCE_FILE ("task-declaration.galgas", 562)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18653, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 563)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_activateNameForTaskType (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (var_effectiveParameter_20323, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 565)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_20018.current (HERE).readProperty_mTaskName ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (var_effectiveParameter_20323, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 566)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_20018.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (var_effectiveParameter_20323, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 567)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_20018.current (HERE).readProperty_mActivate ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18653, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 569)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_22452, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 572)) ;
    enumerator_20018.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 575)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 576)) ;
  UpEnumerator_taskSortedListIR enumerator_23543 (var_orderedTaskList_19398) ;
  GGS_uint index_23531 (uint32_t (0)) ;
  while (enumerator_23543.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (function_stackAddressForTask (enumerator_23543.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 578)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = getelementptr inbounds [").add_operation (enumerator_23543.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).getter_string (SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).add_operation (GGS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("[").add_operation (enumerator_23543.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).getter_string (SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (GGS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (function_stackNameForTask (enumerator_23543.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 581)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %task.name.").add_operation (index_23531.getter_string (SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GGS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (function_literalStringName (enumerator_23543.current (HERE).readProperty_mTaskNameStringIndex (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 582)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 583)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 ").add_operation (index_23531.getter_string (SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 584)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i8* %task.name.").add_operation (index_23531.getter_string (SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_23543.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_23543.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 587)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_23543.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 588)) ;
    enumerator_23543.gotoNextObject () ;
    index_23531.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 577)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 590)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 591)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractRoutineIR_2E_weak::objectCompare (const GGS_abstractRoutineIR_2E_weak & inOperand) const {
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

GGS_abstractRoutineIR_2E_weak::GGS_abstractRoutineIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractRoutineIR_2E_weak & GGS_abstractRoutineIR_2E_weak::operator = (const GGS_abstractRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@instructionListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListAST : public cCollectionElement {
  public: GGS_instructionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListAST (const GGS_instructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListAST (const GGS_instructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GGS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GGS_instructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @instructionListAST
//--------------------------------------------------------------------------------------------------

GGS_instructionListAST::GGS_instructionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST::GGS_instructionListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    const GGS_instructionListAST_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_instructionAST & in_mInstruction
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstruction COMMA_THERE)) ;
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

ComparisonResult GGS_taskSetupDeclarationAST_2E_weak::objectCompare (const GGS_taskSetupDeclarationAST_2E_weak & inOperand) const {
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

GGS_taskSetupDeclarationAST_2E_weak::GGS_taskSetupDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak & GGS_taskSetupDeclarationAST_2E_weak::operator = (const GGS_taskSetupDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak::GGS_taskSetupDeclarationAST_2E_weak (const GGS_taskSetupDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak GGS_taskSetupDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_taskSetupDeclarationAST result ;
  if (isValid ()) {
    const cPtr_taskSetupDeclarationAST * p = (cPtr_taskSetupDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_taskSetupDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST_2E_weak::bang_taskSetupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_taskSetupDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskSetupDeclarationAST) ;
      result = GGS_taskSetupDeclarationAST ((cPtr_taskSetupDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @taskSetupDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ("taskSetupDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSetupDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak GGS_taskSetupDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST_2E_weak result ;
  const GGS_taskSetupDeclarationAST_2E_weak * p = (const GGS_taskSetupDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum staticListPropertyTypeAST
//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST::GGS_staticListPropertyTypeAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST GGS_staticListPropertyTypeAST::class_func_valueType (const GGS_lstring & inAssociatedValue0
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST result ;
  result.mEnum = Enumeration::enum_valueType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_staticListPropertyTypeAST_2E_valueType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST GGS_staticListPropertyTypeAST::class_func_function (const GGS_mode & inAssociatedValue0,
                                                                                  const GGS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                  const GGS_lstring & inAssociatedValue2
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST result ;
  result.mEnum = Enumeration::enum_function ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_staticListPropertyTypeAST_2E_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::method_extractValueType (GGS_lstring & outAssociatedValue_type,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_valueType) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("method @staticListPropertyTypeAST.valueType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_staticListPropertyTypeAST_2E_valueType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::method_extractFunction (GGS_mode & outAssociatedValue_mode,
                                                            GGS_routineFormalArgumentListAST & outAssociatedValue_formalArgs,
                                                            GGS_lstring & outAssociatedValue_returnType,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_function) {
    outAssociatedValue_mode.drop () ;
    outAssociatedValue_formalArgs.drop () ;
    outAssociatedValue_returnType.drop () ;
    String s ;
    s.appendCString ("method @staticListPropertyTypeAST.function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_staticListPropertyTypeAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_mode = ptr->mProperty_mode ;
    outAssociatedValue_formalArgs = ptr->mProperty_formalArgs ;
    outAssociatedValue_returnType = ptr->mProperty_returnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType_3F_ GGS_staticListPropertyTypeAST::getter_getValueType (UNUSED_LOCATION_ARGS) const {
  GGS_staticListPropertyTypeAST_2E_valueType_3F_ result ;
  if (mEnum == Enumeration::enum_valueType) {
    const auto ptr = (const GGS_staticListPropertyTypeAST_2E_valueType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_staticListPropertyTypeAST_2E_valueType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::getAssociatedValuesFor_valueType (GGS_lstring & out_type) const {
  const auto ptr = (const GGS_staticListPropertyTypeAST_2E_valueType *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function_3F_ GGS_staticListPropertyTypeAST::getter_getFunction (UNUSED_LOCATION_ARGS) const {
  GGS_staticListPropertyTypeAST_2E_function_3F_ result ;
  if (mEnum == Enumeration::enum_function) {
    const auto ptr = (const GGS_staticListPropertyTypeAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_staticListPropertyTypeAST_2E_function (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::getAssociatedValuesFor_function (GGS_mode & out_mode,
                                                                     GGS_routineFormalArgumentListAST & out_formalArgs,
                                                                     GGS_lstring & out_returnType) const {
  const auto ptr = (const GGS_staticListPropertyTypeAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
  out_mode = ptr->mProperty_mode ;
  out_formalArgs = ptr->mProperty_formalArgs ;
  out_returnType = ptr->mProperty_returnType ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_staticListPropertyTypeAST [3] = {
  "(not built)",
  "valueType",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListPropertyTypeAST::getter_isValueType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_valueType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListPropertyTypeAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @staticListPropertyTypeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_staticListPropertyTypeAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @staticListPropertyTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST ("staticListPropertyTypeAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST GGS_staticListPropertyTypeAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST result ;
  const GGS_staticListPropertyTypeAST * p = (const GGS_staticListPropertyTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@staticListPropertyListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_staticListPropertyListAST : public cCollectionElement {
  public: GGS_staticListPropertyListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_staticListPropertyListAST (const GGS_lstring & in_mPropertyName,
                                                        const GGS_staticListPropertyTypeAST & in_mPropertyType
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_staticListPropertyListAST (const GGS_staticListPropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GGS_lstring & in_mPropertyName,
                                                                                            const GGS_staticListPropertyTypeAST & in_mPropertyType
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GGS_staticListPropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_staticListPropertyListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_staticListPropertyListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_staticListPropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @staticListPropertyListAST
//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST::GGS_staticListPropertyListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST::GGS_staticListPropertyListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    const GGS_staticListPropertyListAST_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_lstring & in_mPropertyName,
                                                               const GGS_staticListPropertyTypeAST & in_mPropertyType
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (in_mPropertyName, in_mPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListPropertyListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_staticListPropertyListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::description (String & ioString,
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
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::plusPlusAssignOperation (const GGS_staticListPropertyListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_staticListPropertyTypeAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_staticListPropertyListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_staticListPropertyListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_staticListPropertyTypeAST & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  const GGS_staticListPropertyListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_staticListPropertyTypeAST inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_staticListPropertyListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_staticListPropertyTypeAST inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_staticListPropertyListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_staticListPropertyListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_staticListPropertyTypeAST & outOperand1,
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

void GGS_staticListPropertyListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_staticListPropertyTypeAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyType ;
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

void GGS_staticListPropertyListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_staticListPropertyTypeAST & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyType ;
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

void GGS_staticListPropertyListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_staticListPropertyTypeAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyType ;
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

void GGS_staticListPropertyListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_staticListPropertyTypeAST & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyType ;
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

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::add_operation (const GGS_staticListPropertyListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result ;
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

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result ;
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

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::plusAssignOperation (const GGS_staticListPropertyListAST inList,
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

void GGS_staticListPropertyListAST::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_staticListPropertyListAST::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
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

void GGS_staticListPropertyListAST::setter_setMPropertyTypeAtIndex (GGS_staticListPropertyTypeAST inOperand,
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
  
GGS_staticListPropertyTypeAST GGS_staticListPropertyListAST::getter_mPropertyTypeAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyTypeAST result ;
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
// Down Enumerator for @staticListPropertyListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListPropertyListAST::DownEnumerator_staticListPropertyListAST (const GGS_staticListPropertyListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element DownEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST DownEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @staticListPropertyListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListPropertyListAST::UpEnumerator_staticListPropertyListAST (const GGS_staticListPropertyListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element UpEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST UpEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyType ;
}




//--------------------------------------------------------------------------------------------------
//     @staticListPropertyListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyListAST ("staticListPropertyListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyListAST result ;
  const GGS_staticListPropertyListAST * p = (const GGS_staticListPropertyListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@staticListValueListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_staticListValueListAST : public cCollectionElement {
  public: GGS_staticListValueListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_staticListValueListAST (const GGS_extendStaticListElementAST & in_mElement,
                                                     const GGS_location & in_mLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_staticListValueListAST (const GGS_staticListValueListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GGS_extendStaticListElementAST & in_mElement,
                                                                                      const GGS_location & in_mLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GGS_staticListValueListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement, inElement.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_staticListValueListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_staticListValueListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_staticListValueListAST (mObject.mProperty_mElement, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @staticListValueListAST
//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST::GGS_staticListValueListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST::GGS_staticListValueListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    const GGS_staticListValueListAST_2E_element element (p->mObject.mProperty_mElement, p->mObject.mProperty_mLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_extendStaticListElementAST & in_mElement,
                                                            const GGS_location & in_mLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (in_mElement, in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListValueListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_staticListValueListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::description (String & ioString,
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
      ioString.appendString ("mElement:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mElement.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListValueListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::plusPlusAssignOperation (const GGS_staticListValueListAST_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::class_func_listWithValue (const GGS_extendStaticListElementAST & inOperand0,
                                                                                 const GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_staticListValueListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_staticListValueListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::addAssignOperation (const GGS_extendStaticListElementAST & inOperand0,
                                                     const GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_staticListValueListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::setter_append (const GGS_extendStaticListElementAST inOperand0,
                                                const GGS_location inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_staticListValueListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::setter_insertAtIndex (const GGS_extendStaticListElementAST inOperand0,
                                                       const GGS_location inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_staticListValueListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_staticListValueListAST::setter_removeAtIndex (GGS_extendStaticListElementAST & outOperand0,
                                                       GGS_location & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLocation ;
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

void GGS_staticListValueListAST::setter_popFirst (GGS_extendStaticListElementAST & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLocation ;
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

void GGS_staticListValueListAST::setter_popLast (GGS_extendStaticListElementAST & outOperand0,
                                                 GGS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLocation ;
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

void GGS_staticListValueListAST::method_first (GGS_extendStaticListElementAST & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLocation ;
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

void GGS_staticListValueListAST::method_last (GGS_extendStaticListElementAST & outOperand0,
                                              GGS_location & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLocation ;
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

GGS_staticListValueListAST GGS_staticListValueListAST::add_operation (const GGS_staticListValueListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
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

GGS_staticListValueListAST GGS_staticListValueListAST::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
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

GGS_staticListValueListAST GGS_staticListValueListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::plusAssignOperation (const GGS_staticListValueListAST inList,
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

void GGS_staticListValueListAST::setter_setMElementAtIndex (GGS_extendStaticListElementAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mElement = inOperand ;
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
  
GGS_extendStaticListElementAST GGS_staticListValueListAST::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mElement ;
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

void GGS_staticListValueListAST::setter_setMLocationAtIndex (GGS_location inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLocation = inOperand ;
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
  
GGS_location GGS_staticListValueListAST::getter_mLocationAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLocation ;
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
// Down Enumerator for @staticListValueListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListValueListAST::DownEnumerator_staticListValueListAST (const GGS_staticListValueListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element DownEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST DownEnumerator_staticListValueListAST::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_staticListValueListAST::current_mLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @staticListValueListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListValueListAST::UpEnumerator_staticListValueListAST (const GGS_staticListValueListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element UpEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST UpEnumerator_staticListValueListAST::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_staticListValueListAST::current_mLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @staticListValueListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListValueListAST ("staticListValueListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListValueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListValueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListValueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticListValueListAST result ;
  const GGS_staticListValueListAST * p = (const GGS_staticListValueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListValueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListAST_2E_weak::objectCompare (const GGS_staticListAST_2E_weak & inOperand) const {
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

GGS_staticListAST_2E_weak::GGS_staticListAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak & GGS_staticListAST_2E_weak::operator = (const GGS_staticListAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak::GGS_staticListAST_2E_weak (const GGS_staticListAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak GGS_staticListAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_staticListAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST_2E_weak::unwrappedValue (void) const {
  GGS_staticListAST result ;
  if (isValid ()) {
    const cPtr_staticListAST * p = (cPtr_staticListAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_staticListAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST_2E_weak::bang_staticListAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_staticListAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticListAST) ;
      result = GGS_staticListAST ((cPtr_staticListAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @staticListAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListAST_2E_weak ("staticListAST.weak",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak GGS_staticListAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_staticListAST_2E_weak result ;
  const GGS_staticListAST_2E_weak * p = (const GGS_staticListAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@extendStaticListElementAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_extendStaticListElementAST : public cCollectionElement {
  public: GGS_extendStaticListElementAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                         const GGS_location & in_mEndOfExpression
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListElementAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                                              const GGS_location & in_mEndOfExpression
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListElementAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_extendStaticListElementAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_extendStaticListElementAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_extendStaticListElementAST (mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @extendStaticListElementAST
//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST::GGS_extendStaticListElementAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST::GGS_extendStaticListElementAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    const GGS_extendStaticListElementAST_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_mEndOfExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                const GGS_location & in_mEndOfExpression
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_extendStaticListElementAST (in_mExpression, in_mEndOfExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extendStaticListElementAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_extendStaticListElementAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListElementAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::plusPlusAssignOperation (const GGS_extendStaticListElementAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::class_func_listWithValue (const GGS_extendStaticListExpressionAST & inOperand0,
                                                                                         const GGS_location & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_extendStaticListElementAST_2E_element element (inOperand0, inOperand1) ;
  GGS_extendStaticListElementAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::addAssignOperation (const GGS_extendStaticListExpressionAST & inOperand0,
                                                         const GGS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  const GGS_extendStaticListElementAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::setter_append (const GGS_extendStaticListExpressionAST inOperand0,
                                                    const GGS_location inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_extendStaticListElementAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::setter_insertAtIndex (const GGS_extendStaticListExpressionAST inOperand0,
                                                           const GGS_location inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_extendStaticListElementAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_extendStaticListElementAST::setter_removeAtIndex (GGS_extendStaticListExpressionAST & outOperand0,
                                                           GGS_location & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOfExpression ;
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

void GGS_extendStaticListElementAST::setter_popFirst (GGS_extendStaticListExpressionAST & outOperand0,
                                                      GGS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfExpression ;
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

void GGS_extendStaticListElementAST::setter_popLast (GGS_extendStaticListExpressionAST & outOperand0,
                                                     GGS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfExpression ;
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

void GGS_extendStaticListElementAST::method_first (GGS_extendStaticListExpressionAST & outOperand0,
                                                   GGS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfExpression ;
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

void GGS_extendStaticListElementAST::method_last (GGS_extendStaticListExpressionAST & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfExpression ;
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

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::add_operation (const GGS_extendStaticListElementAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
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

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
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

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::plusAssignOperation (const GGS_extendStaticListElementAST inList,
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

void GGS_extendStaticListElementAST::setter_setMExpressionAtIndex (GGS_extendStaticListExpressionAST inOperand,
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
  
GGS_extendStaticListExpressionAST GGS_extendStaticListElementAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListExpressionAST result ;
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

void GGS_extendStaticListElementAST::setter_setMEndOfExpressionAtIndex (GGS_location inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfExpression = inOperand ;
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
  
GGS_location GGS_extendStaticListElementAST::getter_mEndOfExpressionAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfExpression ;
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
// Down Enumerator for @extendStaticListElementAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_extendStaticListElementAST::DownEnumerator_extendStaticListElementAST (const GGS_extendStaticListElementAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element DownEnumerator_extendStaticListElementAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST DownEnumerator_extendStaticListElementAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_extendStaticListElementAST::current_mEndOfExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @extendStaticListElementAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_extendStaticListElementAST::UpEnumerator_extendStaticListElementAST (const GGS_extendStaticListElementAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element UpEnumerator_extendStaticListElementAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST UpEnumerator_extendStaticListElementAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_extendStaticListElementAST::current_mEndOfExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @extendStaticListElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListElementAST ("extendStaticListElementAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_extendStaticListElementAST result ;
  const GGS_extendStaticListElementAST * p = (const GGS_extendStaticListElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum extendStaticListExpressionAST
//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST::GGS_extendStaticListExpressionAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST GGS_extendStaticListExpressionAST::class_func_expression (const GGS_expressionAST & inAssociatedValue0
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST result ;
  result.mEnum = Enumeration::enum_expression ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_extendStaticListExpressionAST_2E_expression (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST GGS_extendStaticListExpressionAST::class_func_function (const GGS_lstring & inAssociatedValue0,
                                                                                          const GGS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST result ;
  result.mEnum = Enumeration::enum_function ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_extendStaticListExpressionAST_2E_function (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::method_extractExpression (GGS_expressionAST & outAssociatedValue_exp,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_expression) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @extendStaticListExpressionAST.expression invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_extendStaticListExpressionAST_2E_expression *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::method_extractFunction (GGS_lstring & outAssociatedValue_functionName,
                                                                GGS_routineFormalArgumentListAST & outAssociatedValue_formalArgs,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_function) {
    outAssociatedValue_functionName.drop () ;
    outAssociatedValue_formalArgs.drop () ;
    String s ;
    s.appendCString ("method @extendStaticListExpressionAST.function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_extendStaticListExpressionAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_functionName = ptr->mProperty_functionName ;
    outAssociatedValue_formalArgs = ptr->mProperty_formalArgs ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_ GGS_extendStaticListExpressionAST::getter_getExpression (UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticListExpressionAST_2E_expression_3F_ result ;
  if (mEnum == Enumeration::enum_expression) {
    const auto ptr = (const GGS_extendStaticListExpressionAST_2E_expression *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_extendStaticListExpressionAST_2E_expression (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::getAssociatedValuesFor_expression (GGS_expressionAST & out_exp) const {
  const auto ptr = (const GGS_extendStaticListExpressionAST_2E_expression *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function_3F_ GGS_extendStaticListExpressionAST::getter_getFunction (UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticListExpressionAST_2E_function_3F_ result ;
  if (mEnum == Enumeration::enum_function) {
    const auto ptr = (const GGS_extendStaticListExpressionAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_extendStaticListExpressionAST_2E_function (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::getAssociatedValuesFor_function (GGS_lstring & out_functionName,
                                                                         GGS_routineFormalArgumentListAST & out_formalArgs) const {
  const auto ptr = (const GGS_extendStaticListExpressionAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
  out_functionName = ptr->mProperty_functionName ;
  out_formalArgs = ptr->mProperty_formalArgs ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_extendStaticListExpressionAST [3] = {
  "(not built)",
  "expression",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extendStaticListExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_expression == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extendStaticListExpressionAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<enum @extendStaticListExpressionAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_extendStaticListExpressionAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @extendStaticListExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST ("extendStaticListExpressionAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticListExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST GGS_extendStaticListExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST result ;
  const GGS_extendStaticListExpressionAST * p = (const GGS_extendStaticListExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST GGS_extendStaticArrayDeclarationDictAST::builtDictionary (LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST GGS_extendStaticArrayDeclarationDictAST::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_extendStaticArrayDeclarationDictAST::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extendStaticArrayDeclarationDictAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ GGS_extendStaticArrayDeclarationDictAST::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extendStaticArrayDeclarationDictAST_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::plusPlusAssignOperation (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::addAssignOperation (const GGS_string & inKey,
                                                                  const GGS_staticListValueListAST & inArgument0,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::setter_insert (const GGS_string inKey,
                                                             const GGS_staticListValueListAST inArgument0,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extendStaticArrayDeclarationDictAST::getter_hasKey (const GGS_string & inKey
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::method_searchKey (GGS_string inKey,
                                                                GGS_staticListValueListAST & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extendStaticArrayDeclarationDictAST_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_mStaticList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::setter_removeKey (GGS_string inKey,
                                                                GGS_staticListValueListAST & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extendStaticArrayDeclarationDictAST_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_mStaticList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_extendStaticArrayDeclarationDictAST::getter_mStaticListForKey (const GGS_string & inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extendStaticArrayDeclarationDictAST_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get mStaticList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_mStaticList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::setter_setMStaticListForKey (GGS_staticListValueListAST inPropertyValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_extendStaticArrayDeclarationDictAST_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setMStaticListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_mStaticList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @extendStaticArrayDeclarationDictAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_extendStaticArrayDeclarationDictAST::UpEnumerator_extendStaticArrayDeclarationDictAST (const GGS_extendStaticArrayDeclarationDictAST & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extendStaticArrayDeclarationDictAST::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST UpEnumerator_extendStaticArrayDeclarationDictAST::current_mStaticList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mStaticList ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element UpEnumerator_extendStaticArrayDeclarationDictAST::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @extendStaticArrayDeclarationDictAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_extendStaticArrayDeclarationDictAST::DownEnumerator_extendStaticArrayDeclarationDictAST (const GGS_extendStaticArrayDeclarationDictAST & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extendStaticArrayDeclarationDictAST::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST DownEnumerator_extendStaticArrayDeclarationDictAST::current_mStaticList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mStaticList ;
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element DownEnumerator_extendStaticArrayDeclarationDictAST::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @extendStaticArrayDeclarationDictAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ("extendStaticArrayDeclarationDictAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendStaticArrayDeclarationDictAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticArrayDeclarationDictAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticArrayDeclarationDictAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST GGS_extendStaticArrayDeclarationDictAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST result ;
  const GGS_extendStaticArrayDeclarationDictAST * p = (const GGS_extendStaticArrayDeclarationDictAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticArrayDeclarationDictAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @staticlistMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap::GGS_staticlistMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap::~ GGS_staticlistMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap::GGS_staticlistMap (const GGS_staticlistMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap & GGS_staticlistMap::operator = (const GGS_staticlistMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticlistMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticlistMap::getter_hasKey (const GGS_string & inKey
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticlistMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                  const GGS_uint & inLevel
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticlistMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticlistMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_staticlistMap::getter_locationForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_staticlistMap::getter_keyList (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticlistMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticlistMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::performInsert (const GGS_staticlistMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_staticlistMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>
GGS_staticlistMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_staticlistMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>>
GGS_staticlistMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_staticlistMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element_3F_ GGS_staticlistMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticlistMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_staticlistMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticlistMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mStaticListPropertyList = info->mProperty_mStaticListPropertyList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::class_func_mapWithMapToOverride (const GGS_staticlistMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticlistMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticlistMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_staticlistMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::setter_insertKey (GGS_lstring inLKey,
                                          GGS_propertyList inArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const GGS_staticlistMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_staticlistMap::getter_mStaticListPropertyListForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStaticListPropertyList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::setter_setMStaticListPropertyListForKey (GGS_propertyList inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_staticlistMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStaticListPropertyList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_staticlistMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>> & inArray,
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
    ioString.appendString ("mStaticListPropertyList:") ;
    inArray (i COMMA_HERE)->mProperty_mStaticListPropertyList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>> array = sortedInfoArray () ;
    GGS_staticlistMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_staticlistMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_staticlistMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @staticlistMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticlistMap::DownEnumerator_staticlistMap (const GGS_staticlistMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element DownEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList DownEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStaticListPropertyList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @staticlistMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticlistMap::UpEnumerator_staticlistMap (const GGS_staticlistMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element UpEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList UpEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStaticListPropertyList ;
}


//--------------------------------------------------------------------------------------------------
//     @staticlistMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap ("staticlistMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticlistMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticlistMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticlistMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_staticlistMap result ;
  const GGS_staticlistMap * p = (const GGS_staticlistMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticlistMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyList : public cCollectionElement {
  public: GGS_propertyList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyList (const GGS_string & in_mPropertyName,
                                           const GGS_omnibusType & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyList (const GGS_propertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyList::cCollectionElement_propertyList (const GGS_string & in_mPropertyName,
                                                                  const GGS_omnibusType & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyList::cCollectionElement_propertyList (const GGS_propertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyList (mObject.mProperty_mPropertyName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyList
//--------------------------------------------------------------------------------------------------

GGS_propertyList::GGS_propertyList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList::GGS_propertyList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    const GGS_propertyList_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_string & in_mPropertyName,
                                                  const GGS_omnibusType & in_mType
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName, in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_propertyList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::description (String & ioString,
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
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::plusPlusAssignOperation (const GGS_propertyList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::class_func_listWithValue (const GGS_string & inOperand0,
                                                             const GGS_omnibusType & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element element (inOperand0, inOperand1) ;
  GGS_propertyList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::addAssignOperation (const GGS_string & inOperand0,
                                           const GGS_omnibusType & inOperand1
                                           COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::setter_append (const GGS_string inOperand0,
                                      const GGS_omnibusType inOperand1,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::setter_insertAtIndex (const GGS_string inOperand0,
                                             const GGS_omnibusType inOperand1,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_propertyList::setter_removeAtIndex (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
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

void GGS_propertyList::setter_popFirst (GGS_string & outOperand0,
                                        GGS_omnibusType & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_propertyList::setter_popLast (GGS_string & outOperand0,
                                       GGS_omnibusType & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
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

void GGS_propertyList::method_first (GGS_string & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_propertyList::method_last (GGS_string & outOperand0,
                                    GGS_omnibusType & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
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

GGS_propertyList GGS_propertyList::add_operation (const GGS_propertyList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyList result ;
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

GGS_propertyList GGS_propertyList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
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

GGS_propertyList GGS_propertyList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyList::plusAssignOperation (const GGS_propertyList inList,
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

void GGS_propertyList::setter_setMPropertyNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_propertyList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
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

void GGS_propertyList::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
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
  
GGS_omnibusType GGS_propertyList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
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

ComparisonResult GGS_propertyList::objectCompare (const GGS_propertyList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_propertyList_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_propertyList_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @propertyList
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyList::DownEnumerator_propertyList (const GGS_propertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element DownEnumerator_propertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @propertyList
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyList::UpEnumerator_propertyList (const GGS_propertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList_2E_element UpEnumerator_propertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @propertyList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyList ("propertyList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_propertyList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyList result ;
  const GGS_propertyList * p = (const GGS_propertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @staticListInitializationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap::GGS_staticListInitializationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap::~ GGS_staticListInitializationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap::GGS_staticListInitializationMap (const GGS_staticListInitializationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap & GGS_staticListInitializationMap::operator = (const GGS_staticListInitializationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListInitializationMap::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListInitializationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                const GGS_uint & inLevel
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListInitializationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListInitializationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_staticListInitializationMap::getter_locationForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_staticListInitializationMap::getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListInitializationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticListInitializationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::performInsert (const GGS_staticListInitializationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_staticListInitializationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>
GGS_staticListInitializationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_staticListInitializationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>>
GGS_staticListInitializationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_staticListInitializationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element_3F_ GGS_staticListInitializationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListInitializationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_staticListInitializationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticListInitializationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInitializationList = info->mProperty_mInitializationList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::class_func_mapWithMapToOverride (const GGS_staticListInitializationMap & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticListInitializationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_staticListInitializationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::setter_insertKey (GGS_lstring inLKey,
                                                        GGS_stringlist inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_staticListInitializationMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_staticListInitializationMap::getter_mInitializationListForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitializationList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::setter_setMInitializationListForKey (GGS_stringlist inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_staticListInitializationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitializationList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_staticListInitializationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>> & inArray,
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
    ioString.appendString ("mInitializationList:") ;
    inArray (i COMMA_HERE)->mProperty_mInitializationList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>> array = sortedInfoArray () ;
    GGS_staticListInitializationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_staticListInitializationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_staticListInitializationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @staticListInitializationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListInitializationMap::DownEnumerator_staticListInitializationMap (const GGS_staticListInitializationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element DownEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitializationList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @staticListInitializationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListInitializationMap::UpEnumerator_staticListInitializationMap (const GGS_staticListInitializationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element UpEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitializationList ;
}


//--------------------------------------------------------------------------------------------------
//     @staticListInitializationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInitializationMap ("staticListInitializationMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListInitializationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInitializationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInitializationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  const GGS_staticListInitializationMap * p = (const GGS_staticListInitializationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInitializationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @staticListInvokedFunctionSetMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap::GGS_staticListInvokedFunctionSetMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap::~ GGS_staticListInvokedFunctionSetMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap::GGS_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap & GGS_staticListInvokedFunctionSetMap::operator = (const GGS_staticListInvokedFunctionSetMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListInvokedFunctionSetMap::getter_hasKey (const GGS_string & inKey
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListInvokedFunctionSetMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                    const GGS_uint & inLevel
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListInvokedFunctionSetMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticListInvokedFunctionSetMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_staticListInvokedFunctionSetMap::getter_locationForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_staticListInvokedFunctionSetMap::getter_keyList (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticListInvokedFunctionSetMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticListInvokedFunctionSetMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::performInsert (const GGS_staticListInvokedFunctionSetMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_staticListInvokedFunctionSetMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element>
GGS_staticListInvokedFunctionSetMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_staticListInvokedFunctionSetMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element>>
GGS_staticListInvokedFunctionSetMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_staticListInvokedFunctionSetMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element_3F_ GGS_staticListInvokedFunctionSetMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListInvokedFunctionSetMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_staticListInvokedFunctionSetMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticListInvokedFunctionSetMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInvokedFunctionSet = info->mProperty_mInvokedFunctionSet ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::class_func_mapWithMapToOverride (const GGS_staticListInvokedFunctionSetMap & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticListInvokedFunctionSetMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_staticListInvokedFunctionSetMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::setter_insertKey (GGS_lstring inLKey,
                                                            GGS_stringset inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_staticListInvokedFunctionSetMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::method_searchKey (GGS_lstring inLKey,
                                                            GGS_stringset & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "INTERNAL ERROR" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mInvokedFunctionSet ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_staticListInvokedFunctionSetMap::getter_mInvokedFunctionSetForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInvokedFunctionSet ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::setter_setMInvokedFunctionSetForKey (GGS_stringset inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_staticListInvokedFunctionSetMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInvokedFunctionSet = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_staticListInvokedFunctionSetMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element>> & inArray,
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
    ioString.appendString ("mInvokedFunctionSet:") ;
    inArray (i COMMA_HERE)->mProperty_mInvokedFunctionSet.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInvokedFunctionSetMap_2E_element>> array = sortedInfoArray () ;
    GGS_staticListInvokedFunctionSetMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_staticListInvokedFunctionSetMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_staticListInvokedFunctionSetMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @staticListInvokedFunctionSetMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListInvokedFunctionSetMap::DownEnumerator_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element DownEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset DownEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @staticListInvokedFunctionSetMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListInvokedFunctionSetMap::UpEnumerator_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element UpEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset UpEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInvokedFunctionSet ;
}


//--------------------------------------------------------------------------------------------------
//     @staticListInvokedFunctionSetMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ("staticListInvokedFunctionSetMap",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListInvokedFunctionSetMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInvokedFunctionSetMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInvokedFunctionSetMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap result ;
  const GGS_staticListInvokedFunctionSetMap * p = (const GGS_staticListInvokedFunctionSetMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInvokedFunctionSetMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedStaticList_2E_weak::objectCompare (const GGS_decoratedStaticList_2E_weak & inOperand) const {
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

GGS_decoratedStaticList_2E_weak::GGS_decoratedStaticList_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak & GGS_decoratedStaticList_2E_weak::operator = (const GGS_decoratedStaticList & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak::GGS_decoratedStaticList_2E_weak (const GGS_decoratedStaticList & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak GGS_decoratedStaticList_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedStaticList_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList_2E_weak::unwrappedValue (void) const {
  GGS_decoratedStaticList result ;
  if (isValid ()) {
    const cPtr_decoratedStaticList * p = (cPtr_decoratedStaticList *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedStaticList (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList_2E_weak::bang_decoratedStaticList_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedStaticList result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedStaticList) ;
      result = GGS_decoratedStaticList ((cPtr_decoratedStaticList *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedStaticList.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ("decoratedStaticList.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedStaticList_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedStaticList_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedStaticList_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak GGS_decoratedStaticList_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedStaticList_2E_weak result ;
  const GGS_decoratedStaticList_2E_weak * p = (const GGS_decoratedStaticList_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedStaticList_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStaticList.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const GGS_staticListInitializationMap inObject,
                                                 const GGS_staticListInvokedFunctionSetMap constinArgument_inUsefulStaticArrayMap,
                                                 GGS_string & ioArgument_ioLLVMcode,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_first_22788 = GGS_bool (true) ;
  const GGS_staticListInitializationMap temp_0 = inObject ;
  UpEnumerator_staticListInitializationMap enumerator_22812 (temp_0) ;
  while (enumerator_22812.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_22812.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 539)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_first_22788.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_first_22788 = GGS_bool (false) ;
            ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_22812.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(enumerator_22812.current_mInitializationList (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 545)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GGS_string (" x %"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (function_llvmNameForStaticListElementType (enumerator_22812.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GGS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)) ;
        UpEnumerator_stringlist enumerator_23213 (enumerator_22812.current_mInitializationList (HERE)) ;
        while (enumerator_23213.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (function_llvmNameForStaticListElementType (enumerator_22812.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (enumerator_23213.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)) ;
          enumerator_23213.gotoNextObject () ;
          if (enumerator_23213.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n]\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)) ;
      }
    }
    enumerator_22812.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum unifiedTypeMapEntry
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry::GGS_unifiedTypeMapEntry (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntry::class_func_null (UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result ;
  result.mEnum = Enumeration::enum_null ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntry::class_func_element (const GGS_unifiedTypeMapElementClass_3F_ & inAssociatedValue0
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result ;
  result.mEnum = Enumeration::enum_element ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_unifiedTypeMapEntry_2E_element (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry::method_extractElement (GGS_unifiedTypeMapElementClass_3F_ & outAssociatedValue_weakElement,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_element) {
    outAssociatedValue_weakElement.drop () ;
    String s ;
    s.appendCString ("method @unifiedTypeMapEntry.element invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_weakElement = ptr->mProperty_weakElement ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry::getter_getElement (UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  if (mEnum == Enumeration::enum_element) {
    const auto ptr = (const GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_unifiedTypeMapEntry_2E_element (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry::getAssociatedValuesFor_element (GGS_unifiedTypeMapElementClass_3F_ & out_weakElement) const {
  const auto ptr = (const GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
  out_weakElement = ptr->mProperty_weakElement ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_unifiedTypeMapEntry [3] = {
  "(not built)",
  "null",
  "element"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMapEntry::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMapEntry::getter_isElement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_element == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @unifiedTypeMapEntry: ") ;
  ioString.appendCString (gEnumNameArrayFor_unifiedTypeMapEntry [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry::objectCompare (const GGS_unifiedTypeMapEntry & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_element: {
        const auto left = (GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_unifiedTypeMapEntry_2E_element *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @unifiedTypeMapEntry generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ("unifiedTypeMapEntry",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntry::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result ;
  const GGS_unifiedTypeMapEntry * p = (const GGS_unifiedTypeMapEntry *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@routineTypedSignature' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineTypedSignature : public cCollectionElement {
  public: GGS_routineTypedSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineTypedSignature (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                    const GGS_lstring & in_mSelector,
                                                    const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                    const GGS_lstring & in_mFormalArgumentName
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineTypedSignature (const GGS_routineTypedSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GGS_lstring & in_mSelector,
                                                                                    const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                    const GGS_lstring & in_mFormalArgumentName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GGS_routineTypedSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mTypeProxy, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineTypedSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineTypedSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineTypedSignature
//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature::GGS_routineTypedSignature (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature::GGS_routineTypedSignature (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    const GGS_routineTypedSignature_2E_element element (p->mObject.mProperty_mFormalArgumentPassingMode, p->mObject.mProperty_mSelector, p->mObject.mProperty_mTypeProxy, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GGS_lstring & in_mSelector,
                                                           const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                           const GGS_lstring & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineTypedSignature::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineTypedSignature::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::description (String & ioString,
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
      ioString.appendString ("mTypeProxy:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTypeProxy.description (ioString, inIndentation + 1) ;
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

GGS_routineTypedSignature GGS_routineTypedSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::plusPlusAssignOperation (const GGS_routineTypedSignature_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_unifiedTypeMapEntry & inOperand2,
                                                                               const GGS_lstring & inOperand3
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_routineTypedSignature result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_unifiedTypeMapEntry & inOperand2,
                                                    const GGS_lstring & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_unifiedTypeMapEntry inOperand2,
                                               const GGS_lstring inOperand3,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_unifiedTypeMapEntry inOperand2,
                                                      const GGS_lstring inOperand3,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_routineTypedSignature::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_unifiedTypeMapEntry & outOperand2,
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
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTypeProxy ;
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

void GGS_routineTypedSignature::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_unifiedTypeMapEntry & outOperand2,
                                                 GGS_lstring & outOperand3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTypeProxy ;
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

void GGS_routineTypedSignature::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_unifiedTypeMapEntry & outOperand2,
                                                GGS_lstring & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTypeProxy ;
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

void GGS_routineTypedSignature::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_unifiedTypeMapEntry & outOperand2,
                                              GGS_lstring & outOperand3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTypeProxy ;
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

void GGS_routineTypedSignature::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_unifiedTypeMapEntry & outOperand2,
                                             GGS_lstring & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTypeProxy ;
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

GGS_routineTypedSignature GGS_routineTypedSignature::add_operation (const GGS_routineTypedSignature & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
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

GGS_routineTypedSignature GGS_routineTypedSignature::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
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

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::plusAssignOperation (const GGS_routineTypedSignature inList,
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

void GGS_routineTypedSignature::setter_setMFormalArgumentPassingModeAtIndex (GGS_procFormalArgumentPassingMode inOperand,
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
  
GGS_procFormalArgumentPassingMode GGS_routineTypedSignature::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
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

void GGS_routineTypedSignature::setter_setMSelectorAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_routineTypedSignature::getter_mSelectorAtIndex (const GGS_uint & inIndex,
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

void GGS_routineTypedSignature::setter_setMTypeProxyAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeProxy = inOperand ;
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
  
GGS_unifiedTypeMapEntry GGS_routineTypedSignature::getter_mTypeProxyAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeProxy ;
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

void GGS_routineTypedSignature::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_routineTypedSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
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

ComparisonResult GGS_routineTypedSignature::objectCompare (const GGS_routineTypedSignature & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_routineTypedSignature_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_routineTypedSignature_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineTypedSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineTypedSignature::DownEnumerator_routineTypedSignature (const GGS_routineTypedSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element DownEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineTypedSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineTypedSignature::UpEnumerator_routineTypedSignature (const GGS_routineTypedSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element UpEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineTypedSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  const GGS_routineTypedSignature * p = (const GGS_routineTypedSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineTypedSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListIndirectRoutineIR_2E_weak::objectCompare (const GGS_staticListIndirectRoutineIR_2E_weak & inOperand) const {
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

GGS_staticListIndirectRoutineIR_2E_weak::GGS_staticListIndirectRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak & GGS_staticListIndirectRoutineIR_2E_weak::operator = (const GGS_staticListIndirectRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak::GGS_staticListIndirectRoutineIR_2E_weak (const GGS_staticListIndirectRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak GGS_staticListIndirectRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_staticListIndirectRoutineIR result ;
  if (isValid ()) {
    const cPtr_staticListIndirectRoutineIR * p = (cPtr_staticListIndirectRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_staticListIndirectRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR_2E_weak::bang_staticListIndirectRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_staticListIndirectRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticListIndirectRoutineIR) ;
      result = GGS_staticListIndirectRoutineIR ((cPtr_staticListIndirectRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @staticListIndirectRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ("staticListIndirectRoutineIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticListIndirectRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListIndirectRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListIndirectRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak GGS_staticListIndirectRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR_2E_weak result ;
  const GGS_staticListIndirectRoutineIR_2E_weak * p = (const GGS_staticListIndirectRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListIndirectRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @infixOperatorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap::GGS_infixOperatorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap::~ GGS_infixOperatorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap::GGS_infixOperatorMap (const GGS_infixOperatorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap & GGS_infixOperatorMap::operator = (const GGS_infixOperatorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_infixOperatorMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_infixOperatorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_infixOperatorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_infixOperatorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_infixOperatorMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_infixOperatorMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_infixOperatorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_infixOperatorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::performInsert (const GGS_infixOperatorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_infixOperatorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element>
GGS_infixOperatorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_infixOperatorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element>>
GGS_infixOperatorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_infixOperatorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element_3F_ GGS_infixOperatorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_infixOperatorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_infixOperatorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_infixOperatorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mResultType = info->mProperty_mResultType ;
      element.mProperty_mOperatorUsage = info->mProperty_mOperatorUsage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::class_func_mapWithMapToOverride (const GGS_infixOperatorMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_infixOperatorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_infixOperatorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_omnibusType inArgument0,
                                             GGS_omnibusInfixOperatorUsage inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_infixOperatorMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_omnibusType & outArgument0,
                                             GGS_omnibusInfixOperatorUsage & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mResultType ;
    outArgument1 = info->mProperty_mOperatorUsage ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element> info = infoForKey (key) ;
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

GGS_omnibusInfixOperatorUsage GGS_infixOperatorMap::getter_mOperatorUsageForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_omnibusInfixOperatorUsage result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element> info = infoForKey (key) ;
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

void GGS_infixOperatorMap::setter_setMResultTypeForKey (GGS_omnibusType inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_infixOperatorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_infixOperatorMap::setter_setMOperatorUsageForKey (GGS_omnibusInfixOperatorUsage inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_infixOperatorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_infixOperatorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element>> & inArray,
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
    ioString.appendString ("mResultType:") ;
    inArray (i COMMA_HERE)->mProperty_mResultType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOperatorUsage:") ;
    inArray (i COMMA_HERE)->mProperty_mOperatorUsage.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_infixOperatorMap_2E_element>> array = sortedInfoArray () ;
    GGS_infixOperatorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_infixOperatorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_infixOperatorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @infixOperatorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_infixOperatorMap::DownEnumerator_infixOperatorMap (const GGS_infixOperatorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element DownEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage DownEnumerator_infixOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @infixOperatorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_infixOperatorMap::UpEnumerator_infixOperatorMap (const GGS_infixOperatorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element UpEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage UpEnumerator_infixOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOperatorUsage ;
}


//--------------------------------------------------------------------------------------------------
//     @infixOperatorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  const GGS_infixOperatorMap * p = (const GGS_infixOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

