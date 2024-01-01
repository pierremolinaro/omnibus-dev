#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------

cMapElement_taskMap::cMapElement_taskMap (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & in_mTaskType
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_taskMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_taskMap (mProperty_lkey, mProperty_mTaskType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_taskMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTaskType" ":") ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_taskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMap * operand = (cMapElement_taskMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap::GALGAS_taskMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap::GALGAS_taskMap (const GALGAS_taskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap & GALGAS_taskMap::operator = (const GALGAS_taskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::class_func_mapWithMapToOverride (const GALGAS_taskMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_taskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & inArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = nullptr ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::add_operation (const GALGAS_taskMap & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GALGAS_taskMap result = *this ;
  cEnumerator_taskMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTaskType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap::setter_insertKey (GALGAS_lstring inKey,
                                       GALGAS_omnibusType inArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = nullptr ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_taskMap_searchKey = "there is no '%K' task" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap::method_searchKey (GALGAS_lstring inKey,
                                       GALGAS_omnibusType & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) performSearch (inKey,
                                                                               inCompiler,
                                                                               kSearchErrorMessage_taskMap_searchKey
                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mProperty_mTaskType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_taskMap::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap::setter_setMTaskTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                GALGAS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMap * p = (cMapElement_taskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMap * GALGAS_taskMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * result = (cMapElement_taskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_taskMap::cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element cEnumerator_taskMap::current (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return GALGAS_taskMap_2D_element (p->mProperty_lkey, p->mProperty_mTaskType) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMap::optional_searchKey (const GALGAS_string & inKey,
                                         GALGAS_omnibusType & outArgument0) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mProperty_mTaskType ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap GALGAS_taskMap::extractObject (const GALGAS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  const GALGAS_taskMap * p = (const GALGAS_taskMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@globalTaskVariableList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_globalTaskVariableList : public cCollectionElement {
  public: GALGAS_globalTaskVariableList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                     const GALGAS_string & in_mTaskTypeName,
                                                     const GALGAS_objectIR & in_mInitialValue
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalTaskVariableList (const GALGAS_globalTaskVariableList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_string & in_mTaskName,
                                                                                      const GALGAS_string & in_mTaskTypeName,
                                                                                      const GALGAS_objectIR & in_mInitialValue
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GALGAS_globalTaskVariableList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_globalTaskVariableList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTaskName" ":") ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTaskTypeName" ":") ;
  mObject.mProperty_mTaskTypeName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInitialValue" ":") ;
  mObject.mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_globalTaskVariableList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalTaskVariableList * operand = (cCollectionElement_globalTaskVariableList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalTaskVariableList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList::GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalTaskVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                       const GALGAS_string & inOperand1,
                                                                                       const GALGAS_objectIR & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalTaskVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalTaskVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_string & in_mTaskName,
                                                               const GALGAS_string & in_mTaskTypeName,
                                                               const GALGAS_objectIR & in_mInitialValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalTaskVariableList (in_mTaskName,
                                                            in_mTaskTypeName,
                                                            in_mInitialValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::addAssign_operation (const GALGAS_string & inOperand0,
                                                         const GALGAS_string & inOperand1,
                                                         const GALGAS_objectIR & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_append (const GALGAS_string inOperand0,
                                                   const GALGAS_string inOperand1,
                                                   const GALGAS_objectIR inOperand2,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_objectIR inOperand2,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_globalTaskVariableList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_objectIR & outOperand2,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
        outOperand0 = p->mObject.mProperty_mTaskName ;
        outOperand1 = p->mObject.mProperty_mTaskTypeName ;
        outOperand2 = p->mObject.mProperty_mInitialValue ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_popFirst (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_objectIR & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_popLast (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_objectIR & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::method_first (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_objectIR & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::method_last (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_objectIR & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::add_operation (const GALGAS_globalTaskVariableList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_globalTaskVariableList result = GALGAS_globalTaskVariableList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_setMTaskNameAtIndex (GALGAS_string inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_globalTaskVariableList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_setMTaskTypeNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_globalTaskVariableList::getter_mTaskTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mTaskTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalTaskVariableList::setter_setMInitialValueAtIndex (GALGAS_objectIR inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_globalTaskVariableList::getter_mInitialValueAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mInitialValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_globalTaskVariableList::cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList_2D_element cEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mInitialValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @globalTaskVariableList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalTaskVariableList GALGAS_globalTaskVariableList::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList result ;
  const GALGAS_globalTaskVariableList * p = (const GALGAS_globalTaskVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalTaskVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDecoratedDeclaration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractDecoratedDeclaration::objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDecoratedDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDecoratedDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractDecoratedDeclaration::cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractDecoratedDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ("abstractDecoratedDeclaration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration GALGAS_abstractDecoratedDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDecoratedDeclaration result ;
  const GALGAS_abstractDecoratedDeclaration * p = (const GALGAS_abstractDecoratedDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractDecoratedDeclaration_2D_weak::objectCompare (const GALGAS_abstractDecoratedDeclaration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration_2D_weak::GALGAS_abstractDecoratedDeclaration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration_2D_weak & GALGAS_abstractDecoratedDeclaration_2D_weak::operator = (const GALGAS_abstractDecoratedDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration_2D_weak::GALGAS_abstractDecoratedDeclaration_2D_weak (const GALGAS_abstractDecoratedDeclaration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration_2D_weak GALGAS_abstractDecoratedDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractDecoratedDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration GALGAS_abstractDecoratedDeclaration_2D_weak::bang_abstractDecoratedDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractDecoratedDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDecoratedDeclaration) ;
      result = GALGAS_abstractDecoratedDeclaration ((cPtr_abstractDecoratedDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractDecoratedDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak ("abstractDecoratedDeclaration-weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDecoratedDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDecoratedDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDecoratedDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration_2D_weak GALGAS_abstractDecoratedDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDecoratedDeclaration_2D_weak result ;
  const GALGAS_abstractDecoratedDeclaration_2D_weak * p = (const GALGAS_abstractDecoratedDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractDecoratedDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationDecorationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public: GALGAS_declarationDecorationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationDecorationList (const GALGAS_declarationDecorationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_declarationDecorationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationDecorationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationDecorationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationDecorationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_declarationDecorationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_declarationDecorationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationDecorationList * operand = (cCollectionElement_declarationDecorationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationDecorationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationDecorationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::class_func_listWithValue (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationDecorationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationDecorationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::addAssign_operation (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_append (const GALGAS_abstractDecoratedDeclaration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_insertAtIndex (const GALGAS_abstractDecoratedDeclaration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_declarationDecorationList::setter_removeAtIndex (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
        outOperand0 = p->mObject.mProperty_mDeclaration ;
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

void GALGAS_declarationDecorationList::setter_popFirst (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_popLast (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::method_first (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::method_last (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::add_operation (const GALGAS_declarationDecorationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList::setter_setMDeclarationAtIndex (GALGAS_abstractDecoratedDeclaration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration GALGAS_declarationDecorationList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  GALGAS_abstractDecoratedDeclaration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_declarationDecorationList::cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element cEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractDecoratedDeclaration cEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @declarationDecorationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList ("declarationDecorationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationDecorationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationDecorationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationDecorationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList result ;
  const GALGAS_declarationDecorationList * p = (const GALGAS_declarationDecorationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationDecorationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bigint & in_mIndex,
                                                  const GALGAS_lstring & in_mClassTypeName
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mClassTypeName (in_mClassTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_constantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_constantMap (mProperty_lkey, mProperty_mIndex, mProperty_mClassTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_constantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mClassTypeName" ":") ;
  mProperty_mClassTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantMap * operand = (cMapElement_constantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (operand->mProperty_mClassTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap::GALGAS_constantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap::GALGAS_constantMap (const GALGAS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap & GALGAS_constantMap::operator = (const GALGAS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::class_func_mapWithMapToOverride (const GALGAS_constantMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_bigint & inArgument0,
                                              const GALGAS_lstring & inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::add_operation (const GALGAS_constantMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result = *this ;
  cEnumerator_constantMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mClassTypeName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_bigint inArgument0,
                                           GALGAS_lstring inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constantMap_searchKey = "there is no '%K' constant" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_bigint & outArgument0,
                                           GALGAS_lstring & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_constantMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_constantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constantMap::getter_mClassTypeNameForKey (const GALGAS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_setMIndexForKey (GALGAS_bigint inAttributeValue,
                                                 GALGAS_string inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap::setter_setMClassTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                         GALGAS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mClassTypeName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantMap * GALGAS_constantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_constantMap::cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element cEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GALGAS_constantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mClassTypeName) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mClassTypeName ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constantMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_bigint & outArgument0,
                                             GALGAS_lstring & outArgument1) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mClassTypeName ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_constantMap::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  const GALGAS_constantMap * p = (const GALGAS_constantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_constructorSignature & in_mSignature,
                                                        const GALGAS_constructorValue & in_mInitValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignature (in_mSignature),
mProperty_mInitValue (in_mInitValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_constructorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_constructorMap (mProperty_lkey, mProperty_mSignature, mProperty_mInitValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_constructorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInitValue" ":") ;
  mProperty_mInitValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitValue.objectCompare (operand->mProperty_mInitValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::class_func_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_constructorSignature & inArgument0,
                                                 const GALGAS_constructorValue & inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::add_operation (const GALGAS_constructorMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result = *this ;
  cEnumerator_constructorMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSignature (HERE), enumerator.current_mInitValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_constructorSignature inArgument0,
                                              GALGAS_constructorValue inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_constructorMap_searchKey = "constructor is not defined" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_constructorSignature & outArgument0,
                                              GALGAS_constructorValue & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_constructorMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mProperty_mSignature ;
    outArgument1 = p->mProperty_mInitValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorMap::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_constructorSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorMap::getter_mInitValueForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_constructorValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mInitValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_setMSignatureForKey (GALGAS_constructorSignature inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap::setter_setMInitValueForKey (GALGAS_constructorValue inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mInitValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mProperty_lkey, p->mProperty_mSignature, p->mProperty_mInitValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature cEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mInitValue ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_constructorSignature & outArgument0,
                                                GALGAS_constructorValue & outArgument1) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mProperty_mSignature ;
    outArgument1 = p->mProperty_mInitValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_constructorMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  const GALGAS_constructorMap * p = (const GALGAS_constructorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_constructorValue_simple::cEnumAssociatedValues_constructorValue_simple (const GALGAS_bigint inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_constructorValue_simple::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_constructorValue_simple::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_simple * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_simple *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_constructorValue_structure::cEnumAssociatedValues_constructorValue_structure (const GALGAS_sortedOperandIRList inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_constructorValue_structure::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_constructorValue_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_structure * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_structure *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_constructorValue_arrayValue::cEnumAssociatedValues_constructorValue_arrayValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                      const GALGAS_uint inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_constructorValue_arrayValue::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_constructorValue_arrayValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_constructorValue_arrayValue * ptr = dynamic_cast<const cEnumAssociatedValues_constructorValue_arrayValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue::GALGAS_constructorValue (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::class_func_null (UNUSED_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  result.mEnum = kEnum_null ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::class_func_simple (const GALGAS_bigint & inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_simple ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_simple (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::class_func_structure (const GALGAS_sortedOperandIRList & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_structure (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::class_func_arrayValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                        const GALGAS_uint & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayValue ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_constructorValue_arrayValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::method_simple (GALGAS_bigint & outAssociatedValue0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_simple) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @constructorValue simple invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_simple * ptr = (const cEnumAssociatedValues_constructorValue_simple *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::method_structure (GALGAS_sortedOperandIRList & outAssociatedValue0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @constructorValue structure invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_structure * ptr = (const cEnumAssociatedValues_constructorValue_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::method_arrayValue (GALGAS_omnibusType & outAssociatedValue0,
                                                 GALGAS_uint & outAssociatedValue1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @constructorValue arrayValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_constructorValue_arrayValue * ptr = (const cEnumAssociatedValues_constructorValue_arrayValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_null () const {
  const bool ok = mEnum == kEnum_null ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_simple (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_simple ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_constructorValue_simple *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_structure (GALGAS_sortedOperandIRList & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_structure ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_constructorValue_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorValue::optional_arrayValue (GALGAS_omnibusType & outAssociatedValue0,
                                                   GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_arrayValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_constructorValue_arrayValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_constructorValue [5] = {
  "(not built)",
  "null",
  "simple",
  "structure",
  "arrayValue"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isSimple (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_simple == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_constructorValue::getter_isArrayValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorValue::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("<enum @constructorValue: ") ;
  ioString.addString (gEnumNameArrayFor_constructorValue [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constructorValue::objectCompare (const GALGAS_constructorValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue ("constructorValue",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorValue GALGAS_constructorValue::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorValue result ;
  const GALGAS_constructorValue * p = (const GALGAS_constructorValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@constructorSignature' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_constructorSignature : public cCollectionElement {
  public: GALGAS_constructorSignature_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_constructorSignature (const GALGAS_string & in_mSelector,
                                                   const GALGAS_omnibusType & in_mType,
                                                   const GALGAS_uint & in_mFieldIndex
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constructorSignature (const GALGAS_constructorSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GALGAS_string & in_mSelector,
                                                                                  const GALGAS_omnibusType & in_mType,
                                                                                  const GALGAS_uint & in_mFieldIndex
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mType, in_mFieldIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GALGAS_constructorSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mType, inElement.mProperty_mFieldIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_constructorSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_constructorSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_constructorSignature (mObject.mProperty_mSelector, mObject.mProperty_mType, mObject.mProperty_mFieldIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_constructorSignature::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mFieldIndex" ":") ;
  mObject.mProperty_mFieldIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_constructorSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_constructorSignature * operand = (cCollectionElement_constructorSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_constructorSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature::GALGAS_constructorSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature::GALGAS_constructorSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                   const GALGAS_omnibusType & inOperand1,
                                                                                   const GALGAS_uint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_constructorSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_string & in_mSelector,
                                                             const GALGAS_omnibusType & in_mType,
                                                             const GALGAS_uint & in_mFieldIndex
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_constructorSignature (in_mSelector,
                                                          in_mType,
                                                          in_mFieldIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::addAssign_operation (const GALGAS_string & inOperand0,
                                                       const GALGAS_omnibusType & inOperand1,
                                                       const GALGAS_uint & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_append (const GALGAS_string inOperand0,
                                                 const GALGAS_omnibusType inOperand1,
                                                 const GALGAS_uint inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                        const GALGAS_omnibusType inOperand1,
                                                        const GALGAS_uint inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_constructorSignature::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                        GALGAS_omnibusType & outOperand1,
                                                        GALGAS_uint & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
        outOperand0 = p->mObject.mProperty_mSelector ;
        outOperand1 = p->mObject.mProperty_mType ;
        outOperand2 = p->mObject.mProperty_mFieldIndex ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_popFirst (GALGAS_string & outOperand0,
                                                   GALGAS_omnibusType & outOperand1,
                                                   GALGAS_uint & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_popLast (GALGAS_string & outOperand0,
                                                  GALGAS_omnibusType & outOperand1,
                                                  GALGAS_uint & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::method_first (GALGAS_string & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                GALGAS_uint & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::method_last (GALGAS_string & outOperand0,
                                               GALGAS_omnibusType & outOperand1,
                                               GALGAS_uint & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::add_operation (const GALGAS_constructorSignature & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_constructorSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::plusAssign_operation (const GALGAS_constructorSignature inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_setMSelectorAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_constructorSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_constructorSignature::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature::setter_setMFieldIndexAtIndex (GALGAS_uint inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_constructorSignature::getter_mFieldIndexAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mFieldIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_constructorSignature::cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element cEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mFieldIndex ;
}




//--------------------------------------------------------------------------------------------------
//
//     @constructorSignature generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature ("constructorSignature",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature GALGAS_constructorSignature::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  const GALGAS_constructorSignature * p = (const GALGAS_constructorSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyGetterMap::cMapElement_propertyGetterMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_propertyVisibility & in_mVisibility,
                                                              const GALGAS_propertyGetterKind & in_mAccess
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mVisibility (in_mVisibility),
mProperty_mAccess (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyGetterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyGetterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyGetterMap (mProperty_lkey, mProperty_mVisibility, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyGetterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mVisibility" ":") ;
  mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mAccess" ":") ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_propertyGetterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyGetterMap * operand = (cMapElement_propertyGetterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mVisibility.objectCompare (operand->mProperty_mVisibility) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccess.objectCompare (operand->mProperty_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap::GALGAS_propertyGetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap::GALGAS_propertyGetterMap (const GALGAS_propertyGetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap & GALGAS_propertyGetterMap::operator = (const GALGAS_propertyGetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::class_func_mapWithMapToOverride (const GALGAS_propertyGetterMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_propertyVisibility & inArgument0,
                                                    const GALGAS_propertyGetterKind & inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyGetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::add_operation (const GALGAS_propertyGetterMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGetterMap result = *this ;
  cEnumerator_propertyGetterMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mVisibility (HERE), enumerator.current_mAccess (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility inArgument0,
                                                 GALGAS_propertyGetterKind inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyGetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyGetterMap_searchKey = "there is no '%K' property" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility & outArgument0,
                                                 GALGAS_propertyGetterKind & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_propertyGetterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    outArgument0 = p->mProperty_mVisibility ;
    outArgument1 = p->mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyGetterMap::getter_mVisibilityForKey (const GALGAS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) attributes ;
  GALGAS_propertyVisibility result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    result = p->mProperty_mVisibility ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterMap::getter_mAccessForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) attributes ;
  GALGAS_propertyGetterKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::setter_setMVisibilityForKey (GALGAS_propertyVisibility inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyGetterMap * p = (cMapElement_propertyGetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    p->mProperty_mVisibility = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::setter_setMAccessForKey (GALGAS_propertyGetterKind inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyGetterMap * p = (cMapElement_propertyGetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    p->mProperty_mAccess = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyGetterMap * GALGAS_propertyGetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * result = (cMapElement_propertyGetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyGetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertyGetterMap::cEnumerator_propertyGetterMap (const GALGAS_propertyGetterMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element cEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return GALGAS_propertyGetterMap_2D_element (p->mProperty_lkey, p->mProperty_mVisibility, p->mProperty_mAccess) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility cEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return p->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind cEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return p->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_propertyVisibility & outArgument0,
                                                   GALGAS_propertyGetterKind & outArgument1) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    outArgument0 = p->mProperty_mVisibility ;
    outArgument1 = p->mProperty_mAccess ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap ("propertyGetterMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterMap result ;
  const GALGAS_propertyGetterMap * p = (const GALGAS_propertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyGetterKind_storedProperty::cEnumAssociatedValues_propertyGetterKind_storedProperty (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                  const GALGAS_uint inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyGetterKind_storedProperty::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyGetterKind_storedProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyGetterKind_storedProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyGetterKind_storedProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyGetterKind_computedProperty::cEnumAssociatedValues_propertyGetterKind_computedProperty (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                                                                      const GALGAS_routineLLVMNameDict inAssociatedValue1
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyGetterKind_computedProperty::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyGetterKind_computedProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyGetterKind_computedProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyGetterKind_computedProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyGetterKind_constantProperty::cEnumAssociatedValues_propertyGetterKind_constantProperty (const GALGAS_objectIR inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyGetterKind_constantProperty::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyGetterKind_constantProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyGetterKind_constantProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyGetterKind_constantProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind::GALGAS_propertyGetterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::class_func_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                const GALGAS_uint & inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_storedProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyGetterKind_storedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::class_func_computedProperty (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                                  const GALGAS_routineLLVMNameDict & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_computedProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyGetterKind_computedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::class_func_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_constantProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyGetterKind_constantProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::method_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_uint & outAssociatedValue1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_storedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @propertyGetterKind storedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyGetterKind_storedProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::method_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                         GALGAS_routineLLVMNameDict & outAssociatedValue1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_computedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @propertyGetterKind computedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyGetterKind_computedProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::method_constantProperty (GALGAS_objectIR & outAssociatedValue0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_constantProperty) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @propertyGetterKind constantProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyGetterKind_constantProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind::optional_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                         GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_storedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind::optional_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                           GALGAS_routineLLVMNameDict & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_computedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind::optional_constantProperty (GALGAS_objectIR & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_constantProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyGetterKind [4] = {
  "(not built)",
  "storedProperty",
  "computedProperty",
  "constantProperty"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyGetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_storedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyGetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_computedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyGetterKind::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_constantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("<enum @propertyGetterKind: ") ;
  ioString.addString (gEnumNameArrayFor_propertyGetterKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyGetterKind::objectCompare (const GALGAS_propertyGetterKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind ("propertyGetterKind",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  const GALGAS_propertyGetterKind * p = (const GALGAS_propertyGetterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility::GALGAS_propertyVisibility (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyVisibility::class_func_isPublic (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyVisibility result ;
  result.mEnum = kEnum_isPublic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyVisibility::class_func_isPrivate (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyVisibility result ;
  result.mEnum = kEnum_isPrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyVisibility::optional_isPublic () const {
  const bool ok = mEnum == kEnum_isPublic ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyVisibility::optional_isPrivate () const {
  const bool ok = mEnum == kEnum_isPrivate ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyVisibility [3] = {
  "(not built)",
  "isPublic",
  "isPrivate"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyVisibility::getter_isIsPublic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isPublic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyVisibility::getter_isIsPrivate (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isPrivate == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyVisibility::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @propertyVisibility: ") ;
  ioString.addString (gEnumNameArrayFor_propertyVisibility [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyVisibility::objectCompare (const GALGAS_propertyVisibility & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyVisibility generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyVisibility ("propertyVisibility",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyVisibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyVisibility ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyVisibility::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyVisibility (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyVisibility::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyVisibility result ;
  const GALGAS_propertyVisibility * p = (const GALGAS_propertyVisibility *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyVisibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyVisibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertySetterMap::cMapElement_propertySetterMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_propertyVisibility & in_mVisibility,
                                                              const GALGAS_propertySetterKind & in_mAccess
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mVisibility (in_mVisibility),
mProperty_mAccess (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertySetterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertySetterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertySetterMap (mProperty_lkey, mProperty_mVisibility, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertySetterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mVisibility" ":") ;
  mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mAccess" ":") ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_propertySetterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertySetterMap * operand = (cMapElement_propertySetterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mVisibility.objectCompare (operand->mProperty_mVisibility) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccess.objectCompare (operand->mProperty_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap::GALGAS_propertySetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap::GALGAS_propertySetterMap (const GALGAS_propertySetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap & GALGAS_propertySetterMap::operator = (const GALGAS_propertySetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_propertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::class_func_mapWithMapToOverride (const GALGAS_propertySetterMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_propertySetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_propertyVisibility & inArgument0,
                                                    const GALGAS_propertySetterKind & inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertySetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::add_operation (const GALGAS_propertySetterMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertySetterMap result = *this ;
  cEnumerator_propertySetterMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mVisibility (HERE), enumerator.current_mAccess (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility inArgument0,
                                                 GALGAS_propertySetterKind inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertySetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertySetterMap_searchKey = "there is no '%K' property" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility & outArgument0,
                                                 GALGAS_propertySetterKind & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_propertySetterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    outArgument0 = p->mProperty_mVisibility ;
    outArgument1 = p->mProperty_mAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertySetterMap::getter_mVisibilityForKey (const GALGAS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) attributes ;
  GALGAS_propertyVisibility result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    result = p->mProperty_mVisibility ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterMap::getter_mAccessForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) attributes ;
  GALGAS_propertySetterKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::setter_setMVisibilityForKey (GALGAS_propertyVisibility inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertySetterMap * p = (cMapElement_propertySetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    p->mProperty_mVisibility = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::setter_setMAccessForKey (GALGAS_propertySetterKind inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertySetterMap * p = (cMapElement_propertySetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    p->mProperty_mAccess = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertySetterMap * GALGAS_propertySetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * result = (cMapElement_propertySetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertySetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertySetterMap::cEnumerator_propertySetterMap (const GALGAS_propertySetterMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element cEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return GALGAS_propertySetterMap_2D_element (p->mProperty_lkey, p->mProperty_mVisibility, p->mProperty_mAccess) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility cEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return p->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind cEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return p->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_propertyVisibility & outArgument0,
                                                   GALGAS_propertySetterKind & outArgument1) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    outArgument0 = p->mProperty_mVisibility ;
    outArgument1 = p->mProperty_mAccess ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap ("propertySetterMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterMap result ;
  const GALGAS_propertySetterMap * p = (const GALGAS_propertySetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertySetterKind_storedProperty::cEnumAssociatedValues_propertySetterKind_storedProperty (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                  const GALGAS_uint inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertySetterKind_storedProperty::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertySetterKind_storedProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertySetterKind_storedProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertySetterKind_storedProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertySetterKind_computedProperty::cEnumAssociatedValues_propertySetterKind_computedProperty (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                                                                      const GALGAS_routineLLVMNameDict inAssociatedValue1,
                                                                                                                      const GALGAS_routineLLVMNameDict inAssociatedValue2
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertySetterKind_computedProperty::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertySetterKind_computedProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertySetterKind_computedProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertySetterKind_computedProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind::GALGAS_propertySetterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterKind::class_func_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                const GALGAS_uint & inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_storedProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertySetterKind_storedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterKind::class_func_computedProperty (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                                  const GALGAS_routineLLVMNameDict & inAssociatedValue1,
                                                                                  const GALGAS_routineLLVMNameDict & inAssociatedValue2
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_computedProperty ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertySetterKind_computedProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind::method_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_uint & outAssociatedValue1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_storedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @propertySetterKind storedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertySetterKind_storedProperty * ptr = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind::method_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                         GALGAS_routineLLVMNameDict & outAssociatedValue1,
                                                         GALGAS_routineLLVMNameDict & outAssociatedValue2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_computedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.addString ("method @propertySetterKind computedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertySetterKind_computedProperty * ptr = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterKind::optional_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                         GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_storedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterKind::optional_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                           GALGAS_routineLLVMNameDict & outAssociatedValue1,
                                                           GALGAS_routineLLVMNameDict & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_computedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertySetterKind [3] = {
  "(not built)",
  "storedProperty",
  "computedProperty"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertySetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_storedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertySetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_computedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("<enum @propertySetterKind: ") ;
  ioString.addString (gEnumNameArrayFor_propertySetterKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertySetterKind::objectCompare (const GALGAS_propertySetterKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind ("propertySetterKind",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterKind::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind result ;
  const GALGAS_propertySetterKind * p = (const GALGAS_propertySetterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertySetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticStringMap::cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_staticStringMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticStringMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_staticStringMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_staticStringMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_staticStringMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticStringMap * operand = (cMapElement_staticStringMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap::GALGAS_staticStringMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap::GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap & GALGAS_staticStringMap::operator = (const GALGAS_staticStringMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::class_func_mapWithMapToOverride (const GALGAS_staticStringMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticStringMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticStringMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticStringMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::add_operation (const GALGAS_staticStringMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_staticStringMap result = *this ;
  cEnumerator_staticStringMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticStringMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_staticStringMap_searchKey = "-- internal error --" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_staticStringMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_staticStringMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticStringMap * p = (cMapElement_staticStringMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticStringMap * GALGAS_staticStringMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GALGAS_staticStringMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticStringMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticStringMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  const GALGAS_staticStringMap * p = (const GALGAS_staticStringMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticStringMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@globalStructuredConstantList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_globalStructuredConstantList : public cCollectionElement {
  public: GALGAS_globalStructuredConstantList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_globalStructuredConstantList (const GALGAS_omnibusType & in_mType,
                                                           const GALGAS_operandIRList & in_mOperandIRList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalStructuredConstantList (const GALGAS_globalStructuredConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_omnibusType & in_mType,
                                                                                                  const GALGAS_operandIRList & in_mOperandIRList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mOperandIRList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_globalStructuredConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mOperandIRList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_globalStructuredConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_globalStructuredConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_globalStructuredConstantList (mObject.mProperty_mType, mObject.mProperty_mOperandIRList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_globalStructuredConstantList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mOperandIRList" ":") ;
  mObject.mProperty_mOperandIRList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_globalStructuredConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalStructuredConstantList * operand = (cCollectionElement_globalStructuredConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalStructuredConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalStructuredConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::class_func_listWithValue (const GALGAS_omnibusType & inOperand0,
                                                                                                   const GALGAS_operandIRList & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalStructuredConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalStructuredConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_omnibusType & in_mType,
                                                                     const GALGAS_operandIRList & in_mOperandIRList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType,
                                                                  in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::addAssign_operation (const GALGAS_omnibusType & inOperand0,
                                                               const GALGAS_operandIRList & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_append (const GALGAS_omnibusType inOperand0,
                                                         const GALGAS_operandIRList inOperand1,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_insertAtIndex (const GALGAS_omnibusType inOperand0,
                                                                const GALGAS_operandIRList inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_globalStructuredConstantList::setter_removeAtIndex (GALGAS_omnibusType & outOperand0,
                                                                GALGAS_operandIRList & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
        outOperand0 = p->mObject.mProperty_mType ;
        outOperand1 = p->mObject.mProperty_mOperandIRList ;
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

void GALGAS_globalStructuredConstantList::setter_popFirst (GALGAS_omnibusType & outOperand0,
                                                           GALGAS_operandIRList & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_popLast (GALGAS_omnibusType & outOperand0,
                                                          GALGAS_operandIRList & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::method_first (GALGAS_omnibusType & outOperand0,
                                                        GALGAS_operandIRList & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::method_last (GALGAS_omnibusType & outOperand0,
                                                       GALGAS_operandIRList & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::add_operation (const GALGAS_globalStructuredConstantList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::plusAssign_operation (const GALGAS_globalStructuredConstantList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_globalStructuredConstantList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_setMOperandIRListAtIndex (GALGAS_operandIRList inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOperandIRList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mOperandIRList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_globalStructuredConstantList::cEnumerator_globalStructuredConstantList (const GALGAS_globalStructuredConstantList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element cEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList cEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mOperandIRList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @globalStructuredConstantList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList ("globalStructuredConstantList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalStructuredConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  const GALGAS_globalStructuredConstantList * p = (const GALGAS_globalStructuredConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalStructuredConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@operandIRList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_operandIRList : public cCollectionElement {
  public: GALGAS_operandIRList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_operandIRList (const GALGAS_operandIRList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_operandIRList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOperand) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_operandIRList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_operandIRList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_operandIRList (mObject.mProperty_mOperand COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_operandIRList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mOperand" ":") ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_operandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_operandIRList * operand = (cCollectionElement_operandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_operandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList::GALGAS_operandIRList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList::GALGAS_operandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_operandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::class_func_listWithValue (const GALGAS_objectIR & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_operandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_objectIR & in_mOperand
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = nullptr ;
  macroMyNew (p, cCollectionElement_operandIRList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_append (const GALGAS_objectIR inOperand0,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_insertAtIndex (const GALGAS_objectIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_operandIRList::setter_removeAtIndex (GALGAS_objectIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_operandIRList) ;
        outOperand0 = p->mObject.mProperty_mOperand ;
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

void GALGAS_operandIRList::setter_popFirst (GALGAS_objectIR & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_popLast (GALGAS_objectIR & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::method_first (GALGAS_objectIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::method_last (GALGAS_objectIR & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::add_operation (const GALGAS_operandIRList & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::plusAssign_operation (const GALGAS_operandIRList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_setMOperandAtIndex (GALGAS_objectIR inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOperand = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_operandIRList::getter_mOperandAtIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    result = p->mObject.mProperty_mOperand ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_operandIRList::cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element cEnumerator_operandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject.mProperty_mOperand ;
}




//--------------------------------------------------------------------------------------------------
//
//     @operandIRList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList ("operandIRList",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_operandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_operandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  const GALGAS_operandIRList * p = (const GALGAS_operandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_operandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_reference::cEnumAssociatedValues_objectIR_reference (const GALGAS_omnibusType inAssociatedValue0,
                                                                                    const GALGAS_string inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_reference::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_reference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_reference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_reference *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_null::cEnumAssociatedValues_objectIR_null (const GALGAS_omnibusType inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_null::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_null::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_null * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_null *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmNamedValue::cEnumAssociatedValues_objectIR_llvmNamedValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                              const GALGAS_string inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmNamedValue::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_llvmNamedValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmNamedValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmNamedValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_literalInteger::cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_omnibusType inAssociatedValue0,
                                                                                              const GALGAS_bigint inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_literalInteger::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_literalInteger::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_literalInteger * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_literalInteger *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmStructureValue::cEnumAssociatedValues_objectIR_llvmStructureValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                      const GALGAS_sortedOperandIRList inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmStructureValue::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_llvmStructureValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmStructureValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmStructureValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_literalString::cEnumAssociatedValues_objectIR_literalString (const GALGAS_uint inAssociatedValue0,
                                                                                            const GALGAS_uint inAssociatedValue1
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_literalString::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_literalString::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_literalString * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_literalString *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_zero::cEnumAssociatedValues_objectIR_zero (const GALGAS_omnibusType inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_zero::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_zero::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_zero * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_zero *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayStaticValues::cEnumAssociatedValues_objectIR_llvmArrayStaticValues (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                            const GALGAS_operandIRList inAssociatedValue1,
                                                                                                            const GALGAS_uint inAssociatedValue2
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayStaticValues::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayStaticValues::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                              const GALGAS_operandIRList inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                          const GALGAS_uint inAssociatedValue1,
                                                                                                                          const GALGAS_objectIR inAssociatedValue2,
                                                                                                                          const GALGAS_uint inAssociatedValue3
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                            const GALGAS_uint inAssociatedValue1,
                                                                                                                            const GALGAS_objectIR inAssociatedValue2
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR::GALGAS_objectIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_void (UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_reference (const GALGAS_omnibusType & inAssociatedValue0,
                                                       const GALGAS_string & inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_reference ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_reference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_null (const GALGAS_omnibusType & inAssociatedValue0
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_null ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_null (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_llvmNamedValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                            const GALGAS_string & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmNamedValue ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmNamedValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_literalInteger (const GALGAS_omnibusType & inAssociatedValue0,
                                                            const GALGAS_bigint & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalInteger ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalInteger (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_llvmStructureValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmStructureValue ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmStructureValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_literalString (const GALGAS_uint & inAssociatedValue0,
                                                           const GALGAS_uint & inAssociatedValue1
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalString ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalString (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_zero (const GALGAS_omnibusType & inAssociatedValue0
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_zero ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_zero (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_llvmArrayStaticValues (const GALGAS_omnibusType & inAssociatedValue0,
                                                                   const GALGAS_operandIRList & inAssociatedValue1,
                                                                   const GALGAS_uint & inAssociatedValue2
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmArrayStaticValues ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayStaticValues (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_llvmArrayDynamicValues (const GALGAS_omnibusType & inAssociatedValue0,
                                                                    const GALGAS_operandIRList & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmArrayDynamicValues ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_llvmArrayRepeatedStaticValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                          const GALGAS_uint & inAssociatedValue1,
                                                                          const GALGAS_objectIR & inAssociatedValue2,
                                                                          const GALGAS_uint & inAssociatedValue3
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_llvmArrayRepeatedStaticValue ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::class_func_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                           const GALGAS_uint & inAssociatedValue1,
                                                                           const GALGAS_objectIR & inAssociatedValue2
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmArrayRepeatedDynamicValue ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_reference (GALGAS_omnibusType & outAssociatedValue0,
                                        GALGAS_string & outAssociatedValue1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_reference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @objectIR reference invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_reference * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_null (GALGAS_omnibusType & outAssociatedValue0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_null) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @objectIR null invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_null * ptr = (const cEnumAssociatedValues_objectIR_null *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmNamedValue (GALGAS_omnibusType & outAssociatedValue0,
                                             GALGAS_string & outAssociatedValue1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmNamedValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @objectIR llvmNamedValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmNamedValue * ptr = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_literalInteger (GALGAS_omnibusType & outAssociatedValue0,
                                             GALGAS_bigint & outAssociatedValue1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalInteger) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @objectIR literalInteger invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalInteger * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmStructureValue (GALGAS_omnibusType & outAssociatedValue0,
                                                 GALGAS_sortedOperandIRList & outAssociatedValue1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmStructureValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @objectIR llvmStructureValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmStructureValue * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_literalString (GALGAS_uint & outAssociatedValue0,
                                            GALGAS_uint & outAssociatedValue1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalString) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @objectIR literalString invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalString * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_zero (GALGAS_omnibusType & outAssociatedValue0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_zero) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @objectIR zero invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_zero * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayStaticValues (GALGAS_omnibusType & outAssociatedValue0,
                                                    GALGAS_operandIRList & outAssociatedValue1,
                                                    GALGAS_uint & outAssociatedValue2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayStaticValues) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.addString ("method @objectIR llvmArrayStaticValues invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayDynamicValues (GALGAS_omnibusType & outAssociatedValue0,
                                                     GALGAS_operandIRList & outAssociatedValue1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayDynamicValues) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @objectIR llvmArrayDynamicValues invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayRepeatedStaticValue (GALGAS_omnibusType & outAssociatedValue0,
                                                           GALGAS_uint & outAssociatedValue1,
                                                           GALGAS_objectIR & outAssociatedValue2,
                                                           GALGAS_uint & outAssociatedValue3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayRepeatedStaticValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.addString ("method @objectIR llvmArrayRepeatedStaticValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayRepeatedDynamicValue (GALGAS_omnibusType & outAssociatedValue0,
                                                            GALGAS_uint & outAssociatedValue1,
                                                            GALGAS_objectIR & outAssociatedValue2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayRepeatedDynamicValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.addString ("method @objectIR llvmArrayRepeatedDynamicValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_void () const {
  const bool ok = mEnum == kEnum_void ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_reference (GALGAS_omnibusType & outAssociatedValue0,
                                          GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_reference ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_null (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_null ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_null *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmNamedValue (GALGAS_omnibusType & outAssociatedValue0,
                                               GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_llvmNamedValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_literalInteger (GALGAS_omnibusType & outAssociatedValue0,
                                               GALGAS_bigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_literalInteger ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmStructureValue (GALGAS_omnibusType & outAssociatedValue0,
                                                   GALGAS_sortedOperandIRList & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_llvmStructureValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_literalString (GALGAS_uint & outAssociatedValue0,
                                              GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_literalString ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_zero (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_zero ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayStaticValues (GALGAS_omnibusType & outAssociatedValue0,
                                                      GALGAS_operandIRList & outAssociatedValue1,
                                                      GALGAS_uint & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_llvmArrayStaticValues ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayDynamicValues (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_operandIRList & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_llvmArrayDynamicValues ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayRepeatedStaticValue (GALGAS_omnibusType & outAssociatedValue0,
                                                             GALGAS_uint & outAssociatedValue1,
                                                             GALGAS_objectIR & outAssociatedValue2,
                                                             GALGAS_uint & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_llvmArrayRepeatedStaticValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayRepeatedDynamicValue (GALGAS_omnibusType & outAssociatedValue0,
                                                              GALGAS_uint & outAssociatedValue1,
                                                              GALGAS_objectIR & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_llvmArrayRepeatedDynamicValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
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

GALGAS_bool GALGAS_objectIR::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_reference == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmNamedValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmNamedValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmStructureValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayStaticValues (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayStaticValues == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayDynamicValues (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayDynamicValues == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayRepeatedStaticValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayRepeatedStaticValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayRepeatedDynamicValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayRepeatedDynamicValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_objectIR::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.addString ("<enum @objectIR: ") ;
  ioString.addString (gEnumNameArrayFor_objectIR [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_objectIR::objectCompare (const GALGAS_objectIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @objectIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  const GALGAS_objectIR * p = (const GALGAS_objectIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_objectIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (cPtr_abstractDeclarationAST * inObject,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         GALGAS_routineListIR & io_ioRoutineListIR,
                                         GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                         GALGAS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         GALGAS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInContext (io_ioContext, io_ioDecoratedDeclarationList, io_ioDecoratedRoutineList, io_ioRoutineListIR, io_ioStaticListValueMap, io_ioStaticEntityMap, io_ioControlRegisterUserAccesMapAST, io_ioUserLLVMTypeDefinitionListIR, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_subscript_staticSubscript::cEnumAssociatedValues_subscript_staticSubscript (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                  const GALGAS_bigint inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_subscript_staticSubscript::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_subscript_staticSubscript::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_subscript_staticSubscript * ptr = dynamic_cast<const cEnumAssociatedValues_subscript_staticSubscript *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_subscript::GALGAS_subscript (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::class_func_noSubscript (UNUSED_LOCATION_ARGS) {
  GALGAS_subscript result ;
  result.mEnum = kEnum_noSubscript ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::class_func_staticSubscript (const GALGAS_omnibusType & inAssociatedValue0,
                                                               const GALGAS_bigint & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_subscript result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_staticSubscript ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_subscript_staticSubscript (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::class_func_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_subscript result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_subscript::method_staticSubscript (GALGAS_omnibusType & outAssociatedValue0,
                                               GALGAS_bigint & outAssociatedValue1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_staticSubscript) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @subscript staticSubscript invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_subscript_staticSubscript * ptr = (const cEnumAssociatedValues_subscript_staticSubscript *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_subscript::optional_noSubscript () const {
  const bool ok = mEnum == kEnum_noSubscript ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_subscript::optional_staticSubscript (GALGAS_omnibusType & outAssociatedValue0,
                                                 GALGAS_bigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_staticSubscript ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_subscript_staticSubscript *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_subscript::optional_literalString () const {
  const bool ok = mEnum == kEnum_literalString ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_subscript [4] = {
  "(not built)",
  "noSubscript",
  "staticSubscript",
  "literalString"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_subscript::getter_isNoSubscript (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noSubscript == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_subscript::getter_isStaticSubscript (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticSubscript == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_subscript::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_subscript::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.addString ("<enum @subscript: ") ;
  ioString.addString (gEnumNameArrayFor_subscript [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_subscript::objectCompare (const GALGAS_subscript & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @subscript generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript ("subscript",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subscript::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscript ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subscript::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subscript (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subscript result ;
  const GALGAS_subscript * p = (const GALGAS_subscript *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_subscript *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscript", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes::GALGAS_omnibusTypeAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes::GALGAS_omnibusTypeAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::class_func_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::class_func_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (uint64_t (0x3)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::class_func_instanciable (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::class_func_copyable (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_omnibusTypeAttributes::objectCompare (const GALGAS_omnibusTypeAttributes & inOperand) const {
   typeComparisonResult result = kOperandNotValid ;
   if (mIsValid && inOperand.mIsValid) {
     result = kOperandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = kFirstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = kFirstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_omnibusTypeAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_or (const GALGAS_omnibusTypeAttributes & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_and (const GALGAS_omnibusTypeAttributes & inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_xor (const GALGAS_omnibusTypeAttributes & inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::substract_operation (const GALGAS_omnibusTypeAttributes & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid) {
    result = GALGAS_omnibusTypeAttributes (((uint64_t) 0x3) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusTypeAttributes::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.addString ("<boolset @omnibusTypeAttributes:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString.addString (" instanciable") ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString.addString (" copyable") ;
    }
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == uint64_t (0x3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_instanciable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 0)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_copyable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 1)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @omnibusTypeAttributes generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ("omnibusTypeAttributes",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusTypeAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusTypeAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusTypeAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusTypeAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_omnibusTypeAttributes result ;
  const GALGAS_omnibusTypeAttributes * p = (const GALGAS_omnibusTypeAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusTypeAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusTypeAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_enumeration::cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_enumeration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_enumeration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumeration * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumeration *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_structure::cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_structure::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_structure * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_structure *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_integer::cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint inAssociatedValue0,
                                                                                const GALGAS_bigint inAssociatedValue1,
                                                                                const GALGAS_bool inAssociatedValue2,
                                                                                const GALGAS_uint inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_integer::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_integer::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_integer * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_integer *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_llvmType::cEnumAssociatedValues_typeKind_llvmType (const GALGAS_bigint inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_llvmType::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_llvmType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_llvmType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_llvmType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_generic::cEnumAssociatedValues_typeKind_generic (const GALGAS_genericFormalParameterList inAssociatedValue0,
                                                                                const GALGAS_ctExpressionAST inAssociatedValue1,
                                                                                const GALGAS_llvmStringDefinition inAssociatedValue2
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_generic::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_generic::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_generic * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_generic *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_opaque::cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_opaque::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_opaque::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_opaque * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_opaque *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_staticArrayType::cEnumAssociatedValues_typeKind_staticArrayType (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                const GALGAS_bigint inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_staticArrayType::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_staticArrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_staticArrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_staticArrayType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_dynamicArrayType::cEnumAssociatedValues_typeKind_dynamicArrayType (const GALGAS_omnibusType inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_dynamicArrayType::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_dynamicArrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_dynamicArrayType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_function::cEnumAssociatedValues_typeKind_function (const GALGAS_mode inAssociatedValue0,
                                                                                  const GALGAS_routineTypedSignature inAssociatedValue1,
                                                                                  const GALGAS_unifiedTypeMapEntry inAssociatedValue2
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_function::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_function * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_void (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_boolean (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolean ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_enumeration (const GALGAS_uint & inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_enumeration ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumeration (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_structure (const GALGAS_propertyList & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_structure (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_syncTool (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_syncTool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_integer (const GALGAS_bigint & inAssociatedValue0,
                                                     const GALGAS_bigint & inAssociatedValue1,
                                                     const GALGAS_bool & inAssociatedValue2,
                                                     const GALGAS_uint & inAssociatedValue3
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_integer ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_integer (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_compileTimeInteger (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_compileTimeInteger ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_compileTimeBool (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_compileTimeBool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_llvmType (const GALGAS_bigint & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_llvmType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_llvmType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_generic (const GALGAS_genericFormalParameterList & inAssociatedValue0,
                                                     const GALGAS_ctExpressionAST & inAssociatedValue1,
                                                     const GALGAS_llvmStringDefinition & inAssociatedValue2
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_generic ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_generic (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_opaque (const GALGAS_bigint & inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_opaque ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_opaque (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_staticArrayType (const GALGAS_omnibusType & inAssociatedValue0,
                                                             const GALGAS_bigint & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_staticArrayType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_staticArrayType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_dynamicArrayType (const GALGAS_omnibusType & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_dynamicArrayType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_dynamicArrayType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::class_func_function (const GALGAS_mode & inAssociatedValue0,
                                                      const GALGAS_routineTypedSignature & inAssociatedValue1,
                                                      const GALGAS_unifiedTypeMapEntry & inAssociatedValue2
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_enumeration (GALGAS_uint & outAssociatedValue0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumeration) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @typeKind enumeration invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumeration * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_structure (GALGAS_propertyList & outAssociatedValue0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @typeKind structure invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_integer (GALGAS_bigint & outAssociatedValue0,
                                      GALGAS_bigint & outAssociatedValue1,
                                      GALGAS_bool & outAssociatedValue2,
                                      GALGAS_uint & outAssociatedValue3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_integer) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.addString ("method @typeKind integer invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_integer * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_llvmType (GALGAS_bigint & outAssociatedValue0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @typeKind llvmType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_llvmType * ptr = (const cEnumAssociatedValues_typeKind_llvmType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_generic (GALGAS_genericFormalParameterList & outAssociatedValue0,
                                      GALGAS_ctExpressionAST & outAssociatedValue1,
                                      GALGAS_llvmStringDefinition & outAssociatedValue2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_generic) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.addString ("method @typeKind generic invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_generic * ptr = (const cEnumAssociatedValues_typeKind_generic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_opaque (GALGAS_bigint & outAssociatedValue0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_opaque) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @typeKind opaque invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_opaque * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_staticArrayType (GALGAS_omnibusType & outAssociatedValue0,
                                              GALGAS_bigint & outAssociatedValue1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_staticArrayType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.addString ("method @typeKind staticArrayType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_staticArrayType * ptr = (const cEnumAssociatedValues_typeKind_staticArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_dynamicArrayType (GALGAS_omnibusType & outAssociatedValue0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_dynamicArrayType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @typeKind dynamicArrayType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_function (GALGAS_mode & outAssociatedValue0,
                                       GALGAS_routineTypedSignature & outAssociatedValue1,
                                       GALGAS_unifiedTypeMapEntry & outAssociatedValue2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.addString ("method @typeKind function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_function * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_void () const {
  const bool ok = mEnum == kEnum_void ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_boolean () const {
  const bool ok = mEnum == kEnum_boolean ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_literalString () const {
  const bool ok = mEnum == kEnum_literalString ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_enumeration (GALGAS_uint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_enumeration ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_structure (GALGAS_propertyList & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_structure ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_syncTool () const {
  const bool ok = mEnum == kEnum_syncTool ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_integer (GALGAS_bigint & outAssociatedValue0,
                                        GALGAS_bigint & outAssociatedValue1,
                                        GALGAS_bool & outAssociatedValue2,
                                        GALGAS_uint & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_integer ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_compileTimeInteger () const {
  const bool ok = mEnum == kEnum_compileTimeInteger ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_compileTimeBool () const {
  const bool ok = mEnum == kEnum_compileTimeBool ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_llvmType (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_llvmType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_llvmType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_generic (GALGAS_genericFormalParameterList & outAssociatedValue0,
                                        GALGAS_ctExpressionAST & outAssociatedValue1,
                                        GALGAS_llvmStringDefinition & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_generic ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_generic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_opaque (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_opaque ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_staticArrayType (GALGAS_omnibusType & outAssociatedValue0,
                                                GALGAS_bigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_staticArrayType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_staticArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_dynamicArrayType (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_dynamicArrayType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_function (GALGAS_mode & outAssociatedValue0,
                                         GALGAS_routineTypedSignature & outAssociatedValue1,
                                         GALGAS_unifiedTypeMapEntry & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_function ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
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

GALGAS_bool GALGAS_typeKind::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumeration == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isSyncTool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_syncTool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integer == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isCompileTimeInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_compileTimeInteger == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isCompileTimeBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_compileTimeBool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isLlvmType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isGeneric (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_generic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_opaque == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isStaticArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dynamicArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKind::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.addString ("<enum @typeKind: ") ;
  ioString.addString (gEnumNameArrayFor_typeKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeKind::objectCompare (const GALGAS_typeKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_omnibusType_2D_weak::objectCompare (const GALGAS_omnibusType_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak::GALGAS_omnibusType_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak & GALGAS_omnibusType_2D_weak::operator = (const GALGAS_omnibusType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak::GALGAS_omnibusType_2D_weak (const GALGAS_omnibusType & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak GALGAS_omnibusType_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_omnibusType_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType_2D_weak::bang_omnibusType_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_omnibusType result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusType) ;
      result = GALGAS_omnibusType ((cPtr_omnibusType *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @omnibusType-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType_2D_weak ("omnibusType-weak",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusType_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusType_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusType_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak GALGAS_omnibusType_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType_2D_weak result ;
  const GALGAS_omnibusType_2D_weak * p = (const GALGAS_omnibusType_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusType_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@arcAssignmentList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public: GALGAS_arcAssignmentList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                const GALGAS_omnibusType & in_mPropertyType,
                                                const GALGAS_uintlist & in_mPropertyIndexPath
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arcAssignmentList (const GALGAS_arcAssignmentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                                            const GALGAS_omnibusType & in_mPropertyType,
                                                                            const GALGAS_uintlist & in_mPropertyIndexPath
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_arcAssignmentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType, inElement.mProperty_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_arcAssignmentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arcAssignmentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_arcAssignmentList (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType, mObject.mProperty_mPropertyIndexPath COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_arcAssignmentList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPropertyType" ":") ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mPropertyIndexPath" ":") ;
  mObject.mProperty_mPropertyIndexPath.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_arcAssignmentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arcAssignmentList * operand = (cCollectionElement_arcAssignmentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arcAssignmentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arcAssignmentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                             const GALGAS_omnibusType & inOperand1,
                                                                             const GALGAS_uintlist & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arcAssignmentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arcAssignmentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_string & in_mPropertyName,
                                                          const GALGAS_omnibusType & in_mPropertyType,
                                                          const GALGAS_uintlist & in_mPropertyIndexPath
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName,
                                                       in_mPropertyType,
                                                       in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::addAssign_operation (const GALGAS_string & inOperand0,
                                                    const GALGAS_omnibusType & inOperand1,
                                                    const GALGAS_uintlist & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_append (const GALGAS_string inOperand0,
                                              const GALGAS_omnibusType inOperand1,
                                              const GALGAS_uintlist inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                     const GALGAS_omnibusType inOperand1,
                                                     const GALGAS_uintlist inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_arcAssignmentList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                     GALGAS_omnibusType & outOperand1,
                                                     GALGAS_uintlist & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
        outOperand0 = p->mObject.mProperty_mPropertyName ;
        outOperand1 = p->mObject.mProperty_mPropertyType ;
        outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_popFirst (GALGAS_string & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                GALGAS_uintlist & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_popLast (GALGAS_string & outOperand0,
                                               GALGAS_omnibusType & outOperand1,
                                               GALGAS_uintlist & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::method_first (GALGAS_string & outOperand0,
                                             GALGAS_omnibusType & outOperand1,
                                             GALGAS_uintlist & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::method_last (GALGAS_string & outOperand0,
                                            GALGAS_omnibusType & outOperand1,
                                            GALGAS_uintlist & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::add_operation (const GALGAS_arcAssignmentList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::plusAssign_operation (const GALGAS_arcAssignmentList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_setMPropertyNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arcAssignmentList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_setMPropertyTypeAtIndex (GALGAS_omnibusType inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_setMPropertyIndexPathAtIndex (GALGAS_uintlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyIndexPath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyIndexPath ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_arcAssignmentList::cEnumerator_arcAssignmentList (const GALGAS_arcAssignmentList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element cEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyIndexPath ;
}




//--------------------------------------------------------------------------------------------------
//
//     @arcAssignmentList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList ("arcAssignmentList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arcAssignmentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arcAssignmentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  const GALGAS_arcAssignmentList * p = (const GALGAS_arcAssignmentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arcAssignmentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @userLLVMTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMDefinedTypeName.printNonNullClassInstanceProperties ("mLLVMDefinedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_userLLVMTypeDefinitionIR::objectCompare (const GALGAS_userLLVMTypeDefinitionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR::GALGAS_userLLVMTypeDefinitionIR (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR::GALGAS_userLLVMTypeDefinitionIR (const cPtr_userLLVMTypeDefinitionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionIR::setter_setMLLVMDefinedTypeName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    p->mProperty_mLLVMDefinedTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_userLLVMTypeDefinitionIR::readProperty_mLLVMDefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    return p->mProperty_mLLVMDefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName
                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mLLVMDefinedTypeName (in_mLLVMDefinedTypeName) {
}


//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ("userLLVMTypeDefinitionIR",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR result ;
  const GALGAS_userLLVMTypeDefinitionIR * p = (const GALGAS_userLLVMTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_userLLVMTypeDefinitionIR_2D_weak::objectCompare (const GALGAS_userLLVMTypeDefinitionIR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak::GALGAS_userLLVMTypeDefinitionIR_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak & GALGAS_userLLVMTypeDefinitionIR_2D_weak::operator = (const GALGAS_userLLVMTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak::GALGAS_userLLVMTypeDefinitionIR_2D_weak (const GALGAS_userLLVMTypeDefinitionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak GALGAS_userLLVMTypeDefinitionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionIR_2D_weak::bang_userLLVMTypeDefinitionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMTypeDefinitionIR) ;
      result = GALGAS_userLLVMTypeDefinitionIR ((cPtr_userLLVMTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak ("userLLVMTypeDefinitionIR-weak",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak GALGAS_userLLVMTypeDefinitionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR_2D_weak result ;
  const GALGAS_userLLVMTypeDefinitionIR_2D_weak * p = (const GALGAS_userLLVMTypeDefinitionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMTypeDefinitionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (cPtr_userLLVMTypeDefinitionIR * inObject,
                                           GALGAS_string & io_ioLLVMcode,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_userLLVMTypeDefinitionIR) ;
    inObject->method_generateLLVMType (io_ioLLVMcode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@userLLVMTypeDefinitionListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_userLLVMTypeDefinitionListIR : public cCollectionElement {
  public: GALGAS_userLLVMTypeDefinitionListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_userLLVMTypeDefinitionListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_userLLVMTypeDefinitionListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_userLLVMTypeDefinitionListIR (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_userLLVMTypeDefinitionListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_userLLVMTypeDefinitionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_userLLVMTypeDefinitionListIR * operand = (cCollectionElement_userLLVMTypeDefinitionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR::GALGAS_userLLVMTypeDefinitionListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR::GALGAS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_userLLVMTypeDefinitionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::class_func_listWithValue (const GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_userLLVMTypeDefinitionListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_userLLVMTypeDefinitionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_userLLVMTypeDefinitionListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::addAssign_operation (const GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_append (const GALGAS_userLLVMTypeDefinitionIR inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_insertAtIndex (const GALGAS_userLLVMTypeDefinitionIR inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inOperand0 COMMA_THERE)) ;
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

void GALGAS_userLLVMTypeDefinitionListIR::setter_removeAtIndex (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
        outOperand0 = p->mObject.mProperty_mType ;
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

void GALGAS_userLLVMTypeDefinitionListIR::setter_popFirst (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_popLast (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::method_first (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::method_last (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::add_operation (const GALGAS_userLLVMTypeDefinitionListIR & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result = GALGAS_userLLVMTypeDefinitionListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result = GALGAS_userLLVMTypeDefinitionListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result = GALGAS_userLLVMTypeDefinitionListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::plusAssign_operation (const GALGAS_userLLVMTypeDefinitionListIR inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_setMTypeAtIndex (GALGAS_userLLVMTypeDefinitionIR inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionListIR::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  GALGAS_userLLVMTypeDefinitionIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_userLLVMTypeDefinitionListIR::cEnumerator_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element cEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_userLLVMTypeDefinitionListIR * p = (const cCollectionElement_userLLVMTypeDefinitionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR cEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_userLLVMTypeDefinitionListIR * p = (const cCollectionElement_userLLVMTypeDefinitionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return p->mObject.mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ("userLLVMTypeDefinitionListIR",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR result ;
  const GALGAS_userLLVMTypeDefinitionListIR * p = (const GALGAS_userLLVMTypeDefinitionListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_userLLVMTypeDefinitionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap unsolvedEntryList'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist extensionGetter_unsolvedEntryList (const GALGAS_unifiedTypeMap & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist result_result ; // Returned variable
  result_result = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("unified-type-map.galgas", 19)) ;
  const GALGAS_unifiedTypeMap temp_0 = inObject ;
  cEnumerator_unifiedTypeMap enumerator_1187 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1187.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_1187.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 21)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result.addAssign_operation (enumerator_1187.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 22)) ;
      }
    }
    enumerator_1187.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GALGAS_unifiedTypeMap & ioObject,
                                const GALGAS_lstring constinArgument_inLKey,
                                GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_1619 ;
    const bool optionalResult1568 = temp_1.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_1619) ;
    if (!optionalResult1568) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_1619  COMMA_SOURCE_FILE ("unified-type-map.galgas", 33)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_1696 = GALGAS_unifiedTypeMapElementClass::class_func_new (constinArgument_inLKey, GALGAS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 35))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 35)) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_1696, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 36)) ;
    }
    outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_newElement_1696  COMMA_SOURCE_FILE ("unified-type-map.galgas", 37)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeOptionalEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeOptionalEntry (GALGAS_unifiedTypeMap & ioObject,
                                        const GALGAS_lstring constinArgument_inLKey,
                                        GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inLKey.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 45)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = ioObject ;
      GALGAS_unifiedTypeMapElementClass var_element_2210 ;
      const bool optionalResult2159 = temp_2.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_2210) ;
      if (!optionalResult2159) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_2210  COMMA_SOURCE_FILE ("unified-type-map.galgas", 47)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_unifiedTypeMapElementClass var_newElement_2287 = GALGAS_unifiedTypeMapElementClass::class_func_new (constinArgument_inLKey, GALGAS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 49))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 49)) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2287, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 50)) ;
      }
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_newElement_2287  COMMA_SOURCE_FILE ("unified-type-map.galgas", 51)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GALGAS_unifiedTypeMap & ioObject,
                                          const GALGAS_string constinArgument_inKey,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_2792 ;
    const bool optionalResult2742 = temp_1.optional_searchKey (constinArgument_inKey, var_element_2792) ;
    if (!optionalResult2742) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_2792  COMMA_SOURCE_FILE ("unified-type-map.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_2869 = GALGAS_unifiedTypeMapElementClass::class_func_new (GALGAS_lstring::class_func_new (constinArgument_inKey, GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("unified-type-map.galgas", 63)), GALGAS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 63))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 63)) ;
    {
    ioObject.setter_internalInsertKey (GALGAS_lstring::class_func_new (constinArgument_inKey, GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("unified-type-map.galgas", 64)), var_newElement_2869, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 64)) ;
    }
    outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_newElement_2869  COMMA_SOURCE_FILE ("unified-type-map.galgas", 65)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap searchKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry extensionGetter_searchKey (const GALGAS_unifiedTypeMap & inObject,
                                                      const GALGAS_lstring & constinArgument_inLKey,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inLKey.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = inObject ;
      GALGAS_unifiedTypeMapElementClass var_element_3399 ;
      const bool optionalResult3348 = temp_2.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_3399) ;
      if (!optionalResult3348) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        result_result = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_3399  COMMA_SOURCE_FILE ("unified-type-map.galgas", 75)) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GALGAS_string ("there is not '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 77)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 77)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 77)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (GALGAS_unifiedTypeMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTypeName,
                                 const GALGAS_omnibusType constinArgument_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_3835 ;
    const bool optionalResult3780 = temp_1.optional_searchKey (constinArgument_inTypeName.readProperty_string (), var_element_3835) ;
    if (!optionalResult3780) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_element_3835.readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 87)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          GALGAS_unifiedTypeMapElementClass var_e_3980 = var_element_3835 ;
          var_e_3980.setter_setMDefinition (GALGAS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 90)) COMMA_SOURCE_FILE ("unified-type-map.galgas", 90)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_4071 = GALGAS_unifiedTypeMapElementClass::class_func_new (constinArgument_inTypeName, GALGAS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 93))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 93)) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_4071, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 94)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchType (const GALGAS_unifiedTypeMap inObject,
                                 const GALGAS_lstring constinArgument_inLKey,
                                 GALGAS_omnibusType & outArgument_outTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTypeDefinition.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = inObject ;
    GALGAS_unifiedTypeMapElementClass var_element_4553 ;
    const bool optionalResult4502 = temp_1.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_4553) ;
    if (!optionalResult4502) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_element_4553.readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_4655 = (const cEnumAssociatedValues_typeDefinition_solved *) (var_element_4553.readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_omnibusType extractedValue_4615_definition = extractPtr_4655->mAssociatedValue0 ;
          outArgument_outTypeDefinition = extractedValue_4615_definition ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GALGAS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 107)) ;
          outArgument_outTypeDefinition.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GALGAS_string ("there is not '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 110)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 110)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 110)) ;
    outArgument_outTypeDefinition.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeDefinition_solved::cEnumAssociatedValues_typeDefinition_solved (const GALGAS_omnibusType inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeDefinition_solved::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeDefinition_solved::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeDefinition_solved * ptr = dynamic_cast<const cEnumAssociatedValues_typeDefinition_solved *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition::GALGAS_typeDefinition (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::class_func_unsolved (UNUSED_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  result.mEnum = kEnum_unsolved ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::class_func_solved (const GALGAS_omnibusType & inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_solved ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeDefinition_solved (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeDefinition::method_solved (GALGAS_omnibusType & outAssociatedValue0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_solved) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @typeDefinition solved invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeDefinition_solved * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeDefinition::optional_unsolved () const {
  const bool ok = mEnum == kEnum_unsolved ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeDefinition::optional_solved (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_solved ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsolved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_solved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeDefinition::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.addString ("<enum @typeDefinition: ") ;
  ioString.addString (gEnumNameArrayFor_typeDefinition [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeDefinition::objectCompare (const GALGAS_typeDefinition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  const GALGAS_typeDefinition * p = (const GALGAS_typeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeMapElementClass_2D_weak::objectCompare (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak::GALGAS_unifiedTypeMapElementClass_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak & GALGAS_unifiedTypeMapElementClass_2D_weak::operator = (const GALGAS_unifiedTypeMapElementClass & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak::GALGAS_unifiedTypeMapElementClass_2D_weak (const GALGAS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak GALGAS_unifiedTypeMapElementClass_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass_2D_weak::bang_unifiedTypeMapElementClass_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GALGAS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ("unifiedTypeMapElementClass-weak",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapElementClass_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapElementClass_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapElementClass_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak GALGAS_unifiedTypeMapElementClass_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass_2D_weak result ;
  const GALGAS_unifiedTypeMapElementClass_2D_weak * p = (const GALGAS_unifiedTypeMapElementClass_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapElementClass_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_unifiedTypeMapEntry_element::cEnumAssociatedValues_unifiedTypeMapEntry_element (const GALGAS_unifiedTypeMapElementClass_2D_weak inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_unifiedTypeMapEntry_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.addString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.addString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_unifiedTypeMapEntry_element::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_unifiedTypeMapEntry_element * ptr = dynamic_cast<const cEnumAssociatedValues_unifiedTypeMapEntry_element *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry::GALGAS_unifiedTypeMapEntry (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntry::class_func_null (UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result ;
  result.mEnum = kEnum_null ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntry::class_func_element (const GALGAS_unifiedTypeMapElementClass_2D_weak & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_element ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_unifiedTypeMapEntry_element (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry::method_element (GALGAS_unifiedTypeMapElementClass_2D_weak & outAssociatedValue0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_element) {
    outAssociatedValue0.drop () ;
    String s ;
    s.addString ("method @unifiedTypeMapEntry element invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_unifiedTypeMapEntry_element * ptr = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry::optional_null () const {
  const bool ok = mEnum == kEnum_null ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry::optional_element (GALGAS_unifiedTypeMapElementClass_2D_weak & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_element ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_unifiedTypeMapEntry [3] = {
  "(not built)",
  "null",
  "element"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMapEntry::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMapEntry::getter_isElement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_element == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.addString ("<enum @unifiedTypeMapEntry: ") ;
  ioString.addString (gEnumNameArrayFor_unifiedTypeMapEntry [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeMapEntry::objectCompare (const GALGAS_unifiedTypeMapEntry & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntry generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ("unifiedTypeMapEntry",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntry::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntry (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntry::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result ;
  const GALGAS_unifiedTypeMapEntry * p = (const GALGAS_unifiedTypeMapEntry *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType extensionGetter_type (const GALGAS_unifiedTypeMapEntry & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 164)), GALGAS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 164)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_7104 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_6825_weakElement = extractPtr_7104->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapElementClass var_type_6851 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_6825_weakElement.ptr ())) ;
        if (nullptr == var_type_6851.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          switch (var_type_6851.readProperty_mDefinition ().enumValue ()) {
          case GALGAS_typeDefinition::kNotBuilt:
            break ;
          case GALGAS_typeDefinition::kEnum_unsolved:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 169)), GALGAS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 169)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeDefinition::kEnum_solved:
            {
              const cEnumAssociatedValues_typeDefinition_solved * extractPtr_7027 = (const cEnumAssociatedValues_typeDefinition_solved *) (var_type_6851.readProperty_mDefinition ().unsafePointer ()) ;
              const GALGAS_omnibusType extractedValue_6996_definition = extractPtr_7027->mAssociatedValue0 ;
              result_result = extractedValue_6996_definition ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 174)), GALGAS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas", 174)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry key'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_key (const GALGAS_unifiedTypeMapEntry & inObject,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 184)), GALGAS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 184)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_7513 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_7370_weakElement = extractPtr_7513->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapElementClass var_type_7396 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_7370_weakElement.ptr ())) ;
        if (nullptr == var_type_7396.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          result_result = var_type_7396.readProperty_mTypeName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 189)), GALGAS_string ("nil type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 189)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_abstractDecoratedDeclaration * inObject,
                                           const GALGAS_semanticContext constin_inContext,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDecoratedDeclaration) ;
    inObject->method_semanticAnalysis (constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_staticListInvokedFunctionSetMap::cMapElement_staticListInvokedFunctionSetMap (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_stringset & in_mInvokedFunctionSet
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_staticListInvokedFunctionSetMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticListInvokedFunctionSetMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_staticListInvokedFunctionSetMap (mProperty_lkey, mProperty_mInvokedFunctionSet COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_staticListInvokedFunctionSetMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInvokedFunctionSet" ":") ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_staticListInvokedFunctionSetMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInvokedFunctionSetMap * operand = (cMapElement_staticListInvokedFunctionSetMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (operand->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap & GALGAS_staticListInvokedFunctionSetMap::operator = (const GALGAS_staticListInvokedFunctionSetMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::class_func_mapWithMapToOverride (const GALGAS_staticListInvokedFunctionSetMap & inMapToOverride
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInvokedFunctionSetMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_stringset & inArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInvokedFunctionSetMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::add_operation (const GALGAS_staticListInvokedFunctionSetMap & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInvokedFunctionSetMap result = *this ;
  cEnumerator_staticListInvokedFunctionSetMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInvokedFunctionSet (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset inArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey = "INTERNAL ERROR" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey
                                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    outArgument0 = p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_staticListInvokedFunctionSetMap::getter_mInvokedFunctionSetForKey (const GALGAS_string & inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  GALGAS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::setter_setMInvokedFunctionSetForKey (GALGAS_stringset inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInvokedFunctionSetMap * p = (cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    p->mProperty_mInvokedFunctionSet = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInvokedFunctionSetMap * GALGAS_staticListInvokedFunctionSetMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * result = (cMapElement_staticListInvokedFunctionSetMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInvokedFunctionSetMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticListInvokedFunctionSetMap::cEnumerator_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element cEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return GALGAS_staticListInvokedFunctionSetMap_2D_element (p->mProperty_lkey, p->mProperty_mInvokedFunctionSet) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return p->mProperty_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInvokedFunctionSetMap::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_stringset & outArgument0) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    outArgument0 = p->mProperty_mInvokedFunctionSet ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInvokedFunctionSetMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ("staticListInvokedFunctionSetMap",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  const GALGAS_staticListInvokedFunctionSetMap * p = (const GALGAS_staticListInvokedFunctionSetMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compiletimeBoolAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compiletimeBoolAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compiletimeBoolAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compiletimeBoolAST::objectCompare (const GALGAS_compiletimeBoolAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST::GALGAS_compiletimeBoolAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST::GALGAS_compiletimeBoolAST (const cPtr_compiletimeBoolAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimeBoolAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST::class_func_new (LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compiletimeBoolAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compiletimeBoolAST class
//--------------------------------------------------------------------------------------------------

cPtr_compiletimeBoolAST::cPtr_compiletimeBoolAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compiletimeBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST ;
}

void cPtr_compiletimeBoolAST::description (String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString.addString ("[@compiletimeBoolAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compiletimeBoolAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compiletimeBoolAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compiletimeBoolAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST ("compiletimeBoolAST",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimeBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimeBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimeBoolAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST result ;
  const GALGAS_compiletimeBoolAST * p = (const GALGAS_compiletimeBoolAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compiletimeBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimeBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compiletimeBoolAST_2D_weak::objectCompare (const GALGAS_compiletimeBoolAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak::GALGAS_compiletimeBoolAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak & GALGAS_compiletimeBoolAST_2D_weak::operator = (const GALGAS_compiletimeBoolAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak::GALGAS_compiletimeBoolAST_2D_weak (const GALGAS_compiletimeBoolAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak GALGAS_compiletimeBoolAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST_2D_weak::bang_compiletimeBoolAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compiletimeBoolAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compiletimeBoolAST) ;
      result = GALGAS_compiletimeBoolAST ((cPtr_compiletimeBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compiletimeBoolAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST_2D_weak ("compiletimeBoolAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimeBoolAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimeBoolAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimeBoolAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak GALGAS_compiletimeBoolAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST_2D_weak result ;
  const GALGAS_compiletimeBoolAST_2D_weak * p = (const GALGAS_compiletimeBoolAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compiletimeBoolAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimeBoolAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractImplicitConverterToBoolean::objectCompare (const GALGAS_abstractImplicitConverterToBoolean & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean::GALGAS_abstractImplicitConverterToBoolean (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean::GALGAS_abstractImplicitConverterToBoolean (const cPtr_abstractImplicitConverterToBoolean * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_abstractImplicitConverterToBoolean::cPtr_abstractImplicitConverterToBoolean (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ("abstractImplicitConverterToBoolean",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean GALGAS_abstractImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractImplicitConverterToBoolean result ;
  const GALGAS_abstractImplicitConverterToBoolean * p = (const GALGAS_abstractImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_abstractImplicitConverterToBoolean_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak::GALGAS_abstractImplicitConverterToBoolean_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak & GALGAS_abstractImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_abstractImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak::GALGAS_abstractImplicitConverterToBoolean_2D_weak (const GALGAS_abstractImplicitConverterToBoolean & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak GALGAS_abstractImplicitConverterToBoolean_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean GALGAS_abstractImplicitConverterToBoolean_2D_weak::bang_abstractImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractImplicitConverterToBoolean) ;
      result = GALGAS_abstractImplicitConverterToBoolean ((cPtr_abstractImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractImplicitConverterToBoolean-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak ("abstractImplicitConverterToBoolean-weak",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak GALGAS_abstractImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_abstractImplicitConverterToBoolean_2D_weak * p = (const GALGAS_abstractImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_prefixOperatorUsage::objectCompare (const GALGAS_prefixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage::GALGAS_prefixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage::GALGAS_prefixOperatorUsage (const cPtr_prefixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorUsage::cPtr_prefixOperatorUsage (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ("prefixOperatorUsage",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage GALGAS_prefixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorUsage result ;
  const GALGAS_prefixOperatorUsage * p = (const GALGAS_prefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prefixOperatorUsage_2D_weak::objectCompare (const GALGAS_prefixOperatorUsage_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak::GALGAS_prefixOperatorUsage_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak & GALGAS_prefixOperatorUsage_2D_weak::operator = (const GALGAS_prefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak::GALGAS_prefixOperatorUsage_2D_weak (const GALGAS_prefixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak GALGAS_prefixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_prefixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage GALGAS_prefixOperatorUsage_2D_weak::bang_prefixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorUsage) ;
      result = GALGAS_prefixOperatorUsage ((cPtr_prefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak ("prefixOperatorUsage-weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak GALGAS_prefixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorUsage_2D_weak result ;
  const GALGAS_prefixOperatorUsage_2D_weak * p = (const GALGAS_prefixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @omnibusInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_omnibusInfixOperatorUsage::objectCompare (const GALGAS_omnibusInfixOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage::GALGAS_omnibusInfixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage::GALGAS_omnibusInfixOperatorUsage (const cPtr_omnibusInfixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @omnibusInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorUsage::cPtr_omnibusInfixOperatorUsage (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @omnibusInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ("omnibusInfixOperatorUsage",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage GALGAS_omnibusInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorUsage result ;
  const GALGAS_omnibusInfixOperatorUsage * p = (const GALGAS_omnibusInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_omnibusInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_omnibusInfixOperatorUsage_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak::GALGAS_omnibusInfixOperatorUsage_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak & GALGAS_omnibusInfixOperatorUsage_2D_weak::operator = (const GALGAS_omnibusInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak::GALGAS_omnibusInfixOperatorUsage_2D_weak (const GALGAS_omnibusInfixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak GALGAS_omnibusInfixOperatorUsage_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage GALGAS_omnibusInfixOperatorUsage_2D_weak::bang_omnibusInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_omnibusInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusInfixOperatorUsage) ;
      result = GALGAS_omnibusInfixOperatorUsage ((cPtr_omnibusInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @omnibusInfixOperatorUsage-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak ("omnibusInfixOperatorUsage-weak",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak GALGAS_omnibusInfixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorUsage_2D_weak result ;
  const GALGAS_omnibusInfixOperatorUsage_2D_weak * p = (const GALGAS_omnibusInfixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_omnibusInfixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolXorOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolXorOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolXorOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeBoolXorOperator::objectCompare (const GALGAS_compileTimeBoolXorOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator::GALGAS_compileTimeBoolXorOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator::GALGAS_compileTimeBoolXorOperator (const cPtr_compileTimeBoolXorOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolXorOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolXorOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolXorOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolXorOperator::cPtr_compileTimeBoolXorOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;
}

void cPtr_compileTimeBoolXorOperator::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeBoolXorOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolXorOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolXorOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolXorOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ("compileTimeBoolXorOperator",
                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolXorOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator result ;
  const GALGAS_compileTimeBoolXorOperator * p = (const GALGAS_compileTimeBoolXorOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeBoolXorOperator_2D_weak::objectCompare (const GALGAS_compileTimeBoolXorOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak::GALGAS_compileTimeBoolXorOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak & GALGAS_compileTimeBoolXorOperator_2D_weak::operator = (const GALGAS_compileTimeBoolXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak::GALGAS_compileTimeBoolXorOperator_2D_weak (const GALGAS_compileTimeBoolXorOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak GALGAS_compileTimeBoolXorOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator_2D_weak::bang_compileTimeBoolXorOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolXorOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolXorOperator) ;
      result = GALGAS_compileTimeBoolXorOperator ((cPtr_compileTimeBoolXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolXorOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2D_weak ("compileTimeBoolXorOperator-weak",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolXorOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolXorOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolXorOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak GALGAS_compileTimeBoolXorOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator_2D_weak result ;
  const GALGAS_compileTimeBoolXorOperator_2D_weak * p = (const GALGAS_compileTimeBoolXorOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolXorOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolXorOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolOrOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolOrOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolOrOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeBoolOrOperator::objectCompare (const GALGAS_compileTimeBoolOrOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator::GALGAS_compileTimeBoolOrOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator::GALGAS_compileTimeBoolOrOperator (const cPtr_compileTimeBoolOrOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolOrOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolOrOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolOrOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolOrOperator::cPtr_compileTimeBoolOrOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;
}

void cPtr_compileTimeBoolOrOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeBoolOrOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolOrOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolOrOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolOrOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ("compileTimeBoolOrOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolOrOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator result ;
  const GALGAS_compileTimeBoolOrOperator * p = (const GALGAS_compileTimeBoolOrOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeBoolOrOperator_2D_weak::objectCompare (const GALGAS_compileTimeBoolOrOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak::GALGAS_compileTimeBoolOrOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak & GALGAS_compileTimeBoolOrOperator_2D_weak::operator = (const GALGAS_compileTimeBoolOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak::GALGAS_compileTimeBoolOrOperator_2D_weak (const GALGAS_compileTimeBoolOrOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak GALGAS_compileTimeBoolOrOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator_2D_weak::bang_compileTimeBoolOrOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolOrOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolOrOperator) ;
      result = GALGAS_compileTimeBoolOrOperator ((cPtr_compileTimeBoolOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolOrOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2D_weak ("compileTimeBoolOrOperator-weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolOrOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolOrOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolOrOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak GALGAS_compileTimeBoolOrOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator_2D_weak result ;
  const GALGAS_compileTimeBoolOrOperator_2D_weak * p = (const GALGAS_compileTimeBoolOrOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeBoolOrOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolOrOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntAST::objectCompare (const GALGAS_compileTimeIntAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST::GALGAS_compileTimeIntAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST::GALGAS_compileTimeIntAST (const cPtr_compileTimeIntAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntAST class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntAST::cPtr_compileTimeIntAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST ;
}

void cPtr_compileTimeIntAST::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST ("compileTimeIntAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAST result ;
  const GALGAS_compileTimeIntAST * p = (const GALGAS_compileTimeIntAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntAST_2D_weak::objectCompare (const GALGAS_compileTimeIntAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak::GALGAS_compileTimeIntAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak & GALGAS_compileTimeIntAST_2D_weak::operator = (const GALGAS_compileTimeIntAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak::GALGAS_compileTimeIntAST_2D_weak (const GALGAS_compileTimeIntAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak GALGAS_compileTimeIntAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST_2D_weak::bang_compileTimeIntAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntAST) ;
      result = GALGAS_compileTimeIntAST ((cPtr_compileTimeIntAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST_2D_weak ("compileTimeIntAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak GALGAS_compileTimeIntAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAST_2D_weak result ;
  const GALGAS_compileTimeIntAST_2D_weak * p = (const GALGAS_compileTimeIntAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntModuloOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntModuloOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntModuloOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntModuloOperator::objectCompare (const GALGAS_compileTimeIntModuloOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator::GALGAS_compileTimeIntModuloOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator::GALGAS_compileTimeIntModuloOperator (const cPtr_compileTimeIntModuloOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntModuloOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntModuloOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntModuloOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntModuloOperator::cPtr_compileTimeIntModuloOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntModuloOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;
}

void cPtr_compileTimeIntModuloOperator::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntModuloOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntModuloOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntModuloOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntModuloOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ("compileTimeIntModuloOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator result ;
  const GALGAS_compileTimeIntModuloOperator * p = (const GALGAS_compileTimeIntModuloOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntModuloOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntModuloOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntModuloOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak::GALGAS_compileTimeIntModuloOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak & GALGAS_compileTimeIntModuloOperator_2D_weak::operator = (const GALGAS_compileTimeIntModuloOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak::GALGAS_compileTimeIntModuloOperator_2D_weak (const GALGAS_compileTimeIntModuloOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak GALGAS_compileTimeIntModuloOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator_2D_weak::bang_compileTimeIntModuloOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntModuloOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntModuloOperator) ;
      result = GALGAS_compileTimeIntModuloOperator ((cPtr_compileTimeIntModuloOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntModuloOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2D_weak ("compileTimeIntModuloOperator-weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak GALGAS_compileTimeIntModuloOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator_2D_weak result ;
  const GALGAS_compileTimeIntModuloOperator_2D_weak * p = (const GALGAS_compileTimeIntModuloOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntModuloOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntModuloZeroOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntModuloZeroOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntModuloZeroOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntModuloZeroOperator::objectCompare (const GALGAS_compileTimeIntModuloZeroOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator::GALGAS_compileTimeIntModuloZeroOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator::GALGAS_compileTimeIntModuloZeroOperator (const cPtr_compileTimeIntModuloZeroOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntModuloZeroOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntModuloZeroOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntModuloZeroOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntModuloZeroOperator::cPtr_compileTimeIntModuloZeroOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntModuloZeroOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;
}

void cPtr_compileTimeIntModuloZeroOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntModuloZeroOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntModuloZeroOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntModuloZeroOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntModuloZeroOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ("compileTimeIntModuloZeroOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloZeroOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloZeroOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloZeroOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator result ;
  const GALGAS_compileTimeIntModuloZeroOperator * p = (const GALGAS_compileTimeIntModuloZeroOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntModuloZeroOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloZeroOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntModuloZeroOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntModuloZeroOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak::GALGAS_compileTimeIntModuloZeroOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak & GALGAS_compileTimeIntModuloZeroOperator_2D_weak::operator = (const GALGAS_compileTimeIntModuloZeroOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak::GALGAS_compileTimeIntModuloZeroOperator_2D_weak (const GALGAS_compileTimeIntModuloZeroOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak GALGAS_compileTimeIntModuloZeroOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator_2D_weak::bang_compileTimeIntModuloZeroOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntModuloZeroOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntModuloZeroOperator) ;
      result = GALGAS_compileTimeIntModuloZeroOperator ((cPtr_compileTimeIntModuloZeroOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntModuloZeroOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2D_weak ("compileTimeIntModuloZeroOperator-weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloZeroOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloZeroOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloZeroOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak GALGAS_compileTimeIntModuloZeroOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator_2D_weak result ;
  const GALGAS_compileTimeIntModuloZeroOperator_2D_weak * p = (const GALGAS_compileTimeIntModuloZeroOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntModuloZeroOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloZeroOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntDivideOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntDivideOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntDivideOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntDivideOperator::objectCompare (const GALGAS_compileTimeIntDivideOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator::GALGAS_compileTimeIntDivideOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator::GALGAS_compileTimeIntDivideOperator (const cPtr_compileTimeIntDivideOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntDivideOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntDivideOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntDivideOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntDivideOperator::cPtr_compileTimeIntDivideOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntDivideOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;
}

void cPtr_compileTimeIntDivideOperator::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntDivideOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntDivideOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntDivideOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntDivideOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ("compileTimeIntDivideOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator result ;
  const GALGAS_compileTimeIntDivideOperator * p = (const GALGAS_compileTimeIntDivideOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntDivideOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntDivideOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntDivideOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak::GALGAS_compileTimeIntDivideOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak & GALGAS_compileTimeIntDivideOperator_2D_weak::operator = (const GALGAS_compileTimeIntDivideOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak::GALGAS_compileTimeIntDivideOperator_2D_weak (const GALGAS_compileTimeIntDivideOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak GALGAS_compileTimeIntDivideOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator_2D_weak::bang_compileTimeIntDivideOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntDivideOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntDivideOperator) ;
      result = GALGAS_compileTimeIntDivideOperator ((cPtr_compileTimeIntDivideOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntDivideOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2D_weak ("compileTimeIntDivideOperator-weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak GALGAS_compileTimeIntDivideOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator_2D_weak result ;
  const GALGAS_compileTimeIntDivideOperator_2D_weak * p = (const GALGAS_compileTimeIntDivideOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntDivideOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntDivideZeroOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntDivideZeroOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntDivideZeroOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntDivideZeroOperator::objectCompare (const GALGAS_compileTimeIntDivideZeroOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator::GALGAS_compileTimeIntDivideZeroOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator::GALGAS_compileTimeIntDivideZeroOperator (const cPtr_compileTimeIntDivideZeroOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntDivideZeroOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntDivideZeroOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntDivideZeroOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntDivideZeroOperator::cPtr_compileTimeIntDivideZeroOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntDivideZeroOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;
}

void cPtr_compileTimeIntDivideZeroOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntDivideZeroOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntDivideZeroOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntDivideZeroOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntDivideZeroOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ("compileTimeIntDivideZeroOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideZeroOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideZeroOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideZeroOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator result ;
  const GALGAS_compileTimeIntDivideZeroOperator * p = (const GALGAS_compileTimeIntDivideZeroOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntDivideZeroOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideZeroOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntDivideZeroOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntDivideZeroOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak::GALGAS_compileTimeIntDivideZeroOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak & GALGAS_compileTimeIntDivideZeroOperator_2D_weak::operator = (const GALGAS_compileTimeIntDivideZeroOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak::GALGAS_compileTimeIntDivideZeroOperator_2D_weak (const GALGAS_compileTimeIntDivideZeroOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak GALGAS_compileTimeIntDivideZeroOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator_2D_weak::bang_compileTimeIntDivideZeroOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntDivideZeroOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntDivideZeroOperator) ;
      result = GALGAS_compileTimeIntDivideZeroOperator ((cPtr_compileTimeIntDivideZeroOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntDivideZeroOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2D_weak ("compileTimeIntDivideZeroOperator-weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideZeroOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideZeroOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideZeroOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak GALGAS_compileTimeIntDivideZeroOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator_2D_weak result ;
  const GALGAS_compileTimeIntDivideZeroOperator_2D_weak * p = (const GALGAS_compileTimeIntDivideZeroOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntDivideZeroOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideZeroOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntMultiplyOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntMultiplyOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntMultiplyOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntMultiplyOperator::objectCompare (const GALGAS_compileTimeIntMultiplyOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator::GALGAS_compileTimeIntMultiplyOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator::GALGAS_compileTimeIntMultiplyOperator (const cPtr_compileTimeIntMultiplyOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMultiplyOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMultiplyOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMultiplyOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMultiplyOperator::cPtr_compileTimeIntMultiplyOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntMultiplyOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;
}

void cPtr_compileTimeIntMultiplyOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntMultiplyOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMultiplyOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntMultiplyOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMultiplyOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ("compileTimeIntMultiplyOperator",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMultiplyOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMultiplyOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMultiplyOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator result ;
  const GALGAS_compileTimeIntMultiplyOperator * p = (const GALGAS_compileTimeIntMultiplyOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntMultiplyOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMultiplyOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntMultiplyOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntMultiplyOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak::GALGAS_compileTimeIntMultiplyOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak & GALGAS_compileTimeIntMultiplyOperator_2D_weak::operator = (const GALGAS_compileTimeIntMultiplyOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak::GALGAS_compileTimeIntMultiplyOperator_2D_weak (const GALGAS_compileTimeIntMultiplyOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak GALGAS_compileTimeIntMultiplyOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator_2D_weak::bang_compileTimeIntMultiplyOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntMultiplyOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMultiplyOperator) ;
      result = GALGAS_compileTimeIntMultiplyOperator ((cPtr_compileTimeIntMultiplyOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMultiplyOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2D_weak ("compileTimeIntMultiplyOperator-weak",
                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMultiplyOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMultiplyOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMultiplyOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak GALGAS_compileTimeIntMultiplyOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator_2D_weak result ;
  const GALGAS_compileTimeIntMultiplyOperator_2D_weak * p = (const GALGAS_compileTimeIntMultiplyOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntMultiplyOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMultiplyOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntSubtractOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntSubtractOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntSubtractOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntSubtractOperator::objectCompare (const GALGAS_compileTimeIntSubtractOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator::GALGAS_compileTimeIntSubtractOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator::GALGAS_compileTimeIntSubtractOperator (const cPtr_compileTimeIntSubtractOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntSubtractOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntSubtractOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntSubtractOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntSubtractOperator::cPtr_compileTimeIntSubtractOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntSubtractOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;
}

void cPtr_compileTimeIntSubtractOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntSubtractOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntSubtractOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntSubtractOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntSubtractOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ("compileTimeIntSubtractOperator",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntSubtractOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntSubtractOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntSubtractOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator result ;
  const GALGAS_compileTimeIntSubtractOperator * p = (const GALGAS_compileTimeIntSubtractOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntSubtractOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntSubtractOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntSubtractOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntSubtractOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak::GALGAS_compileTimeIntSubtractOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak & GALGAS_compileTimeIntSubtractOperator_2D_weak::operator = (const GALGAS_compileTimeIntSubtractOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak::GALGAS_compileTimeIntSubtractOperator_2D_weak (const GALGAS_compileTimeIntSubtractOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak GALGAS_compileTimeIntSubtractOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator_2D_weak::bang_compileTimeIntSubtractOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntSubtractOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntSubtractOperator) ;
      result = GALGAS_compileTimeIntSubtractOperator ((cPtr_compileTimeIntSubtractOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntSubtractOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2D_weak ("compileTimeIntSubtractOperator-weak",
                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntSubtractOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntSubtractOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntSubtractOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak GALGAS_compileTimeIntSubtractOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator_2D_weak result ;
  const GALGAS_compileTimeIntSubtractOperator_2D_weak * p = (const GALGAS_compileTimeIntSubtractOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntSubtractOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntSubtractOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntEqualOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntEqualOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntEqualOperator::objectCompare (const GALGAS_compileTimeIntEqualOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator::GALGAS_compileTimeIntEqualOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator::GALGAS_compileTimeIntEqualOperator (const cPtr_compileTimeIntEqualOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntEqualOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntEqualOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntEqualOperator::cPtr_compileTimeIntEqualOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;
}

void cPtr_compileTimeIntEqualOperator::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntEqualOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntEqualOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntEqualOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntEqualOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ("compileTimeIntEqualOperator",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator result ;
  const GALGAS_compileTimeIntEqualOperator * p = (const GALGAS_compileTimeIntEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntEqualOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntEqualOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak::GALGAS_compileTimeIntEqualOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak & GALGAS_compileTimeIntEqualOperator_2D_weak::operator = (const GALGAS_compileTimeIntEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak::GALGAS_compileTimeIntEqualOperator_2D_weak (const GALGAS_compileTimeIntEqualOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak GALGAS_compileTimeIntEqualOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator_2D_weak::bang_compileTimeIntEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntEqualOperator) ;
      result = GALGAS_compileTimeIntEqualOperator ((cPtr_compileTimeIntEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntEqualOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2D_weak ("compileTimeIntEqualOperator-weak",
                                                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntEqualOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntEqualOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntEqualOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak GALGAS_compileTimeIntEqualOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator_2D_weak result ;
  const GALGAS_compileTimeIntEqualOperator_2D_weak * p = (const GALGAS_compileTimeIntEqualOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntEqualOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntEqualOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntAddOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntAddOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntAddOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntAddOperator::objectCompare (const GALGAS_compileTimeIntAddOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator::GALGAS_compileTimeIntAddOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator::GALGAS_compileTimeIntAddOperator (const cPtr_compileTimeIntAddOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntAddOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAddOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntAddOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntAddOperator::cPtr_compileTimeIntAddOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntAddOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;
}

void cPtr_compileTimeIntAddOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntAddOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntAddOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntAddOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntAddOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator ("compileTimeIntAddOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAddOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAddOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAddOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator result ;
  const GALGAS_compileTimeIntAddOperator * p = (const GALGAS_compileTimeIntAddOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntAddOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAddOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntAddOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntAddOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak::GALGAS_compileTimeIntAddOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak & GALGAS_compileTimeIntAddOperator_2D_weak::operator = (const GALGAS_compileTimeIntAddOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak::GALGAS_compileTimeIntAddOperator_2D_weak (const GALGAS_compileTimeIntAddOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak GALGAS_compileTimeIntAddOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator_2D_weak::bang_compileTimeIntAddOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntAddOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntAddOperator) ;
      result = GALGAS_compileTimeIntAddOperator ((cPtr_compileTimeIntAddOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntAddOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2D_weak ("compileTimeIntAddOperator-weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAddOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAddOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAddOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak GALGAS_compileTimeIntAddOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator_2D_weak result ;
  const GALGAS_compileTimeIntAddOperator_2D_weak * p = (const GALGAS_compileTimeIntAddOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntAddOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAddOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseAndOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntBitWiseAndOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntBitWiseAndOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntBitWiseAndOperator::objectCompare (const GALGAS_compileTimeIntBitWiseAndOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator::GALGAS_compileTimeIntBitWiseAndOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator::GALGAS_compileTimeIntBitWiseAndOperator (const cPtr_compileTimeIntBitWiseAndOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseAndOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseAndOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseAndOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseAndOperator::cPtr_compileTimeIntBitWiseAndOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntBitWiseAndOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;
}

void cPtr_compileTimeIntBitWiseAndOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntBitWiseAndOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseAndOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseAndOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseAndOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ("compileTimeIntBitWiseAndOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseAndOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseAndOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseAndOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator result ;
  const GALGAS_compileTimeIntBitWiseAndOperator * p = (const GALGAS_compileTimeIntBitWiseAndOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntBitWiseAndOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak & GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::operator = (const GALGAS_compileTimeIntBitWiseAndOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (const GALGAS_compileTimeIntBitWiseAndOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::bang_compileTimeIntBitWiseAndOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntBitWiseAndOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseAndOperator) ;
      result = GALGAS_compileTimeIntBitWiseAndOperator ((cPtr_compileTimeIntBitWiseAndOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseAndOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2D_weak ("compileTimeIntBitWiseAndOperator-weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator_2D_weak result ;
  const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak * p = (const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntShiftLeftOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntShiftLeftOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntShiftLeftOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntShiftLeftOperator::objectCompare (const GALGAS_compileTimeIntShiftLeftOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator::GALGAS_compileTimeIntShiftLeftOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator::GALGAS_compileTimeIntShiftLeftOperator (const cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftLeftOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftLeftOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftLeftOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftLeftOperator::cPtr_compileTimeIntShiftLeftOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntShiftLeftOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

void cPtr_compileTimeIntShiftLeftOperator::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntShiftLeftOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftLeftOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftLeftOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftLeftOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ("compileTimeIntShiftLeftOperator",
                                                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftLeftOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftLeftOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftLeftOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator result ;
  const GALGAS_compileTimeIntShiftLeftOperator * p = (const GALGAS_compileTimeIntShiftLeftOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntShiftLeftOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntShiftLeftOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntShiftLeftOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak::GALGAS_compileTimeIntShiftLeftOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak & GALGAS_compileTimeIntShiftLeftOperator_2D_weak::operator = (const GALGAS_compileTimeIntShiftLeftOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak::GALGAS_compileTimeIntShiftLeftOperator_2D_weak (const GALGAS_compileTimeIntShiftLeftOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak GALGAS_compileTimeIntShiftLeftOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator_2D_weak::bang_compileTimeIntShiftLeftOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntShiftLeftOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftLeftOperator) ;
      result = GALGAS_compileTimeIntShiftLeftOperator ((cPtr_compileTimeIntShiftLeftOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftLeftOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2D_weak ("compileTimeIntShiftLeftOperator-weak",
                                                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftLeftOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftLeftOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftLeftOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak GALGAS_compileTimeIntShiftLeftOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator_2D_weak result ;
  const GALGAS_compileTimeIntShiftLeftOperator_2D_weak * p = (const GALGAS_compileTimeIntShiftLeftOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntShiftLeftOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntShiftRightOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntShiftRightOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntShiftRightOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntShiftRightOperator::objectCompare (const GALGAS_compileTimeIntShiftRightOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator::GALGAS_compileTimeIntShiftRightOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator::GALGAS_compileTimeIntShiftRightOperator (const cPtr_compileTimeIntShiftRightOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftRightOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftRightOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftRightOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftRightOperator::cPtr_compileTimeIntShiftRightOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntShiftRightOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

void cPtr_compileTimeIntShiftRightOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntShiftRightOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftRightOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftRightOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftRightOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ("compileTimeIntShiftRightOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftRightOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftRightOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftRightOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator result ;
  const GALGAS_compileTimeIntShiftRightOperator * p = (const GALGAS_compileTimeIntShiftRightOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntShiftRightOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntShiftRightOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntShiftRightOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak::GALGAS_compileTimeIntShiftRightOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak & GALGAS_compileTimeIntShiftRightOperator_2D_weak::operator = (const GALGAS_compileTimeIntShiftRightOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak::GALGAS_compileTimeIntShiftRightOperator_2D_weak (const GALGAS_compileTimeIntShiftRightOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak GALGAS_compileTimeIntShiftRightOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator_2D_weak::bang_compileTimeIntShiftRightOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntShiftRightOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftRightOperator) ;
      result = GALGAS_compileTimeIntShiftRightOperator ((cPtr_compileTimeIntShiftRightOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftRightOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2D_weak ("compileTimeIntShiftRightOperator-weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftRightOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftRightOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftRightOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak GALGAS_compileTimeIntShiftRightOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator_2D_weak result ;
  const GALGAS_compileTimeIntShiftRightOperator_2D_weak * p = (const GALGAS_compileTimeIntShiftRightOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntShiftRightOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntLessThanOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntLessThanOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntLessThanOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntLessThanOperator::objectCompare (const GALGAS_compileTimeIntLessThanOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator::GALGAS_compileTimeIntLessThanOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator::GALGAS_compileTimeIntLessThanOperator (const cPtr_compileTimeIntLessThanOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLessThanOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLessThanOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLessThanOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLessThanOperator::cPtr_compileTimeIntLessThanOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntLessThanOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

void cPtr_compileTimeIntLessThanOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntLessThanOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLessThanOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntLessThanOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLessThanOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ("compileTimeIntLessThanOperator",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLessThanOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLessThanOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLessThanOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator result ;
  const GALGAS_compileTimeIntLessThanOperator * p = (const GALGAS_compileTimeIntLessThanOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntLessThanOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntLessThanOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntLessThanOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak::GALGAS_compileTimeIntLessThanOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak & GALGAS_compileTimeIntLessThanOperator_2D_weak::operator = (const GALGAS_compileTimeIntLessThanOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak::GALGAS_compileTimeIntLessThanOperator_2D_weak (const GALGAS_compileTimeIntLessThanOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak GALGAS_compileTimeIntLessThanOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator_2D_weak::bang_compileTimeIntLessThanOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntLessThanOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLessThanOperator) ;
      result = GALGAS_compileTimeIntLessThanOperator ((cPtr_compileTimeIntLessThanOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLessThanOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2D_weak ("compileTimeIntLessThanOperator-weak",
                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLessThanOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLessThanOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLessThanOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak GALGAS_compileTimeIntLessThanOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator_2D_weak result ;
  const GALGAS_compileTimeIntLessThanOperator_2D_weak * p = (const GALGAS_compileTimeIntLessThanOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntLessThanOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntLowerOrEqualOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntLowerOrEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntLowerOrEqualOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntLowerOrEqualOperator::objectCompare (const GALGAS_compileTimeIntLowerOrEqualOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator::GALGAS_compileTimeIntLowerOrEqualOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator::GALGAS_compileTimeIntLowerOrEqualOperator (const cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLowerOrEqualOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLowerOrEqualOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLowerOrEqualOperator::cPtr_compileTimeIntLowerOrEqualOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntLowerOrEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

void cPtr_compileTimeIntLowerOrEqualOperator::description (String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntLowerOrEqualOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLowerOrEqualOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntLowerOrEqualOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLowerOrEqualOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ("compileTimeIntLowerOrEqualOperator",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLowerOrEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLowerOrEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLowerOrEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator result ;
  const GALGAS_compileTimeIntLowerOrEqualOperator * p = (const GALGAS_compileTimeIntLowerOrEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntLowerOrEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::operator = (const GALGAS_compileTimeIntLowerOrEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (const GALGAS_compileTimeIntLowerOrEqualOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::bang_compileTimeIntLowerOrEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntLowerOrEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
      result = GALGAS_compileTimeIntLowerOrEqualOperator ((cPtr_compileTimeIntLowerOrEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLowerOrEqualOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak ("compileTimeIntLowerOrEqualOperator-weak",
                                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak result ;
  const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak * p = (const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntXorOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntXorOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntXorOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntXorOperator::objectCompare (const GALGAS_compileTimeIntXorOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator::GALGAS_compileTimeIntXorOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator::GALGAS_compileTimeIntXorOperator (const cPtr_compileTimeIntXorOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntXorOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntXorOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntXorOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntXorOperator::cPtr_compileTimeIntXorOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

void cPtr_compileTimeIntXorOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntXorOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntXorOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntXorOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntXorOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator ("compileTimeIntXorOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntXorOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator result ;
  const GALGAS_compileTimeIntXorOperator * p = (const GALGAS_compileTimeIntXorOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntXorOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntXorOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak::GALGAS_compileTimeIntXorOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak & GALGAS_compileTimeIntXorOperator_2D_weak::operator = (const GALGAS_compileTimeIntXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak::GALGAS_compileTimeIntXorOperator_2D_weak (const GALGAS_compileTimeIntXorOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak GALGAS_compileTimeIntXorOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator_2D_weak::bang_compileTimeIntXorOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntXorOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntXorOperator) ;
      result = GALGAS_compileTimeIntXorOperator ((cPtr_compileTimeIntXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntXorOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2D_weak ("compileTimeIntXorOperator-weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntXorOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntXorOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntXorOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak GALGAS_compileTimeIntXorOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator_2D_weak result ;
  const GALGAS_compileTimeIntXorOperator_2D_weak * p = (const GALGAS_compileTimeIntXorOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntXorOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseOrOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntBitWiseOrOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntBitWiseOrOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntBitWiseOrOperator::objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator::GALGAS_compileTimeIntBitWiseOrOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator::GALGAS_compileTimeIntBitWiseOrOperator (const cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseOrOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseOrOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseOrOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseOrOperator::cPtr_compileTimeIntBitWiseOrOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntBitWiseOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

void cPtr_compileTimeIntBitWiseOrOperator::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntBitWiseOrOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseOrOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseOrOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseOrOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ("compileTimeIntBitWiseOrOperator",
                                                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseOrOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator result ;
  const GALGAS_compileTimeIntBitWiseOrOperator * p = (const GALGAS_compileTimeIntBitWiseOrOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntBitWiseOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::operator = (const GALGAS_compileTimeIntBitWiseOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (const GALGAS_compileTimeIntBitWiseOrOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::bang_compileTimeIntBitWiseOrOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntBitWiseOrOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseOrOperator) ;
      result = GALGAS_compileTimeIntBitWiseOrOperator ((cPtr_compileTimeIntBitWiseOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseOrOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2D_weak ("compileTimeIntBitWiseOrOperator-weak",
                                                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator_2D_weak result ;
  const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak * p = (const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntMinusOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntMinusOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntMinusOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntMinusOperator::objectCompare (const GALGAS_compileTimeIntMinusOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator::GALGAS_compileTimeIntMinusOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator::GALGAS_compileTimeIntMinusOperator (const cPtr_compileTimeIntMinusOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMinusOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMinusOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMinusOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMinusOperator::cPtr_compileTimeIntMinusOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntMinusOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

void cPtr_compileTimeIntMinusOperator::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntMinusOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMinusOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntMinusOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMinusOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ("compileTimeIntMinusOperator",
                                                                                   & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMinusOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMinusOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMinusOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator result ;
  const GALGAS_compileTimeIntMinusOperator * p = (const GALGAS_compileTimeIntMinusOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntMinusOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntMinusOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntMinusOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak::GALGAS_compileTimeIntMinusOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak & GALGAS_compileTimeIntMinusOperator_2D_weak::operator = (const GALGAS_compileTimeIntMinusOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak::GALGAS_compileTimeIntMinusOperator_2D_weak (const GALGAS_compileTimeIntMinusOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak GALGAS_compileTimeIntMinusOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator_2D_weak::bang_compileTimeIntMinusOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntMinusOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMinusOperator) ;
      result = GALGAS_compileTimeIntMinusOperator ((cPtr_compileTimeIntMinusOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMinusOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ("compileTimeIntMinusOperator-weak",
                                                                                           & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMinusOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMinusOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMinusOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak GALGAS_compileTimeIntMinusOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator_2D_weak result ;
  const GALGAS_compileTimeIntMinusOperator_2D_weak * p = (const GALGAS_compileTimeIntMinusOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntMinusOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntComplementOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntComplementOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntComplementOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_compileTimeIntComplementOperator::objectCompare (const GALGAS_compileTimeIntComplementOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator::GALGAS_compileTimeIntComplementOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator::GALGAS_compileTimeIntComplementOperator (const cPtr_compileTimeIntComplementOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntComplementOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntComplementOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntComplementOperator class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntComplementOperator::cPtr_compileTimeIntComplementOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntComplementOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

void cPtr_compileTimeIntComplementOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.addString ("[@compileTimeIntComplementOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntComplementOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntComplementOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntComplementOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ("compileTimeIntComplementOperator",
                                                                                        & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntComplementOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntComplementOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntComplementOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator result ;
  const GALGAS_compileTimeIntComplementOperator * p = (const GALGAS_compileTimeIntComplementOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntComplementOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeIntComplementOperator_2D_weak::objectCompare (const GALGAS_compileTimeIntComplementOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak::GALGAS_compileTimeIntComplementOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak & GALGAS_compileTimeIntComplementOperator_2D_weak::operator = (const GALGAS_compileTimeIntComplementOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak::GALGAS_compileTimeIntComplementOperator_2D_weak (const GALGAS_compileTimeIntComplementOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak GALGAS_compileTimeIntComplementOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator_2D_weak::bang_compileTimeIntComplementOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntComplementOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntComplementOperator) ;
      result = GALGAS_compileTimeIntComplementOperator ((cPtr_compileTimeIntComplementOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntComplementOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ("compileTimeIntComplementOperator-weak",
                                                                                                & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntComplementOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntComplementOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntComplementOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak GALGAS_compileTimeIntComplementOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator_2D_weak result ;
  const GALGAS_compileTimeIntComplementOperator_2D_weak * p = (const GALGAS_compileTimeIntComplementOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeIntComplementOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolTypeAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolTypeAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolTypeAST::objectCompare (const GALGAS_boolTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST::GALGAS_boolTypeAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST::GALGAS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::class_func_new (LOCATION_ARGS) {
  GALGAS_boolTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolTypeAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolTypeAST::cPtr_boolTypeAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

void cPtr_boolTypeAST::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.addString ("[@boolTypeAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolTypeAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST ("boolTypeAST",
                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolTypeAST result ;
  const GALGAS_boolTypeAST * p = (const GALGAS_boolTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolTypeAST_2D_weak::objectCompare (const GALGAS_boolTypeAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak::GALGAS_boolTypeAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak & GALGAS_boolTypeAST_2D_weak::operator = (const GALGAS_boolTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak::GALGAS_boolTypeAST_2D_weak (const GALGAS_boolTypeAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak GALGAS_boolTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST_2D_weak::bang_boolTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolTypeAST) ;
      result = GALGAS_boolTypeAST ((cPtr_boolTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ("boolTypeAST-weak",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak GALGAS_boolTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolTypeAST_2D_weak result ;
  const GALGAS_boolTypeAST_2D_weak * p = (const GALGAS_boolTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolImplicitConverterToBoolean::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolImplicitConverterToBoolean::objectCompare (const GALGAS_boolImplicitConverterToBoolean & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean::GALGAS_boolImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean::GALGAS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::class_func_new (LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_boolImplicitConverterToBoolean (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_boolImplicitConverterToBoolean::cPtr_boolImplicitConverterToBoolean (LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

void cPtr_boolImplicitConverterToBoolean::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.addString ("[@boolImplicitConverterToBoolean]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolImplicitConverterToBoolean (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ("boolImplicitConverterToBoolean",
                                                                                      & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean result ;
  const GALGAS_boolImplicitConverterToBoolean * p = (const GALGAS_boolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_boolImplicitConverterToBoolean_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak::GALGAS_boolImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak & GALGAS_boolImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_boolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak::GALGAS_boolImplicitConverterToBoolean_2D_weak (const GALGAS_boolImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak GALGAS_boolImplicitConverterToBoolean_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean_2D_weak::bang_boolImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolImplicitConverterToBoolean) ;
      result = GALGAS_boolImplicitConverterToBoolean ((cPtr_boolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolImplicitConverterToBoolean-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ("boolImplicitConverterToBoolean-weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak GALGAS_boolImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_boolImplicitConverterToBoolean_2D_weak * p = (const GALGAS_boolImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolNotOperator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolNotOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolNotOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolNotOperator::objectCompare (const GALGAS_boolNotOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator::GALGAS_boolNotOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator::GALGAS_boolNotOperator (const cPtr_boolNotOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolNotOperator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::class_func_new (LOCATION_ARGS) {
  GALGAS_boolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_boolNotOperator (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolNotOperator class
//--------------------------------------------------------------------------------------------------

cPtr_boolNotOperator::cPtr_boolNotOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

void cPtr_boolNotOperator::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.addString ("[@boolNotOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolNotOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolNotOperator (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolNotOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator ("boolNotOperator",
                                                                       & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolNotOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boolNotOperator result ;
  const GALGAS_boolNotOperator * p = (const GALGAS_boolNotOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolNotOperator_2D_weak::objectCompare (const GALGAS_boolNotOperator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak::GALGAS_boolNotOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak & GALGAS_boolNotOperator_2D_weak::operator = (const GALGAS_boolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak::GALGAS_boolNotOperator_2D_weak (const GALGAS_boolNotOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak GALGAS_boolNotOperator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolNotOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator_2D_weak::bang_boolNotOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolNotOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolNotOperator) ;
      result = GALGAS_boolNotOperator ((cPtr_boolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolNotOperator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ("boolNotOperator-weak",
                                                                               & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolNotOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolNotOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolNotOperator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak GALGAS_boolNotOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boolNotOperator_2D_weak result ;
  const GALGAS_boolNotOperator_2D_weak * p = (const GALGAS_boolNotOperator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolNotOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

