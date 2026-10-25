#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@scopeStack' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_scopeStack : public CollectionElementPtr {
  public: GGS_scopeStack_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_scopeStack (const GGS_scopeKind & in_mScopeKind,
                                           const GGS_bool & in_mFirstBranch,
                                           const GGS_referenceStateMap & in_mInitialStateMap,
                                           const GGS_referenceStateMap & in_mReferenceStateMap,
                                           const GGS_lstringlist & in_mObjectList
                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_scopeStack (const GGS_scopeStack_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_scopeStack::CollectionElementPtr_scopeStack (const GGS_scopeKind & in_mScopeKind,
                                                                  const GGS_bool & in_mFirstBranch,
                                                                  const GGS_referenceStateMap & in_mInitialStateMap,
                                                                  const GGS_referenceStateMap & in_mReferenceStateMap,
                                                                  const GGS_lstringlist & in_mObjectList
                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_scopeStack::CollectionElementPtr_scopeStack (const GGS_scopeStack_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mScopeKind, inElement.mProperty_mFirstBranch, inElement.mProperty_mInitialStateMap, inElement.mProperty_mReferenceStateMap, inElement.mProperty_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_scopeStack::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_scopeStack::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @scopeStack
//--------------------------------------------------------------------------------------------------

GGS_scopeStack::GGS_scopeStack (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack::GGS_scopeStack (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_scopeStack * p = (CollectionElementPtr_scopeStack *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_scopeStack) ;
    const GGS_scopeStack_2E_element element (p->mObject.mProperty_mScopeKind, p->mObject.mProperty_mFirstBranch, p->mObject.mProperty_mInitialStateMap, p->mObject.mProperty_mReferenceStateMap, p->mObject.mProperty_mObjectList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                const GGS_scopeKind & in_mScopeKind,
                                                const GGS_bool & in_mFirstBranch,
                                                const GGS_referenceStateMap & in_mInitialStateMap,
                                                const GGS_referenceStateMap & in_mReferenceStateMap,
                                                const GGS_lstringlist & in_mObjectList
                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_scopeStack * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_scopeStack (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_scopeStack::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_scopeStack::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::description (String & ioString,
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
      ioString.appendString ("mScopeKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mScopeKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFirstBranch:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFirstBranch.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInitialStateMap:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInitialStateMap.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReferenceStateMap:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReferenceStateMap.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObjectList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObjectList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_scopeStack result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::plusPlusAssignOperation (const GGS_scopeStack_2E_element & inValue
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::class_func_listWithValue (const GGS_scopeKind & inOperand0,
                                                         const GGS_bool & inOperand1,
                                                         const GGS_referenceStateMap & inOperand2,
                                                         const GGS_referenceStateMap & inOperand3,
                                                         const GGS_lstringlist & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_scopeStack result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::addAssignOperation (const GGS_scopeKind & inOperand0,
                                         const GGS_bool & inOperand1,
                                         const GGS_referenceStateMap & inOperand2,
                                         const GGS_referenceStateMap & inOperand3,
                                         const GGS_lstringlist & inOperand4
                                         COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_append (const GGS_scopeKind inOperand0,
                                    const GGS_bool inOperand1,
                                    const GGS_referenceStateMap inOperand2,
                                    const GGS_referenceStateMap inOperand3,
                                    const GGS_lstringlist inOperand4,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_insertAtIndex (const GGS_scopeKind inOperand0,
                                           const GGS_bool inOperand1,
                                           const GGS_referenceStateMap inOperand2,
                                           const GGS_referenceStateMap inOperand3,
                                           const GGS_lstringlist inOperand4,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_scopeStack_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_scopeStack::setter_removeAtIndex (GGS_scopeKind & outOperand0,
                                           GGS_bool & outOperand1,
                                           GGS_referenceStateMap & outOperand2,
                                           GGS_referenceStateMap & outOperand3,
                                           GGS_lstringlist & outOperand4,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mScopeKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFirstBranch ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mObjectList ;
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

void GGS_scopeStack::setter_popFirst (GGS_scopeKind & outOperand0,
                                      GGS_bool & outOperand1,
                                      GGS_referenceStateMap & outOperand2,
                                      GGS_referenceStateMap & outOperand3,
                                      GGS_lstringlist & outOperand4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mScopeKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFirstBranch ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mObjectList ;
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

void GGS_scopeStack::setter_popLast (GGS_scopeKind & outOperand0,
                                     GGS_bool & outOperand1,
                                     GGS_referenceStateMap & outOperand2,
                                     GGS_referenceStateMap & outOperand3,
                                     GGS_lstringlist & outOperand4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mScopeKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFirstBranch ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mObjectList ;
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

void GGS_scopeStack::method_first (GGS_scopeKind & outOperand0,
                                   GGS_bool & outOperand1,
                                   GGS_referenceStateMap & outOperand2,
                                   GGS_referenceStateMap & outOperand3,
                                   GGS_lstringlist & outOperand4,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mScopeKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFirstBranch ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mObjectList ;
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

void GGS_scopeStack::method_last (GGS_scopeKind & outOperand0,
                                  GGS_bool & outOperand1,
                                  GGS_referenceStateMap & outOperand2,
                                  GGS_referenceStateMap & outOperand3,
                                  GGS_lstringlist & outOperand4,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mScopeKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFirstBranch ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialStateMap ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mReferenceStateMap ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mObjectList ;
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

GGS_scopeStack GGS_scopeStack::add_operation (const GGS_scopeStack & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_scopeStack result ;
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

GGS_scopeStack GGS_scopeStack::subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
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

GGS_scopeStack GGS_scopeStack::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::plusAssignOperation (const GGS_scopeStack inList,
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

void GGS_scopeStack::setter_setMScopeKindAtIndex (GGS_scopeKind inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mScopeKind = inOperand ;
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

GGS_scopeKind GGS_scopeStack::getter_mScopeKindAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mScopeKind ;
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

void GGS_scopeStack::setter_setMFirstBranchAtIndex (GGS_bool inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFirstBranch = inOperand ;
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

GGS_bool GGS_scopeStack::getter_mFirstBranchAtIndex (const GGS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFirstBranch ;
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

void GGS_scopeStack::setter_setMInitialStateMapAtIndex (GGS_referenceStateMap inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialStateMap = inOperand ;
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

GGS_referenceStateMap GGS_scopeStack::getter_mInitialStateMapAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialStateMap ;
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

void GGS_scopeStack::setter_setMReferenceStateMapAtIndex (GGS_referenceStateMap inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceStateMap = inOperand ;
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

GGS_referenceStateMap GGS_scopeStack::getter_mReferenceStateMapAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceStateMap ;
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

void GGS_scopeStack::setter_setMObjectListAtIndex (GGS_lstringlist inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectList = inOperand ;
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

GGS_lstringlist GGS_scopeStack::getter_mObjectListAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectList ;
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
// Down Enumerator for @scopeStack
//--------------------------------------------------------------------------------------------------

DownEnumerator_scopeStack::DownEnumerator_scopeStack (const GGS_scopeStack & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element DownEnumerator_scopeStack::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind DownEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mScopeKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap DownEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap DownEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @scopeStack
//--------------------------------------------------------------------------------------------------

UpEnumerator_scopeStack::UpEnumerator_scopeStack (const GGS_scopeStack & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element UpEnumerator_scopeStack::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind UpEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mScopeKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap UpEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap UpEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectList ;
}




//--------------------------------------------------------------------------------------------------
//     @scopeStack generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeStack (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_scopeStack result ;
  const GGS_scopeStack * p = (const GGS_scopeStack *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum LValueOperandAST
//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST::GGS_LValueOperandAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::class_func_noOperand (UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_noOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::class_func_property (const GGS_lstring & inAssociatedValue0,
                                                                const GGS_LValueOperandAST & inAssociatedValue1
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_LValueOperandAST_2E_property (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::class_func_arrayAccess (const GGS_expressionAST & inAssociatedValue0,
                                                                   const GGS_location & inAssociatedValue1,
                                                                   const GGS_bool & inAssociatedValue2,
                                                                   const GGS_LValueOperandAST & inAssociatedValue3
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_arrayAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_LValueOperandAST_2E_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::method_extractProperty (GGS_lstring & outAssociatedValue_name,
                                                   GGS_LValueOperandAST & outAssociatedValue_next,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_name.drop () ;
    outAssociatedValue_next.drop () ;
    String s ;
    s.appendCString ("proc @LValueOperandAST.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
    outAssociatedValue_next = ptr->mProperty_next ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::method_extractArrayAccess (GGS_expressionAST & outAssociatedValue_index,
                                                      GGS_location & outAssociatedValue_endOfIndex,
                                                      GGS_bool & outAssociatedValue_checkIndexExpression,
                                                      GGS_LValueOperandAST & outAssociatedValue_next,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayAccess) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    outAssociatedValue_next.drop () ;
    String s ;
    s.appendCString ("proc @LValueOperandAST.arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
    outAssociatedValue_next = ptr->mProperty_next ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_property_3F_ GGS_LValueOperandAST::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GGS_LValueOperandAST_2E_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_LValueOperandAST_2E_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::getAssociatedValuesFor_property (GGS_lstring & out_name,
                                                            GGS_LValueOperandAST & out_next) const {
  const auto ptr = (const GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
  out_next = ptr->mProperty_next ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST_2E_arrayAccess_3F_ GGS_LValueOperandAST::getter_getArrayAccess (UNUSED_LOCATION_ARGS) const {
  GGS_LValueOperandAST_2E_arrayAccess_3F_ result ;
  if (mEnum == Enumeration::enum_arrayAccess) {
    const auto ptr = (const GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_LValueOperandAST_2E_arrayAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::getAssociatedValuesFor_arrayAccess (GGS_expressionAST & out_index,
                                                               GGS_location & out_endOfIndex,
                                                               GGS_bool & out_checkIndexExpression,
                                                               GGS_LValueOperandAST & out_next) const {
  const auto ptr = (const GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  out_next = ptr->mProperty_next ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_LValueOperandAST [4] = {
  "(not built)",
  "noOperand",
  "property",
  "arrayAccess"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_LValueOperandAST::getter_isNoOperand (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noOperand == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_LValueOperandAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_LValueOperandAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueOperandAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @LValueOperandAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_LValueOperandAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_LValueOperandAST::objectCompare (const GGS_LValueOperandAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_property: {
        const auto left = (GGS_LValueOperandAST_2E_property *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_LValueOperandAST_2E_property *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_arrayAccess: {
        const auto left = (GGS_LValueOperandAST_2E_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_LValueOperandAST_2E_arrayAccess *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @LValueOperandAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST ("LValueOperandAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueOperandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueOperandAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueOperandAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueOperandAST GGS_LValueOperandAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_LValueOperandAST result ;
  const GGS_LValueOperandAST * p = (const GGS_LValueOperandAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueOperandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum valuedObjectState
//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState::GGS_valuedObjectState (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::class_func_noValue (UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_noValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::class_func_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_hasUnreadValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::class_func_hasReadValue (UNUSED_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_hasReadValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasUnreadValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasReadValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObjectState::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @valuedObjectState: ") ;
  ioString.appendCString (gEnumNameArrayFor_valuedObjectState [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_valuedObjectState::objectCompare (const GGS_valuedObjectState & inOperand) const {
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
//     @valuedObjectState generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObjectState (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_valuedObjectState::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_valuedObjectState result ;
  const GGS_valuedObjectState * p = (const GGS_valuedObjectState *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObjectState *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObjectState", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum valuedObject
//--------------------------------------------------------------------------------------------------

GGS_valuedObject::GGS_valuedObject (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_driver (const GGS_omnibusType & inAssociatedValue0,
                                                      const GGS_bool & inAssociatedValue1
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_driver ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_driver (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_task (const GGS_omnibusType & inAssociatedValue0
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_task ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_task (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_globalConstant (const GGS_objectIR & inAssociatedValue0
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_globalConstant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_globalConstant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_localConstant (const GGS_omnibusType & inAssociatedValue0,
                                                             const GGS_lstring & inAssociatedValue1,
                                                             const GGS_bool & inAssociatedValue2
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_localConstant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_localConstant (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_localVariable (const GGS_omnibusType & inAssociatedValue0,
                                                             const GGS_lstring & inAssociatedValue1
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_localVariable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_localVariable (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::class_func_globalSyncInstance (const GGS_omnibusType & inAssociatedValue0,
                                                                  const GGS_lstring & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject result ;
  result.mEnum = Enumeration::enum_globalSyncInstance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_valuedObject_2E_globalSyncInstance (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractDriver (GGS_omnibusType & outAssociatedValue_type,
                                             GGS_bool & outAssociatedValue_instancied,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_driver) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_instancied.drop () ;
    String s ;
    s.appendCString ("proc @valuedObject.driver invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_driver *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_instancied = ptr->mProperty_instancied ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractTask (GGS_omnibusType & outAssociatedValue_type,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_task) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("proc @valuedObject.task invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_task *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractGlobalConstant (GGS_objectIR & outAssociatedValue_objectIR,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_globalConstant) {
    outAssociatedValue_objectIR.drop () ;
    String s ;
    s.appendCString ("proc @valuedObject.globalConstant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_objectIR = ptr->mProperty_objectIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractLocalConstant (GGS_omnibusType & outAssociatedValue_type,
                                                    GGS_lstring & outAssociatedValue_omnibusName,
                                                    GGS_bool & outAssociatedValue_isFormalInputArgument,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_localConstant) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    outAssociatedValue_isFormalInputArgument.drop () ;
    String s ;
    s.appendCString ("proc @valuedObject.localConstant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_localConstant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
    outAssociatedValue_isFormalInputArgument = ptr->mProperty_isFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractLocalVariable (GGS_omnibusType & outAssociatedValue_type,
                                                    GGS_lstring & outAssociatedValue_omnibusName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_localVariable) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    String s ;
    s.appendCString ("proc @valuedObject.localVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_localVariable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::method_extractGlobalSyncInstance (GGS_omnibusType & outAssociatedValue_type,
                                                         GGS_lstring & outAssociatedValue_omnibusName,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_globalSyncInstance) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    String s ;
    s.appendCString ("proc @valuedObject.globalSyncInstance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_valuedObject_2E_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_driver_3F_ GGS_valuedObject::getter_getDriver (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_driver_3F_ result ;
  if (mEnum == Enumeration::enum_driver) {
    const auto ptr = (const GGS_valuedObject_2E_driver *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_driver (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_driver (GGS_omnibusType & out_type,
                                                      GGS_bool & out_instancied) const {
  const auto ptr = (const GGS_valuedObject_2E_driver *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_instancied = ptr->mProperty_instancied ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_task_3F_ GGS_valuedObject::getter_getTask (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_task_3F_ result ;
  if (mEnum == Enumeration::enum_task) {
    const auto ptr = (const GGS_valuedObject_2E_task *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_task (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_task (GGS_omnibusType & out_type) const {
  const auto ptr = (const GGS_valuedObject_2E_task *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalConstant_3F_ GGS_valuedObject::getter_getGlobalConstant (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_globalConstant_3F_ result ;
  if (mEnum == Enumeration::enum_globalConstant) {
    const auto ptr = (const GGS_valuedObject_2E_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_globalConstant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_globalConstant (GGS_objectIR & out_objectIR) const {
  const auto ptr = (const GGS_valuedObject_2E_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
  out_objectIR = ptr->mProperty_objectIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localConstant_3F_ GGS_valuedObject::getter_getLocalConstant (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_localConstant_3F_ result ;
  if (mEnum == Enumeration::enum_localConstant) {
    const auto ptr = (const GGS_valuedObject_2E_localConstant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_localConstant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_localConstant (GGS_omnibusType & out_type,
                                                             GGS_lstring & out_omnibusName,
                                                             GGS_bool & out_isFormalInputArgument) const {
  const auto ptr = (const GGS_valuedObject_2E_localConstant *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
  out_isFormalInputArgument = ptr->mProperty_isFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_localVariable_3F_ GGS_valuedObject::getter_getLocalVariable (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_localVariable_3F_ result ;
  if (mEnum == Enumeration::enum_localVariable) {
    const auto ptr = (const GGS_valuedObject_2E_localVariable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_localVariable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_localVariable (GGS_omnibusType & out_type,
                                                             GGS_lstring & out_omnibusName) const {
  const auto ptr = (const GGS_valuedObject_2E_localVariable *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject_2E_globalSyncInstance_3F_ GGS_valuedObject::getter_getGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  GGS_valuedObject_2E_globalSyncInstance_3F_ result ;
  if (mEnum == Enumeration::enum_globalSyncInstance) {
    const auto ptr = (const GGS_valuedObject_2E_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_valuedObject_2E_globalSyncInstance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::getAssociatedValuesFor_globalSyncInstance (GGS_omnibusType & out_type,
                                                                  GGS_lstring & out_omnibusName) const {
  const auto ptr = (const GGS_valuedObject_2E_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObject [7] = {
  "(not built)",
  "driver",
  "task",
  "globalConstant",
  "localConstant",
  "localVariable",
  "globalSyncInstance"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isDriver (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_driver == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isTask (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_task == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_globalConstant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_localConstant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_localVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_valuedObject::getter_isGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_globalSyncInstance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_valuedObject::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @valuedObject: ") ;
  ioString.appendCString (gEnumNameArrayFor_valuedObject [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @valuedObject generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_valuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_valuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_valuedObject (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_valuedObject::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_valuedObject result ;
  const GGS_valuedObject * p = (const GGS_valuedObject *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_valuedObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum scopeKind
//--------------------------------------------------------------------------------------------------

GGS_scopeKind::GGS_scopeKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeKind::class_func_selectScope (UNUSED_LOCATION_ARGS) {
  GGS_scopeKind result ;
  result.mEnum = Enumeration::enum_selectScope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeKind::class_func_repeatScope (UNUSED_LOCATION_ARGS) {
  GGS_scopeKind result ;
  result.mEnum = Enumeration::enum_repeatScope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectScope == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_repeatScope == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeKind::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @scopeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_scopeKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @scopeKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_scopeKind result ;
  const GGS_scopeKind * p = (const GGS_scopeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @referenceStateMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::GGS_referenceStateMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::~ GGS_referenceStateMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::GGS_referenceStateMap (const GGS_referenceStateMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap & GGS_referenceStateMap::operator = (const GGS_referenceStateMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_referenceStateMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_referenceStateMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_referenceStateMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_referenceStateMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_referenceStateMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_referenceStateMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_referenceStateMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::performInsert (const GGS_referenceStateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_referenceStateMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>
GGS_referenceStateMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_referenceStateMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>>
GGS_referenceStateMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_referenceStateMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_ GGS_referenceStateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_referenceStateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_referenceStateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_referenceStateMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mState = info->mProperty_mState ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::class_func_mapWithMapToOverride (const GGS_referenceStateMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_valuedObjectState inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_referenceStateMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_valuedObjectState & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info ;
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
    outArgument0 = info->mProperty_mState ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_referenceStateMap::getter_mStateForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_valuedObjectState result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mState ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::setter_setMStateForKey (GGS_valuedObjectState inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_referenceStateMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mState = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_referenceStateMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> & inArray,
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
    ioString.appendString ("mState:") ;
    inArray (i COMMA_HERE)->mProperty_mState.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> array = sortedInfoArray () ;
    GGS_referenceStateMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_referenceStateMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @referenceStateMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_referenceStateMap::DownEnumerator_referenceStateMap (const GGS_referenceStateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element DownEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState DownEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @referenceStateMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_referenceStateMap::UpEnumerator_referenceStateMap (const GGS_referenceStateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element UpEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState UpEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mState ;
}


//--------------------------------------------------------------------------------------------------
//     @referenceStateMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_referenceStateMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  const GGS_referenceStateMap * p = (const GGS_referenceStateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_referenceStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@valuedObjectState string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_valuedObjectState & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_valuedObjectState temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_valuedObjectState::Enumeration::invalid:
    break ;
  case GGS_valuedObjectState::Enumeration::enum_noValue:
    {
      result_result = GGS_string ("no value") ;
    }
    break ;
  case GGS_valuedObjectState::Enumeration::enum_hasUnreadValue:
    {
      result_result = GGS_string ("unread value") ;
    }
    break ;
  case GGS_valuedObjectState::Enumeration::enum_hasReadValue:
    {
      result_result = GGS_string ("read value") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendTrunc'
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
    test_0 = ioArgument_ioObject.getter_isLiteralInteger (SOURCE_FILE ("intermediate-trunc.galgas3", 8)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bigint var_value_354 ;
      GGS_omnibusType joker_326 ; // Joker input parameter
      ioArgument_ioObject.method_extractLiteralInteger (joker_326, var_value_354, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas3", 9)) ;
      ioArgument_ioObject = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_value_354  COMMA_SOURCE_FILE ("intermediate-trunc.galgas3", 10)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_objectIR var_result_492 ;
    {
    routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, var_result_492, inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas3", 12)) ;
    }
    ioObject.addAssignOperation (GGS_truncIR::init_21__21_ (var_result_492, ioArgument_ioObject, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-trunc.galgas3", 13)) ;
    ioArgument_ioObject = var_result_492 ;
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

AbstractPtrClass * cPtr_truncIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_truncIR_2E_weak::GGS_truncIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_truncIR_2E_weak & GGS_truncIR_2E_weak::operator = (const GGS_truncIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//Abstract extension proc '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (cPtr_instructionAST * inObject,
                                                                GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    inObject->method_noteInstructionTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const GGS_instructionListAST inObject,
                                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListAST temp_0 = inObject ;
  UpEnumerator_instructionListAST enumerator_2008 (temp_0) ;
  while (enumerator_2008.hasCurrentObject ()) {
    callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((cPtr_instructionAST *) enumerator_2008.current_mInstruction (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 56)) ;
    enumerator_2008.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@instructionAST instructionSemanticAnalysis'
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
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_instructionAST) ;
    inObject->method_instructionSemanticAnalysis (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListAST analyzeBranchInstructionList'
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
  extensionSetter_openBranch (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 97)) ;
  }
  const GGS_instructionListAST temp_0 = inObject ;
  UpEnumerator_instructionListAST enumerator_3772 (temp_0) ;
  while (enumerator_3772.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_3772.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 99)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_3772.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 100)) ;
    enumerator_3772.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioUniversalMap, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 113)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListAST analyzeRoutineInstructionList'
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
  UpEnumerator_instructionListAST enumerator_4971 (temp_0) ;
  while (enumerator_4971.hasCurrentObject ()) {
    {
    extensionSetter_appendSourceLineComment (ioArgument_ioInstructionGenerationList, enumerator_4971.current_mInstruction (HERE).readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 130)) ;
    }
    callExtensionMethod_instructionSemanticAnalysis ((cPtr_instructionAST *) enumerator_4971.current_mInstruction (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 131)) ;
    enumerator_4971.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const GGS_instructionListIR inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              const GGS_generationContext constinArgument_inGenerationContext,
                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_instructionListIR temp_0 = inObject ;
  UpEnumerator_instructionListIR enumerator_5853 (temp_0) ;
  while (enumerator_5853.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((cPtr_abstractInstructionIR *) enumerator_5853.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 155)) ;
    enumerator_5853.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @literalBooleanInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBooleanInExpressionAST::objectCompare (const GGS_literalBooleanInExpressionAST & inOperand) const {
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

GGS_literalBooleanInExpressionAST::GGS_literalBooleanInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::
init_21_ (const GGS_bool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBooleanInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBooleanInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBooleanInExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalBooleanInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::
literalBooleanInExpressionAST_init_21_ (const GGS_bool & in_mValue,
                                        Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST::GGS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literalBooleanInExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalBooleanInExpressionAST::setProperty_mValue (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GGS_bool & in_mValue,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBooleanInExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBooleanInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBooleanInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBooleanInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ("literalBooleanInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBooleanInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBooleanInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBooleanInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST result ;
  const GGS_literalBooleanInExpressionAST * p = (const GGS_literalBooleanInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBooleanInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBooleanInExpressionAST_2E_weak::objectCompare (const GGS_literalBooleanInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalBooleanInExpressionAST_2E_weak::GGS_literalBooleanInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak & GGS_literalBooleanInExpressionAST_2E_weak::operator = (const GGS_literalBooleanInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak::GGS_literalBooleanInExpressionAST_2E_weak (const GGS_literalBooleanInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak GGS_literalBooleanInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalBooleanInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBooleanInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST_2E_weak::bang_literalBooleanInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBooleanInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBooleanInExpressionAST) ;
      result = GGS_literalBooleanInExpressionAST ((cPtr_literalBooleanInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBooleanInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ("literalBooleanInExpressionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBooleanInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBooleanInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBooleanInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak GGS_literalBooleanInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST_2E_weak result ;
  const GGS_literalBooleanInExpressionAST_2E_weak * p = (const GGS_literalBooleanInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBooleanInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_ (GGS_lstringlist & ioArgument_ioImportedFileList,
                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 10)) ;
  GGS_lstring var_importedFile_583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 11)) ;
  ioArgument_ioImportedFileList.addAssignOperation (var_importedFile_583  COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 12)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_importedFile_583.readProperty_string ().getter_pathExtension (SOURCE_FILE ("syntax-grammar.galgas3", 13)).objectCompare (GGS_string ("omnibus-import"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_importedFile_583.readProperty_location (), GGS_string ("the path extension should be .omnibus-import"), fixItArray1  COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 14)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_import_5F_file_i0_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_import COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GGS_ast & ioArgument_ioAST,
                                                                            GGS_lstringlist & outArgument_outImportedFileList,
                                                                            GGS_location & outArgument_outEndOfSourceFile,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 25)) ;
  outArgument_outImportedFileList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_ (ioArgument_ioAST, inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("syntax-grammar.galgas3", 30)), inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_ (outArgument_outImportedFileList, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfSourceFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("syntax-grammar.galgas3", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_start_5F_symbol_i1_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_import_5F_file_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i2_ (GGS_ast & ioArgument_ioAST,
                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas3", 20)) ;
  GGS_lstring var_typeName_838 ;
  switch (select_omnibus_5F_syntax_1 (inCompiler)) {
  case 1: {
    var_typeName_838 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas3", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_838, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas3", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1002 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas3", 30)) ;
  outArgument_outExpression = GGS_extendExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_838, var_endOfExpression_1002, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i2_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("expression-extend.galgas3", 20)) ;
  switch (select_omnibus_5F_syntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-extend.galgas3", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-extend.galgas3", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i3_ (GGS_lstring & outArgument_outTargetVariableName,
                                                                                       GGS_lstring & outArgument_outTargetTypeName,
                                                                                       GGS_genericFormalParameterList & outArgument_outTargetGenericFormalParameterList,
                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTargetVariableName.drop () ; // Release 'out' argument
  outArgument_outTargetTypeName.drop () ; // Release 'out' argument
  outArgument_outTargetGenericFormalParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 38)) ;
  outArgument_outTargetVariableName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 39)) ;
  outArgument_outTargetTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 40)) ;
  nt_generic_5F_formal_5F_arguments_ (outArgument_outTargetGenericFormalParameterList, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i3_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 40)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i4_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_targetVariableName_1947 ;
  GGS_lstring var_targetTypeName_1972 ;
  GGS_genericFormalParameterList var_targetGenericFormalParameterList_1993 ;
  nt_llvm_5F_function_5F_header_ (var_targetVariableName_1947, var_targetTypeName_1972, var_targetGenericFormalParameterList_1993, inCompiler) ;
  GGS_location var_operatorLocation_2035 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 51)) ;
  GGS_lstring var_sourceVariableName_2108 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 52)) ;
  GGS_lstring var_sourceTypeName_2147 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 53)) ;
  GGS_genericFormalParameterList var_sourceGenericFormalParameterList_2200 ;
  nt_generic_5F_formal_5F_arguments_ (var_sourceGenericFormalParameterList_2200, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 55)) ;
  GGS_ctExpressionAST var_whereClause_2275 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_2275, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 57)) ;
  GGS_llvmGenerationInstructionList var_instructionList_2330 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2330, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 59)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmAssignmentOperatorDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_operatorLocation_2035, var_targetVariableName_1947, var_targetTypeName_1972, var_targetGenericFormalParameterList_1993, var_sourceVariableName_2108, var_sourceTypeName_2147, var_sourceGenericFormalParameterList_2200, var_whereClause_2275, var_instructionList_2330, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i4_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 53)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 55)) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 57)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("assignment-operator-definition.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i5_ (GGS_ast & ioArgument_ioAST,
                                                                        GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_controlRegisterLValueAST var_registerLValue_1258 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1258, inCompiler) ;
  GGS_controlRegisterAssignmentOperatorKind var_assignmentKind_1363 ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 31)) ;
    var_assignmentKind_1363 = GGS_controlRegisterAssignmentOperatorKind::class_func_assignment (SOURCE_FILE ("instruction-assignment-control-register.galgas3", 32)) ;
  } break ;
  case 2: {
    GGS_omnibusInfixOperator var_infixOperator_1489 ;
    GGS_location var_operatorLocation_1509 ;
    nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1489, var_operatorLocation_1509, inCompiler) ;
    var_assignmentKind_1363 = GGS_controlRegisterAssignmentOperatorKind::class_func_assignmentWithOperator (var_infixOperator_1489, var_operatorLocation_1509  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 35)) ;
  } break ;
  default:
    break ;
  }
  GGS_expressionAST var_sourceExpression_1707 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1707, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_controlRegisterAssignmentInstructionAST::init_21__21__21__21_ (var_registerLValue_1258.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1258, var_assignmentKind_1363, var_sourceExpression_1707, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i5_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas3", 31)) ;
  } break ;
  case 2: {
    nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_leftVariableName_4688 ;
  GGS_lstring var_leftTypeName_4711 ;
  GGS_genericFormalParameterList var_leftGenericFormalParameterList_4730 ;
  nt_llvm_5F_function_5F_header_ (var_leftVariableName_4688, var_leftTypeName_4711, var_leftGenericFormalParameterList_4730, inCompiler) ;
  GGS_location var_operationLocation_4770 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 121)) ;
  GGS_compileTimeInfixOperatorEnumeration var_infixOperator_4842 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_4842, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 123)) ;
  GGS_lstring var_rightVariableName_4888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 124)) ;
  GGS_lstring var_rightType_4926 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 125)) ;
  GGS_genericFormalParameterList var_rightGenericFormalParameterList_4974 ;
  nt_generic_5F_formal_5F_arguments_ (var_rightGenericFormalParameterList_4974, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 128)) ;
  GGS_lstring var_resultType_5043 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 129)) ;
  GGS_genericFormalParameterList var_resultGenericFormalParameterList_5092 ;
  nt_generic_5F_formal_5F_arguments_ (var_resultGenericFormalParameterList_5092, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 131)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5168 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5168, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 133)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_omnibusInfixOperator (var_infixOperator_4842, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 135)), var_operationLocation_4770, var_leftVariableName_4688, var_leftTypeName_4711, var_leftGenericFormalParameterList_4730, var_rightVariableName_4888, var_rightType_4926, var_rightGenericFormalParameterList_4974, var_resultType_5043, var_resultGenericFormalParameterList_5092, var_instructionList_5168, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i6_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 124)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 125)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 129)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 131)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-llvm.galgas3", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i7_ (GGS_ast & ioArgument_ioAST,
                                                                        GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas3", 22)) ;
  GGS_location var_instructionLocation_937 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 23)) ;
  GGS_expressionAST var_testExpression_1021 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1021, inCompiler) ;
  GGS_location var_testExpressionEndLocation_1045 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas3", 26)) ;
  GGS_instructionListAST var_instructionList_1133 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1133, inCompiler) ;
  GGS_location var_endOfInstruction_1158 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas3", 29)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_whileInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_937, var_testExpression_1021, var_testExpressionEndLocation_1045, var_instructionList_1133, var_endOfInstruction_1158, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas3", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i7_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-while.galgas3", 22)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-while.galgas3", 26)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-while.galgas3", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i8_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 19)) ;
  GGS_lstring var_structureName_808 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 21)) ;
  GGS_structurePropertyListAST var_fieldList_865 = GGS_structurePropertyListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_865, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_808, inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, var_structureName_808, inCompiler) ;
    } break ;
    case 5: {
      nt_guard_ (ioArgument_ioAST, var_structureName_808, var_structureName_808.readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 33)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_syncDeclarationAST::init_21__21_ (var_structureName_808, var_fieldList_865, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i8_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 19)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_guard_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-sync-declaration.galgas3", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i9_ (GGS_ast & ioArgument_ioAST,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 24)) ;
  GGS_mode var_mode_1039 ;
  GGS_lstring var_procName_1061 ;
  GGS_lstringlist var_attributeList_1093 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1135 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1039, var_procName_1061, var_attributeList_1093, var_procFormalArgumentList_1135, inCompiler) ;
  GGS_lstring var_returnTypeName_1176 ;
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_returnTypeName_1176 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 35)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1176, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 38)) ;
  GGS_lstring var_llvmName_1339 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 39)) ;
  ioArgument_ioAST.mProperty_mExternFunctionListAST.addAssignOperation (var_procName_1061, var_mode_1039, var_attributeList_1093, var_procFormalArgumentList_1135, var_returnTypeName_1176, var_llvmName_1339, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 47))  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i9_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 24)) ;
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 35)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i10_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_receiver_1536 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas3", 34)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_1620 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1620, inCompiler) ;
  outArgument_outExpression = GGS_primaryInExpressionAST::init_21__21_ (var_receiver_1536, var_accessList_1620, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i10_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas3", 34)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i11_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas3", 44)) ;
  GGS_lstring var_receiver_1925 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 45)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_2018 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_2018, inCompiler) ;
  outArgument_outExpression = GGS_primaryInExpressionAST::init_21__21_ (var_receiver_1925, var_accessList_2018, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i11_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("expression-primary.galgas3", 44)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i12_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_primaryInExpressionAccessListAST & outArgument_outAccessList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAccessList.drop () ; // Release 'out' argument
  GGS_primaryInExpressionAccessListAST temp_0 = GGS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 55)) ;
  outArgument_outAccessList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 58)) ;
      GGS_lstring var_propertyName_2419 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas3", 59)) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_property (var_propertyName_2419  COMMA_SOURCE_FILE ("expression-primary.galgas3", 60))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 60)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 62)) ;
      GGS_lbigint var_low_2530 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas3", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 64)) ;
      GGS_lbigint var_high_2569 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas3", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 66)) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_integerSlice (var_low_2530, var_high_2569  COMMA_SOURCE_FILE ("expression-primary.galgas3", 67))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 67)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 69)) ;
      GGS_expressionAST var_expression_2700 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2700, inCompiler) ;
      GGS_location var_endOfIndex_2722 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 71)) ;
      GGS_bool var_checkIndexExpression_2766 ;
      switch (select_omnibus_5F_syntax_6 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 74)) ;
        var_checkIndexExpression_2766 = GGS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 77)) ;
        var_checkIndexExpression_2766 = GGS_bool (false) ;
      } break ;
      default:
        break ;
      }
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_arrayAccess (var_expression_2700, var_endOfIndex_2722, var_checkIndexExpression_2766  COMMA_SOURCE_FILE ("expression-primary.galgas3", 80))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 80)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 86)) ;
      GGS_lstring var_methodName_3120 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas3", 87)) ;
      GGS_effectiveArgumentListAST var_arguments_3176 ;
      GGS_location var_endOfArguments_3192 ;
      nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_3176, var_endOfArguments_3192, inCompiler) ;
      outArgument_outAccessList.addAssignOperation (GGS_primaryInExpressionAccessAST::class_func_funcCall (var_methodName_3120, var_arguments_3176, var_endOfArguments_3192  COMMA_SOURCE_FILE ("expression-primary.galgas3", 89))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 89)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_access_5F_list_i12_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 58)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas3", 59)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 62)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas3", 63)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 64)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-primary.galgas3", 65)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 69)) ;
      nt_expression_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_6 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 77)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary.galgas3", 86)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-primary.galgas3", 87)) ;
      nt_effective_5F_parameters_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i13_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_controlRegisterLValueAST var_registerLValue_1023 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_1023, inCompiler) ;
  GGS_lstring var_attribute_1062 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 23)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_1062.readProperty_string ().objectCompare (GGS_string ("bit"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@bit")) ;
      inCompiler->emitSemanticError (var_attribute_1062.readProperty_location (), GGS_string ("attribute should be @bit"), fixItArray1  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 25)) ;
    }
  }
  GGS_expressionAST var_bitExpression_1225 ;
  nt_expression_ (ioArgument_ioAST, var_bitExpression_1225, inCompiler) ;
  GGS_location var_bitExpressionLocation_1248 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 29)) ;
  GGS_expressionAST var_sourceExpression_1327 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_1327, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_bitbandInstructionAST::init_21__21__21__21__21__21_ (var_registerLValue_1023.readProperty_mRegisterGroupName ().readProperty_location (), var_registerLValue_1023, var_bitExpression_1225, var_bitExpressionLocation_1248, var_sourceExpression_1327, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 38)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i13_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-bit-banding.galgas3", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i14_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 19)) ;
  GGS_LValueAST var_lvalue_783 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_783, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 21)) ;
  outArgument_outExpression = GGS_addressofExpressionAST::init_21_ (var_lvalue_783, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i14_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 18)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 19)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas3", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i15_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_stringLiteral_777 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 18)) ;
  outArgument_outExpression = GGS_literalStringInExpressionAST::init_21_ (var_stringLiteral_777, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i15_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas3", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i16_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 59)) ;
      GGS_location var_operatorLocation_2251 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 60)) ;
      GGS_ctExpressionAST var_rightExpression_2335 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (var_rightExpression_2335, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2251, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas3", 65)), var_rightExpression_2335, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i16_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 59)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i17_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 77)) ;
      GGS_location var_operatorLocation_2820 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 78)) ;
      GGS_ctExpressionAST var_rightExpression_2904 ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (var_rightExpression_2904, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2820, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-expression.galgas3", 83)), var_rightExpression_2904, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i17_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 77)) ;
      nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i18_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_equality_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 95)) ;
      GGS_location var_operatorLocation_3388 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 96)) ;
      GGS_ctExpressionAST var_rightExpression_3469 ;
      nt_compile_5F_time_5F_expression_5F_equality_ (var_rightExpression_3469, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3388, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-expression.galgas3", 101)), var_rightExpression_3469, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i18_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 95)) ;
      nt_compile_5F_time_5F_expression_5F_equality_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i19_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 113)) ;
    GGS_location var_operatorLocation_3949 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 114)) ;
    GGS_ctExpressionAST var_rightExpression_4032 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4032, inCompiler) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3949, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas3", 119)), var_rightExpression_4032, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 123)) ;
    GGS_location var_operatorLocation_4258 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 124)) ;
    GGS_ctExpressionAST var_rightExpression_4341 ;
    nt_compile_5F_time_5F_expression_5F_comparison_ (var_rightExpression_4341, inCompiler) ;
    GGS_ctInfixExpressionAST var_expression_4368 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4258, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas3", 129)), var_rightExpression_4341, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_4258, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas3", 134)), var_expression_4368, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i19_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 113)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 123)) ;
    nt_compile_5F_time_5F_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i20_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_shift_ (outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 146)) ;
    GGS_location var_operatorLocation_4972 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 147)) ;
    GGS_ctExpressionAST var_rightExpression_5050 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5050, inCompiler) ;
    GGS_ctInfixExpressionAST var_lessThanExpression_5077 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4972, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas3", 152)), var_rightExpression_5050, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_equalExpression_5233 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4972, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas3", 158)), var_rightExpression_5050, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_5077, var_operatorLocation_4972, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas3", 164)), var_equalExpression_5233, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 168)) ;
    GGS_location var_operatorLocation_5592 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 169)) ;
    GGS_ctExpressionAST var_rightExpression_5670 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_5670, inCompiler) ;
    GGS_ctInfixExpressionAST var_expression_5697 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5592, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas3", 174)), var_rightExpression_5670, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_5592, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas3", 179)), var_expression_5697, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 183)) ;
    GGS_location var_operatorLocation_5979 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 184)) ;
    GGS_ctExpressionAST var_rightExpression_6057 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6057, inCompiler) ;
    outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5979, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas3", 189)), var_rightExpression_6057, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 193)) ;
    GGS_location var_operatorLocation_6298 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 194)) ;
    GGS_ctExpressionAST var_rightExpression_6376 ;
    nt_compile_5F_time_5F_expression_5F_shift_ (var_rightExpression_6376, inCompiler) ;
    GGS_ctInfixExpressionAST var_lessThanExpression_6402 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6298, GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("compile-time-expression.galgas3", 199)), var_rightExpression_6376, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_equalExpression_6558 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6298, GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("compile-time-expression.galgas3", 205)), var_rightExpression_6376, inCompiler COMMA_HERE) ;
    GGS_ctInfixExpressionAST var_lessThanOrEqualExpression_6708 = GGS_ctInfixExpressionAST::init_21__21__21__21_ (var_lessThanExpression_6402, var_operatorLocation_6298, GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-expression.galgas3", 211)), var_equalExpression_6558, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_6298, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas3", 216)), var_lessThanOrEqualExpression_6708, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i20_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 146)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 168)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 183)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 193)) ;
    nt_compile_5F_time_5F_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i21_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_addition_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 228)) ;
      GGS_location var_operatorLocation_7311 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 229)) ;
      GGS_ctExpressionAST var_rightExpression_7392 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7392, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7311, GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("compile-time-expression.galgas3", 234)), var_rightExpression_7392, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 238)) ;
      GGS_location var_operatorLocation_7588 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 239)) ;
      GGS_ctExpressionAST var_rightExpression_7669 ;
      nt_compile_5F_time_5F_expression_5F_addition_ (var_rightExpression_7669, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7588, GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("compile-time-expression.galgas3", 244)), var_rightExpression_7669, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i21_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 228)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 238)) ;
      nt_compile_5F_time_5F_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i22_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_expression_5F_product_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 256)) ;
      GGS_location var_operatorLocation_8146 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 257)) ;
      GGS_ctExpressionAST var_rightExpression_8226 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8226, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8146, GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas3", 262)), var_rightExpression_8226, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 266)) ;
      GGS_location var_operatorLocation_8417 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 267)) ;
      GGS_ctExpressionAST var_rightExpression_8497 ;
      nt_compile_5F_time_5F_expression_5F_product_ (var_rightExpression_8497, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8417, GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("compile-time-expression.galgas3", 272)), GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_8417, GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas3", 273)), var_rightExpression_8497, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i22_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 256)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 266)) ;
      nt_compile_5F_time_5F_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i23_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_compile_5F_time_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 284)) ;
      GGS_location var_operatorLocation_9011 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 285)) ;
      GGS_ctExpressionAST var_rightExpression_9080 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9080, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9011, GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("compile-time-expression.galgas3", 290)), var_rightExpression_9080, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 294)) ;
      GGS_location var_operatorLocation_9270 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 295)) ;
      GGS_ctExpressionAST var_rightExpression_9339 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9339, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9270, GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("compile-time-expression.galgas3", 300)), var_rightExpression_9339, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 304)) ;
      GGS_location var_operatorLocation_9531 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 305)) ;
      GGS_ctExpressionAST var_rightExpression_9600 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9600, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9531, GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("compile-time-expression.galgas3", 310)), var_rightExpression_9600, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 314)) ;
      GGS_location var_operatorLocation_9797 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 315)) ;
      GGS_ctExpressionAST var_rightExpression_9866 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_9866, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9797, GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("compile-time-expression.galgas3", 320)), var_rightExpression_9866, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 324)) ;
      GGS_location var_operatorLocation_10058 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 325)) ;
      GGS_ctExpressionAST var_rightExpression_10127 ;
      nt_compile_5F_time_5F_primary_ (var_rightExpression_10127, inCompiler) ;
      outArgument_outExpression = GGS_ctInfixExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10058, GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("compile-time-expression.galgas3", 330)), var_rightExpression_10127, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i23_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 284)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 294)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 304)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 314)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 324)) ;
      nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i24_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 339)) ;
  GGS_location var_operatorLocation_10512 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 340)) ;
  GGS_ctExpressionAST var_expression_10579 ;
  nt_compile_5F_time_5F_primary_ (var_expression_10579, inCompiler) ;
  outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_10512, GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("compile-time-expression.galgas3", 344)), var_expression_10579, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i24_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 339)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i25_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 352)) ;
  GGS_location var_operatorLocation_10909 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 353)) ;
  GGS_ctExpressionAST var_expression_10976 ;
  nt_compile_5F_time_5F_primary_ (var_expression_10976, inCompiler) ;
  outArgument_outExpression = GGS_ctPrefixExpressionAST::init_21__21__21_ (var_operatorLocation_10909, GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("compile-time-expression.galgas3", 357)), var_expression_10976, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i25_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 352)) ;
  nt_compile_5F_time_5F_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i26_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 365)) ;
  nt_compile_5F_time_5F_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 367)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i26_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 365)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 367)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i27_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 373)) ;
  outArgument_outExpression = GGS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i27_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 373)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i28_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 380)) ;
  outArgument_outExpression = GGS_ctFalseExpressionAST::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i28_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 380)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i29_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_value_12068 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 387)) ;
  outArgument_outExpression = GGS_ctIntExpressionAST::init_21_ (var_value_12068, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i29_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 387)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i30_ (GGS_ctExpressionAST & outArgument_outExpression,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_name_12342 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 394)) ;
  outArgument_outExpression = GGS_ctIdentifierExpressionAST::init_21_ (var_name_12342, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i30_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("compile-time-expression.galgas3", 394)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i31_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 25)) ;
  GGS_lstring var_varName_1135 ;
  switch (select_omnibus_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 28)) ;
    var_varName_1135 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 29)) ;
  } break ;
  case 2: {
    var_varName_1135 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 31)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_typeName_1270 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1270, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 34)) ;
  GGS_expressionAST var_lowerBoundExpression_1336 ;
  nt_expression_ (ioArgument_ioAST, var_lowerBoundExpression_1336, inCompiler) ;
  GGS_location var_endOf_5F_lowerBoundExpression_5F_instruction_1366 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 37)) ;
  GGS_expressionAST var_upperBoundExpression_1479 ;
  nt_expression_ (ioArgument_ioAST, var_upperBoundExpression_1479, inCompiler) ;
  GGS_location var_endOf_5F_upperBoundExpression_5F_instruction_1509 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 40)) ;
  GGS_instructionListAST var_instructionList_1610 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1610, inCompiler) ;
  GGS_location var_endOfInstruction_1635 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 43)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_forLowerUpperBoundInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_varName_1135.readProperty_location (), var_varName_1135, var_typeName_1270, var_lowerBoundExpression_1336, var_endOf_5F_lowerBoundExpression_5F_instruction_1366, var_upperBoundExpression_1479, var_endOf_5F_upperBoundExpression_5F_instruction_1509, var_instructionList_1610, var_endOfInstruction_1635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i31_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 25)) ;
  switch (select_omnibus_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 31)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 34)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 37)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 40)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i32_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 84)) ;
  GGS_registerGroupListAST temp_0 = GGS_registerGroupListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 85)) ;
  GGS_registerGroupListAST var_registerGroupListAST_3519 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_registerGroupName_3578 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 87)) ;
    switch (select_omnibus_5F_syntax_17 (inCompiler)) {
    case 1: {
      GGS_lstring var_attribute_3637 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 89)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_attribute_3637.readProperty_string ().objectCompare (GGS_string ("at"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_attribute_3637.readProperty_location (), GGS_string ("attribute should be @at"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 91)) ;
        }
      }
      GGS_lbigint var_registerGroupBaseAddress_3790 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 93)) ;
      GGS_controlRegisterGroupKindAST var_groupKind_3828 = GGS_controlRegisterGroupKindAST::class_func_single (var_registerGroupBaseAddress_3790  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 94)) ;
      var_registerGroupListAST_3519.addAssignOperation (var_registerGroupName_3578, var_groupKind_3828  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 95)) ;
    } break ;
    case 2: {
      GGS_lbigintlist temp_4 = GGS_lbigintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 97)) ;
      GGS_lbigintlist var_groupBaseAddresses_4025 = temp_4 ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 98)) ;
      GGS_expressionAST var_groupSize_4098 ;
      nt_expression_ (ioArgument_ioAST, var_groupSize_4098, inCompiler) ;
      GGS_location var_groupSizeExpressionLocation_4121 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 100)) ;
      GGS_lstring var_attribute_4193 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 101)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::notEqual, var_attribute_4193.readProperty_string ().objectCompare (GGS_string ("at"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_attribute_4193.readProperty_location (), GGS_string ("attribute should be @at"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 103)) ;
        }
      }
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GGS_lbigint var_baseAddress_4363 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 106)) ;
        var_groupBaseAddresses_4025.addAssignOperation (var_baseAddress_4363  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 107)) ;
        if (select_omnibus_5F_syntax_18 (inCompiler) == 2) {
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 111)) ;
      GGS_controlRegisterGroupKindAST var_groupKind_4487 = GGS_controlRegisterGroupKindAST::class_func_groupArray (var_groupSize_4098, var_groupSizeExpressionLocation_4121, var_groupBaseAddresses_4025  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 112)) ;
      var_registerGroupListAST_3519.addAssignOperation (var_registerGroupName_3578, var_groupKind_4487  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 117)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 122)) ;
  GGS_controlRegisterDeclarationList temp_8 = GGS_controlRegisterDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 123)) ;
  GGS_controlRegisterDeclarationList var_controlRegisterDeclarationList_4844 = temp_8 ;
  bool repeatFlag_9 = true ;
  while (repeatFlag_9) {
    GGS_controlRegisterNameListAST temp_10 = GGS_controlRegisterNameListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 125)) ;
    GGS_controlRegisterNameListAST var_registerDeclarationList_4930 = temp_10 ;
    bool repeatFlag_11 = true ;
    while (repeatFlag_11) {
      nt_registerDeclaration_ (ioArgument_ioAST, var_registerDeclarationList_4930, inCompiler) ;
      if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
      }else{
        repeatFlag_11 = false ;
      }
    }
    GGS_lstring var_registerTypeName_5097 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 131)) ;
    GGS_controlRegisterBitSliceList temp_12 = GGS_controlRegisterBitSliceList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 132)) ;
    GGS_controlRegisterBitSliceList var_registerBitSliceList_5154 = temp_12 ;
    switch (select_omnibus_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 135)) ;
      bool repeatFlag_13 = true ;
      while (repeatFlag_13) {
        GGS_controlRegisterBitSlice var_registerBitSlice_5269 ;
        switch (select_omnibus_5F_syntax_23 (inCompiler)) {
        case 1: {
          GGS_lbigint var_unusedBitCount_5340 = inCompiler->synthetizedAttribute_bigInteger () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 139)) ;
          var_registerBitSlice_5269 = GGS_controlRegisterBitSlice::class_func_unusedBits (var_unusedBitCount_5340  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 140)) ;
        } break ;
        case 2: {
          GGS_lstring var_bitName_5467 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 142)) ;
          switch (select_omnibus_5F_syntax_24 (inCompiler)) {
          case 1: {
            var_registerBitSlice_5269 = GGS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5467, GGS_lbigint::init_21__21_ (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 144)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 144)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 144)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 146)) ;
            GGS_lbigint var_bitCount_5648 = inCompiler->synthetizedAttribute_bigInteger () ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 147)) ;
            var_registerBitSlice_5269 = GGS_controlRegisterBitSlice::class_func_namedBit (var_bitName_5467, var_bitCount_5648  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 148)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        var_registerBitSliceList_5154.addAssignOperation (var_registerBitSlice_5269  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 151)) ;
        if (select_omnibus_5F_syntax_22 (inCompiler) == 2) {
        }else{
          repeatFlag_13 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 155)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_endOfBitSlice_5890 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 157)) ;
    var_controlRegisterDeclarationList_4844.addAssignOperation (var_registerDeclarationList_4930, var_registerTypeName_5097, var_registerBitSliceList_5154, var_endOfBitSlice_5890  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 158)) ;
    if (select_omnibus_5F_syntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_9 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_controlRegisterGroupDeclarationAST::init_21__21_ (var_registerGroupListAST_3519, var_controlRegisterDeclarationList_4844, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 161)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i32_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 87)) ;
    switch (select_omnibus_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 98)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 106)) ;
        if (select_omnibus_5F_syntax_18 (inCompiler) == 2) {
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 111)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 122)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      nt_registerDeclaration_indexing (inCompiler) ;
      if (select_omnibus_5F_syntax_20 (inCompiler) == 2) {
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 131)) ;
    switch (select_omnibus_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 135)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        switch (select_omnibus_5F_syntax_23 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 139)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 142)) ;
          switch (select_omnibus_5F_syntax_24 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 146)) ;
            inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 147)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        if (select_omnibus_5F_syntax_22 (inCompiler) == 2) {
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 155)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i33_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_controlRegisterNameListAST & ioArgument_ioRegisterDeclarationList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_registerName_6616 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 173)) ;
  switch (select_omnibus_5F_syntax_25 (inCompiler)) {
  case 1: {
    GGS_lstring var_attributeOffset_6666 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 175)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_attributeOffset_6666.readProperty_string ().objectCompare (GGS_string ("offset"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_6666.readProperty_location (), GGS_string ("attribute should be @offset"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 177)) ;
      }
    }
    GGS_expressionAST var_registerOffset_6864 ;
    nt_expression_ (ioArgument_ioAST, var_registerOffset_6864, inCompiler) ;
    GGS_bool var_isReadOnly_6896 ;
    switch (select_omnibus_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_isReadOnly_6896 = GGS_bool (false) ;
    } break ;
    case 2: {
      GGS_lstring var_attribute_6983 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 184)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_attribute_6983.readProperty_string ().objectCompare (GGS_string ("ro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, GGS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_6983.readProperty_location (), GGS_string ("attribute should be @ro"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 186)) ;
        }
      }
      var_isReadOnly_6896 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioRegisterDeclarationList.addAssignOperation (var_registerName_6616, GGS_controlRegisterKind::class_func_scalar (SOURCE_FILE ("declaration-control-register.galgas3", 192)), var_isReadOnly_6896, var_registerOffset_6864, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 195))  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 190)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 197)) ;
    GGS_expressionAST var_sizeExpression_7343 ;
    nt_expression_ (ioArgument_ioAST, var_sizeExpression_7343, inCompiler) ;
    GGS_location var_sizeExpressionLocation_7369 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 199)) ;
    GGS_lstring var_attributeOffset_7434 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 200)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_attributeOffset_7434.readProperty_string ().objectCompare (GGS_string ("offset"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, EnumFixItKind::fixItReplace, GGS_string ("@offset")) ;
        inCompiler->emitSemanticError (var_attributeOffset_7434.readProperty_location (), GGS_string ("attribute should be @offset"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 202)) ;
      }
    }
    GGS_expressionAST var_baseAddressExpression_7632 ;
    nt_expression_ (ioArgument_ioAST, var_baseAddressExpression_7632, inCompiler) ;
    GGS_location var_baseAddressExpressionLocation_7665 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 205)) ;
    GGS_lstring var_attributeInc_7737 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 206)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_attributeInc_7737.readProperty_string ().objectCompare (GGS_string ("inc"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@inc")) ;
        inCompiler->emitSemanticError (var_attributeInc_7737.readProperty_location (), GGS_string ("attribute should be @inc"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 208)) ;
      }
    }
    GGS_expressionAST var_arrayElementSizeExpression_7917 ;
    nt_expression_ (ioArgument_ioAST, var_arrayElementSizeExpression_7917, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 211)) ;
    GGS_bool var_isReadOnly_7971 ;
    switch (select_omnibus_5F_syntax_27 (inCompiler)) {
    case 1: {
      var_isReadOnly_7971 = GGS_bool (false) ;
    } break ;
    case 2: {
      GGS_lstring var_attribute_8058 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 216)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_attribute_8058.readProperty_string ().objectCompare (GGS_string ("ro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, GGS_string ("@ro")) ;
          inCompiler->emitSemanticError (var_attribute_8058.readProperty_location (), GGS_string ("attribute should be @ro"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 218)) ;
        }
      }
      var_isReadOnly_7971 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_arrayElementSizeExpressionLocation_8244 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 222)) ;
    ioArgument_ioRegisterDeclarationList.addAssignOperation (var_registerName_6616, GGS_controlRegisterKind::class_func_registerArray (var_sizeExpression_7343, var_sizeExpressionLocation_7369, var_arrayElementSizeExpression_7917, var_arrayElementSizeExpressionLocation_8244  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 225)), var_isReadOnly_7971, var_baseAddressExpression_7632, var_baseAddressExpressionLocation_7665  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 223)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_registerDeclaration_i33_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 173)) ;
  switch (select_omnibus_5F_syntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 175)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 197)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 200)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 206)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 211)) ;
    switch (select_omnibus_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 216)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i34_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 242)) ;
  GGS_lstring var_attribute_9083 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 243)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_9083.readProperty_string ().objectCompare (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 244)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_attribute_9083.readProperty_location (), GGS_string ("this attribute should be @").add_operation (function_userAttributeForRegister (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 245)), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 245)) ;
    }
  }
  GGS_lstring var_registerGroupName_9270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 248)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GGS_lstring var_registerName_9333 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 250)) ;
    GGS_lstring var_key_9357 = GGS_lstring::init_21__21_ (GGS_string ("//").add_operation (var_registerGroupName_9270.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 251)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 251)).add_operation (var_registerName_9333.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 251)), var_registerName_9333.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioAST.mProperty_mControlRegisterUserAccesMapAST.setter_insertKey (var_key_9357, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 252)) ;
    }
    if (select_omnibus_5F_syntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 254)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i34_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_registers COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 242)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 243)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 247)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 248)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 250)) ;
    if (select_omnibus_5F_syntax_28 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 254)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i35_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas3", 27)) ;
  GGS_lstring var_varName_1094 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas3", 29)) ;
  GGS_expressionAST var_expression_1158 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1158, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_varInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_1094.readProperty_location (), var_varName_1094, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas3", 34)), var_expression_1158, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas3", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i35_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas3", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i36_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas3", 42)) ;
  GGS_lstring var_varName_1550 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas3", 43)) ;
  GGS_lstring var_typeName_1596 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1596, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_varDeclarationInstructionAST::init_21__21__21_ (var_varName_1550.readProperty_location (), var_varName_1550, var_typeName_1596, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas3", 45)) ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas3", 52)) ;
    GGS_expressionAST var_sourceExpression_1802 ;
    nt_expression_ (ioArgument_ioAST, var_sourceExpression_1802, inCompiler) ;
    GGS_LValueAST var_assignmentTargetAST_1830 = GGS_LValueAST::init_21__21_ (var_varName_1550, GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-var.galgas3", 54)), inCompiler COMMA_HERE) ;
    ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_1830.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_1830, var_sourceExpression_1802, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var.galgas3", 55)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i36_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-var.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-var.galgas3", 43)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var.galgas3", 52)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i37_ (GGS_ast & ioArgument_ioAST,
                                                                                     GGS_effectiveArgumentListAST & outArgument_outEffectiveParameterList,
                                                                                     GGS_location & outArgument_outEndOfArgs,
                                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outEndOfArgs.drop () ; // Release 'out' argument
  GGS_effectiveArgumentListAST temp_0 = GGS_effectiveArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas3", 59)) ;
  outArgument_outEffectiveParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 60)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_30 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2435 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 63)) ;
      GGS_expressionAST var_expression_2479 ;
      nt_expression_ (ioArgument_ioAST, var_expression_2479, inCompiler) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_output (var_expression_2479, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 65))  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 65)), var_selector_2435  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 65)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_2615 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 67)) ;
      GGS_lstring var_effectiveParameterName_2650 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 68)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_outputInput (var_effectiveParameterName_2650  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 69)), var_selector_2615  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 69)) ;
    } break ;
    case 4: {
      GGS_lstring var_selector_2799 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 73)) ;
      GGS_lstring var_effectiveParameterName_2857 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 74)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_outputInputSelfVariable (var_effectiveParameterName_2857  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 75)), var_selector_2799  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 75)) ;
    } break ;
    case 5: {
      GGS_lstring var_selector_3017 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 77)) ;
      GGS_lstring var_effectiveParameterName_3052 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 78)) ;
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_input (var_effectiveParameterName_3052  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 79)), var_selector_3017  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 79)) ;
    } break ;
    case 6: {
      GGS_lstring var_selector_3194 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 81)) ;
      GGS_bool var_constant_3220 ;
      switch (select_omnibus_5F_syntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas3", 84)) ;
        var_constant_3220 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas3", 87)) ;
        var_constant_3220 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_effectiveParameterName_3363 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 90)) ;
      GGS_lstring var_typeName_3406 ;
      switch (select_omnibus_5F_syntax_32 (inCompiler)) {
      case 1: {
        var_typeName_3406 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("effective-parameters.galgas3", 93)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3406, inCompiler) ;
      } break ;
      default:
        break ;
      }
      outArgument_outEffectiveParameterList.addAssignOperation (GGS_effectiveArgumentPassingModeAST::class_func_inputWithType (var_constant_3220, var_typeName_3406, var_effectiveParameterName_3363  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 98)), var_selector_3194  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 97)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  outArgument_outEndOfArgs = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_effective_5F_parameters_i37_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 63)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 67)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("effective-parameters.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 74)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 77)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 78)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 81)) ;
      switch (select_omnibus_5F_syntax_31 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("effective-parameters.galgas3", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("effective-parameters.galgas3", 87)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("effective-parameters.galgas3", 90)) ;
      switch (select_omnibus_5F_syntax_32 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("effective-parameters.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i38_ (GGS_compileTimeInfixOperatorEnumeration & outArgument_outOperator,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 96)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas3", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 99)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas3", 100)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 102)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseAndOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 103)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 105)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseOrOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 106)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 108)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_bitWiseXorOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 109)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 111)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 112)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 114)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_subOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 115)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 117)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_mulOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 118)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 120)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_divOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 121)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 123)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_divNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas3", 124)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 126)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_modOp (SOURCE_FILE ("infix-operator-compile-time.galgas3", 127)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 129)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_moduloNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas3", 130)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 132)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_leftShift (SOURCE_FILE ("infix-operator-compile-time.galgas3", 133)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 135)) ;
    outArgument_outOperator = GGS_compileTimeInfixOperatorEnumeration::class_func_rightShift (SOURCE_FILE ("infix-operator-compile-time.galgas3", 136)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimeInfixOperator_i38_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 96)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 99)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 102)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 105)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 108)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 111)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 114)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 117)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 123)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 126)) ;
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 129)) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 132)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 135)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i39_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 145)) ;
  GGS_lstring var_leftArgument_4252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 146)) ;
  GGS_lstring var_leftType_4285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 148)) ;
  GGS_location var_operationLocation_4311 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 149)) ;
  GGS_compileTimeInfixOperatorEnumeration var_infixOperator_4383 ;
  nt_compileTimeInfixOperator_ (var_infixOperator_4383, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 151)) ;
  GGS_lstring var_rightArgument_4429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 152)) ;
  GGS_lstring var_rightType_4463 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 155)) ;
  GGS_lstring var_resultType_4510 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 157)) ;
  GGS_ctExpressionAST var_expression_4583 ;
  nt_compile_5F_time_5F_expression_ (var_expression_4583, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 159)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compileTimeInfixOperatorAST::init_21__21__21__21__21__21__21__21_ (var_infixOperator_4383, var_operationLocation_4311, var_leftArgument_4252, var_leftType_4285, var_rightArgument_4429, var_rightType_4463, var_expression_4583, var_resultType_4510, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i39_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 148)) ;
  nt_compileTimeInfixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 151)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 152)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 153)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 154)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 155)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 156)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 157)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i40_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 19)) ;
  GGS_lstring var_elementTypeName_842 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_842, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 21)) ;
  outArgument_outTypeName = GGS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-dynamic-array.galgas3", 22)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 22)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 22)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 23)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeDynamicArrayDeclarationAST::init_21__21_ (outArgument_outTypeName, var_elementTypeName_842, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i40_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 19)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-dynamic-array.galgas3", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i41_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 37)) ;
  GGS_lstring var_typeName_1466 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 38)) ;
  GGS_sliceAssignmentListAST temp_0 = GGS_sliceAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 39)) ;
  GGS_sliceAssignmentListAST var_sliceAssignmentListAST_1508 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_sliceWidth_1573 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 41)) ;
    GGS_sliceTargetAST var_sliceKind_1611 ;
    switch (select_omnibus_5F_syntax_35 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 44)) ;
      var_sliceKind_1611 = GGS_sliceTargetAST::class_func_discarded (SOURCE_FILE ("instruction-slice-assignment.galgas3", 45)) ;
    } break ;
    case 2: {
      GGS_LValueAST var_target_1718 ;
      nt_lvalue_ (ioArgument_ioAST, var_target_1718, inCompiler) ;
      var_sliceKind_1611 = GGS_sliceTargetAST::class_func_lValue (var_target_1718  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 50)) ;
      GGS_lstring var_varName_1821 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 51)) ;
      var_sliceKind_1611 = GGS_sliceTargetAST::class_func_varDeclaration (var_varName_1821  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 54)) ;
      GGS_lstring var_letName_1935 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 55)) ;
      var_sliceKind_1611 = GGS_sliceTargetAST::class_func_letDeclaration (var_letName_1935  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 56)) ;
    } break ;
    default:
      break ;
    }
    var_sliceAssignmentListAST_1508.addAssignOperation (var_sliceWidth_1573, var_sliceKind_1611  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 58)) ;
    if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 63)) ;
  GGS_expressionAST var_sourceExpression_2156 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_2156, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_sliceAssignmentInstructionAST::init_21__21__21__21__21_ (var_typeName_1466.readProperty_location (), var_typeName_1466, var_sliceAssignmentListAST_1508, var_sourceExpression_2156, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 71)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i41_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 41)) ;
    switch (select_omnibus_5F_syntax_35 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 44)) ;
    } break ;
    case 2: {
      nt_lvalue_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 50)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 54)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 55)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_34 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas3", 63)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i42_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_optionalTypeName_850 ;
  switch (select_omnibus_5F_syntax_36 (inCompiler)) {
  case 1: {
    var_optionalTypeName_850 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 22)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_850, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 26)) ;
  GGS_lstring var_constantName_1016 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 27)) ;
  GGS_primaryInExpressionAccessListAST var_accessList_1104 ;
  nt_expression_5F_access_5F_list_ (ioArgument_ioAST, var_accessList_1104, inCompiler) ;
  outArgument_outExpression = GGS_typedConstantCallAST::init_21__21__21_ (var_optionalTypeName_850, var_constantName_1016, var_accessList_1104, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i42_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-typed-constant.galgas3", 27)) ;
  nt_expression_5F_access_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i43_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 28)) ;
  GGS_lstring var_registerGroupName_1141 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 30)) ;
  GGS_lstring var_registerName_1191 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 31)) ;
  GGS_registerIntegerFieldListAST temp_0 = GGS_registerIntegerFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 32)) ;
  GGS_registerIntegerFieldListAST var_integerFieldValues_1242 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_registerFieldName_1303 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 34)) ;
    GGS_expressionAST var_expression_1356 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1356, inCompiler) ;
    var_integerFieldValues_1242.addAssignOperation (var_registerFieldName_1303, var_expression_1356, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 36))  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 36)) ;
    if (select_omnibus_5F_syntax_37 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 39)) ;
  outArgument_outExpression = GGS_registerConstantExpressionAST::init_21__21__21_ (var_registerGroupName_1141, var_registerName_1191, var_integerFieldValues_1242, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i43_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 30)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 34)) ;
    nt_expression_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_37 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas3", 33)) ;
  GGS_lstring var_taskName_1305 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas3", 34)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 35)) ;
  GGS_lstringlist var_higherPriorityTaskList_1336 = temp_0 ;
  switch (select_omnibus_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 38)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_aTaskName_1433 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas3", 40)) ;
      var_higherPriorityTaskList_1336.addAssignOperation (var_aTaskName_1433  COMMA_SOURCE_FILE ("task-declaration.galgas3", 41)) ;
      if (select_omnibus_5F_syntax_39 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 43)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_lstring var_stackSizeAttribute_1554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas3", 46)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_stackSizeAttribute_1554.readProperty_string ().objectCompare (GGS_string ("stacksize"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_stackSizeAttribute_1554.readProperty_location (), GGS_string ("this attribute should be @stacksize"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas3", 48)) ;
    }
  }
  GGS_lbigint var_stackSize_1737 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas3", 50)) ;
  GGS_bool var_autoStart_1785 = GGS_bool (false) ;
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_activateAttribute_1846 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas3", 55)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_activateAttribute_1846.readProperty_string ().objectCompare (GGS_string ("autostart"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_activateAttribute_1846.readProperty_location (), GGS_string ("this attribute should be @autostart"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas3", 57)) ;
      }
    }
    var_autoStart_1785 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 61)) ;
  GGS_structurePropertyListAST temp_6 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 62)) ;
  GGS_structurePropertyListAST var_taskVarList_2076 = temp_6 ;
  GGS_taskSetupListAST temp_7 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 63)) ;
  GGS_taskSetupListAST var_taskSetupList_2120 = temp_7 ;
  GGS_taskSetupListAST temp_8 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 64)) ;
  GGS_taskSetupListAST var_taskActivateList_2166 = temp_8 ;
  GGS_taskSetupListAST temp_9 = GGS_taskSetupListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 65)) ;
  GGS_taskSetupListAST var_taskDeactivateList_2215 = temp_9 ;
  GGS_syncInstructionBranchListAST temp_10 = GGS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 66)) ;
  GGS_syncInstructionBranchListAST var_branchList_2278 = temp_10 ;
  bool repeatFlag_11 = true ;
  while (repeatFlag_11) {
    switch (select_omnibus_5F_syntax_41 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_taskVarList_2076, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas3", 71)) ;
      GGS_lstring var_procName_2433 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas3", 72)) ;
      GGS_routineFormalArgumentListAST var_formalArgumentList_2523 ;
      nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2523, inCompiler) ;
      GGS_lstring var_returnTypeName_2562 ;
      switch (select_omnibus_5F_syntax_42 (inCompiler)) {
      case 1: {
        var_returnTypeName_2562 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 78)) ;
        nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_2562, inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 81)) ;
      GGS_instructionListAST var_instructionList_2757 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_2757, inCompiler) ;
      GGS_lstringlist temp_12 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 88)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas3", 84)), GGS_bool (false), var_taskName_1305, var_procName_2433, temp_12, var_formalArgumentList_2523, var_returnTypeName_2562, var_instructionList_2757, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 92)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas3", 83)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_ (ioArgument_ioAST, var_taskName_1305, var_taskSetupList_2120, var_taskActivateList_2166, var_taskDeactivateList_2215, inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas3", 98)) ;
      GGS_guardedCommandAST var_guardedCommand_3267 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GGS_bool (false), var_guardedCommand_3267, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 100)) ;
      GGS_instructionListAST var_instructionList_3332 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_3332, inCompiler) ;
      GGS_location var_endOfInstructions_3359 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 102)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 103)) ;
      var_branchList_2278.addAssignOperation (var_guardedCommand_3267, var_instructionList_3332, var_endOfInstructions_3359  COMMA_SOURCE_FILE ("task-declaration.galgas3", 104)) ;
    } break ;
    default:
      repeatFlag_11 = false ;
      break ;
    }
  }
  GGS_location var_endOfTask_3799 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 114)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 115)) ;
  ioArgument_ioAST.mProperty_mTaskListAST.addAssignOperation (var_taskName_1305, var_higherPriorityTaskList_1336, var_stackSize_1737, var_taskSetupList_2120, var_taskActivateList_2166, var_taskDeactivateList_2215, var_branchList_2278, var_endOfTask_3799, var_autoStart_1785  COMMA_SOURCE_FILE ("task-declaration.galgas3", 116)) ;
  GGS_lstringlist temp_13 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 130)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_taskName_1305, var_taskName_1305, var_taskName_1305, temp_13, GGS_bool (false), var_taskVarList_2076, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas3", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i44_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_task COMMA_SOURCE_FILE ("task-declaration.galgas3", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas3", 34)) ;
  switch (select_omnibus_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 38)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas3", 40)) ;
      if (select_omnibus_5F_syntax_39 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 43)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("task-declaration.galgas3", 50)) ;
  switch (select_omnibus_5F_syntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-declaration.galgas3", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 61)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_41 (inCompiler)) {
    case 2: {
      nt_private_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("task-declaration.galgas3", 71)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-declaration.galgas3", 72)) ;
      nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
      switch (select_omnibus_5F_syntax_42 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 78)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 81)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 94)) ;
    } break ;
    case 4: {
      nt_task_5F_event_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("task-declaration.galgas3", 98)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 100)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 103)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-declaration.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i45_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas3", 18)) ;
  GGS_location var_loc_771 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 19)) ;
  GGS_expressionAST var_expression_839 ;
  nt_expression_ (ioArgument_ioAST, var_expression_839, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assertInstructionAST::init_21__21_ (var_loc_771, var_expression_839, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas3", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i45_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_assert COMMA_SOURCE_FILE ("instruction-assert.galgas3", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i46_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 28)) ;
  GGS_lstring var_typeName_1120 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 29)) ;
  GGS_integerSliceFieldListAST temp_0 = GGS_integerSliceFieldListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 30)) ;
  GGS_integerSliceFieldListAST var_integerFieldValues_1164 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_sliceWidth_1225 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 32)) ;
    GGS_expressionAST var_expression_1271 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1271, inCompiler) ;
    var_integerFieldValues_1164.addAssignOperation (var_sliceWidth_1225, var_expression_1271, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 34))  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 34)) ;
    if (select_omnibus_5F_syntax_43 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerThan, var_integerFieldValues_1164.getter_count (SOURCE_FILE ("expression-integer-slice.galgas3", 37)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 38)), GGS_string ("this expression should contain two bit slices or more"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 38)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outExpression = GGS_integerSliceExpressionAST::init_21__21__21_ (var_typeName_1120, var_integerFieldValues_1164, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 40)), inCompiler COMMA_HERE) ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i46_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 32)) ;
    nt_expression_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_43 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-integer-slice.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i47_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1144 ;
  switch (select_omnibus_5F_syntax_44 (inCompiler)) {
  case 1: {
    var_publicAccess_1144 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas3", 30)) ;
    var_publicAccess_1144 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas3", 33)) ;
  GGS_lstring var_name_1288 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas3", 34)) ;
  GGS_mode var_mode_1308 ;
  switch (select_omnibus_5F_syntax_45 (inCompiler)) {
  case 1: {
    var_mode_1308 = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-svc.galgas3", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas3", 39)) ;
    var_mode_1308 = GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-svc.galgas3", 40)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 42)) ;
  GGS_lstringlist var_attributeList_1429 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_46 (inCompiler) == 2) {
      GGS_lstring var_attribute_1495 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas3", 45)) ;
      var_attributeList_1429.addAssignOperation (var_attribute_1495  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 46)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_1596 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_1596, inCompiler) ;
  GGS_lstring var_returnTypeName_1633 ;
  switch (select_omnibus_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_returnTypeName_1633 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 53)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1633, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 56)) ;
  GGS_instructionListAST var_instructionList_1812 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1812, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_1288, var_mode_1308, var_publicAccess_1144, var_attributeList_1429, var_formalArgumentList_1596, var_returnTypeName_1633, var_instructionList_1812, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 67)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 58)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i47_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas3", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-svc.galgas3", 33)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas3", 34)) ;
  switch (select_omnibus_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas3", 39)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_46 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas3", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 53)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 56)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i48_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_2422 ;
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
    var_publicAccess_2422 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas3", 81)) ;
    var_publicAccess_2422 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas3", 84)) ;
  GGS_lstring var_name_2568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas3", 85)) ;
  GGS_mode var_mode_2588 ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
    var_mode_2588 = GGS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-svc.galgas3", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas3", 90)) ;
    var_mode_2588 = GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-svc.galgas3", 91)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 93)) ;
  GGS_lstringlist var_attributeList_2713 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_50 (inCompiler) == 2) {
      GGS_lstring var_attribute_2779 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas3", 96)) ;
      var_attributeList_2713.addAssignOperation (var_attribute_2779  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 97)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_2886 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_2886, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 100)) ;
  GGS_instructionListAST var_instructionList_2951 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2951, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 102)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_2568, var_mode_2588, var_publicAccess_2422, var_attributeList_2713, var_formalArgumentList_2886, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 110)), var_instructionList_2951, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 112)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i48_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas3", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-svc.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas3", 85)) ;
  switch (select_omnibus_5F_syntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas3", 90)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas3", 96)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 100)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i49_ (GGS_ast & ioArgument_ioAST,
                                                                                              const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_3464 ;
  switch (select_omnibus_5F_syntax_51 (inCompiler)) {
  case 1: {
    var_publicAccess_3464 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas3", 123)) ;
    var_publicAccess_3464 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas3", 126)) ;
  GGS_lstring var_name_3608 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas3", 127)) ;
  GGS_mode var_mode_3628 ;
  switch (select_omnibus_5F_syntax_52 (inCompiler)) {
  case 1: {
    var_mode_3628 = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-svc.galgas3", 130)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas3", 132)) ;
    var_mode_3628 = GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-svc.galgas3", 133)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 135)) ;
  GGS_lstringlist var_attributeList_3749 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_53 (inCompiler) == 2) {
      GGS_lstring var_attribute_3815 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas3", 138)) ;
      var_attributeList_3749.addAssignOperation (var_attribute_3815  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 139)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_formalArgumentList_3922 ;
  nt_procedure_5F_input_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgumentList_3922, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 142)) ;
  GGS_instructionListAST var_instructionList_3987 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_3987, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 144)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_systemRoutineDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, var_name_3608, var_mode_3628, var_publicAccess_3464, var_attributeList_3749, var_formalArgumentList_3922, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas3", 152)), var_instructionList_3987, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 154)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas3", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i49_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-svc.galgas3", 123)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-svc.galgas3", 126)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-svc.galgas3", 127)) ;
  switch (select_omnibus_5F_syntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-svc.galgas3", 132)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-svc.galgas3", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_input_5F_formal_5F_arguments_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 142)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-svc.galgas3", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i50_ (GGS_compileTimePrefixOperatorEnumeration & outArgument_outOperator,
                                                                                       Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 55)) ;
    outArgument_outOperator = GGS_compileTimePrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas3", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 58)) ;
    outArgument_outOperator = GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas3", 59)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_compileTimePrefixOperator_i50_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 58)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i51_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 67)) ;
  GGS_location var_operationLocation_2380 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 68)) ;
  GGS_compileTimePrefixOperatorEnumeration var_prefixOperator_2453 ;
  nt_compileTimePrefixOperator_ (var_prefixOperator_2453, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 70)) ;
  GGS_lstring var_receiverName_2500 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 71)) ;
  GGS_lstring var_receiverType_2533 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 74)) ;
  GGS_lstring var_resultType_2583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 76)) ;
  GGS_ctExpressionAST var_expression_2656 ;
  nt_compile_5F_time_5F_expression_ (var_expression_2656, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 78)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compiletimePrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_2453, var_operationLocation_2380, var_receiverName_2500, var_receiverType_2533, var_expression_2656, var_resultType_2583, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i51_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 66)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 67)) ;
  nt_compileTimePrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 72)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 73)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 74)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 75)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 76)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas3", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i52_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_ifInstructionAST var_ifInstruction_1126 ;
  nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_1126, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_ifInstruction_1126  COMMA_SOURCE_FILE ("instruction-if.galgas3", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i52_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_if_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i53_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_ifInstructionAST & outArgument_outIfInstruction,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outIfInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 32)) ;
  GGS_location var_instructionLocation_1405 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 33)) ;
  GGS_bool var_staticIfExpression_1456 ;
  switch (select_omnibus_5F_syntax_55 (inCompiler)) {
  case 1: {
    GGS_lstring var_attributeValue_1512 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas3", 36)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_attributeValue_1512.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 37)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_staticIfExpression_1456 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 42)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 42))) ;
      inCompiler->emitSemanticError (var_attributeValue_1512.readProperty_location (), GGS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 40)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas3", 40)) ;
      var_staticIfExpression_1456.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    var_staticIfExpression_1456 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_expressionAST var_testExpression_1906 ;
  nt_expression_ (ioArgument_ioAST, var_testExpression_1906, inCompiler) ;
  GGS_location var_testExpressionEndLocation_1930 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 49)) ;
  GGS_instructionListAST var_thenInstructionList_2018 ;
  nt_instructionList_ (ioArgument_ioAST, var_thenInstructionList_2018, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 51)) ;
  GGS_location var_endOfThenBranch_2055 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 52)) ;
  GGS_instructionListAST var_elseInstructionList_2116 ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
    GGS_instructionListAST temp_2 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 55)) ;
    var_elseInstructionList_2116 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 58)) ;
    nt_instructionList_ (ioArgument_ioAST, var_elseInstructionList_2116, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 62)) ;
    GGS_ifInstructionAST var_ifInstruction_2333 ;
    nt_if_5F_instruction_ (ioArgument_ioAST, var_ifInstruction_2333, inCompiler) ;
    GGS_instructionListAST temp_3 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 64)) ;
    temp_3.plusPlusAssignOperation (GGS_instructionListAST_2E_element::init_21_ (var_ifInstruction_2333, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas3", 64)) ;
    var_elseInstructionList_2116 = temp_3 ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElseBranch_2412 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 66)) ;
  outArgument_outIfInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21__21__21__21_ (var_instructionLocation_1405, var_testExpression_1906, var_testExpressionEndLocation_1930, var_staticIfExpression_1456, var_thenInstructionList_2018, var_endOfThenBranch_2055, var_elseInstructionList_2116, var_endOfElseBranch_2412, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 76)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_if_5F_instruction_i53_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 32)) ;
  switch (select_omnibus_5F_syntax_55 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-if.galgas3", 36)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 49)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 51)) ;
  switch (select_omnibus_5F_syntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 57)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 58)) ;
    nt_instructionList_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-if.galgas3", 60)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 62)) ;
    nt_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i54_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 21)) ;
  GGS_expressionAST var_sizeExpression_928 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_928, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 23)) ;
  GGS_lstring var_elementTypeName_989 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_elementTypeName_989, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 25)) ;
  GGS_location var_sizeExpressionLocation_1022 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 26)) ;
  outArgument_outTypeName = GGS_string ("anonymous.").add_operation (ioArgument_ioAST.readProperty_mTypeDeclarationIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas3", 27)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 27)).getter_here (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 27)) ;
  ioArgument_ioAST.mProperty_mTypeDeclarationIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 28)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_fixedSizeArrayTypeDeclarationAST::init_21__21__21__21_ (outArgument_outTypeName, var_elementTypeName_989, var_sizeExpression_928, var_sizeExpressionLocation_1022, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i54_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 23)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("type-fixed-size-array.galgas3", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i55_ (GGS_ast & ioArgument_ioAST,
                                                                                           GGS_controlRegisterLValueAST & outArgument_outRegisterLValue,
                                                                                           Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outRegisterLValue.drop () ; // Release 'out' argument
  GGS_lstring var_registerGroupName_1435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 35)) ;
  GGS_registerGroupIndexAST var_groupIndex_1485 ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_groupIndex_1485 = GGS_registerGroupIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas3", 38)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 40)) ;
    GGS_expressionAST var_expression_1586 ;
    nt_expression_ (ioArgument_ioAST, var_expression_1586, inCompiler) ;
    GGS_location var_endOfIndex_1608 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 42)) ;
    GGS_bool var_checkIndexExpression_1652 ;
    switch (select_omnibus_5F_syntax_58 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 45)) ;
      var_checkIndexExpression_1652 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 48)) ;
      var_checkIndexExpression_1652 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    var_groupIndex_1485 = GGS_registerGroupIndexAST::class_func_index (var_expression_1586, var_endOfIndex_1608, var_checkIndexExpression_1652  COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 53)) ;
  GGS_lstring var_registerName_1955 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 54)) ;
  GGS_registerIndexAST var_registerIndex_1995 ;
  switch (select_omnibus_5F_syntax_59 (inCompiler)) {
  case 1: {
    var_registerIndex_1995 = GGS_registerIndexAST::class_func_noIndex (SOURCE_FILE ("lvalue-control-register.galgas3", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 59)) ;
    GGS_expressionAST var_expression_2102 ;
    nt_expression_ (ioArgument_ioAST, var_expression_2102, inCompiler) ;
    GGS_location var_endOfIndex_2124 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 61)) ;
    GGS_bool var_checkIndexExpression_2168 ;
    switch (select_omnibus_5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 64)) ;
      var_checkIndexExpression_2168 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 67)) ;
      var_checkIndexExpression_2168 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    var_registerIndex_1995 = GGS_registerIndexAST::class_func_index (var_expression_2102, var_endOfIndex_2124, var_checkIndexExpression_2168  COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 70)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterLValue = GGS_controlRegisterLValueAST::init_21__21__21__21_ (var_registerGroupName_1435, var_groupIndex_1485, var_registerName_1955, var_registerIndex_1995, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i55_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__A9_group COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 35)) ;
  switch (select_omnibus_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 40)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_58 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 48)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 54)) ;
  switch (select_omnibus_5F_syntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 59)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_60 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue-control-register.galgas3", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i56_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 28)) ;
  GGS_location var_instructionLocation_1170 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 29)) ;
  GGS_expressionAST var_switchExpression_1254 ;
  nt_expression_ (ioArgument_ioAST, var_switchExpression_1254, inCompiler) ;
  GGS_location var_switchExpressionEndLocation_1280 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 32)) ;
  GGS_switchCaseListAST temp_0 = GGS_switchCaseListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 33)) ;
  GGS_switchCaseListAST var_switchCaseList_1360 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 35)) ;
    GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 36)) ;
    GGS_lstringlist var_caseIdentifiers_1428 = temp_2 ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_caseIdf_1490 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 38)) ;
      var_caseIdentifiers_1428.addAssignOperation (var_caseIdf_1490  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 39)) ;
      if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 41)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 43)) ;
    GGS_instructionListAST var_instructionList_1618 ;
    nt_instructionList_ (ioArgument_ioAST, var_instructionList_1618, inCompiler) ;
    var_switchCaseList_1360.addAssignOperation (var_caseIdentifiers_1428, var_instructionList_1618  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 45)) ;
    if (select_omnibus_5F_syntax_61 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_location var_endOfInstruction_1719 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 49)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1170, var_switchExpression_1254, var_switchExpressionEndLocation_1280, var_switchCaseList_1360, var_endOfInstruction_1719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i56_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 28)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 35)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 38)) ;
      if (select_omnibus_5F_syntax_62 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 41)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 43)) ;
    nt_instructionList_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_61 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i57_ (GGS_llvmPrefixOperatorEnumeration & outArgument_outOperator,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperator.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 123)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas3", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 126)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas3", 127)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 129)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas3", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 132)) ;
    outArgument_outOperator = GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas3", 133)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvmPrefixOperator_i57_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_63 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 126)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 132)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i58_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 141)) ;
  GGS_location var_operationLocation_5079 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 142)) ;
  GGS_llvmPrefixOperatorEnumeration var_prefixOperator_5145 ;
  nt_llvmPrefixOperator_ (var_prefixOperator_5145, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 144)) ;
  GGS_lstring var_receiverName_5192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 145)) ;
  GGS_lstring var_receiverType_5225 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 148)) ;
  GGS_lstring var_resultType_5275 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 150)) ;
  GGS_llvmGenerationInstructionList var_instructionList_5329 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_5329, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 152)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (var_prefixOperator_5145, var_operationLocation_5079, var_receiverName_5192, var_receiverType_5225, var_instructionList_5329, var_resultType_5275, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i58_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 140)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 141)) ;
  nt_llvmPrefixOperator_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 144)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 145)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 146)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 147)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 149)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 150)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas3", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i59_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas3", 19)) ;
  GGS_lstring var_checkMessage_817 ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
    var_checkMessage_817 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas3", 22)) ;
  } break ;
  case 2: {
    var_checkMessage_817 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas3", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas3", 26)) ;
  GGS_expressionAST var_expression_973 ;
  nt_expression_ (ioArgument_ioAST, var_expression_973, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_checkInstructionAST::init_21__21__21_ (var_checkMessage_817.readProperty_location (), var_checkMessage_817, var_expression_973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("directive-check.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas3", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i59_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("directive-check.galgas3", 19)) ;
  switch (select_omnibus_5F_syntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("directive-check.galgas3", 24)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("directive-check.galgas3", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("directive-check.galgas3", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i60_ (GGS_ast & ioArgument_ioAST,
                                                                   const GGS_lstring constinArgument_inReceiverTypeName,
                                                                   const GGS_string constinArgument_inReceiverLLVMBaseTypeName,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1454 ;
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_publicAccess_1454 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas3", 39)) ;
    var_publicAccess_1454 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas3", 42)) ;
  GGS_lstring var_guardName_1596 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas3", 43)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas3", 44)) ;
  GGS_lstringlist var_attributeList_1628 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_66 (inCompiler) == 2) {
      GGS_lstring var_attribute_1694 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas3", 47)) ;
      var_attributeList_1628.addAssignOperation (var_attribute_1694  COMMA_SOURCE_FILE ("declaration-guard.galgas3", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_routineFormalArgumentListAST var_guardFormalArgumentList_1795 ;
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_guardFormalArgumentList_1795, inCompiler) ;
  GGS_guardKind var_guardKind_1839 ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
    var_guardKind_1839 = GGS_guardKind::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas3", 53)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas3", 55)) ;
    GGS_callInstructionAST var_instruction_1944 ;
    nt_procedure_5F_call_ (ioArgument_ioAST, var_instruction_1944, inCompiler) ;
    var_guardKind_1839 = GGS_guardKind::class_func_convenienceGuard (var_instruction_1944  COMMA_SOURCE_FILE ("declaration-guard.galgas3", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas3", 59)) ;
  GGS_instructionListAST var_instructionList_2066 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_2066, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas3", 61)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_guardDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inReceiverTypeName, constinArgument_inReceiverLLVMBaseTypeName, var_guardName_1596, var_publicAccess_1454, var_attributeList_1628, var_guardFormalArgumentList_1795, var_guardKind_1839, var_instructionList_2066, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas3", 72)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas3", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guard_i60_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-guard.galgas3", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-guard.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-guard.galgas3", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-guard.galgas3", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("declaration-guard.galgas3", 55)) ;
    nt_procedure_5F_call_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-guard.galgas3", 59)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-guard.galgas3", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i61_ (GGS_ast & ioArgument_ioAST,
                                                                        GGS_expressionAST & outArgument_outExpression,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 20)) ;
      GGS_location var_operatorLocation_780 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 21)) ;
      GGS_expressionAST var_rightExpression_860 ;
      nt_expression_5F_logical_5F_and_ (ioArgument_ioAST, var_rightExpression_860, inCompiler) ;
      GGS_booleanShortCircuitAndOperatorExpressionAST var_andExpression_940 = GGS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_780, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 25)), outArgument_outExpression, inCompiler COMMA_HERE), var_operatorLocation_780, GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_780, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 27)), var_rightExpression_860, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_780, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 31)), var_andExpression_940, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_i61_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 20)) ;
      nt_expression_5F_logical_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i62_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 43)) ;
      GGS_location var_operatorLocation_1640 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 44)) ;
      GGS_expressionAST var_rightExpression_1719 ;
      nt_expression_5F_bitwise_5F_or_ (ioArgument_ioAST, var_rightExpression_1719, inCompiler) ;
      outArgument_outExpression = GGS_booleanShortCircuitAndOperatorExpressionAST::init_21__21__21_ (outArgument_outExpression, var_operatorLocation_1640, var_rightExpression_1719, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i62_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_69 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 43)) ;
      nt_expression_5F_bitwise_5F_or_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i63_ (GGS_ast & ioArgument_ioAST,
                                                                                         GGS_expressionAST & outArgument_outExpression,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 60)) ;
      GGS_location var_operatorLocation_2199 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 61)) ;
      GGS_expressionAST var_rightExpression_2279 ;
      nt_expression_5F_bitwise_5F_xor_ (ioArgument_ioAST, var_rightExpression_2279, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2199, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("expression-operator-priority.galgas3", 66)), var_rightExpression_2279, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i63_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 60)) ;
      nt_expression_5F_bitwise_5F_xor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i64_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 78)) ;
      GGS_location var_operatorLocation_2772 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 79)) ;
      GGS_expressionAST var_rightExpression_2852 ;
      nt_expression_5F_bitwise_5F_and_ (ioArgument_ioAST, var_rightExpression_2852, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_2772, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("expression-operator-priority.galgas3", 84)), var_rightExpression_2852, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i64_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 78)) ;
      nt_expression_5F_bitwise_5F_and_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i65_ (GGS_ast & ioArgument_ioAST,
                                                                                          GGS_expressionAST & outArgument_outExpression,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_equality_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 96)) ;
      GGS_location var_operatorLocation_3344 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 97)) ;
      GGS_expressionAST var_rightExpression_3421 ;
      nt_expression_5F_equality_ (ioArgument_ioAST, var_rightExpression_3421, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3344, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("expression-operator-priority.galgas3", 102)), var_rightExpression_3421, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i65_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_equality_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_72 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 96)) ;
      nt_expression_5F_equality_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i66_ (GGS_ast & ioArgument_ioAST,
                                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_comparison_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 114)) ;
    GGS_location var_operatorLocation_3909 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 115)) ;
    GGS_expressionAST var_rightExpression_3988 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_3988, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_3909, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas3", 120)), var_rightExpression_3988, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 124)) ;
    GGS_location var_operatorLocation_4189 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 125)) ;
    GGS_expressionAST var_rightExpression_4268 ;
    nt_expression_5F_comparison_ (ioArgument_ioAST, var_rightExpression_4268, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_4295 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4189, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("expression-operator-priority.galgas3", 130)), var_rightExpression_4268, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_4189, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 135)), var_expression_4295, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_equality_i66_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_comparison_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 114)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2260_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 124)) ;
    nt_expression_5F_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i67_ (GGS_ast & ioArgument_ioAST,
                                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_shift_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  switch (select_omnibus_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 147)) ;
    GGS_location var_operatorLocation_4869 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 148)) ;
    GGS_expressionAST var_rightExpression_4943 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_4943, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_4869, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas3", 153)), var_rightExpression_4943, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 157)) ;
    GGS_location var_operatorLocation_5147 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 158)) ;
    GGS_expressionAST var_rightExpression_5221 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5221, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_5248 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5147, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas3", 163)), var_rightExpression_5221, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_5147, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 168)), var_expression_5248, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 172)) ;
    GGS_location var_operatorLocation_5549 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 173)) ;
    GGS_expressionAST var_rightExpression_5623 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5623, inCompiler) ;
    outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5549, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("expression-operator-priority.galgas3", 178)), var_rightExpression_5623, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 182)) ;
    GGS_location var_operatorLocation_5827 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 183)) ;
    GGS_expressionAST var_rightExpression_5901 ;
    nt_expression_5F_shift_ (ioArgument_ioAST, var_rightExpression_5901, inCompiler) ;
    GGS_omnibusInfixOperatorExpressionAST var_expression_5928 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_5827, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("expression-operator-priority.galgas3", 188)), var_rightExpression_5901, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_5827, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 193)), var_expression_5928, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_comparison_i67_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_shift_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2264_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 147)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2265_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 157)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 172)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 182)) ;
    nt_expression_5F_shift_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i68_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_expressionAST & outArgument_outExpression,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_addition_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 205)) ;
      GGS_location var_operatorLocation_6507 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 206)) ;
      GGS_expressionAST var_rightExpression_6584 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_6584, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6507, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("expression-operator-priority.galgas3", 211)), var_rightExpression_6584, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 215)) ;
      GGS_location var_operatorLocation_6795 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 216)) ;
      GGS_expressionAST var_rightExpression_6872 ;
      nt_expression_5F_addition_ (ioArgument_ioAST, var_rightExpression_6872, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_6795, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("expression-operator-priority.galgas3", 221)), var_rightExpression_6872, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_shift_i68_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_addition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_75 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 205)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 215)) ;
      nt_expression_5F_addition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i69_ (GGS_ast & ioArgument_ioAST,
                                                                                    GGS_expressionAST & outArgument_outExpression,
                                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_product_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 233)) ;
      GGS_location var_operatorLocation_7359 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 234)) ;
      GGS_expressionAST var_rightExpression_7435 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_7435, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7359, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("expression-operator-priority.galgas3", 239)), var_rightExpression_7435, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 243)) ;
      GGS_location var_operatorLocation_7640 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 244)) ;
      GGS_expressionAST var_rightExpression_7716 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_7716, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7640, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas3", 249)), var_rightExpression_7716, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 253)) ;
      GGS_location var_operatorLocation_7925 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 254)) ;
      GGS_expressionAST var_rightExpression_8001 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8001, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_7925, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("expression-operator-priority.galgas3", 259)), var_rightExpression_8001, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 263)) ;
      GGS_location var_operatorLocation_8206 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 264)) ;
      GGS_expressionAST var_rightExpression_8282 ;
      nt_expression_5F_product_ (ioArgument_ioAST, var_rightExpression_8282, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8206, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas3", 269)), var_rightExpression_8282, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_addition_i69_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_product_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 233)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 243)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 253)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 263)) ;
      nt_expression_5F_product_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i70_ (GGS_ast & ioArgument_ioAST,
                                                                                   GGS_expressionAST & outArgument_outExpression,
                                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_77 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 281)) ;
      GGS_location var_operatorLocation_8755 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 282)) ;
      GGS_expressionAST var_rightExpression_8820 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_8820, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_8755, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("expression-operator-priority.galgas3", 287)), var_rightExpression_8820, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 291)) ;
      GGS_location var_operatorLocation_9025 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 292)) ;
      GGS_expressionAST var_rightExpression_9090 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9090, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9025, GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas3", 297)), var_rightExpression_9090, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 301)) ;
      GGS_location var_operatorLocation_9299 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 302)) ;
      GGS_expressionAST var_rightExpression_9364 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9364, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9299, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("expression-operator-priority.galgas3", 307)), var_rightExpression_9364, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 311)) ;
      GGS_location var_operatorLocation_9569 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 312)) ;
      GGS_expressionAST var_rightExpression_9634 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9634, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9569, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas3", 317)), var_rightExpression_9634, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 321)) ;
      GGS_location var_operatorLocation_9843 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 322)) ;
      GGS_expressionAST var_rightExpression_9908 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_9908, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_9843, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("expression-operator-priority.galgas3", 327)), var_rightExpression_9908, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 331)) ;
      GGS_location var_operatorLocation_10113 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 332)) ;
      GGS_expressionAST var_rightExpression_10178 ;
      nt_primary_ (ioArgument_ioAST, var_rightExpression_10178, inCompiler) ;
      outArgument_outExpression = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_operatorLocation_10113, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("expression-operator-priority.galgas3", 337)), var_rightExpression_10178, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_product_i70_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_77 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 281)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 291)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 301)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 311)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 321)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21__2F_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 331)) ;
      nt_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 346)) ;
  GGS_location var_operatorLocation_10575 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 347)) ;
  GGS_expressionAST var_expression_10638 ;
  nt_primary_ (ioArgument_ioAST, var_expression_10638, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_10575, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("expression-operator-priority.galgas3", 351)), var_expression_10638, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i71_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 346)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 359)) ;
  GGS_location var_operatorLocation_10987 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 360)) ;
  GGS_expressionAST var_expression_11050 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11050, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_10987, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("expression-operator-priority.galgas3", 364)), var_expression_11050, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i72_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_not COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 359)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 372)) ;
  GGS_location var_operatorLocation_11385 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 373)) ;
  GGS_expressionAST var_expression_11448 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11448, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11385, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("expression-operator-priority.galgas3", 377)), var_expression_11448, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i73_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 372)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 385)) ;
  GGS_location var_operatorLocation_11786 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 386)) ;
  GGS_expressionAST var_expression_11849 ;
  nt_primary_ (ioArgument_ioAST, var_expression_11849, inCompiler) ;
  outArgument_outExpression = GGS_prefixOperatorExpressionAST::init_21__21__21_ (var_operatorLocation_11786, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("expression-operator-priority.galgas3", 390)), var_expression_11849, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i74_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 385)) ;
  nt_primary_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 398)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 400)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i75_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 398)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-operator-priority.galgas3", 400)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_controlRegisterLValueAST var_registerLValue_939 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_939, inCompiler) ;
  GGS_lstring var_fieldName_972 ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
    var_fieldName_972 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("expression-control-register.galgas3", 22)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas3", 24)) ;
    var_fieldName_972 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas3", 25)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_registerInExpressionAST::init_21__21_ (var_registerLValue_939, var_fieldName_972, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i76_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression-control-register.galgas3", 24)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-control-register.galgas3", 25)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i77_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas3", 18)) ;
  GGS_location var_loc_773 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas3", 19)) ;
  GGS_expressionAST var_codeExpression_841 ;
  nt_expression_ (ioArgument_ioAST, var_codeExpression_841, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_panicInstructionAST::init_21__21_ (var_loc_773, var_codeExpression_841, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas3", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i77_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("instruction-panic.galgas3", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i78_ (GGS_ast & ioArgument_ioAST,
                                                                             GGS_instructionListAST & outArgument_outInstructionList,
                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GGS_instructionListAST temp_0 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instructionList.galgas3", 24)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_79 (inCompiler) == 2) {
      nt_instruction_ (ioArgument_ioAST, outArgument_outInstructionList, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instructionList_i78_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_79 (inCompiler) == 2) {
      nt_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i79_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas3", 18)) ;
  outArgument_outExpression = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i79_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("expression-true-false.galgas3", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_ (GGS_ast & /* ioArgument_ioAST */,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas3", 25)) ;
  outArgument_outExpression = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (false), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i80_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("expression-true-false.galgas3", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_ (GGS_ast & ioArgument_ioAST,
                                                                     GGS_expressionAST & outArgument_outExpression,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ifExpressionAST var_if_5F_expression_1047 ;
  nt_expression_5F_if_ (ioArgument_ioAST, var_if_5F_expression_1047, inCompiler) ;
  outArgument_outExpression = var_if_5F_expression_1047 ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i81_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_5F_if_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i82_ (GGS_ast & ioArgument_ioAST,
                                                                              GGS_ifExpressionAST & outArgument_outExpression,
                                                                              Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas3", 30)) ;
  GGS_expressionAST var_ifExpression_1339 ;
  nt_expression_ (ioArgument_ioAST, var_ifExpression_1339, inCompiler) ;
  GGS_location var_ifExpressionEndLocation_1371 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas3", 32)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas3", 33)) ;
  GGS_expressionAST var_thenExpression_1443 ;
  nt_expression_ (ioArgument_ioAST, var_thenExpression_1443, inCompiler) ;
  GGS_location var_thenExpressionEndLocation_1477 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas3", 37)) ;
  GGS_expressionAST var_elseExpression_1553 ;
  switch (select_omnibus_5F_syntax_80 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas3", 40)) ;
    nt_expression_ (ioArgument_ioAST, var_elseExpression_1553, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas3", 42)) ;
  } break ;
  case 2: {
    GGS_ifExpressionAST var_else_5F_if_5F_expression_1689 ;
    nt_expression_5F_if_ (ioArgument_ioAST, var_else_5F_if_5F_expression_1689, inCompiler) ;
    var_elseExpression_1553 = var_else_5F_if_5F_expression_1689 ;
  } break ;
  default:
    break ;
  }
  GGS_location var_elseExpressionEndLocation_1777 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas3", 47)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21__21__21_ (var_ifExpression_1339, var_ifExpressionEndLocation_1371, var_thenExpression_1443, var_thenExpressionEndLocation_1477, var_elseExpression_1553, var_elseExpressionEndLocation_1777, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_expression_5F_if_i82_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas3", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas3", 33)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas3", 37)) ;
  switch (select_omnibus_5F_syntax_80 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression-if.galgas3", 40)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression-if.galgas3", 42)) ;
  } break ;
  case 2: {
    nt_expression_5F_if_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i83_ (GGS_genericFormalParameterList & outArgument_outGenericFormalParameterList,
                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGenericFormalParameterList.drop () ; // Release 'out' argument
  GGS_genericFormalParameterList temp_0 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 70)) ;
  outArgument_outGenericFormalParameterList = temp_0 ;
  switch (select_omnibus_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 73)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_omnibus_5F_syntax_83 (inCompiler)) {
      case 1: {
        GGS_lstring var_constantName_2694 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 76)) ;
        outArgument_outGenericFormalParameterList.addAssignOperation (GGS_genericFormalParameter::class_func_constant (var_constantName_2694  COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 77))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 77)) ;
      } break ;
      case 2: {
        GGS_lstring var_typeName_2820 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 79)) ;
        outArgument_outGenericFormalParameterList.addAssignOperation (GGS_genericFormalParameter::class_func_type (var_typeName_2820  COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 80))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 80)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_82 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 83)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i83_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 73)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_omnibus_5F_syntax_83 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 76)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 79)) ;
      } break ;
      default:
        break ;
      }
      if (select_omnibus_5F_syntax_82 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 85)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i84_ (GGS_ctExpressionAST & outArgument_outWhereClause,
                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outWhereClause.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
    outArgument_outWhereClause = GGS_ctTrueExpressionAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 95)) ;
    nt_compile_5F_time_5F_expression_ (outArgument_outWhereClause, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i84_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_where COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 95)) ;
    nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i85_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 103)) ;
  GGS_lstring var_typeName_3492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 104)) ;
  GGS_genericFormalParameterList var_genericFormalParameterList_3539 ;
  nt_generic_5F_formal_5F_arguments_ (var_genericFormalParameterList_3539, inCompiler) ;
  GGS_ctExpressionAST var_whereClause_3600 ;
  nt_generic_5F_where_5F_clause_ (var_whereClause_3600, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 107)) ;
  GGS_lstring var_sizeKey_3644 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 108)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sizeKey_3644.readProperty_string ().objectCompare (GGS_string ("size"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_sizeKey_3644.readProperty_location (), GGS_string ("this identifier should be 'size'"), fixItArray1  COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 110)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 112)) ;
  GGS_lbigint var_bitSize_3785 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 114)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmGenericType::init_21__21__21__21_ (var_typeName_3492, var_genericFormalParameterList_3539, var_whereClause_3600, var_bitSize_3785.readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i85_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 104)) ;
  nt_generic_5F_formal_5F_arguments_indexing (inCompiler) ;
  nt_generic_5F_where_5F_clause_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 107)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i86_ (GGS_ast & ioArgument_ioAST,
                                                                                                                          GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_propertyVisibility var_visibility_2419 ;
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_visibility_2419 = GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas3", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 59)) ;
    var_visibility_2419 = GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-structure-declaration.galgas3", 60)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_visibility_2419, ioArgument_ioPropertyListAST, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i86_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 59)) ;
  } break ;
  default:
    break ;
  }
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i87_ (GGS_ast & ioArgument_ioAST,
                                                                                                          GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-structure-declaration.galgas3", 71)), ioArgument_ioPropertyListAST, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i87_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i88_ (GGS_ast & ioArgument_ioAST,
                                                                                               const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                               GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 81)) ;
  GGS_lstring var_propertyName_3250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 82)) ;
  GGS_lstring var_typeName_3281 ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3281, inCompiler) ;
  } break ;
  case 2: {
    var_typeName_3281 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas3", 87)) ;
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_87 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 90)) ;
    GGS_expressionAST var_initExpression_3444 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_3444, inCompiler) ;
    GGS_propertyAttributeList temp_0 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 94)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_3250, temp_0, constinArgument_inVisibility, var_typeName_3281, GGS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_3444  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 97))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 92)) ;
  } break ;
  case 2: {
    GGS_propertyAttributeList temp_1 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 101)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_3250, temp_1, constinArgument_inVisibility, var_typeName_3281, GGS_propertyKindAST::class_func_uninitializedConstantProperty (SOURCE_FILE ("type-structure-declaration.galgas3", 104))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 99)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i88_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 82)) ;
  switch (select_omnibus_5F_syntax_86 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_omnibus_5F_syntax_87 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 90)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i89_ (GGS_ast & ioArgument_ioAST,
                                                                                               const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                               GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 115)) ;
  GGS_lstring var_propertyName_4105 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 116)) ;
  GGS_propertyAttributeList temp_0 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 117)) ;
  GGS_propertyAttributeList var_propertyAttributeList_4150 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_88 (inCompiler) == 2) {
      GGS_lstring var_attribute_4224 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 120)) ;
      GGS_lbigint var_value_4257 = inCompiler->synthetizedAttribute_bigInteger () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 121)) ;
      var_propertyAttributeList_4150.addAssignOperation (var_attribute_4224, var_value_4257  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 122)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_89 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_4371 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_4371, inCompiler) ;
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 1: {
      GGS_propertyAttributeList temp_2 = GGS_propertyAttributeList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 127)) ;
      ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4105, temp_2, constinArgument_inVisibility, var_typeName_4371, GGS_propertyKindAST::class_func_uninitializedStoredProperty (SOURCE_FILE ("type-structure-declaration.galgas3", 127))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 127)) ;
    } break ;
    case 2: {
      nt_propertyGetterSetter_ (ioArgument_ioAST, constinArgument_inVisibility, var_propertyName_4105, var_propertyAttributeList_4150, var_typeName_4371, ioArgument_ioPropertyListAST, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 137)) ;
      GGS_expressionAST var_initExpression_4742 ;
      nt_expression_ (ioArgument_ioAST, var_initExpression_4742, inCompiler) ;
      ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4105, var_propertyAttributeList_4150, constinArgument_inVisibility, var_typeName_4371, GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_4742  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 144))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 139)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 147)) ;
    GGS_expressionAST var_initExpression_5019 ;
    nt_expression_ (ioArgument_ioAST, var_initExpression_5019, inCompiler) ;
    ioArgument_ioPropertyListAST.addAssignOperation (var_propertyName_4105, var_propertyAttributeList_4150, constinArgument_inVisibility, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas3", 153)), GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_5019  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 154))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 149)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i89_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_88 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 120)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 121)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_omnibus_5F_syntax_89 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_90 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_propertyGetterSetter_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 137)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 147)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i90_ (GGS_ast & ioArgument_ioAST,
                                                                                  const GGS_propertyVisibility constinArgument_inVisibility,
                                                                                  const GGS_lstring constinArgument_inPropertyName,
                                                                                  const GGS_propertyAttributeList constinArgument_inPropertyAttributeList,
                                                                                  const GGS_lstring constinArgument_inTypeName,
                                                                                  GGS_structurePropertyListAST & ioArgument_ioPropertyListAST,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 168)) ;
  switch (select_omnibus_5F_syntax_91 (inCompiler)) {
  case 1: {
    GGS_bool var_getterDefined_5659 = GGS_bool (false) ;
    GGS_bool var_setterDefined_5691 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_getterOrSetter_5753 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 174)) ;
      GGS_instructionListAST var_instructionList_5822 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_5822, inCompiler) ;
      GGS_location var_endOfInstructionList_5851 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 176)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 177)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_getterOrSetter_5753.readProperty_string ().objectCompare (GGS_string ("get"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_readOnlyComputedProperty (var_instructionList_5822, var_endOfInstructionList_5851  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 184))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 179)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_getterDefined_5659.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_getterOrSetter_5753.readProperty_location (), GGS_string ("duplicate func definition"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 189)) ;
            }
          }
          var_getterDefined_5659 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_getterOrSetter_5753.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_writeComputedProperty (var_instructionList_5822, var_endOfInstructionList_5851  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 198))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 193)) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_setterDefined_5691.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_getterOrSetter_5753.readProperty_location (), GGS_string ("duplicate setter definition"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 203)) ;
              }
            }
            var_setterDefined_5691 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GenericArray <FixItDescription> fixItArray7 ;
          fixItArray7.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@set")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@get")) ;
          inCompiler->emitSemanticError (var_getterOrSetter_5753.readProperty_location (), GGS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 207)) ;
        }
      }
      if (select_omnibus_5F_syntax_92 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_bool test_9 = var_setterDefined_5691 ;
      if (GalgasBool::boolTrue == test_9.boolEnum ()) {
        test_9 = var_getterDefined_5659.operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 211)) ;
      }
      test_8 = test_9.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 212)), GGS_string ("a func should be defined"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 212)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_bool test_12 = var_setterDefined_5691.operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 213)) ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          test_12 = var_getterDefined_5659.operator_not (SOURCE_FILE ("type-structure-declaration.galgas3", 213)) ;
        }
        test_11 = test_12.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 214)), GGS_string ("a func should be defined, and optionaly a setter"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 214)) ;
        }
      }
    }
  } break ;
  case 2: {
    GGS_instructionListAST var_readInstructionList_7340 ;
    nt_instructionList_ (ioArgument_ioAST, var_readInstructionList_7340, inCompiler) ;
    GGS_location var_endOfReadInstructionList_7371 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 218)) ;
    ioArgument_ioPropertyListAST.addAssignOperation (constinArgument_inPropertyName, constinArgument_inPropertyAttributeList, constinArgument_inVisibility, constinArgument_inTypeName, GGS_propertyKindAST::class_func_readOnlyComputedProperty (var_readInstructionList_7340, var_endOfReadInstructionList_7371  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 224))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 219)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_propertyGetterSetter_i90_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 168)) ;
  switch (select_omnibus_5F_syntax_91 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 173)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 174)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 177)) ;
      if (select_omnibus_5F_syntax_92 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    nt_instructionList_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 229)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i91_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 235)) ;
  GGS_lstring var_structureName_7907 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 236)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 237)) ;
  GGS_lstringlist var_attributeList_7943 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_93 (inCompiler) == 2) {
      GGS_lstring var_attribute_8009 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 240)) ;
      var_attributeList_7943.addAssignOperation (var_attribute_8009  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 241)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 243)) ;
  GGS_structurePropertyListAST temp_2 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 244)) ;
  GGS_structurePropertyListAST var_fieldList_8104 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    switch (select_omnibus_5F_syntax_94 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (ioArgument_ioAST, var_fieldList_8104, inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_ (ioArgument_ioAST, var_structureName_7907, inCompiler) ;
    } break ;
    default:
      repeatFlag_3 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 251)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (var_structureName_7907, var_structureName_7907, var_structureName_7907, var_attributeList_7943, GGS_bool (true), var_fieldList_8104, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 252)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i91_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 236)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_93 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 240)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 243)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_94 (inCompiler)) {
    case 2: {
      nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-structure-declaration.galgas3", 251)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i92_ (GGS_ast & ioArgument_ioAST,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 27)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 28)) ;
  GGS_lstringlist var_attributeList_1167 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_95 (inCompiler) == 2) {
      GGS_lstring var_attribute_1233 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 31)) ;
      var_attributeList_1167.addAssignOperation (var_attribute_1233  COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstring var_constantName_1309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 34)) ;
  GGS_lstring var_typeName_1340 ;
  switch (select_omnibus_5F_syntax_96 (inCompiler)) {
  case 1: {
    var_typeName_1340 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas3", 37)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1340, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 41)) ;
  GGS_expressionAST var_expression_1503 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1503, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_globalConstantDeclarationAST::init_21__21__21__21_ (var_constantName_1309, var_attributeList_1167, var_typeName_1340, var_expression_1503, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i92_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_95 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 34)) ;
  switch (select_omnibus_5F_syntax_96 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-constant.galgas3", 41)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i93_ (GGS_ast & ioArgument_ioAST,
                                                                    GGS_LValueAST & outArgument_outAssignmentTargetAST,
                                                                    Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outAssignmentTargetAST.drop () ; // Release 'out' argument
  GGS_lstring var_receiver_1694 ;
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
    var_receiver_1694 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas3", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas3", 45)) ;
    var_receiver_1694 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas3", 46)) ;
  } break ;
  default:
    break ;
  }
  GGS_LValueOperandAST var_operand_1834 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_1834, inCompiler) ;
  outArgument_outAssignmentTargetAST = GGS_LValueAST::init_21__21_ (var_receiver_1694, var_operand_1834, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_i93_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_97 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas3", 43)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("lvalue.galgas3", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i94_ (GGS_ast & /* ioArgument_ioAST */,
                                                                               GGS_LValueOperandAST & outArgument_outOperand,
                                                                               Lexique_omnibus_5F_lexique * /* inCompiler */) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  outArgument_outOperand = GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("lvalue.galgas3", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i94_indexing (Lexique_omnibus_5F_lexique * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i95_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_LValueOperandAST & outArgument_outOperand,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas3", 61)) ;
  GGS_lstring var_propertyName_2362 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas3", 62)) ;
  GGS_LValueOperandAST var_operand_2412 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2412, inCompiler) ;
  outArgument_outOperand = GGS_LValueOperandAST::class_func_property (var_propertyName_2362, var_operand_2412  COMMA_SOURCE_FILE ("lvalue.galgas3", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i95_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("lvalue.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("lvalue.galgas3", 62)) ;
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i96_ (GGS_ast & ioArgument_ioAST,
                                                                               GGS_LValueOperandAST & outArgument_outOperand,
                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outOperand.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas3", 70)) ;
  GGS_expressionAST var_expression_2725 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2725, inCompiler) ;
  GGS_location var_endOfIndex_2745 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas3", 72)) ;
  GGS_bool var_checkIndexExpression_2787 ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas3", 75)) ;
    var_checkIndexExpression_2787 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas3", 78)) ;
    var_checkIndexExpression_2787 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_LValueOperandAST var_operand_2960 ;
  nt_lvalue_5F_operand_ (ioArgument_ioAST, var_operand_2960, inCompiler) ;
  outArgument_outOperand = GGS_LValueOperandAST::class_func_arrayAccess (var_expression_2725, var_endOfIndex_2745, var_checkIndexExpression_2787, var_operand_2960  COMMA_SOURCE_FILE ("lvalue.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_lvalue_5F_operand_i96_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("lvalue.galgas3", 70)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_98 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("lvalue.galgas3", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5D__21_ COMMA_SOURCE_FILE ("lvalue.galgas3", 78)) ;
  } break ;
  default:
    break ;
  }
  nt_lvalue_5F_operand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i97_ (GGS_ast & ioArgument_ioAST,
                                                                                const GGS_bool constinArgument_inIsExitCommand,
                                                                                GGS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GGS_location var_endOfExp_1832 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas3", 44)) ;
  GGS_lbool var_usesSelf_1885 ;
  switch (select_omnibus_5F_syntax_99 (inCompiler)) {
  case 1: {
    var_usesSelf_1885 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 47)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas3", 49)) ;
    var_usesSelf_1885 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 50)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 51)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas3", 53)) ;
  GGS_lstringlist var_nameList_2031 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_name_2082 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas3", 55)) ;
    var_nameList_2031.addAssignOperation (var_name_2082  COMMA_SOURCE_FILE ("instruction-event.galgas3", 56)) ;
    if (select_omnibus_5F_syntax_100 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 58)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_effectiveArgumentListAST var_effectiveParameterList_2182 ;
  GGS_location joker_2206 ; // Joker input parameter
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_2182, joker_2206, inCompiler) ;
  joker_2206.drop () ; // Release temporary input variables (joker in source)
  outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE), GGS_bool (false), var_endOfExp_1832, var_usesSelf_1885, var_nameList_2031, var_effectiveParameterList_2182  COMMA_SOURCE_FILE ("instruction-event.galgas3", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i97_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas3", 44)) ;
  switch (select_omnibus_5F_syntax_99 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas3", 49)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas3", 55)) ;
    if (select_omnibus_5F_syntax_100 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i98_ (GGS_ast & ioArgument_ioAST,
                                                                                const GGS_bool constinArgument_inIsExitCommand,
                                                                                GGS_guardedCommandAST & outArgument_outGuardedCommand,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outGuardedCommand.drop () ; // Release 'out' argument
  GGS_expressionAST var_expression_2800 ;
  nt_expression_ (ioArgument_ioAST, var_expression_2800, inCompiler) ;
  GGS_location var_endOfExp_2820 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 76)) ;
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
    outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolean (constinArgument_inIsExitCommand, var_expression_2800, var_endOfExp_2820  COMMA_SOURCE_FILE ("instruction-event.galgas3", 78)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas3", 84)) ;
    GGS_lbool var_usesSelf_3046 ;
    switch (select_omnibus_5F_syntax_102 (inCompiler)) {
    case 1: {
      var_usesSelf_3046 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 87)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas3", 89)) ;
      var_usesSelf_3046 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 90)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 91)) ;
    } break ;
    default:
      break ;
    }
    GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas3", 93)) ;
    GGS_lstringlist var_nameList_3208 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_name_3263 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas3", 95)) ;
      var_nameList_3208.addAssignOperation (var_name_3263  COMMA_SOURCE_FILE ("instruction-event.galgas3", 96)) ;
      if (select_omnibus_5F_syntax_103 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 98)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_effectiveArgumentListAST var_effectiveParameterList_3373 ;
    GGS_location joker_3397 ; // Joker input parameter
    nt_effective_5F_parameters_ (ioArgument_ioAST, var_effectiveParameterList_3373, joker_3397, inCompiler) ;
    joker_3397.drop () ; // Release temporary input variables (joker in source)
    outArgument_outGuardedCommand = GGS_guardedCommandAST::class_func_boolAndSync (constinArgument_inIsExitCommand, var_expression_2800, GGS_bool (true), var_endOfExp_2820, var_usesSelf_3046, var_nameList_3208, var_effectiveParameterList_3373  COMMA_SOURCE_FILE ("instruction-event.galgas3", 101)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_guarded_5F_command_i98_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_101 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("instruction-event.galgas3", 84)) ;
    switch (select_omnibus_5F_syntax_102 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_self COMMA_SOURCE_FILE ("instruction-event.galgas3", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 91)) ;
    } break ;
    default:
      break ;
    }
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-event.galgas3", 95)) ;
      if (select_omnibus_5F_syntax_103 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 98)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_effective_5F_parameters_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_ (GGS_ast & ioArgument_ioAST,
                                                                         GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 117)) ;
  GGS_location var_startLocation_3954 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 118)) ;
  GGS_syncInstructionBranchListAST temp_0 = GGS_syncInstructionBranchListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas3", 119)) ;
  GGS_syncInstructionBranchListAST var_instructionBranchList_4023 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_104 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas3", 122)) ;
      GGS_guardedCommandAST var_guardedCommand_4150 ;
      nt_guarded_5F_command_ (ioArgument_ioAST, GGS_bool (true), var_guardedCommand_4150, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 124)) ;
      GGS_instructionListAST var_instructionList_4215 ;
      nt_instructionList_ (ioArgument_ioAST, var_instructionList_4215, inCompiler) ;
      var_instructionBranchList_4023.addAssignOperation (var_guardedCommand_4150, var_instructionList_4215, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 126))  COMMA_SOURCE_FILE ("instruction-event.galgas3", 126)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_syncInstructionAST::init_21__21__21_ (var_startLocation_3954, var_instructionBranchList_4023, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas3", 135)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i99_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("instruction-event.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 117)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_104 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_when COMMA_SOURCE_FILE ("instruction-event.galgas3", 122)) ;
      nt_guarded_5F_command_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 124)) ;
      nt_instructionList_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-event.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i100_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas3", 64)) ;
  GGS_lstring var_driverName_2435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas3", 65)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 66)) ;
  GGS_lstringlist var_driverDependenceList_2468 = temp_0 ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 69)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_dependenceName_2563 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas3", 71)) ;
      var_driverDependenceList_2468.addAssignOperation (var_dependenceName_2563  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 72)) ;
      if (select_omnibus_5F_syntax_106 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 74)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 77)) ;
  GGS_structurePropertyListAST temp_2 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 78)) ;
  GGS_structurePropertyListAST var_propertyListAST_2711 = temp_2 ;
  GGS_bool var_bootHandled_2741 = GGS_bool (false) ;
  GGS_location var_bootLocation_2769 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 80)) ;
  GGS_instructionListAST temp_3 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 81)) ;
  GGS_instructionListAST var_bootInstructionList_2827 = temp_3 ;
  GGS_location var_bootEndLocation_2861 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 82)) ;
  GGS_bool var_startupHandled_2902 = GGS_bool (false) ;
  GGS_location var_startupLocation_2933 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 84)) ;
  GGS_instructionListAST temp_4 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 85)) ;
  GGS_instructionListAST var_startupInstructionList_2994 = temp_4 ;
  GGS_location var_startupEndLocation_3031 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 86)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_omnibus_5F_syntax_107 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas3", 89)) ;
      var_bootLocation_2769 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 90)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 91)) ;
      nt_instructionList_ (ioArgument_ioAST, var_bootInstructionList_2827, inCompiler) ;
      var_bootEndLocation_2861 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 94)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_bootHandled_2741.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_bootLocation_2769, GGS_string ("a driver supports at most one boot routine"), fixItArray7  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 96)) ;
        }
      }
      var_bootHandled_2741 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas3", 100)) ;
      var_startupLocation_2933 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 101)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 102)) ;
      nt_instructionList_ (ioArgument_ioAST, var_startupInstructionList_2994, inCompiler) ;
      var_startupEndLocation_3031 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 104)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 105)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_startupHandled_2902.boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_startupLocation_2933, GGS_string ("a driver supports at most one startup routine"), fixItArray9  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 107)) ;
        }
      }
      var_startupHandled_2902 = GGS_bool (true) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_ (ioArgument_ioAST, var_driverName_2435, inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_ (ioArgument_ioAST, GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas3", 113)), var_propertyListAST_2711, inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2435, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 115)), inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2435, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 117)), inCompiler) ;
    } break ;
    case 8: {
      nt_guard_ (ioArgument_ioAST, function_omnibusTypeSpecificNameForDriver (var_driverName_2435, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 121)), function_llvmDriverNameFromName (var_driverName_2435, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 122)).readProperty_string (), inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 124)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST.addAssignOperation (GGS_driverDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_driverName_2435, var_driverDependenceList_2468, var_propertyListAST_2711, var_bootLocation_2769, var_bootInstructionList_2827, var_bootEndLocation_2861, var_startupLocation_2933, var_startupInstructionList_2994, var_startupEndLocation_3031, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i100_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas3", 65)) ;
  switch (select_omnibus_5F_syntax_105 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 69)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas3", 71)) ;
      if (select_omnibus_5F_syntax_106 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 74)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_107 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-driver.galgas3", 89)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 91)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-driver.galgas3", 100)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 102)) ;
      nt_instructionList_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 105)) ;
    } break ;
    case 4: {
      nt_isr_5F_in_5F_driver_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_struct_5F_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_system_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_guard_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i101_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas3", 142)) ;
  GGS_lstring var_driverName_4814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas3", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 144)) ;
  GGS_driverInstanciationArgumentListAST temp_0 = GGS_driverInstanciationArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas3", 145)) ;
  GGS_driverInstanciationArgumentListAST var_driverInstanciationArgumentList_4878 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_108 (inCompiler) == 2) {
      GGS_lstring var_selector_4962 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 148)) ;
      GGS_expressionAST var_expression_5006 ;
      nt_expression_ (ioArgument_ioAST, var_expression_5006, inCompiler) ;
      var_driverInstanciationArgumentList_4878.addAssignOperation (var_selector_4962, var_expression_5006  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 150)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 152)) ;
  ioArgument_ioAST.mProperty_mRequiredDriverListAST.addAssignOperation (var_driverName_4814, var_driverInstanciationArgumentList_4878  COMMA_SOURCE_FILE ("declaration-driver.galgas3", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i101_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_driver COMMA_SOURCE_FILE ("declaration-driver.galgas3", 142)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-driver.galgas3", 143)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_108 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 148)) ;
      nt_expression_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-driver.galgas3", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i102_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas3", 20)) ;
  GGS_lstring var_typeName_838 ;
  switch (select_omnibus_5F_syntax_109 (inCompiler)) {
  case 1: {
    var_typeName_838 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas3", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_838, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas3", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1002 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas3", 30)) ;
  outArgument_outExpression = GGS_convertExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_838, var_endOfExpression_1002, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i102_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_convert COMMA_SOURCE_FILE ("expression-convert.galgas3", 20)) ;
  switch (select_omnibus_5F_syntax_109 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-convert.galgas3", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-convert.galgas3", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i103_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 20)) ;
  GGS_lstring var_varName_876 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 21)) ;
  GGS_lstring var_optionalTypeName_902 ;
  switch (select_omnibus_5F_syntax_110 (inCompiler)) {
  case 1: {
    var_optionalTypeName_902 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-let.galgas3", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_optionalTypeName_902, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 28)) ;
  GGS_expressionAST var_expression_1089 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1089, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_letInstructionWithAssignmentAST::init_21__21__21__21_ (var_varName_876.readProperty_location (), var_varName_876, var_optionalTypeName_902, var_expression_1089, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas3", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i103_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 21)) ;
  switch (select_omnibus_5F_syntax_110 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i104_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 20)) ;
  GGS_lstring var_syncInstanceName_843 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 21)) ;
  GGS_lstring var_syncTypeName_878 ;
  switch (select_omnibus_5F_syntax_111 (inCompiler)) {
  case 1: {
    var_syncTypeName_878 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 24)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_syncTypeName_878, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 28)) ;
  GGS_expressionAST var_expression_1050 ;
  nt_expression_ (ioArgument_ioAST, var_expression_1050, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_syncToolInstanceDeclarationAST::init_21__21__21_ (var_syncTypeName_878, var_syncInstanceName_843, var_expression_1050, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i104_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sync COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 20)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 21)) ;
  switch (select_omnibus_5F_syntax_111 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas3", 28)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i105_ (GGS_ast & /* ioArgument_ioAST */,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas3", 10)) ;
  GGS_lstring var_constantName_562 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas3", 11)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas3", 12)) ;
  GGS_stringlist var_suggestionList_596 = temp_0 ;
  GGS_bool var_found_625 = GGS_bool (false) ;
  UpEnumerator__32_stringlist enumerator_655 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("declaration-option.galgas3", 14))) ;
  bool bool_1 = var_found_625.operator_not (SOURCE_FILE ("declaration-option.galgas3", 14)).isValidAndTrue () ;
  if (enumerator_655.hasCurrentObject () && bool_1) {
    while (enumerator_655.hasCurrentObject () && bool_1) {
      GGS_string var_invocationString_731 = GGS_application::class_func_boolOptionInvocationString (enumerator_655.current_mValue_30_ (HERE), enumerator_655.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("declaration-option.galgas3", 15)) ;
      var_suggestionList_596.addAssignOperation (GGS_string ("\"").add_operation (var_invocationString_731, inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas3", 16)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("declaration-option.galgas3", 16))  COMMA_SOURCE_FILE ("declaration-option.galgas3", 16)) ;
      var_found_625 = GGS_bool (ComparisonKind::equal, var_invocationString_731.objectCompare (var_constantName_562.readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_625.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          GGS_application::class_method_setBoolOptionValue (enumerator_655.current_mValue_30_ (HERE), enumerator_655.current_mValue_31_ (HERE), GGS_bool (true) COMMA_SOURCE_FILE ("declaration-option.galgas3", 19)) ;
          }
        }
      }
      enumerator_655.gotoNextObject () ;
      if (enumerator_655.hasCurrentObject ()) {
        bool_1 = var_found_625.operator_not (SOURCE_FILE ("declaration-option.galgas3", 14)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_625.operator_not (SOURCE_FILE ("declaration-option.galgas3", 22)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      appendFixItActions (fixItArray4, EnumFixItKind::fixItReplace, var_suggestionList_596) ;
      inCompiler->emitSemanticError (var_constantName_562.readProperty_location (), GGS_string ("unknown command line option"), fixItArray4  COMMA_SOURCE_FILE ("declaration-option.galgas3", 23)) ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i105_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_option COMMA_SOURCE_FILE ("declaration-option.galgas3", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-option.galgas3", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i106_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas3", 10)) ;
  GGS_lstring var_targetName_443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas3", 11)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.addAssignOperation (var_targetName_443  COMMA_SOURCE_FILE ("target-generation.galgas3", 12)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i106_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("target-generation.galgas3", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("target-generation.galgas3", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i107_ (GGS_ast & ioArgument_ioAST,
                                                                            const GGS_lstring constinArgument_inTaskName,
                                                                            GGS_taskSetupListAST & ioArgument_ioTaskSetupListAST,
                                                                            GGS_taskSetupListAST & ioArgument_ioTaskActivateListAST,
                                                                            GGS_taskSetupListAST & ioArgument_ioTaskDeactivateListAST,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 28)) ;
  GGS_lstring var_attribute_1239 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 29)) ;
  GGS_lstring var_name_1273 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 30)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 31)) ;
  GGS_lstringlist var_dependenceList_1300 = temp_0 ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 34)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_dependenceName_1389 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 36)) ;
      var_dependenceList_1300.addAssignOperation (var_dependenceName_1389  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 37)) ;
      if (select_omnibus_5F_syntax_113 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 39)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 42)) ;
  GGS_instructionListAST var_instructionList_1534 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1534, inCompiler) ;
  GGS_location var_endOfInit_1559 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 45)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_attribute_1239.readProperty_string ().objectCompare (GGS_string ("onSetup"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioTaskSetupListAST.addAssignOperation (var_name_1273, var_dependenceList_1300  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 47)) ;
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.setup."), var_name_1273, var_dependenceList_1300, var_instructionList_1534, var_endOfInit_1559, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 48)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_attribute_1239.readProperty_string ().objectCompare (GGS_string ("onStart"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioTaskActivateListAST.addAssignOperation (var_name_1273, var_dependenceList_1300  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 57)) ;
        ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.activate."), var_name_1273, var_dependenceList_1300, var_instructionList_1534, var_endOfInit_1559, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 58)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_attribute_1239.readProperty_string ().objectCompare (GGS_string ("onTermination"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          ioArgument_ioTaskDeactivateListAST.addAssignOperation (var_name_1273, var_dependenceList_1300  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 67)) ;
          ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_taskSetupDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inTaskName, GGS_string ("task.deactivate."), var_name_1273, var_dependenceList_1300, var_instructionList_1534, var_endOfInit_1559, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 68)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_attribute_1239.readProperty_location (), GGS_string ("attribute should be @onSetup, @onStart or @onTermination"), fixItArray5  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 77)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_task_5F_event_i107_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_event COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 30)) ;
  switch (select_omnibus_5F_syntax_112 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 34)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 36)) ;
      if (select_omnibus_5F_syntax_113 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 39)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 42)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i108_ (GGS_ast & ioArgument_ioAST,
                                                                                               GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                               Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 52)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 53)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_114 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_1964 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 56)) ;
      GGS_lstring var_formalArgumentName_1999 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 57)) ;
      GGS_lstring var_formalArgumentTypeName_2058 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2058, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_output (SOURCE_FILE ("formal-arguments.galgas3", 60)), var_selector_1964, var_formalArgumentTypeName_2058, var_formalArgumentName_1999  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 59)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_2278 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 65)) ;
      GGS_lstring var_formalArgumentName_2307 ;
      switch (select_omnibus_5F_syntax_115 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 68)) ;
        var_formalArgumentName_2307 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas3", 69)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2307 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 71)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalArgumentTypeName_2492 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2492, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_inputOutput (SOURCE_FILE ("formal-arguments.galgas3", 75)), var_selector_2278, var_formalArgumentTypeName_2492, var_formalArgumentName_2307  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 74)) ;
    } break ;
    case 4: {
      GGS_lstring var_selector_2716 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 80)) ;
      GGS_lstring var_formalArgumentName_2745 ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 83)) ;
        var_formalArgumentName_2745 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("formal-arguments.galgas3", 84)) ;
      } break ;
      case 2: {
        var_formalArgumentName_2745 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 86)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalArgumentTypeName_2930 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_2930, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas3", 90)), var_selector_2716, var_formalArgumentTypeName_2930, var_formalArgumentName_2745  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 89)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i108_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_114 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 56)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 57)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 65)) ;
      switch (select_omnibus_5F_syntax_115 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 68)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 71)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 80)) ;
      switch (select_omnibus_5F_syntax_116 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5F_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 86)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i109_ (GGS_ast & ioArgument_ioAST,
                                                                                                        GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                                        Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 101)) ;
  outArgument_outProcFormalArgumentList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_117 (inCompiler) == 2) {
      GGS_lstring var_selector_3465 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 105)) ;
      GGS_lstring var_formalArgumentName_3500 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 106)) ;
      GGS_lstring var_formalArgumentTypeName_3559 ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_formalArgumentTypeName_3559, inCompiler) ;
      outArgument_outProcFormalArgumentList.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("formal-arguments.galgas3", 109)), var_selector_3465, var_formalArgumentTypeName_3559, var_formalArgumentName_3500  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 108)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i109_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_117 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 105)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formal-arguments.galgas3", 106)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formal-arguments.galgas3", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i110_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas3", 20)) ;
  GGS_lstring var_typeName_840 ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
    var_typeName_840 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 23)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_840, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas3", 27)) ;
  nt_expression_ (ioArgument_ioAST, outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfExpression_1004 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas3", 30)) ;
  outArgument_outExpression = GGS_truncateExpressionAST::init_21__21__21_ (outArgument_outExpression, var_typeName_840, var_endOfExpression_1004, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i110_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_truncate COMMA_SOURCE_FILE ("expression-truncate.galgas3", 20)) ;
  switch (select_omnibus_5F_syntax_118 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-truncate.galgas3", 27)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-truncate.galgas3", 30)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i111_ (GGS_llvmGenerationInstructionList & outArgument_outInstructionList,
                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 60)) ;
  outArgument_outInstructionList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_119 (inCompiler) == 2) {
      GGS_abstractLLVMInstruction var_instruction_2485 ;
      nt_llvm_5F_instruction_ (var_instruction_2485, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_2485  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 64)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i111_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_119 (inCompiler) == 2) {
      nt_llvm_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i112_ (GGS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 71)) ;
  GGS_lstring var_name_2780 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 72)) ;
  outArgument_outInstruction = GGS_llvmVarInstruction::init_21_ (var_name_2780, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i112_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_var COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i113_ (GGS_abstractLLVMInstruction & outArgument_outInstruction,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 79)) ;
  GGS_llvmGenerationInstructionElementList temp_0 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 80)) ;
  GGS_llvmGenerationInstructionElementList var_elementList_3092 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_omnibus_5F_syntax_121 (inCompiler)) {
    case 1: {
      GGS_lstring var_string_3159 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 83)) ;
      var_elementList_3092.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (var_string_3159.readProperty_string ()  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 84))  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 84)) ;
    } break ;
    case 2: {
      GGS_lstring var_name_3253 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 86)) ;
      var_elementList_3092.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (var_name_3253  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 87))  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 87)) ;
    } break ;
    case 3: {
      GGS_lstring var_typeName_3337 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 89)) ;
      var_elementList_3092.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (var_typeName_3337  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 90))  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 90)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_120 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 93)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  outArgument_outInstruction = GGS_llvmGenerationInstruction::init_21_ (var_elementList_3092, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_llvm_5F_instruction_i113_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_llvm COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_omnibus_5F_syntax_121 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 83)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 86)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 89)) ;
    } break ;
    default:
      break ;
    }
    if (select_omnibus_5F_syntax_120 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 93)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i114_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 22)) ;
  GGS_mode var_mode_1162 ;
  GGS_lstring var_procName_1184 ;
  GGS_lstringlist var_attributeList_1216 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1258 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1162, var_procName_1184, var_attributeList_1216, var_procFormalArgumentList_1258, inCompiler) ;
  GGS_bool var_isGlobal_1290 = GGS_bool (false) ;
  UpEnumerator_lstringlist enumerator_1316 (var_attributeList_1216) ;
  while (enumerator_1316.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_1316.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 31)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_isGlobal_1290.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_1316.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 33)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          var_isGlobal_1290 = GGS_bool (true) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 38))) ;
      inCompiler->emitSemanticError (enumerator_1316.current_mValue (HERE).readProperty_location (), GGS_string ("invalid attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 38)) ;
    }
    enumerator_1316.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mRequiredFunctionListAST.addAssignOperation (var_procName_1184, var_mode_1162, var_isGlobal_1290, var_procFormalArgumentList_1258, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 46))  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i114_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_required COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 22)) ;
  nt_function_5F_header_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i115_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_callInstructionAST var_routineCallInstruction_1354 ;
  nt_procedure_5F_call_ (ioArgument_ioAST, var_routineCallInstruction_1354, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_routineCallInstruction_1354  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i115_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_procedure_5F_call_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i116_ (GGS_ast & ioArgument_ioAST,
                                                                                GGS_callInstructionAST & outArgument_outInstruction,
                                                                                Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1642 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 39)) ;
  GGS_LValueAST var_assignmentTargetAST_1707 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_1707, inCompiler) ;
  GGS_effectiveArgumentListAST var_arguments_1770 ;
  GGS_location var_endOfArguments_1786 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_1770, var_endOfArguments_1786, inCompiler) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_assignmentTargetAST_1707.readProperty_mOperand ().objectCompare (GGS_LValueOperandAST::class_func_noOperand (SOURCE_FILE ("instruction-procedure-call.galgas3", 42)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_assignmentTargetAST_1707.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 42)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstruction = GGS_standAloneProcedureCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_1642, var_arguments_1770, var_endOfArguments_1786, var_assignmentTargetAST_1707.readProperty_mIdentifier (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_accessInAssignmentListAST temp_1 = GGS_accessInAssignmentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 50)) ;
    GGS_accessInAssignmentListAST var_accessList_2139 = temp_1 ;
    extensionMethod_buildProcedureCallAccessList (var_assignmentTargetAST_1707.readProperty_mOperand (), var_accessList_2139, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 51)) ;
    outArgument_outInstruction = GGS_procedureCallInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1642, var_arguments_1770, var_endOfArguments_1786, var_assignmentTargetAST_1707.readProperty_mIdentifier (), var_accessList_2139, inCompiler COMMA_HERE) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_procedure_5F_call_i116_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i117_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas3", 25)) ;
  GGS_lstring var_newTypeName_1043 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas3", 27)) ;
  GGS_lstring var_typeName_1101 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1101, inCompiler) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeAliasDeclarationAST::init_21__21_ (var_newTypeName_1043, var_typeName_1101, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias.galgas3", 29)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i117_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_typealias COMMA_SOURCE_FILE ("type-alias.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("type-alias.galgas3", 27)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i118_ (GGS_ast & /* ioArgument_ioAST */,
                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_type_5F_definition_i118_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-alias.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 44)) ;
  GGS_lstring var_receiverName_1785 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 45)) ;
  GGS_lstring var_receiverTypeName_1818 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 47)) ;
  GGS_lstring var_converterName_1867 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 49)) ;
  GGS_ctExpressionAST var_expression_1943 ;
  nt_compile_5F_time_5F_expression_ (var_expression_1943, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 51)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_compileTimeConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_1785, var_receiverTypeName_1818, var_converterName_1867, var_expression_1943, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i119_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_compiletime COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 49)) ;
  nt_compile_5F_time_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_receiverName_2320 ;
  GGS_lstring var_receiverTypeName_2339 ;
  GGS_genericFormalParameterList var_receiverGenericFormalParameterList_2369 ;
  nt_llvm_5F_function_5F_header_ (var_receiverName_2320, var_receiverTypeName_2339, var_receiverGenericFormalParameterList_2369, inCompiler) ;
  GGS_lstring var_converterName_2428 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 65)) ;
  GGS_llvmGenerationInstructionList var_instructionList_2485 ;
  nt_llvm_5F_instruction_5F_list_ (var_instructionList_2485, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 67)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_llvmConvertToBooleanAST::init_21__21__21__21_ (var_receiverName_2320, var_receiverTypeName_2339, var_converterName_2428, var_instructionList_2485, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i120_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_llvm_5F_function_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 65)) ;
  nt_llvm_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i121_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_988 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_988, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 26)) ;
  GGS_functionCallEffectiveParameterListAST temp_0 = GGS_functionCallEffectiveParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 27)) ;
  GGS_functionCallEffectiveParameterListAST var_parameterList_1053 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_122 (inCompiler) == 2) {
      GGS_lstring var_selector_1119 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 30)) ;
      GGS_expressionAST var_expression_1163 ;
      nt_expression_ (ioArgument_ioAST, var_expression_1163, inCompiler) ;
      var_parameterList_1053.addAssignOperation (var_selector_1119, var_expression_1163  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 32)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_location var_errorLocation_1236 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 35)) ;
  outArgument_outExpression = GGS_constructorCallAST::init_21__21__21_ (var_typeName_988, var_parameterList_1053, var_errorLocation_1236, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i121_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_122 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 30)) ;
      nt_expression_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i122_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 62)) ;
  GGS_lstring var_staticListName_2541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 64)) ;
  GGS_staticListPropertyListAST temp_0 = GGS_staticListPropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 65)) ;
  GGS_staticListPropertyListAST var_propertyList_2600 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_staticArrayProperty_ (ioArgument_ioAST, var_propertyList_2600, inCompiler) ;
    if (select_omnibus_5F_syntax_123 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 70)) ;
  GGS_staticListValueListAST temp_2 = GGS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 71)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_staticListAST::init_21__21__21_ (var_staticListName_2541, var_propertyList_2600, temp_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i122_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 63)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_staticArrayProperty_indexing (inCompiler) ;
    if (select_omnibus_5F_syntax_123 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i123_ (GGS_ast & ioArgument_ioAST,
                                                                                  GGS_staticListPropertyListAST & ioArgument_ioPropertyList,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 77)) ;
  GGS_lstring var_propertyName_3048 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 78)) ;
  switch (select_omnibus_5F_syntax_124 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_3112 ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_3112, inCompiler) ;
    ioArgument_ioPropertyList.addAssignOperation (var_propertyName_3048, GGS_staticListPropertyTypeAST::class_func_valueType (var_typeName_3112  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 81))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 81)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 83)) ;
    GGS_mode var_mode_3227 ;
    nt_mode_ (var_mode_3227, inCompiler) ;
    GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 85)) ;
    GGS_lstringlist var_attributeList_3256 = temp_0 ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_omnibus_5F_syntax_125 (inCompiler) == 2) {
        GGS_lstring var_attribute_3328 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 88)) ;
        var_attributeList_3256.addAssignOperation (var_attribute_3328  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 89)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    GGS_routineFormalArgumentListAST var_formalArgs_3435 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_3435, inCompiler) ;
    GGS_lstring var_returnType_3466 ;
    switch (select_omnibus_5F_syntax_126 (inCompiler)) {
    case 1: {
      var_returnType_3466 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 96)) ;
      nt_type_5F_definition_ (ioArgument_ioAST, var_returnType_3466, inCompiler) ;
    } break ;
    default:
      break ;
    }
    ioArgument_ioPropertyList.addAssignOperation (var_propertyName_3048, GGS_staticListPropertyTypeAST::class_func_function (var_mode_3227, var_formalArgs_3435, var_returnType_3466  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 99))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 99)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArrayProperty_i123_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_let COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 77)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 78)) ;
  switch (select_omnibus_5F_syntax_124 (inCompiler)) {
  case 1: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 83)) ;
    nt_mode_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_omnibus_5F_syntax_125 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 88)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
    switch (select_omnibus_5F_syntax_126 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 96)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i124_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 109)) ;
  GGS_lstring var_staticListName_4083 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_extendStaticListElementAST temp_1 = GGS_extendStaticListElementAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 113)) ;
    GGS_extendStaticListElementAST var_expressions_4156 = temp_1 ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      GGS_lstring var_selector_4214 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 115)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_selector_4214.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_selector_4214.readProperty_location (), GGS_string ("selector should be empty"), fixItArray4  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 117)) ;
        }
      }
      nt_staticArray_5F_exp_ (ioArgument_ioAST, var_expressions_4156, inCompiler) ;
      if (select_omnibus_5F_syntax_128 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_staticListValueListAST temp_5 = GGS_staticListValueListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 122)) ;
    GGS_staticListValueListAST var_expressionList_4437 = temp_5 ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().getter_hasKey (var_staticListName_4083.readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 123)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        ioArgument_ioAST.readProperty_mExtendStaticArrayDeclarationAST ().method_searchKey (var_staticListName_4083.readProperty_string (), var_expressionList_4437, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 124)) ;
      }
    }
    var_expressionList_4437.addAssignOperation (var_expressions_4156, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 126))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 126)) ;
    ioArgument_ioAST.mProperty_mExtendStaticArrayDeclarationAST.addAssignOperation (var_staticListName_4083.readProperty_string (), var_expressionList_4437, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 127)) ;
    if (select_omnibus_5F_syntax_127 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i124_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_extend COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 108)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_staticArray COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 109)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 111)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 115)) ;
      nt_staticArray_5F_exp_indexing (inCompiler) ;
      if (select_omnibus_5F_syntax_128 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_omnibus_5F_syntax_127 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 129)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i125_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_extendStaticListElementAST & ioArgument_ioExpressions,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_129 (inCompiler)) {
  case 1: {
    GGS_expressionAST var_exp_5059 ;
    nt_expression_ (ioArgument_ioAST, var_exp_5059, inCompiler) ;
    ioArgument_ioExpressions.addAssignOperation (GGS_extendStaticListExpressionAST::class_func_expression (var_exp_5059  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 139)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 139))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 141)) ;
    GGS_lstring var_functionName_5163 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 142)) ;
    GGS_routineFormalArgumentListAST var_formalArgs_5227 ;
    nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, var_formalArgs_5227, inCompiler) ;
    ioArgument_ioExpressions.addAssignOperation (GGS_extendStaticListExpressionAST::class_func_function (var_functionName_5163, var_formalArgs_5227  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 145)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 146))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 144)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_staticArray_5F_exp_i125_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_129 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 141)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 142)) ;
    nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i126_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 26)) ;
  GGS_lstring var_enumerationName_1035 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 28)) ;
  GGS_enumerationConstantList temp_0 = GGS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 29)) ;
  GGS_enumerationConstantList var_enumCaseList_1093 = temp_0 ;
  GGS_bigint var_idx_1120 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 30)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 32)) ;
    GGS_lstring var_constantName_1177 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 33)) ;
    var_enumCaseList_1093.addAssignOperation (var_constantName_1177, var_idx_1120  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 34)) ;
    var_idx_1120 = var_idx_1120.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 35)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 35)) ;
    if (select_omnibus_5F_syntax_130 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 38)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_enumerationDeclarationAST::init_21__21_ (var_enumerationName_1035, var_enumCaseList_1093, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i126_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_case COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 32)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 33)) ;
    if (select_omnibus_5F_syntax_130 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i127_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 24)) ;
  GGS_lstring var_varName_1040 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 26)) ;
  GGS_lstring var_iteratedObject_1081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 27)) ;
  GGS_bool var_staticWhileExpression_1105 = GGS_bool (false) ;
  GGS_expressionAST var_whileExpression_1158 ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
    var_whileExpression_1158 = GGS_literalBooleanInExpressionAST::init_21_ (GGS_bool (true), inCompiler COMMA_HERE) ;
    var_staticWhileExpression_1105 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 34)) ;
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 1: {
      GGS_lstring var_attributeValue_1345 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 36)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::equal, var_attributeValue_1345.readProperty_string ().objectCompare (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 37)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          var_staticWhileExpression_1105 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 41)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 41))) ;
        inCompiler->emitSemanticError (var_attributeValue_1345.readProperty_location (), GGS_string ("the attribute should be \"@").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 40)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 40)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 40)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 40)) ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_ (ioArgument_ioAST, var_whileExpression_1158, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOf_5F_whileExpression_5F_instruction_1709 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 48)) ;
  GGS_instructionListAST var_instructionList_1805 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1805, inCompiler) ;
  GGS_location var_endOfInstruction_1830 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 51)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_forInstructionAST::init_21__21__21__21__21__21__21__21_ (var_varName_1040.readProperty_location (), var_varName_1040, var_iteratedObject_1081, var_whileExpression_1158, var_endOf_5F_whileExpression_5F_instruction_1709, var_staticWhileExpression_1105, var_instructionList_1805, var_endOfInstruction_1830, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i127_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_for COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_in COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 27)) ;
  switch (select_omnibus_5F_syntax_131 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_while COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 34)) ;
    switch (select_omnibus_5F_syntax_132 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 36)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 48)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i128_ (GGS_ast & ioArgument_ioAST,
                                                                                  const GGS_lstring constinArgument_inDriverName,
                                                                                  Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas3", 22)) ;
  GGS_mode var_mode_921 ;
  switch (select_omnibus_5F_syntax_133 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas3", 25)) ;
    var_mode_921 = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas3", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas3", 28)) ;
    var_mode_921 = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-isr.galgas3", 29)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_isrName_1059 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas3", 32)) ;
  GGS_instructionListAST var_instructionList_1113 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1113, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas3", 34)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_isrDeclarationAST::init_21__21__21__21__21_ (var_isrName_1059, var_mode_921, constinArgument_inDriverName, var_instructionList_1113, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas3", 40)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i128_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("declaration-isr.galgas3", 22)) ;
  switch (select_omnibus_5F_syntax_133 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-isr.galgas3", 25)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-isr.galgas3", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-isr.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-isr.galgas3", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-isr.galgas3", 34)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i129_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 25)) ;
  GGS_LValueAST var_lvalue_973 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_973, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 27)) ;
  outArgument_outExpression = GGS_sizeofExpressionAST::init_21_ (var_lvalue_973, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i129_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 24)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 25)) ;
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 27)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i130_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 34)) ;
  GGS_lstring var_typeName_1284 ;
  nt_type_5F_definition_ (ioArgument_ioAST, var_typeName_1284, inCompiler) ;
  outArgument_outExpression = GGS_sizeofTypeAST::init_21_ (var_typeName_1284, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i130_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_sizeof COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 34)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i131_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_standaloneFunctionName_931 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 20)) ;
  GGS_effectiveArgumentListAST var_arguments_997 ;
  GGS_location var_endOfArguments_1013 ;
  nt_effective_5F_parameters_ (ioArgument_ioAST, var_arguments_997, var_endOfArguments_1013, inCompiler) ;
  outArgument_outExpression = GGS_standaloneFunctionInExpressionAST::init_21__21__21_ (var_standaloneFunctionName_931, var_arguments_997, var_endOfArguments_1013, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i131_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 20)) ;
  nt_effective_5F_parameters_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i132_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 11)) ;
  GGS_location var_targetConstructLocation_556 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 12)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 13)) ;
  GGS_lstringlist var_acceptedTargetList_618 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_targetName_677 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 15)) ;
    var_acceptedTargetList_618.addAssignOperation (var_targetName_677  COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 16)) ;
    if (select_omnibus_5F_syntax_134 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 18)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  ioArgument_ioAST.mProperty_mCheckTargetListAST.addAssignOperation (var_targetConstructLocation_556, var_acceptedTargetList_618  COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i132_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_ctAssert COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 10)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_target COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 15)) ;
    if (select_omnibus_5F_syntax_134 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("declaration-check-target.galgas3", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i133_ (GGS_omnibusInfixOperator & outArgument_outInfixOperator,
                                                                                                         GGS_location & outArgument_outOperatorLocation,
                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outInfixOperator.drop () ; // Release 'out' argument
  outArgument_outOperatorLocation.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 11)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 12)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 14)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 15)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 17)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 18)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 20)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 21)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 23)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas3", 24)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 26)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 27)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 29)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas3", 30)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 32)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 33)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 35)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("instruction-assignment-operator.galgas3", 36)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 38)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 39)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 41)) ;
    outArgument_outInfixOperator = GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("instruction-assignment-operator.galgas3", 42)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outOperatorLocation = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i133_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_135 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 11)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 14)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 17)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 20)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2B__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 23)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 26)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 29)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 32)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2A__25__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 35)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 38)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 41)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i134_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_LValueAST var_lvalue_1388 ;
  nt_lvalue_ (ioArgument_ioAST, var_lvalue_1388, inCompiler) ;
  GGS_location var_instructionLocation_1404 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 52)) ;
  GGS_omnibusInfixOperator var_infixOperator_1515 ;
  GGS_location var_operatorLocation_1535 ;
  nt_assignment_5F_combined_5F_with_5F_operator_ (var_infixOperator_1515, var_operatorLocation_1535, inCompiler) ;
  GGS_expressionAST var_rightExpression_1625 ;
  nt_expression_ (ioArgument_ioAST, var_rightExpression_1625, inCompiler) ;
  GGS_primaryInExpressionAccessListAST temp_0 = GGS_primaryInExpressionAccessListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 58)) ;
  GGS_primaryInExpressionAccessListAST var_expressionAccessList_1716 = temp_0 ;
  extensionMethod_buildExpressionAccessList (var_lvalue_1388.readProperty_mOperand (), var_expressionAccessList_1716, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 59)) ;
  GGS_primaryInExpressionAST var_leftExpression_1822 = GGS_primaryInExpressionAST::init_21__21_ (var_lvalue_1388.readProperty_mIdentifier (), var_expressionAccessList_1716, inCompiler COMMA_HERE) ;
  GGS_omnibusInfixOperatorExpressionAST var_expression_1915 = GGS_omnibusInfixOperatorExpressionAST::init_21__21__21__21_ (var_leftExpression_1822, var_operatorLocation_1535, var_infixOperator_1515, var_rightExpression_1625, inCompiler COMMA_HERE) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_instructionLocation_1404, var_lvalue_1388, var_expression_1915, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i134_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  nt_assignment_5F_combined_5F_with_5F_operator_indexing (inCompiler) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i135_ (GGS_ast & ioArgument_ioAST,
                                                                          GGS_instructionListAST & ioArgument_ioInstructionList,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_LValueAST var_assignmentTargetAST_845 ;
  nt_lvalue_ (ioArgument_ioAST, var_assignmentTargetAST_845, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 21)) ;
  GGS_expressionAST var_sourceExpression_932 ;
  nt_expression_ (ioArgument_ioAST, var_sourceExpression_932, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_assignmentInstructionAST::init_21__21__21_ (var_assignmentTargetAST_845.readProperty_mIdentifier ().readProperty_location (), var_assignmentTargetAST_845, var_sourceExpression_932, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_instruction_i135_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_lvalue_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i136_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 21)) ;
  GGS_lstring var_opaqueTypeName_883 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 22)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 23)) ;
  GGS_lstringlist var_attributeList_920 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
      GGS_lstring var_attribute_986 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 26)) ;
      var_attributeList_920.addAssignOperation (var_attribute_986  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 27)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 29)) ;
  GGS_expressionAST var_sizeExpression_1079 ;
  nt_expression_ (ioArgument_ioAST, var_sizeExpression_1079, inCompiler) ;
  GGS_location var_sizeExpressionLocation_1103 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 32)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_typeOpaqueDeclarationAST::init_21__21__21__21_ (var_opaqueTypeName_883, var_sizeExpression_1079, var_sizeExpressionLocation_1103, var_attributeList_920, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i136_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_opaque COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_136 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 26)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i137_ (GGS_ast & /* ioArgument_ioAST */,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_integerLiteral_778 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 18)) ;
  outArgument_outExpression = GGS_literalIntegerInExpressionAST::init_21_ (var_integerLiteral_778, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i137_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 18)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas3", 21)) ;
  GGS_lstring var_attribute_890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas3", 22)) ;
  GGS_bool var_isSetup_915 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_attribute_890.readProperty_string ().objectCompare (GGS_string ("setup"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_isSetup_915 = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_attribute_890.readProperty_string ().objectCompare (GGS_string ("loop"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_isSetup_915 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_attribute_890.readProperty_location (), GGS_string ("attribute should be @setup or @loop"), fixItArray2  COMMA_SOURCE_FILE ("panic.galgas3", 29)) ;
      var_isSetup_915.drop () ; // Release error dropped variable
    }
  }
  GGS_lbigint var_priority_1163 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas3", 32)) ;
  GGS_instructionListAST var_instructionList_1218 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1218, inCompiler) ;
  GGS_location var_endOfInstructionList_1243 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 34)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas3", 35)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_panicAST::init_21__21__21__21_ (var_isSetup_915, var_instructionList_1218, var_endOfInstructionList_1243, var_priority_1163, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i138_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("panic.galgas3", 21)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("panic.galgas3", 22)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("panic.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("panic.galgas3", 32)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("panic.galgas3", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i139_ (GGS_ast & ioArgument_ioAST,
                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_ (ioArgument_ioAST, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-function.galgas3", 26)), inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_declaration_i139_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_function_5F_declaration_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i140_ (GGS_ast & ioArgument_ioAST,
                                                                                      const GGS_lstring constinArgument_inReceiverTypeName,
                                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_bool var_publicAccess_1480 ;
  switch (select_omnibus_5F_syntax_137 (inCompiler)) {
  case 1: {
    var_publicAccess_1480 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas3", 37)) ;
    var_publicAccess_1480 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_mode var_mode_1647 ;
  GGS_lstring var_procName_1669 ;
  GGS_lstringlist var_attributeList_1701 ;
  GGS_routineFormalArgumentListAST var_procFormalArgumentList_1743 ;
  nt_function_5F_header_ (ioArgument_ioAST, var_mode_1647, var_procName_1669, var_attributeList_1701, var_procFormalArgumentList_1743, inCompiler) ;
  GGS_lstring var_returnTypeName_1784 ;
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
    var_returnTypeName_1784 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas3", 50)) ;
    nt_type_5F_definition_ (ioArgument_ioAST, var_returnTypeName_1784, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas3", 53)) ;
  GGS_instructionListAST var_instructionList_1962 ;
  nt_instructionList_ (ioArgument_ioAST, var_instructionList_1962, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas3", 55)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_mode_1647, var_publicAccess_1480, constinArgument_inReceiverTypeName, var_procName_1669, var_attributeList_1701, var_procFormalArgumentList_1743, var_returnTypeName_1784, var_instructionList_1962, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas3", 65)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas3", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_declaration_i140_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_137 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_public COMMA_SOURCE_FILE ("declaration-function.galgas3", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_function_5F_header_indexing (inCompiler) ;
  switch (select_omnibus_5F_syntax_138 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-function.galgas3", 50)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("declaration-function.galgas3", 53)) ;
  nt_instructionList_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("declaration-function.galgas3", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i141_ (GGS_mode & outArgument_outMode,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  switch (select_omnibus_5F_syntax_139 (inCompiler)) {
  case 1: {
    outArgument_outMode = GGS_mode::class_func_anyMode (SOURCE_FILE ("declaration-function.galgas3", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas3", 75)) ;
    outArgument_outMode = GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-function.galgas3", 76)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas3", 78)) ;
    outArgument_outMode = GGS_mode::class_func_panicMode (SOURCE_FILE ("declaration-function.galgas3", 79)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas3", 81)) ;
    outArgument_outMode = GGS_mode::class_func_bootMode (SOURCE_FILE ("declaration-function.galgas3", 82)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas3", 84)) ;
    outArgument_outMode = GGS_mode::class_func_startupMode (SOURCE_FILE ("declaration-function.galgas3", 85)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas3", 87)) ;
    outArgument_outMode = GGS_mode::class_func_sectionMode (SOURCE_FILE ("declaration-function.galgas3", 88)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas3", 90)) ;
    outArgument_outMode = GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-function.galgas3", 91)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas3", 93)) ;
    outArgument_outMode = GGS_mode::class_func_primitiveMode (SOURCE_FILE ("declaration-function.galgas3", 94)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas3", 96)) ;
    outArgument_outMode = GGS_mode::class_func_guardMode (SOURCE_FILE ("declaration-function.galgas3", 97)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas3", 99)) ;
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 1: {
      outArgument_outMode = GGS_mode::class_func_anySafeMode (SOURCE_FILE ("declaration-function.galgas3", 101)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas3", 103)) ;
      outArgument_outMode = GGS_mode::class_func_safeUserMode (SOURCE_FILE ("declaration-function.galgas3", 104)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas3", 106)) ;
      outArgument_outMode = GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("declaration-function.galgas3", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas3", 109)) ;
      outArgument_outMode = GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("declaration-function.galgas3", 110)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas3", 112)) ;
      outArgument_outMode = GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("declaration-function.galgas3", 113)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas3", 115)) ;
      outArgument_outMode = GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("declaration-function.galgas3", 116)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_mode_i141_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  switch (select_omnibus_5F_syntax_139 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas3", 75)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_panic COMMA_SOURCE_FILE ("declaration-function.galgas3", 78)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_boot COMMA_SOURCE_FILE ("declaration-function.galgas3", 81)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_startup COMMA_SOURCE_FILE ("declaration-function.galgas3", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas3", 87)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas3", 90)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas3", 93)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas3", 96)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_safe COMMA_SOURCE_FILE ("declaration-function.galgas3", 99)) ;
    switch (select_omnibus_5F_syntax_140 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_user COMMA_SOURCE_FILE ("declaration-function.galgas3", 103)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_section COMMA_SOURCE_FILE ("declaration-function.galgas3", 106)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_service COMMA_SOURCE_FILE ("declaration-function.galgas3", 109)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_primitive COMMA_SOURCE_FILE ("declaration-function.galgas3", 112)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_guard COMMA_SOURCE_FILE ("declaration-function.galgas3", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i142_ (GGS_ast & ioArgument_ioAST,
                                                                                 GGS_mode & outArgument_outMode,
                                                                                 GGS_lstring & outArgument_outProcName,
                                                                                 GGS_lstringlist & outArgument_outAttributeList,
                                                                                 GGS_routineFormalArgumentListAST & outArgument_outProcFormalArgumentList,
                                                                                 Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outMode.drop () ; // Release 'out' argument
  outArgument_outProcName.drop () ; // Release 'out' argument
  outArgument_outAttributeList.drop () ; // Release 'out' argument
  outArgument_outProcFormalArgumentList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas3", 130)) ;
  outArgument_outProcName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas3", 131)) ;
  nt_mode_ (outArgument_outMode, inCompiler) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 133)) ;
  outArgument_outAttributeList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_syntax_141 (inCompiler) == 2) {
      GGS_lstring var_attribute_3717 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas3", 136)) ;
      outArgument_outAttributeList.addAssignOperation (var_attribute_3717  COMMA_SOURCE_FILE ("declaration-function.galgas3", 137)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_ (ioArgument_ioAST, outArgument_outProcFormalArgumentList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_function_5F_header_i142_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_func COMMA_SOURCE_FILE ("declaration-function.galgas3", 130)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("declaration-function.galgas3", 131)) ;
  nt_mode_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_syntax_141 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("declaration-function.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_procedure_5F_formal_5F_arguments_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i143_ (GGS_ast & ioArgument_ioAST,
                                                                      GGS_expressionAST & outArgument_outExpression,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 18)) ;
  GGS_controlRegisterLValueAST var_registerLValue_827 ;
  nt_control_5F_register_5F_lvalue_ (ioArgument_ioAST, var_registerLValue_827, inCompiler) ;
  outArgument_outExpression = GGS_addressofControlRegisterAST::init_21_ (var_registerLValue_827, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_syntax::rule_omnibus_5F_syntax_primary_i143_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_addressof COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 18)) ;
  nt_control_5F_register_5F_lvalue_indexing (inCompiler) ;
}



//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GGS_string constinArgument_inKey,
                                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  GGS_lstring var_key_3045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas3", 82)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_key_3045.readProperty_string ().objectCompare (constinArgument_inKey)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, constinArgument_inKey) ;
      inCompiler->emitSemanticError (var_key_3045.readProperty_location (), GGS_string ("invalid key (found '").add_operation (var_key_3045.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 84)).add_operation (GGS_string ("', required '"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 84)).add_operation (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 84)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 84)), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas3", 84)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GGS__32_lstringlist & outArgument_outPythonUtilityToolList,
                                                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outPythonUtilityToolList.drop () ; // Release 'out' argument
  nt_configuration_5F_key_ (GGS_string ("PYTHON_UTILITIES"), inCompiler) ;
  GGS__32_lstringlist temp_0 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 93)) ;
  outArgument_outPythonUtilityToolList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      GGS_lstring var_relativePath_3533 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas3", 97)) ;
      GGS_lstring var_destinationFile_3581 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 98)) ;
      outArgument_outPythonUtilityToolList.addAssignOperation (var_relativePath_3533, var_destinationFile_3581  COMMA_SOURCE_FILE ("configuration.galgas3", 99)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas3", 97)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 98)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GGS_ast & ioArgument_ioAST,
                                                                                                                                         GGS_lstringlist & outArgument_outImportedFileList,
                                                                                                                                         GGS_location & outArgument_outEndOfSourceFile,
                                                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GGS_location var_loc_3974 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 110)) ;
  GGS__32_lstringlist var_python_5F_utilityToolList_4032 ;
  nt_python_5F_utility_5F_tool_5F_list_ (var_python_5F_utilityToolList_4032, inCompiler) ;
  nt_configuration_5F_key_ (GGS_string ("PYTHON_BUILD"), inCompiler) ;
  GGS_lstring var_python_5F_build_4119 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 113)) ;
  nt_configuration_5F_key_ (GGS_string ("LINKER_SCRIPT"), inCompiler) ;
  GGS_lstring var_linkerScript_4197 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 115)) ;
  nt_configuration_5F_key_ (GGS_string ("PANIC_CODE_TYPE_NAME"), inCompiler) ;
  GGS_lstring var_panicCodeTypeName_4280 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas3", 117)) ;
  nt_configuration_5F_key_ (GGS_string ("PANIC_LINE_TYPE_NAME"), inCompiler) ;
  GGS_lstring var_panicLineTypeName_4368 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas3", 119)) ;
  nt_configuration_5F_key_ (GGS_string ("POINTER_BIT_COUNT"), inCompiler) ;
  GGS_lbigint var_pointerSize_4454 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 121)) ;
  nt_configuration_5F_key_ (GGS_string ("DYNAMIC_ARRAY"), inCompiler) ;
  GGS_bool var_handleDynamicArray_4524 ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas3", 125)) ;
    var_handleDynamicArray_4524 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas3", 128)) ;
    var_handleDynamicArray_4524 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GGS_string ("SYSTEM_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_systemStackSize_4724 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 132)) ;
  nt_configuration_5F_key_ (GGS_string ("NOP"), inCompiler) ;
  GGS_lstring var_nopInstructionStringInLLVM_4795 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 134)) ;
  nt_configuration_5F_key_ (GGS_string ("BIT_BAND"), inCompiler) ;
  GGS_lbigint var_bitbandRegisterBaseAddress_4878 ;
  GGS_lbigint var_bitbandRegisterEndAddress_4922 ;
  GGS_lbigint var_bitbandRegisterRelocationAddress_4965 ;
  GGS_lbigint var_bitbandRegisterOffsetMultiplier_5015 ;
  GGS_lbigint var_bitbandRegisterBitMultiplier_5064 ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas3", 142)) ;
    var_bitbandRegisterBaseAddress_4878 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 143)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 143)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterEndAddress_4922 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 144)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 144)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterRelocationAddress_4965 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 145)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 145)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterOffsetMultiplier_5015 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 146)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 146)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterBitMultiplier_5064 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 147)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 147)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_bitbandRegisterBaseAddress_4878 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 149)) ;
    var_bitbandRegisterEndAddress_4922 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 150)) ;
    var_bitbandRegisterRelocationAddress_4965 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 151)) ;
    var_bitbandRegisterOffsetMultiplier_5015 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 152)) ;
    var_bitbandRegisterBitMultiplier_5064 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GGS_string ("SERVICE_HANDLER"), inCompiler) ;
  GGS_lstring var_serviceHandler_5690 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 156)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_SYSTEM_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_servicePushedRegisterByteSize_5781 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 158)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_DISPATCHER_HEADER"), inCompiler) ;
  GGS_lstring var_serviceDispatcherHeader_5888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 160)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_DISPATCHER_ENTRY"), inCompiler) ;
  GGS_lstring var_serviceDispatcherEntry_5988 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 162)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_ENTRY_NO_RETURNED_VALUE"), inCompiler) ;
  GGS_lstring var_serviceEntryNoReturnedValue_6094 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 164)) ;
  nt_configuration_5F_key_ (GGS_string ("SERVICE_ENTRY_WITH_RETURNED_VALUE"), inCompiler) ;
  GGS_lstring var_serviceEntryReturnValue_6207 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 166)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_HANDLER"), inCompiler) ;
  GGS_lstring var_sectionHandler_6298 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 168)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_SYSTEM_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_sectionPushedRegisterByteSize_6389 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 170)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_DISPATCHER_HEADER"), inCompiler) ;
  GGS_lstring var_sectionDispatcherHeader_6496 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 172)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_DISPATCHER_ENTRY"), inCompiler) ;
  GGS_lstring var_sectionDispatcherEntry_6596 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 174)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_ENTRY_FROM_UNKNOWN_MODE"), inCompiler) ;
  GGS_lstring var_sectionDispatcherInvocationFromAnyMode_6702 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 176)) ;
  nt_configuration_5F_key_ (GGS_string ("SECTION_ENTRY_FROM_USER_MODE"), inCompiler) ;
  GGS_lstring var_sectionDispatcherInvocationFromUserMode_6821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 178)) ;
  nt_configuration_5F_key_ (GGS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GGS_lstring var_xtrInterruptHandler_6930 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 180)) ;
  nt_configuration_5F_key_ (GGS_string ("INTERRUPT_USER_STACK_SIZE"), inCompiler) ;
  GGS_lbigint var_stackedUserRegisterOnInterruptByteSize_7026 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 182)) ;
  nt_configuration_5F_key_ (GGS_string ("UNUSED_INTERRUPT"), inCompiler) ;
  GGS_lstring var_undefinedInterruptHandler_7133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 184)) ;
  nt_configuration_5F_key_ (GGS_string ("CPP_FILES"), inCompiler) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 186)) ;
  GGS_lstringlist var_C_5F_definitionFiles_7220 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      GGS_lstring var_fileRelativePath_7288 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 189)) ;
      var_C_5F_definitionFiles_7220.addAssignOperation (var_fileRelativePath_7288  COMMA_SOURCE_FILE ("configuration.galgas3", 190)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_ (GGS_string ("S_FILES"), inCompiler) ;
  GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 193)) ;
  GGS_lstringlist var_S_5F_definitionFiles_7417 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      GGS_lstring var_fileRelativePath_7485 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 196)) ;
      var_S_5F_definitionFiles_7417.addAssignOperation (var_fileRelativePath_7485  COMMA_SOURCE_FILE ("configuration.galgas3", 197)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_configuration_5F_key_ (GGS_string ("LL_FILES"), inCompiler) ;
  GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 200)) ;
  GGS_lstringlist var_LL_5F_definitionFiles_7615 = temp_4 ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      GGS_lstring var_fileRelativePath_7684 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 203)) ;
      var_LL_5F_definitionFiles_7615.addAssignOperation (var_fileRelativePath_7684  COMMA_SOURCE_FILE ("configuration.galgas3", 204)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 206)) ;
  outArgument_outImportedFileList = temp_6 ;
  nt_configuration_5F_key_ (GGS_string ("OMNIBUS_FILES"), inCompiler) ;
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      GGS_lstring var_relativeFilePath_7873 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 210)) ;
      outArgument_outImportedFileList.addAssignOperation (var_relativeFilePath_7873  COMMA_SOURCE_FILE ("configuration.galgas3", 211)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  GGS_interruptionConfigurationList var_interruptionConfigurationList_7978 ;
  GGS_enumerationConstantList var_interruptConstantList_8014 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_7978, var_interruptConstantList_8014, inCompiler) ;
  GGS_uint var_ptrSize_8051 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::equal, var_pointerSize_4454.readProperty_bigint ().objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 215)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_pointerSize_4454.readProperty_location (), GGS_string ("zero size pointer is invalid"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas3", 216)) ;
      var_ptrSize_8051.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    var_ptrSize_8051 = var_pointerSize_4454.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 218)) ;
  }
  GGS_targetParameters var_parameters_8233 = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_loc_3974, var_python_5F_utilityToolList_4032, var_python_5F_build_4119, var_linkerScript_4197, var_ptrSize_8051, var_handleDynamicArray_4524, var_systemStackSize_4724, var_stackedUserRegisterOnInterruptByteSize_7026, var_nopInstructionStringInLLVM_4795, var_bitbandRegisterBaseAddress_4878, var_bitbandRegisterEndAddress_4922, var_bitbandRegisterRelocationAddress_4965, var_bitbandRegisterOffsetMultiplier_5015, var_bitbandRegisterBitMultiplier_5064, var_sectionHandler_6298, var_sectionPushedRegisterByteSize_6389, var_sectionDispatcherHeader_6496, var_sectionDispatcherEntry_6596, var_sectionDispatcherInvocationFromAnyMode_6702, var_sectionDispatcherInvocationFromUserMode_6821, var_C_5F_definitionFiles_7220, var_S_5F_definitionFiles_7417, var_LL_5F_definitionFiles_7615, var_xtrInterruptHandler_6930, var_undefinedInterruptHandler_7133, var_serviceHandler_5690, var_servicePushedRegisterByteSize_5781, var_serviceDispatcherEntry_5988, var_serviceDispatcherHeader_5888, var_serviceEntryNoReturnedValue_6094, var_serviceEntryReturnValue_6207, inCompiler COMMA_HERE) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_configurationDeclarationAST::init_21__21__21__21_ (var_panicCodeTypeName_4280, var_panicLineTypeName_4368, var_parameters_8233, var_interruptionConfigurationList_7978, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("configuration.galgas3", 253)) ;
  outArgument_outEndOfSourceFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas3", 259)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_enumerationDeclarationAST::init_21__21_ (GGS_lstring::init_21__21_ (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 261)), var_xtrInterruptHandler_6930.readProperty_location (), inCompiler COMMA_HERE), var_interruptConstantList_8014, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("configuration.galgas3", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_indexing (inCompiler) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 113)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 115)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas3", 117)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas3", 119)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 121)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas3", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas3", 128)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 132)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 134)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas3", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 149)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 150)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 151)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 152)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 156)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 158)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 160)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 162)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 164)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 166)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 168)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 170)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 172)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 174)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 176)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 178)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 180)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 182)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 184)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 196)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 203)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas3", 210)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_interruptConfigList_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GGS_interruptionConfigurationList & outArgument_interruptionConfigurationList,
                                                                                                                            GGS_enumerationConstantList & outArgument_outEnumerationConstantList,
                                                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_interruptionConfigurationList.drop () ; // Release 'out' argument
  outArgument_outEnumerationConstantList.drop () ; // Release 'out' argument
  GGS_interruptionConfigurationList temp_0 = GGS_interruptionConfigurationList::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 272)) ;
  outArgument_interruptionConfigurationList = temp_0 ;
  GGS_enumerationConstantList temp_1 = GGS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 273)) ;
  outArgument_outEnumerationConstantList = temp_1 ;
  nt_configuration_5F_key_ (GGS_string ("INTERRUPTS"), inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      GGS_lstring var_interruptName_10028 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas3", 277)) ;
      GGS_interruptionPanicCode var_interruptionPanicCode_10076 ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_10076 = GGS_interruptionPanicCode::class_func_noCode (SOURCE_FILE ("configuration.galgas3", 280)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas3", 282)) ;
        GGS_lbigint var_panicCode_10197 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 283)) ;
        var_interruptionPanicCode_10076 = GGS_interruptionPanicCode::class_func_code (var_panicCode_10197  COMMA_SOURCE_FILE ("configuration.galgas3", 284)) ;
        outArgument_outEnumerationConstantList.addAssignOperation (var_interruptName_10028, var_panicCode_10197.readProperty_bigint ()  COMMA_SOURCE_FILE ("configuration.galgas3", 285)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssignOperation (var_interruptName_10028, var_interruptionPanicCode_10076  COMMA_SOURCE_FILE ("configuration.galgas3", 287)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas3", 277)) ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas3", 282)) ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas3", 283)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionAST::objectCompare (const GGS_ifExpressionAST & inOperand) const {
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

GGS_ifExpressionAST::GGS_ifExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST::
init_21__21__21__21__21__21_ (const GGS_expressionAST & in_mIfExpression,
                              const GGS_location & in_mIfExpressionEndLocation,
                              const GGS_expressionAST & in_mThenExpression,
                              const GGS_location & in_mThenExpressionEndLocation,
                              const GGS_expressionAST & in_mElseExpression,
                              const GGS_location & in_mElseExpressionEndLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionAST (inCompiler COMMA_THERE)) ;
  object->ifExpressionAST_init_21__21__21__21__21__21_ (in_mIfExpression, in_mIfExpressionEndLocation, in_mThenExpression, in_mThenExpressionEndLocation, in_mElseExpression, in_mElseExpressionEndLocation, inCompiler) ;
  const GGS_ifExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::
ifExpressionAST_init_21__21__21__21__21__21_ (const GGS_expressionAST & in_mIfExpression,
                                              const GGS_location & in_mIfExpressionEndLocation,
                                              const GGS_expressionAST & in_mThenExpression,
                                              const GGS_location & in_mThenExpressionEndLocation,
                                              const GGS_expressionAST & in_mElseExpression,
                                              const GGS_location & in_mElseExpressionEndLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mIfExpressionEndLocation = in_mIfExpressionEndLocation ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mThenExpressionEndLocation = in_mThenExpressionEndLocation ;
  mProperty_mElseExpression = in_mElseExpression ;
  mProperty_mElseExpressionEndLocation = in_mElseExpressionEndLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST::GGS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifExpressionAST::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mIfExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mIfExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mIfExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifExpressionAST::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mThenExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mThenExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mThenExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifExpressionAST::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mElseExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mElseExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mElseExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mIfExpressionEndLocation (),
mProperty_mThenExpression (),
mProperty_mThenExpressionEndLocation (),
mProperty_mElseExpression (),
mProperty_mElseExpressionEndLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GGS_expressionAST & in_mIfExpression,
                                            const GGS_location & in_mIfExpressionEndLocation,
                                            const GGS_expressionAST & in_mThenExpression,
                                            const GGS_location & in_mThenExpressionEndLocation,
                                            const GGS_expressionAST & in_mElseExpression,
                                            const GGS_location & in_mElseExpressionEndLocation,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mIfExpressionEndLocation (),
mProperty_mThenExpression (),
mProperty_mThenExpressionEndLocation (),
mProperty_mElseExpression (),
mProperty_mElseExpressionEndLocation () {
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mIfExpressionEndLocation = in_mIfExpressionEndLocation ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mThenExpressionEndLocation = in_mThenExpressionEndLocation ;
  mProperty_mElseExpression = in_mElseExpression ;
  mProperty_mElseExpressionEndLocation = in_mElseExpressionEndLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifExpressionAST:") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mIfExpression, mProperty_mIfExpressionEndLocation, mProperty_mThenExpression, mProperty_mThenExpressionEndLocation, mProperty_mElseExpression, mProperty_mElseExpressionEndLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIfExpression.printNonNullClassInstanceProperties ("mIfExpression") ;
    mProperty_mIfExpressionEndLocation.printNonNullClassInstanceProperties ("mIfExpressionEndLocation") ;
    mProperty_mThenExpression.printNonNullClassInstanceProperties ("mThenExpression") ;
    mProperty_mThenExpressionEndLocation.printNonNullClassInstanceProperties ("mThenExpressionEndLocation") ;
    mProperty_mElseExpression.printNonNullClassInstanceProperties ("mElseExpression") ;
    mProperty_mElseExpressionEndLocation.printNonNullClassInstanceProperties ("mElseExpressionEndLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_ifExpressionAST result ;
  const GGS_ifExpressionAST * p = (const GGS_ifExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionAST_2E_weak::objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const {
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

GGS_ifExpressionAST_2E_weak::GGS_ifExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak & GGS_ifExpressionAST_2E_weak::operator = (const GGS_ifExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak::GGS_ifExpressionAST_2E_weak (const GGS_ifExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak GGS_ifExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifExpressionAST result ;
  if (isValid ()) {
    const cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST_2E_weak::bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionAST) ;
      result = GGS_ifExpressionAST ((cPtr_ifExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ("ifExpressionAST.weak",
                                                                            & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak GGS_ifExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifExpressionAST_2E_weak result ;
  const GGS_ifExpressionAST_2E_weak * p = (const GGS_ifExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum genericFormalParameter
//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter::GGS_genericFormalParameter (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::class_func_constant (const GGS_lstring & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_constant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_genericFormalParameter_2E_constant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::class_func_type (const GGS_lstring & inAssociatedValue0
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_genericFormalParameter_2E_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::method_extractConstant (GGS_lstring & outAssociatedValue_name,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_constant) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("proc @genericFormalParameter.constant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::method_extractType (GGS_lstring & outAssociatedValue_name,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("proc @genericFormalParameter.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_constant_3F_ GGS_genericFormalParameter::getter_getConstant (UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameter_2E_constant_3F_ result ;
  if (mEnum == Enumeration::enum_constant) {
    const auto ptr = (const GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_genericFormalParameter_2E_constant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::getAssociatedValuesFor_constant (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter_2E_type_3F_ GGS_genericFormalParameter::getter_getType (UNUSED_LOCATION_ARGS) const {
  GGS_genericFormalParameter_2E_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_genericFormalParameter_2E_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::getAssociatedValuesFor_type (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_genericFormalParameter [3] = {
  "(not built)",
  "constant",
  "type"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericFormalParameter::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericFormalParameter::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericFormalParameter::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<enum @genericFormalParameter: ") ;
  ioString.appendCString (gEnumNameArrayFor_genericFormalParameter [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_genericFormalParameter::objectCompare (const GGS_genericFormalParameter & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_constant: {
        const auto left = (GGS_genericFormalParameter_2E_constant *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_genericFormalParameter_2E_constant *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_type: {
        const auto left = (GGS_genericFormalParameter_2E_type *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_genericFormalParameter_2E_type *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @genericFormalParameter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter ("genericFormalParameter",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericFormalParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericFormalParameter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericFormalParameter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameter GGS_genericFormalParameter::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericFormalParameter result ;
  const GGS_genericFormalParameter * p = (const GGS_genericFormalParameter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericFormalParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum llvmStringDefinitionElement
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement::GGS_llvmStringDefinitionElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::class_func_variable (const GGS_lstring & inAssociatedValue0
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_variable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmStringDefinitionElement_2E_variable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::class_func_string (const GGS_lstring & inAssociatedValue0
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_llvmStringDefinitionElement_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::method_extractVariable (GGS_lstring & outAssociatedValue_name,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_variable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("proc @llvmStringDefinitionElement.variable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::method_extractString (GGS_lstring & outAssociatedValue_value,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("proc @llvmStringDefinitionElement.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_variable_3F_ GGS_llvmStringDefinitionElement::getter_getVariable (UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement_2E_variable_3F_ result ;
  if (mEnum == Enumeration::enum_variable) {
    const auto ptr = (const GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmStringDefinitionElement_2E_variable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::getAssociatedValuesFor_variable (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement_2E_string_3F_ GGS_llvmStringDefinitionElement::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_llvmStringDefinitionElement_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::getAssociatedValuesFor_string (GGS_lstring & out_value) const {
  const auto ptr = (const GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmStringDefinitionElement [3] = {
  "(not built)",
  "variable",
  "string"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmStringDefinitionElement::getter_isVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_variable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmStringDefinitionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinitionElement::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @llvmStringDefinitionElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmStringDefinitionElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmStringDefinitionElement::objectCompare (const GGS_llvmStringDefinitionElement & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_variable: {
        const auto left = (GGS_llvmStringDefinitionElement_2E_variable *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_llvmStringDefinitionElement_2E_variable *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_string: {
        const auto left = (GGS_llvmStringDefinitionElement_2E_string *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_llvmStringDefinitionElement_2E_string *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @llvmStringDefinitionElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ("llvmStringDefinitionElement",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinitionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinitionElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinitionElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement GGS_llvmStringDefinitionElement::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinitionElement result ;
  const GGS_llvmStringDefinitionElement * p = (const GGS_llvmStringDefinitionElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinitionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@llvmStringDefinition' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_llvmStringDefinition : public CollectionElementPtr {
  public: GGS_llvmStringDefinition_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_llvmStringDefinition (const GGS_llvmStringDefinitionElement & in_mElement
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_llvmStringDefinition (const GGS_llvmStringDefinition_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_llvmStringDefinition::CollectionElementPtr_llvmStringDefinition (const GGS_llvmStringDefinitionElement & in_mElement
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_llvmStringDefinition::CollectionElementPtr_llvmStringDefinition (const GGS_llvmStringDefinition_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_llvmStringDefinition::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_llvmStringDefinition::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_llvmStringDefinition (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @llvmStringDefinition
//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition::GGS_llvmStringDefinition (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition::GGS_llvmStringDefinition (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_llvmStringDefinition * p = (CollectionElementPtr_llvmStringDefinition *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_llvmStringDefinition) ;
    const GGS_llvmStringDefinition_2E_element element (p->mObject.mProperty_mElement) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_llvmStringDefinitionElement & in_mElement
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_llvmStringDefinition * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_llvmStringDefinition (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_llvmStringDefinition::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_llvmStringDefinition::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::description (String & ioString,
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
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::plusPlusAssignOperation (const GGS_llvmStringDefinition_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::class_func_listWithValue (const GGS_llvmStringDefinitionElement & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element element (inOperand0) ;
  GGS_llvmStringDefinition result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::addAssignOperation (const GGS_llvmStringDefinitionElement & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_append (const GGS_llvmStringDefinitionElement inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::setter_insertAtIndex (const GGS_llvmStringDefinitionElement inOperand0,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_llvmStringDefinition_2E_element newElement (inOperand0) ;
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

void GGS_llvmStringDefinition::setter_removeAtIndex (GGS_llvmStringDefinitionElement & outOperand0,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
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

void GGS_llvmStringDefinition::setter_popFirst (GGS_llvmStringDefinitionElement & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
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

void GGS_llvmStringDefinition::setter_popLast (GGS_llvmStringDefinitionElement & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
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

void GGS_llvmStringDefinition::method_first (GGS_llvmStringDefinitionElement & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
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

void GGS_llvmStringDefinition::method_last (GGS_llvmStringDefinitionElement & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
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

GGS_llvmStringDefinition GGS_llvmStringDefinition::add_operation (const GGS_llvmStringDefinition & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
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

GGS_llvmStringDefinition GGS_llvmStringDefinition::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
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

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinition result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmStringDefinition::plusAssignOperation (const GGS_llvmStringDefinition inList,
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

void GGS_llvmStringDefinition::setter_setMElementAtIndex (GGS_llvmStringDefinitionElement inOperand,
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

GGS_llvmStringDefinitionElement GGS_llvmStringDefinition::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_llvmStringDefinitionElement result ;
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

ComparisonResult GGS_llvmStringDefinition::objectCompare (const GGS_llvmStringDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_llvmStringDefinition_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_llvmStringDefinition_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @llvmStringDefinition
//--------------------------------------------------------------------------------------------------

DownEnumerator_llvmStringDefinition::DownEnumerator_llvmStringDefinition (const GGS_llvmStringDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element DownEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement DownEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @llvmStringDefinition
//--------------------------------------------------------------------------------------------------

UpEnumerator_llvmStringDefinition::UpEnumerator_llvmStringDefinition (const GGS_llvmStringDefinition & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition_2E_element UpEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinitionElement UpEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @llvmStringDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinition ("llvmStringDefinition",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmStringDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmStringDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmStringDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmStringDefinition GGS_llvmStringDefinition::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmStringDefinition result ;
  const GGS_llvmStringDefinition * p = (const GGS_llvmStringDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmStringDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmGenericType_2E_weak::objectCompare (const GGS_llvmGenericType_2E_weak & inOperand) const {
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

GGS_llvmGenericType_2E_weak::GGS_llvmGenericType_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak & GGS_llvmGenericType_2E_weak::operator = (const GGS_llvmGenericType & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak::GGS_llvmGenericType_2E_weak (const GGS_llvmGenericType & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak GGS_llvmGenericType_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmGenericType_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType_2E_weak::unwrappedValue (void) const {
  GGS_llvmGenericType result ;
  if (isValid ()) {
    const cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmGenericType (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType GGS_llvmGenericType_2E_weak::bang_llvmGenericType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmGenericType result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenericType) ;
      result = GGS_llvmGenericType ((cPtr_llvmGenericType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmGenericType.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ("llvmGenericType.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmGenericType_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmGenericType_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmGenericType_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenericType_2E_weak GGS_llvmGenericType_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmGenericType_2E_weak result ;
  const GGS_llvmGenericType_2E_weak * p = (const GGS_llvmGenericType_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmGenericType_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@genericFormalParameterList buildFormalGenericConstantMap'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const GGS_genericFormalParameterList inObject,
                                                    GGS_ctCheckMap & ioArgument_ioMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_genericFormalParameterList temp_0 = inObject ;
  UpEnumerator_genericFormalParameterList enumerator_5078 (temp_0) ;
  while (enumerator_5078.hasCurrentObject ()) {
    switch (enumerator_5078.current_mParameter (HERE).enumValue ()) {
    case GGS_genericFormalParameter::Enumeration::invalid:
      break ;
    case GGS_genericFormalParameter::Enumeration::enum_type:
      break ;
    case GGS_genericFormalParameter::Enumeration::enum_constant:
      {
        GGS_lstring extractedValue_5156_constantName_0 ;
        enumerator_5078.current_mParameter (HERE).getAssociatedValuesFor_constant (extractedValue_5156_constantName_0) ;
        {
        ioArgument_ioMap.setter_insertKey (extractedValue_5156_constantName_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 153)) ;
        }
      }
      break ;
    }
    enumerator_5078.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@llvmStringDefinition checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const GGS_llvmStringDefinition inObject,
                                                 const GGS_ctCheckMap constinArgument_inMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmStringDefinition temp_0 = inObject ;
  UpEnumerator_llvmStringDefinition enumerator_5441 (temp_0) ;
  while (enumerator_5441.hasCurrentObject ()) {
    switch (enumerator_5441.current_mElement (HERE).enumValue ()) {
    case GGS_llvmStringDefinitionElement::Enumeration::invalid:
      break ;
    case GGS_llvmStringDefinitionElement::Enumeration::enum_string:
      break ;
    case GGS_llvmStringDefinitionElement::Enumeration::enum_variable:
      {
        GGS_lstring extractedValue_5521_name_0 ;
        enumerator_5441.current_mElement (HERE).getAssociatedValuesFor_variable (extractedValue_5521_name_0) ;
        constinArgument_inMap.method_searchKey (extractedValue_5521_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas3", 165)) ;
      }
      break ;
    }
    enumerator_5441.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structureDeclarationAST_2E_weak::objectCompare (const GGS_structureDeclarationAST_2E_weak & inOperand) const {
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

GGS_structureDeclarationAST_2E_weak::GGS_structureDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak & GGS_structureDeclarationAST_2E_weak::operator = (const GGS_structureDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak::GGS_structureDeclarationAST_2E_weak (const GGS_structureDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak GGS_structureDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structureDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_structureDeclarationAST result ;
  if (isValid ()) {
    const cPtr_structureDeclarationAST * p = (cPtr_structureDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_structureDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST GGS_structureDeclarationAST_2E_weak::bang_structureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structureDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structureDeclarationAST) ;
      result = GGS_structureDeclarationAST ((cPtr_structureDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structureDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureDeclarationAST_2E_weak ("structureDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structureDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structureDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structureDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structureDeclarationAST_2E_weak GGS_structureDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_structureDeclarationAST_2E_weak result ;
  const GGS_structureDeclarationAST_2E_weak * p = (const GGS_structureDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structureDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyAttributeList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_propertyAttributeList : public CollectionElementPtr {
  public: GGS_propertyAttributeList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_propertyAttributeList (const GGS_lstring & in_mAttributeName,
                                                      const GGS_lbigint & in_mAttributeValue
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_propertyAttributeList (const GGS_propertyAttributeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_propertyAttributeList::CollectionElementPtr_propertyAttributeList (const GGS_lstring & in_mAttributeName,
                                                                                        const GGS_lbigint & in_mAttributeValue
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_propertyAttributeList::CollectionElementPtr_propertyAttributeList (const GGS_propertyAttributeList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_propertyAttributeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_propertyAttributeList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_propertyAttributeList (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyAttributeList
//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList::GGS_propertyAttributeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList::GGS_propertyAttributeList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_propertyAttributeList * p = (CollectionElementPtr_propertyAttributeList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_propertyAttributeList) ;
    const GGS_propertyAttributeList_2E_element element (p->mObject.mProperty_mAttributeName, p->mObject.mProperty_mAttributeValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_lstring & in_mAttributeName,
                                                           const GGS_lbigint & in_mAttributeValue
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_propertyAttributeList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_propertyAttributeList (in_mAttributeName, in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyAttributeList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_propertyAttributeList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::description (String & ioString,
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
      ioString.appendString ("mAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAttributeValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAttributeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::plusPlusAssignOperation (const GGS_propertyAttributeList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lbigint & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element element (inOperand0, inOperand1) ;
  GGS_propertyAttributeList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_lbigint & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lbigint inOperand1,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lbigint inOperand1,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_propertyAttributeList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_propertyAttributeList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lbigint & outOperand1,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAttributeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lbigint & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lbigint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::method_first (GGS_lstring & outOperand0,
                                              GGS_lbigint & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
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

void GGS_propertyAttributeList::method_last (GGS_lstring & outOperand0,
                                             GGS_lbigint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
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

GGS_propertyAttributeList GGS_propertyAttributeList::add_operation (const GGS_propertyAttributeList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
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

GGS_propertyAttributeList GGS_propertyAttributeList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
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

GGS_propertyAttributeList GGS_propertyAttributeList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyAttributeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAttributeList::plusAssignOperation (const GGS_propertyAttributeList inList,
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

void GGS_propertyAttributeList::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName = inOperand ;
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

GGS_lstring GGS_propertyAttributeList::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName ;
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

void GGS_propertyAttributeList::setter_setMAttributeValueAtIndex (GGS_lbigint inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue = inOperand ;
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

GGS_lbigint GGS_propertyAttributeList::getter_mAttributeValueAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lbigint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue ;
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
// Down Enumerator for @propertyAttributeList
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyAttributeList::DownEnumerator_propertyAttributeList (const GGS_propertyAttributeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element DownEnumerator_propertyAttributeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyAttributeList::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_propertyAttributeList::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @propertyAttributeList
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyAttributeList::UpEnumerator_propertyAttributeList (const GGS_propertyAttributeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList_2E_element UpEnumerator_propertyAttributeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyAttributeList::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_propertyAttributeList::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}




//--------------------------------------------------------------------------------------------------
//     @propertyAttributeList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAttributeList ("propertyAttributeList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAttributeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAttributeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAttributeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAttributeList GGS_propertyAttributeList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAttributeList result ;
  const GGS_propertyAttributeList * p = (const GGS_propertyAttributeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAttributeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyKindAST
//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST::GGS_propertyKindAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_initializedStoredProperty (const GGS_expressionAST & inAssociatedValue0
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_initializedStoredProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_initializedStoredProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_uninitializedStoredProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_uninitializedStoredProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_initializedConstantProperty (const GGS_expressionAST & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_initializedConstantProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_initializedConstantProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_uninitializedConstantProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_uninitializedConstantProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_readOnlyComputedProperty (const GGS_instructionListAST & inAssociatedValue0,
                                                                              const GGS_location & inAssociatedValue1
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_readOnlyComputedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_readOnlyComputedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::class_func_writeComputedProperty (const GGS_instructionListAST & inAssociatedValue0,
                                                                           const GGS_location & inAssociatedValue1
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  result.mEnum = Enumeration::enum_writeComputedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKindAST_2E_writeComputedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractInitializedStoredProperty (GGS_expressionAST & outAssociatedValue_initExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_initializedStoredProperty) {
    outAssociatedValue_initExpression.drop () ;
    String s ;
    s.appendCString ("proc @propertyKindAST.initializedStoredProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_initializedStoredProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_initExpression = ptr->mProperty_initExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractInitializedConstantProperty (GGS_expressionAST & outAssociatedValue_initExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_initializedConstantProperty) {
    outAssociatedValue_initExpression.drop () ;
    String s ;
    s.appendCString ("proc @propertyKindAST.initializedConstantProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_initializedConstantProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_initExpression = ptr->mProperty_initExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractReadOnlyComputedProperty (GGS_instructionListAST & outAssociatedValue_instructionList,
                                                                  GGS_location & outAssociatedValue_endOfInstructionList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_readOnlyComputedProperty) {
    outAssociatedValue_instructionList.drop () ;
    outAssociatedValue_endOfInstructionList.drop () ;
    String s ;
    s.appendCString ("proc @propertyKindAST.readOnlyComputedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_readOnlyComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_instructionList = ptr->mProperty_instructionList ;
    outAssociatedValue_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::method_extractWriteComputedProperty (GGS_instructionListAST & outAssociatedValue_instructionList,
                                                               GGS_location & outAssociatedValue_endOfInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_writeComputedProperty) {
    outAssociatedValue_instructionList.drop () ;
    outAssociatedValue_endOfInstructionList.drop () ;
    String s ;
    s.appendCString ("proc @propertyKindAST.writeComputedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKindAST_2E_writeComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_instructionList = ptr->mProperty_instructionList ;
    outAssociatedValue_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedStoredProperty_3F_ GGS_propertyKindAST::getter_getInitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_initializedStoredProperty_3F_ result ;
  if (mEnum == Enumeration::enum_initializedStoredProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_initializedStoredProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_initializedStoredProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_initializedStoredProperty (GGS_expressionAST & out_initExpression) const {
  const auto ptr = (const GGS_propertyKindAST_2E_initializedStoredProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_initExpression = ptr->mProperty_initExpression ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_initializedConstantProperty_3F_ GGS_propertyKindAST::getter_getInitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_initializedConstantProperty_3F_ result ;
  if (mEnum == Enumeration::enum_initializedConstantProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_initializedConstantProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_initializedConstantProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_initializedConstantProperty (GGS_expressionAST & out_initExpression) const {
  const auto ptr = (const GGS_propertyKindAST_2E_initializedConstantProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_initExpression = ptr->mProperty_initExpression ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ GGS_propertyKindAST::getter_getReadOnlyComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_readOnlyComputedProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_readOnlyComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_readOnlyComputedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_readOnlyComputedProperty (GGS_instructionListAST & out_instructionList,
                                                                           GGS_location & out_endOfInstructionList) const {
  const auto ptr = (const GGS_propertyKindAST_2E_readOnlyComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_instructionList = ptr->mProperty_instructionList ;
  out_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST_2E_writeComputedProperty_3F_ GGS_propertyKindAST::getter_getWriteComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKindAST_2E_writeComputedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_writeComputedProperty) {
    const auto ptr = (const GGS_propertyKindAST_2E_writeComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKindAST_2E_writeComputedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::getAssociatedValuesFor_writeComputedProperty (GGS_instructionListAST & out_instructionList,
                                                                        GGS_location & out_endOfInstructionList) const {
  const auto ptr = (const GGS_propertyKindAST_2E_writeComputedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_instructionList = ptr->mProperty_instructionList ;
  out_endOfInstructionList = ptr->mProperty_endOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyKindAST [7] = {
  "(not built)",
  "initializedStoredProperty",
  "uninitializedStoredProperty",
  "initializedConstantProperty",
  "uninitializedConstantProperty",
  "readOnlyComputedProperty",
  "writeComputedProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isInitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializedStoredProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isUninitializedStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uninitializedStoredProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isInitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializedConstantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isUninitializedConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uninitializedConstantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isReadOnlyComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_readOnlyComputedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKindAST::getter_isWriteComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_writeComputedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKindAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyKindAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyKindAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyKindAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST ("propertyKindAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKindAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKindAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKindAST GGS_propertyKindAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyKindAST result ;
  const GGS_propertyKindAST * p = (const GGS_propertyKindAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

