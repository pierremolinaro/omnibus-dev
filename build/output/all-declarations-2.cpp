#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

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
//
//     @abstractDecoratedDeclaration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak ("abstractDecoratedDeclaration.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDecoratedDeclaration_2E_weak::staticTypeDescriptor (void) const {
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
//
//Class for element of '@declarationDecorationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public: GGS_declarationDecorationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationDecorationList (const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationDecorationList (const GGS_declarationDecorationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GGS_declarationDecorationList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList::GGS_declarationDecorationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList::GGS_declarationDecorationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_declarationDecorationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_declarationDecorationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::enterElement (const GGS_declarationDecorationList_2E_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::class_func_listWithValue (const GGS_abstractDecoratedDeclaration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_declarationDecorationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_declarationDecorationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_declarationDecorationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::addAssign_operation (const GGS_abstractDecoratedDeclaration & inOperand0
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

void GGS_declarationDecorationList::setter_append (const GGS_abstractDecoratedDeclaration inOperand0,
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

void GGS_declarationDecorationList::setter_insertAtIndex (const GGS_abstractDecoratedDeclaration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_removeAtIndex (GGS_abstractDecoratedDeclaration & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_popFirst (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::setter_popLast (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::method_first (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::method_last (GGS_abstractDecoratedDeclaration & outOperand0,
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

GGS_declarationDecorationList GGS_declarationDecorationList::add_operation (const GGS_declarationDecorationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result = GGS_declarationDecorationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result = GGS_declarationDecorationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result = GGS_declarationDecorationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::plusAssign_operation (const GGS_declarationDecorationList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_setMDeclarationAtIndex (GGS_abstractDecoratedDeclaration inOperand,
                                                                   GGS_uint inIndex,
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

GGS_abstractDecoratedDeclaration GGS_declarationDecorationList::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  GGS_abstractDecoratedDeclaration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_declarationDecorationList::cEnumerator_declarationDecorationList (const GGS_declarationDecorationList & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element cEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration cEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_declarationDecorationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationDecorationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationDecorationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_declarationDecorationList result ;
  const GGS_declarationDecorationList * p = (const GGS_declarationDecorationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationDecorationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GGS_constantMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex),
mProperty_mClassTypeName (inValue.mProperty_mClassTypeName) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_constantMap::cMapElement_constantMap (const GGS_lstring & inKey,
                                                  const GGS_bigint & in_mIndex,
                                                  const GGS_lstring & in_mClassTypeName
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mClassTypeName" ":") ;
  mProperty_mClassTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (const GGS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap & GGS_constantMap::operator = (const GGS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_constantMap * p = (cMapElement_constantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_constantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      element.mProperty_mClassTypeName = p->mProperty_mClassTypeName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_mapWithMapToOverride (const GGS_constantMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::enterElement (const GGS_constantMap_2E_element & inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = nullptr ;
  macroMyNew (p, cMapElement_constantMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::addAssign_operation (const GGS_lstring & inKey,
                                           const GGS_bigint & inArgument0,
                                           const GGS_lstring & inArgument1,
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

GGS_constantMap GGS_constantMap::add_operation (const GGS_constantMap & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_constantMap result = *this ;
  cEnumerator_constantMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mClassTypeName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_insertKey (GGS_lstring inKey,
                                        GGS_bigint inArgument0,
                                        GGS_lstring inArgument1,
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

void GGS_constantMap::method_searchKey (GGS_lstring inKey,
                                        GGS_bigint & outArgument0,
                                        GGS_lstring & outArgument1,
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

GGS_bigint GGS_constantMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GGS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_constantMap::getter_mClassTypeNameForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_setMIndexForKey (GGS_bigint inAttributeValue,
                                              GGS_string inKey,
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

void GGS_constantMap::setter_setMClassTypeNameForKey (GGS_lstring inAttributeValue,
                                                      GGS_string inKey,
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

cMapElement_constantMap * GGS_constantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                              const GGS_string & inKey
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_constantMap::cEnumerator_constantMap (const GGS_constantMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element cEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GGS_constantMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mClassTypeName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint cEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mClassTypeName ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  const GGS_constantMap * p = (const GGS_constantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_constructorMap::cMapElement_constructorMap (const GGS_constructorMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mInitValue (inValue.mProperty_mInitValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_constructorMap::cMapElement_constructorMap (const GGS_lstring & inKey,
                                                        const GGS_constructorSignature & in_mSignature,
                                                        const GGS_constructorValue & in_mInitValue
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitValue" ":") ;
  mProperty_mInitValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::GGS_constructorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::GGS_constructorMap (const GGS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap & GGS_constructorMap::operator = (const GGS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constructorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_constructorMap * p = (cMapElement_constructorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_constructorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constructorMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mInitValue = p->mProperty_mInitValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::class_func_mapWithMapToOverride (const GGS_constructorMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::enterElement (const GGS_constructorMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_constructorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_constructorSignature & inArgument0,
                                              const GGS_constructorValue & inArgument1,
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

GGS_constructorMap GGS_constructorMap::add_operation (const GGS_constructorMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_constructorMap result = *this ;
  cEnumerator_constructorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSignature (HERE), enumerator.current_mInitValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_constructorSignature inArgument0,
                                           GGS_constructorValue inArgument1,
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

void GGS_constructorMap::method_searchKey (GGS_lstring inKey,
                                           GGS_constructorSignature & outArgument0,
                                           GGS_constructorValue & outArgument1,
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

GGS_constructorSignature GGS_constructorMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GGS_constructorSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorMap::getter_mInitValueForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GGS_constructorValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mInitValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_setMSignatureForKey (GGS_constructorSignature inAttributeValue,
                                                     GGS_string inKey,
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

void GGS_constructorMap::setter_setMInitValueForKey (GGS_constructorValue inAttributeValue,
                                                     GGS_string inKey,
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

cMapElement_constructorMap * GGS_constructorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_constructorMap::cEnumerator_constructorMap (const GGS_constructorMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GGS_constructorMap_2E_element (p->mProperty_lkey, p->mProperty_mSignature, p->mProperty_mInitValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature cEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mInitValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  const GGS_constructorMap * p = (const GGS_constructorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum constructorValue
//--------------------------------------------------------------------------------------------------

GGS_constructorValue::GGS_constructorValue (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_null (UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_null ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_simple (const GGS_bigint & inAssociatedValue0
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_simple ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_constructorValue_2E_simple (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_structure (const GGS_sortedOperandIRList & inAssociatedValue0
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_structure ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_constructorValue_2E_structure (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::class_func_arrayValue (const GGS_omnibusType & inAssociatedValue0,
                                                                  const GGS_uint & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorValue result ;
  result.mEnum = Enumeration::enum_arrayValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_constructorValue_2E_arrayValue (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::method_extractSimple (GGS_bigint & outAssociatedValue_value,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_simple) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @constructorValue.simple invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_constructorValue_2E_simple *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::method_extractStructure (GGS_sortedOperandIRList & outAssociatedValue_sortedOperandList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_structure) {
    outAssociatedValue_sortedOperandList.drop () ;
    String s ;
    s.appendCString ("method @constructorValue.structure invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_constructorValue_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_sortedOperandList = ptr->mProperty_sortedOperandList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::method_extractArrayValue (GGS_omnibusType & outAssociatedValue_elementType,
                                                     GGS_uint & outAssociatedValue_size,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayValue) {
    outAssociatedValue_elementType.drop () ;
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("method @constructorValue.arrayValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_constructorValue_2E_arrayValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_elementType = ptr->mProperty_elementType ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_simple_3F_ GGS_constructorValue::getter_getSimple (UNUSED_LOCATION_ARGS) const {
  GGS_constructorValue_2E_simple_3F_ result ;
  if (mEnum == Enumeration::enum_simple) {
    const auto ptr = (const GGS_constructorValue_2E_simple *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_constructorValue_2E_simple (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::getAssociatedValuesFor_simple (GGS_bigint & out_value) const {
  const auto ptr = (const GGS_constructorValue_2E_simple *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_structure_3F_ GGS_constructorValue::getter_getStructure (UNUSED_LOCATION_ARGS) const {
  GGS_constructorValue_2E_structure_3F_ result ;
  if (mEnum == Enumeration::enum_structure) {
    const auto ptr = (const GGS_constructorValue_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_constructorValue_2E_structure (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::getAssociatedValuesFor_structure (GGS_sortedOperandIRList & out_sortedOperandList) const {
  const auto ptr = (const GGS_constructorValue_2E_structure *) mAssociatedValues.associatedValuesPointer () ;
  out_sortedOperandList = ptr->mProperty_sortedOperandList ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue_2E_arrayValue_3F_ GGS_constructorValue::getter_getArrayValue (UNUSED_LOCATION_ARGS) const {
  GGS_constructorValue_2E_arrayValue_3F_ result ;
  if (mEnum == Enumeration::enum_arrayValue) {
    const auto ptr = (const GGS_constructorValue_2E_arrayValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_constructorValue_2E_arrayValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::getAssociatedValuesFor_arrayValue (GGS_omnibusType & out_elementType,
                                                              GGS_uint & out_size) const {
  const auto ptr = (const GGS_constructorValue_2E_arrayValue *) mAssociatedValues.associatedValuesPointer () ;
  out_elementType = ptr->mProperty_elementType ;
  out_size = ptr->mProperty_size ;
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

GGS_bool GGS_constructorValue::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isSimple (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_simple == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_structure == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorValue::getter_isArrayValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorValue::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @constructorValue: ") ;
  ioString.appendCString (gEnumNameArrayFor_constructorValue [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @constructorValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue ("constructorValue",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorValue::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_constructorValue result ;
  const GGS_constructorValue * p = (const GGS_constructorValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorValue *> (p)) {
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
  public: GGS_constructorSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_constructorSignature (const GGS_string & in_mSelector,
                                                   const GGS_omnibusType & in_mType,
                                                   const GGS_uint & in_mFieldIndex
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constructorSignature (const GGS_constructorSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GGS_string & in_mSelector,
                                                                                  const GGS_omnibusType & in_mType,
                                                                                  const GGS_uint & in_mFieldIndex
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mType, in_mFieldIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GGS_constructorSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFieldIndex" ":") ;
  mObject.mProperty_mFieldIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature::GGS_constructorSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature::GGS_constructorSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_constructorSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_constructorSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::enterElement (const GGS_constructorSignature_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_constructorSignature (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::class_func_listWithValue (const GGS_string & inOperand0,
                                                                             const GGS_omnibusType & inOperand1,
                                                                             const GGS_uint & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  GGS_constructorSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_constructorSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_constructorSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_string & in_mSelector,
                                                          const GGS_omnibusType & in_mType,
                                                          const GGS_uint & in_mFieldIndex
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_constructorSignature (in_mSelector,
                                                          in_mType,
                                                          in_mFieldIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::addAssign_operation (const GGS_string & inOperand0,
                                                    const GGS_omnibusType & inOperand1,
                                                    const GGS_uint & inOperand2
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

void GGS_constructorSignature::setter_append (const GGS_string inOperand0,
                                              const GGS_omnibusType inOperand1,
                                              const GGS_uint inOperand2,
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

void GGS_constructorSignature::setter_insertAtIndex (const GGS_string inOperand0,
                                                     const GGS_omnibusType inOperand1,
                                                     const GGS_uint inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_removeAtIndex (GGS_string & outOperand0,
                                                     GGS_omnibusType & outOperand1,
                                                     GGS_uint & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
      outOperand0 = p->mObject.mProperty_mSelector ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mFieldIndex ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_popFirst (GGS_string & outOperand0,
                                                GGS_omnibusType & outOperand1,
                                                GGS_uint & outOperand2,
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

void GGS_constructorSignature::setter_popLast (GGS_string & outOperand0,
                                               GGS_omnibusType & outOperand1,
                                               GGS_uint & outOperand2,
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

void GGS_constructorSignature::method_first (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_uint & outOperand2,
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

void GGS_constructorSignature::method_last (GGS_string & outOperand0,
                                            GGS_omnibusType & outOperand1,
                                            GGS_uint & outOperand2,
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

GGS_constructorSignature GGS_constructorSignature::add_operation (const GGS_constructorSignature & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result = GGS_constructorSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result = GGS_constructorSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result = GGS_constructorSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::plusAssign_operation (const GGS_constructorSignature inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_setMSelectorAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
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

GGS_string GGS_constructorSignature::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
                                                       GGS_uint inIndex,
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

GGS_omnibusType GGS_constructorSignature::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_setMFieldIndexAtIndex (GGS_uint inOperand,
                                                             GGS_uint inIndex,
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

GGS_uint GGS_constructorSignature::getter_mFieldIndexAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mFieldIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_constructorSignature::cEnumerator_constructorSignature (const GGS_constructorSignature & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element cEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_constructorSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constructorSignature result ;
  const GGS_constructorSignature * p = (const GGS_constructorSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyGetterMap::cMapElement_propertyGetterMap (const GGS_propertyGetterMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mVisibility (inValue.mProperty_mVisibility),
mProperty_mAccess (inValue.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyGetterMap::cMapElement_propertyGetterMap (const GGS_lstring & inKey,
                                                              const GGS_propertyVisibility & in_mVisibility,
                                                              const GGS_propertyGetterKind & in_mAccess
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVisibility" ":") ;
  mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccess" ":") ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::GGS_propertyGetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::GGS_propertyGetterMap (const GGS_propertyGetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap & GGS_propertyGetterMap::operator = (const GGS_propertyGetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_propertyGetterMap * p = (cMapElement_propertyGetterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_propertyGetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyGetterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mVisibility = p->mProperty_mVisibility ;
      element.mProperty_mAccess = p->mProperty_mAccess ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::class_func_mapWithMapToOverride (const GGS_propertyGetterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::enterElement (const GGS_propertyGetterMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyGetterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_propertyVisibility & inArgument0,
                                                 const GGS_propertyGetterKind & inArgument1,
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

GGS_propertyGetterMap GGS_propertyGetterMap::add_operation (const GGS_propertyGetterMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterMap result = *this ;
  cEnumerator_propertyGetterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mVisibility (HERE), enumerator.current_mAccess (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_propertyVisibility inArgument0,
                                              GGS_propertyGetterKind inArgument1,
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

void GGS_propertyGetterMap::method_searchKey (GGS_lstring inKey,
                                              GGS_propertyVisibility & outArgument0,
                                              GGS_propertyGetterKind & outArgument1,
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

GGS_propertyVisibility GGS_propertyGetterMap::getter_mVisibilityForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) attributes ;
  GGS_propertyVisibility result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    result = p->mProperty_mVisibility ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterMap::getter_mAccessForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) attributes ;
  GGS_propertyGetterKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_setMVisibilityForKey (GGS_propertyVisibility inAttributeValue,
                                                         GGS_string inKey,
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

void GGS_propertyGetterMap::setter_setMAccessForKey (GGS_propertyGetterKind inAttributeValue,
                                                     GGS_string inKey,
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

cMapElement_propertyGetterMap * GGS_propertyGetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * result = (cMapElement_propertyGetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyGetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertyGetterMap::cEnumerator_propertyGetterMap (const GGS_propertyGetterMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element cEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return GGS_propertyGetterMap_2E_element (p->mProperty_lkey, p->mProperty_mVisibility, p->mProperty_mAccess) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility cEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return p->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind cEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return p->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap ("propertyGetterMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  const GGS_propertyGetterMap * p = (const GGS_propertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyGetterKind
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind::GGS_propertyGetterKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::class_func_storedProperty (const GGS_omnibusType & inAssociatedValue0,
                                                                          const GGS_uint & inAssociatedValue1
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  result.mEnum = Enumeration::enum_storedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyGetterKind_2E_storedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::class_func_computedProperty (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                            const GGS_routineLLVMNameDict & inAssociatedValue1
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  result.mEnum = Enumeration::enum_computedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyGetterKind_2E_computedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::class_func_constantProperty (const GGS_objectIR & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  result.mEnum = Enumeration::enum_constantProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyGetterKind_2E_constantProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::method_extractStoredProperty (GGS_omnibusType & outAssociatedValue_type,
                                                           GGS_uint & outAssociatedValue_index,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_storedProperty) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("method @propertyGetterKind.storedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyGetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::method_extractComputedProperty (GGS_unifiedTypeMapEntry & outAssociatedValue_typeProxy,
                                                             GGS_routineLLVMNameDict & outAssociatedValue_modeDictionary,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_computedProperty) {
    outAssociatedValue_typeProxy.drop () ;
    outAssociatedValue_modeDictionary.drop () ;
    String s ;
    s.appendCString ("method @propertyGetterKind.computedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyGetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeProxy = ptr->mProperty_typeProxy ;
    outAssociatedValue_modeDictionary = ptr->mProperty_modeDictionary ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::method_extractConstantProperty (GGS_objectIR & outAssociatedValue_value,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_constantProperty) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @propertyGetterKind.constantProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyGetterKind_2E_constantProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_storedProperty_3F_ GGS_propertyGetterKind::getter_getStoredProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterKind_2E_storedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_storedProperty) {
    const auto ptr = (const GGS_propertyGetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyGetterKind_2E_storedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::getAssociatedValuesFor_storedProperty (GGS_omnibusType & out_type,
                                                                    GGS_uint & out_index) const {
  const auto ptr = (const GGS_propertyGetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_computedProperty_3F_ GGS_propertyGetterKind::getter_getComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterKind_2E_computedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_computedProperty) {
    const auto ptr = (const GGS_propertyGetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyGetterKind_2E_computedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::getAssociatedValuesFor_computedProperty (GGS_unifiedTypeMapEntry & out_typeProxy,
                                                                      GGS_routineLLVMNameDict & out_modeDictionary) const {
  const auto ptr = (const GGS_propertyGetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_typeProxy = ptr->mProperty_typeProxy ;
  out_modeDictionary = ptr->mProperty_modeDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind_2E_constantProperty_3F_ GGS_propertyGetterKind::getter_getConstantProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterKind_2E_constantProperty_3F_ result ;
  if (mEnum == Enumeration::enum_constantProperty) {
    const auto ptr = (const GGS_propertyGetterKind_2E_constantProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyGetterKind_2E_constantProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::getAssociatedValuesFor_constantProperty (GGS_objectIR & out_value) const {
  const auto ptr = (const GGS_propertyGetterKind_2E_constantProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyGetterKind [4] = {
  "(not built)",
  "storedProperty",
  "computedProperty",
  "constantProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_storedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_computedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterKind::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterKind::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyGetterKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyGetterKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind ("propertyGetterKind",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGetterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterKind::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterKind result ;
  const GGS_propertyGetterKind * p = (const GGS_propertyGetterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyVisibility
//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility::GGS_propertyVisibility (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyVisibility::class_func_isPublic (UNUSED_LOCATION_ARGS) {
  GGS_propertyVisibility result ;
  result.mEnum = Enumeration::enum_isPublic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyVisibility::class_func_isPrivate (UNUSED_LOCATION_ARGS) {
  GGS_propertyVisibility result ;
  result.mEnum = Enumeration::enum_isPrivate ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyVisibility [3] = {
  "(not built)",
  "isPublic",
  "isPrivate"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyVisibility::getter_isIsPublic (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isPublic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyVisibility::getter_isIsPrivate (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isPrivate == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyVisibility::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @propertyVisibility: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyVisibility [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyVisibility::objectCompare (const GGS_propertyVisibility & inOperand) const {
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
//
//     @propertyVisibility generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyVisibility ("propertyVisibility",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyVisibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyVisibility ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyVisibility::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyVisibility (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyVisibility::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyVisibility result ;
  const GGS_propertyVisibility * p = (const GGS_propertyVisibility *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyVisibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyVisibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertySetterMap::cMapElement_propertySetterMap (const GGS_propertySetterMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mVisibility (inValue.mProperty_mVisibility),
mProperty_mAccess (inValue.mProperty_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertySetterMap::cMapElement_propertySetterMap (const GGS_lstring & inKey,
                                                              const GGS_propertyVisibility & in_mVisibility,
                                                              const GGS_propertySetterKind & in_mAccess
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVisibility" ":") ;
  mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAccess" ":") ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::GGS_propertySetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::GGS_propertySetterMap (const GGS_propertySetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap & GGS_propertySetterMap::operator = (const GGS_propertySetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_propertySetterMap * p = (cMapElement_propertySetterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_propertySetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertySetterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mVisibility = p->mProperty_mVisibility ;
      element.mProperty_mAccess = p->mProperty_mAccess ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::class_func_mapWithMapToOverride (const GGS_propertySetterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_propertySetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::enterElement (const GGS_propertySetterMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertySetterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_propertyVisibility & inArgument0,
                                                 const GGS_propertySetterKind & inArgument1,
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

GGS_propertySetterMap GGS_propertySetterMap::add_operation (const GGS_propertySetterMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertySetterMap result = *this ;
  cEnumerator_propertySetterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mVisibility (HERE), enumerator.current_mAccess (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_propertyVisibility inArgument0,
                                              GGS_propertySetterKind inArgument1,
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

void GGS_propertySetterMap::method_searchKey (GGS_lstring inKey,
                                              GGS_propertyVisibility & outArgument0,
                                              GGS_propertySetterKind & outArgument1,
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

GGS_propertyVisibility GGS_propertySetterMap::getter_mVisibilityForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) attributes ;
  GGS_propertyVisibility result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    result = p->mProperty_mVisibility ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterMap::getter_mAccessForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) attributes ;
  GGS_propertySetterKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_setMVisibilityForKey (GGS_propertyVisibility inAttributeValue,
                                                         GGS_string inKey,
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

void GGS_propertySetterMap::setter_setMAccessForKey (GGS_propertySetterKind inAttributeValue,
                                                     GGS_string inKey,
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

cMapElement_propertySetterMap * GGS_propertySetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * result = (cMapElement_propertySetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertySetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertySetterMap::cEnumerator_propertySetterMap (const GGS_propertySetterMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element cEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return GGS_propertySetterMap_2E_element (p->mProperty_lkey, p->mProperty_mVisibility, p->mProperty_mAccess) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility cEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return p->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind cEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return p->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap ("propertySetterMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  const GGS_propertySetterMap * p = (const GGS_propertySetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertySetterKind
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind::GGS_propertySetterKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterKind::class_func_storedProperty (const GGS_omnibusType & inAssociatedValue0,
                                                                          const GGS_uint & inAssociatedValue1
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind result ;
  result.mEnum = Enumeration::enum_storedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertySetterKind_2E_storedProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterKind::class_func_computedProperty (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                            const GGS_routineLLVMNameDict & inAssociatedValue1,
                                                                            const GGS_routineLLVMNameDict & inAssociatedValue2
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterKind result ;
  result.mEnum = Enumeration::enum_computedProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertySetterKind_2E_computedProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::method_extractStoredProperty (GGS_omnibusType & outAssociatedValue_type,
                                                           GGS_uint & outAssociatedValue_index,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_storedProperty) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_index.drop () ;
    String s ;
    s.appendCString ("method @propertySetterKind.storedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertySetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_index = ptr->mProperty_index ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::method_extractComputedProperty (GGS_unifiedTypeMapEntry & outAssociatedValue_typeProxy,
                                                             GGS_routineLLVMNameDict & outAssociatedValue_getterModeDictionary,
                                                             GGS_routineLLVMNameDict & outAssociatedValue_setterModeDictionary,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_computedProperty) {
    outAssociatedValue_typeProxy.drop () ;
    outAssociatedValue_getterModeDictionary.drop () ;
    outAssociatedValue_setterModeDictionary.drop () ;
    String s ;
    s.appendCString ("method @propertySetterKind.computedProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertySetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeProxy = ptr->mProperty_typeProxy ;
    outAssociatedValue_getterModeDictionary = ptr->mProperty_getterModeDictionary ;
    outAssociatedValue_setterModeDictionary = ptr->mProperty_setterModeDictionary ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_storedProperty_3F_ GGS_propertySetterKind::getter_getStoredProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterKind_2E_storedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_storedProperty) {
    const auto ptr = (const GGS_propertySetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertySetterKind_2E_storedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::getAssociatedValuesFor_storedProperty (GGS_omnibusType & out_type,
                                                                    GGS_uint & out_index) const {
  const auto ptr = (const GGS_propertySetterKind_2E_storedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_index = ptr->mProperty_index ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind_2E_computedProperty_3F_ GGS_propertySetterKind::getter_getComputedProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterKind_2E_computedProperty_3F_ result ;
  if (mEnum == Enumeration::enum_computedProperty) {
    const auto ptr = (const GGS_propertySetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertySetterKind_2E_computedProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::getAssociatedValuesFor_computedProperty (GGS_unifiedTypeMapEntry & out_typeProxy,
                                                                      GGS_routineLLVMNameDict & out_getterModeDictionary,
                                                                      GGS_routineLLVMNameDict & out_setterModeDictionary) const {
  const auto ptr = (const GGS_propertySetterKind_2E_computedProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_typeProxy = ptr->mProperty_typeProxy ;
  out_getterModeDictionary = ptr->mProperty_getterModeDictionary ;
  out_setterModeDictionary = ptr->mProperty_setterModeDictionary ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertySetterKind [3] = {
  "(not built)",
  "storedProperty",
  "computedProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_storedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_computedProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterKind::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertySetterKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertySetterKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @propertySetterKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind ("propertySetterKind",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertySetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertySetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertySetterKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterKind::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterKind result ;
  const GGS_propertySetterKind * p = (const GGS_propertySetterKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertySetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticStringMap::cMapElement_staticStringMap (const GGS_staticStringMap_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticStringMap::cMapElement_staticStringMap (const GGS_lstring & inKey,
                                                          const GGS_uint & in_mIndex
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::GGS_staticStringMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::GGS_staticStringMap (const GGS_staticStringMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap & GGS_staticStringMap::operator = (const GGS_staticStringMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticStringMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_staticStringMap * p = (cMapElement_staticStringMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_staticStringMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticStringMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::class_func_mapWithMapToOverride (const GGS_staticStringMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_staticStringMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::enterElement (const GGS_staticStringMap_2E_element & inValue,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticStringMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticStringMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::addAssign_operation (const GGS_lstring & inKey,
                                               const GGS_uint & inArgument0,
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

GGS_staticStringMap GGS_staticStringMap::add_operation (const GGS_staticStringMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_staticStringMap result = *this ;
  cEnumerator_staticStringMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::setter_insertKey (GGS_lstring inKey,
                                            GGS_uint inArgument0,
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

void GGS_staticStringMap::method_searchKey (GGS_lstring inKey,
                                            GGS_uint & outArgument0,
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

GGS_uint GGS_staticStringMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                  GGS_string inKey,
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

cMapElement_staticStringMap * GGS_staticStringMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GGS_staticStringMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GGS_staticStringMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticStringMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticStringMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  const GGS_staticStringMap * p = (const GGS_staticStringMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticStringMap *> (p)) {
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
  public: GGS_globalStructuredConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_globalStructuredConstantList (const GGS_omnibusType & in_mType,
                                                           const GGS_operandIRList & in_mOperandIRList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalStructuredConstantList (const GGS_globalStructuredConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GGS_omnibusType & in_mType,
                                                                                                  const GGS_operandIRList & in_mOperandIRList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mOperandIRList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GGS_globalStructuredConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperandIRList" ":") ;
  mObject.mProperty_mOperandIRList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList::GGS_globalStructuredConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList::GGS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_globalStructuredConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_globalStructuredConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::enterElement (const GGS_globalStructuredConstantList_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::class_func_listWithValue (const GGS_omnibusType & inOperand0,
                                                                                             const GGS_operandIRList & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_globalStructuredConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_globalStructuredConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_globalStructuredConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_operandIRList & in_mOperandIRList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType,
                                                                  in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::addAssign_operation (const GGS_omnibusType & inOperand0,
                                                            const GGS_operandIRList & inOperand1
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

void GGS_globalStructuredConstantList::setter_append (const GGS_omnibusType inOperand0,
                                                      const GGS_operandIRList inOperand1,
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

void GGS_globalStructuredConstantList::setter_insertAtIndex (const GGS_omnibusType inOperand0,
                                                             const GGS_operandIRList inOperand1,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_removeAtIndex (GGS_omnibusType & outOperand0,
                                                             GGS_operandIRList & outOperand1,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mOperandIRList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_popFirst (GGS_omnibusType & outOperand0,
                                                        GGS_operandIRList & outOperand1,
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

void GGS_globalStructuredConstantList::setter_popLast (GGS_omnibusType & outOperand0,
                                                       GGS_operandIRList & outOperand1,
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

void GGS_globalStructuredConstantList::method_first (GGS_omnibusType & outOperand0,
                                                     GGS_operandIRList & outOperand1,
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

void GGS_globalStructuredConstantList::method_last (GGS_omnibusType & outOperand0,
                                                    GGS_operandIRList & outOperand1,
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

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::add_operation (const GGS_globalStructuredConstantList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result = GGS_globalStructuredConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result = GGS_globalStructuredConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result = GGS_globalStructuredConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::plusAssign_operation (const GGS_globalStructuredConstantList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
                                                               GGS_uint inIndex,
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

GGS_omnibusType GGS_globalStructuredConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_setMOperandIRListAtIndex (GGS_operandIRList inOperand,
                                                                        GGS_uint inIndex,
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

GGS_operandIRList GGS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GGS_operandIRList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mOperandIRList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_globalStructuredConstantList::cEnumerator_globalStructuredConstantList (const GGS_globalStructuredConstantList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element cEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList cEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_globalStructuredConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalStructuredConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalStructuredConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalStructuredConstantList result ;
  const GGS_globalStructuredConstantList * p = (const GGS_globalStructuredConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalStructuredConstantList *> (p)) {
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
  public: GGS_operandIRList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_operandIRList (const GGS_objectIR & in_mOperand
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_operandIRList (const GGS_operandIRList_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GGS_objectIR & in_mOperand
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GGS_operandIRList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperand" ":") ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_operandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_operandIRList * operand = (cCollectionElement_operandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_operandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList::GGS_operandIRList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList::GGS_operandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_operandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_operandIRList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::enterElement (const GGS_operandIRList_2E_element & inValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_operandIRList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::class_func_listWithValue (const GGS_objectIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  GGS_operandIRList result ;
  if (inOperand0.isValid ()) {
    result = GGS_operandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_operandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_objectIR & in_mOperand
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = nullptr ;
  macroMyNew (p, cCollectionElement_operandIRList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::addAssign_operation (const GGS_objectIR & inOperand0
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

void GGS_operandIRList::setter_append (const GGS_objectIR inOperand0,
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

void GGS_operandIRList::setter_insertAtIndex (const GGS_objectIR inOperand0,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_removeAtIndex (GGS_objectIR & outOperand0,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_operandIRList) ;
      outOperand0 = p->mObject.mProperty_mOperand ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_popFirst (GGS_objectIR & outOperand0,
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

void GGS_operandIRList::setter_popLast (GGS_objectIR & outOperand0,
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

void GGS_operandIRList::method_first (GGS_objectIR & outOperand0,
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

void GGS_operandIRList::method_last (GGS_objectIR & outOperand0,
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

GGS_operandIRList GGS_operandIRList::add_operation (const GGS_operandIRList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result = GGS_operandIRList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result = GGS_operandIRList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result = GGS_operandIRList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::plusAssign_operation (const GGS_operandIRList inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_setMOperandAtIndex (GGS_objectIR inOperand,
                                                   GGS_uint inIndex,
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

GGS_objectIR GGS_operandIRList::getter_mOperandAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  GGS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    result = p->mObject.mProperty_mOperand ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_operandIRList::cEnumerator_operandIRList (const GGS_operandIRList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element cEnumerator_operandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_objectIR cEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_operandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_operandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_operandIRList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_operandIRList result ;
  const GGS_operandIRList * p = (const GGS_operandIRList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_operandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//
//     @objectIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_objectIR::staticTypeDescriptor (void) const {
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
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (cPtr_abstractDeclarationAST * inObject,
                                         GGS_semanticContext & io_ioContext,
                                         GGS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         GGS_routineListIR & io_ioRoutineListIR,
                                         GGS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GGS_staticEntityMap & io_ioStaticEntityMap,
                                         GGS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         GGS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
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
    s.appendCString ("method @subscript.staticSubscript invoked with an invalid enum value") ;
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
//
//     @subscript generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript ("subscript",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscript::staticTypeDescriptor (void) const {
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

void GGS_omnibusTypeAttributes::andAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                     class Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::orAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                    class Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::xorAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                     class Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_omnibusTypeAttributes::minusAssign_operation (const GGS_omnibusTypeAttributes inOperand,
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
//
//     @omnibusTypeAttributes generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ("omnibusTypeAttributes",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_omnibusTypeAttributes::staticTypeDescriptor (void) const {
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
    s.appendCString ("method @typeKind.enumeration invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.structure invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.integer invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.llvmType invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.generic invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.opaque invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.staticArrayType invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.dynamicArrayType invoked with an invalid enum value") ;
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
    s.appendCString ("method @typeKind.function invoked with an invalid enum value") ;
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
//
//     @typeKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind::staticTypeDescriptor (void) const {
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

GGS_omnibusType_2E_weak::GGS_omnibusType_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType_2E_weak & GGS_omnibusType_2E_weak::operator = (const GGS_omnibusType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_omnibusType_2E_weak::bang_omnibusType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @omnibusType.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType_2E_weak ("omnibusType.weak",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_omnibusType_2E_weak::staticTypeDescriptor (void) const {
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
//
//Class for element of '@arcAssignmentList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public: GGS_arcAssignmentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                const GGS_omnibusType & in_mPropertyType,
                                                const GGS_uintlist & in_mPropertyIndexPath
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                                            const GGS_omnibusType & in_mPropertyType,
                                                                            const GGS_uintlist & in_mPropertyIndexPath
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyType" ":") ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyIndexPath" ":") ;
  mObject.mProperty_mPropertyIndexPath.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_arcAssignmentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_arcAssignmentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::enterElement (const GGS_arcAssignmentList_2E_element & inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                       const GGS_omnibusType & inOperand1,
                                                                       const GGS_uintlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_arcAssignmentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_arcAssignmentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_string & in_mPropertyName,
                                                       const GGS_omnibusType & in_mPropertyType,
                                                       const GGS_uintlist & in_mPropertyIndexPath
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName,
                                                       in_mPropertyType,
                                                       in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::addAssign_operation (const GGS_string & inOperand0,
                                                 const GGS_omnibusType & inOperand1,
                                                 const GGS_uintlist & inOperand2
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

void GGS_arcAssignmentList::setter_append (const GGS_string inOperand0,
                                           const GGS_omnibusType inOperand1,
                                           const GGS_uintlist inOperand2,
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

void GGS_arcAssignmentList::setter_insertAtIndex (const GGS_string inOperand0,
                                                  const GGS_omnibusType inOperand1,
                                                  const GGS_uintlist inOperand2,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_removeAtIndex (GGS_string & outOperand0,
                                                  GGS_omnibusType & outOperand1,
                                                  GGS_uintlist & outOperand2,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
      outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_popFirst (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_uintlist & outOperand2,
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

void GGS_arcAssignmentList::setter_popLast (GGS_string & outOperand0,
                                            GGS_omnibusType & outOperand1,
                                            GGS_uintlist & outOperand2,
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

void GGS_arcAssignmentList::method_first (GGS_string & outOperand0,
                                          GGS_omnibusType & outOperand1,
                                          GGS_uintlist & outOperand2,
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

void GGS_arcAssignmentList::method_last (GGS_string & outOperand0,
                                         GGS_omnibusType & outOperand1,
                                         GGS_uintlist & outOperand2,
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

GGS_arcAssignmentList GGS_arcAssignmentList::add_operation (const GGS_arcAssignmentList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arcAssignmentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result = GGS_arcAssignmentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result = GGS_arcAssignmentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList GGS_arcAssignmentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_arcAssignmentList result = GGS_arcAssignmentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::plusAssign_operation (const GGS_arcAssignmentList inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_setMPropertyNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
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

GGS_string GGS_arcAssignmentList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_setMPropertyTypeAtIndex (GGS_omnibusType inOperand,
                                                            GGS_uint inIndex,
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

GGS_omnibusType GGS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::setter_setMPropertyIndexPathAtIndex (GGS_uintlist inOperand,
                                                                 GGS_uint inIndex,
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

GGS_uintlist GGS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GGS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyIndexPath ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_arcAssignmentList::cEnumerator_arcAssignmentList (const GGS_arcAssignmentList & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList_2E_element cEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist cEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_arcAssignmentList::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------
// @userLLVMTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMTypeDefinitionIR::objectCompare (const GGS_userLLVMTypeDefinitionIR & inOperand) const {
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

GGS_userLLVMTypeDefinitionIR::GGS_userLLVMTypeDefinitionIR (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR::GGS_userLLVMTypeDefinitionIR (const cPtr_userLLVMTypeDefinitionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMTypeDefinitionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_userLLVMTypeDefinitionIR::readProperty_mLLVMDefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    return p->mProperty_mLLVMDefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionIR::setProperty_mLLVMDefinedTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    p->mProperty_mLLVMDefinedTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mLLVMDefinedTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mLLVMDefinedTypeName () {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_userLLVMTypeDefinitionIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMDefinedTypeName.printNonNullClassInstanceProperties ("mLLVMDefinedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ("userLLVMTypeDefinitionIR",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_userLLVMTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionIR result ;
  const GGS_userLLVMTypeDefinitionIR * p = (const GGS_userLLVMTypeDefinitionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMTypeDefinitionIR_2E_weak::objectCompare (const GGS_userLLVMTypeDefinitionIR_2E_weak & inOperand) const {
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

GGS_userLLVMTypeDefinitionIR_2E_weak::GGS_userLLVMTypeDefinitionIR_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak & GGS_userLLVMTypeDefinitionIR_2E_weak::operator = (const GGS_userLLVMTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak::GGS_userLLVMTypeDefinitionIR_2E_weak (const GGS_userLLVMTypeDefinitionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak GGS_userLLVMTypeDefinitionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionIR_2E_weak::bang_userLLVMTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMTypeDefinitionIR) ;
      result = GGS_userLLVMTypeDefinitionIR ((cPtr_userLLVMTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ("userLLVMTypeDefinitionIR.weak",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_userLLVMTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR_2E_weak GGS_userLLVMTypeDefinitionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionIR_2E_weak result ;
  const GGS_userLLVMTypeDefinitionIR_2E_weak * p = (const GGS_userLLVMTypeDefinitionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                           GGS_string & io_ioLLVMcode,
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
  public: GGS_userLLVMTypeDefinitionListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionIR & in_mType
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionIR & in_mType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR::GGS_userLLVMTypeDefinitionListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR::GGS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_userLLVMTypeDefinitionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_userLLVMTypeDefinitionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::enterElement (const GGS_userLLVMTypeDefinitionListIR_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::class_func_listWithValue (const GGS_userLLVMTypeDefinitionIR & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (inOperand0.isValid ()) {
    result = GGS_userLLVMTypeDefinitionListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_userLLVMTypeDefinitionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_userLLVMTypeDefinitionIR & in_mType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_userLLVMTypeDefinitionListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::addAssign_operation (const GGS_userLLVMTypeDefinitionIR & inOperand0
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

void GGS_userLLVMTypeDefinitionListIR::setter_append (const GGS_userLLVMTypeDefinitionIR inOperand0,
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

void GGS_userLLVMTypeDefinitionListIR::setter_insertAtIndex (const GGS_userLLVMTypeDefinitionIR inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_removeAtIndex (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
      outOperand0 = p->mObject.mProperty_mType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_popFirst (GGS_userLLVMTypeDefinitionIR & outOperand0,
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

void GGS_userLLVMTypeDefinitionListIR::setter_popLast (GGS_userLLVMTypeDefinitionIR & outOperand0,
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

void GGS_userLLVMTypeDefinitionListIR::method_first (GGS_userLLVMTypeDefinitionIR & outOperand0,
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

void GGS_userLLVMTypeDefinitionListIR::method_last (GGS_userLLVMTypeDefinitionIR & outOperand0,
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

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::add_operation (const GGS_userLLVMTypeDefinitionListIR & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result = GGS_userLLVMTypeDefinitionListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result = GGS_userLLVMTypeDefinitionListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result = GGS_userLLVMTypeDefinitionListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::plusAssign_operation (const GGS_userLLVMTypeDefinitionListIR inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_setMTypeAtIndex (GGS_userLLVMTypeDefinitionIR inOperand,
                                                               GGS_uint inIndex,
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

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionListIR::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  GGS_userLLVMTypeDefinitionIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_userLLVMTypeDefinitionListIR::cEnumerator_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element cEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_userLLVMTypeDefinitionListIR * p = (const cCollectionElement_userLLVMTypeDefinitionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR cEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GGS_userLLVMTypeDefinitionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMTypeDefinitionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMTypeDefinitionListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR result ;
  const GGS_userLLVMTypeDefinitionListIR * p = (const GGS_userLLVMTypeDefinitionListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMTypeDefinitionListIR *> (p)) {
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

GGS_lstringlist extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 19)) ;
  result_result = temp_0 ;
  const GGS_unifiedTypeMap temp_1 = inObject ;
  cEnumerator_unifiedTypeMap enumerator_1144 (temp_1, EnumerationOrder::up) ;
  while (enumerator_1144.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_1144.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 21)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_result.addAssign_operation (enumerator_1144.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 22)) ;
      }
    }
    enumerator_1144.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GGS_unifiedTypeMap & ioObject,
                                const GGS_lstring constinArgument_inLKey,
                                GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_1444 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_1444.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 31)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_1540 = GGS_unifiedTypeMapElementClass::init_21__21_ (constinArgument_inLKey, GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 33)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_1540, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 34)) ;
    }
    outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_1540  COMMA_SOURCE_FILE ("unified-type-map.galgas", 35)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeOptionalEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeOptionalEntry (GGS_unifiedTypeMap & ioObject,
                                        const GGS_lstring constinArgument_inLKey,
                                        GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 43)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_1976 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_1976.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 45)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2072 = GGS_unifiedTypeMapElementClass::init_21__21_ (constinArgument_inLKey, GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 47)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2072, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 48)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2072  COMMA_SOURCE_FILE ("unified-type-map.galgas", 49)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GGS_unifiedTypeMap & ioObject,
                                          const GGS_string constinArgument_inKey,
                                          GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_2455 = temp_1.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2455.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 57)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_2550 = GGS_unifiedTypeMapElementClass::init_21__21_ (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 59)), inCompiler COMMA_HERE), GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 59)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 60)), inCompiler COMMA_HERE), var_newElement_2550, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 60)) ;
    }
    outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2550  COMMA_SOURCE_FILE ("unified-type-map.galgas", 61)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap searchKey'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_searchKey (const GGS_unifiedTypeMap & inObject,
                                                   const GGS_lstring & constinArgument_inLKey,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 69)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3004 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3004.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 71)) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is not '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 73)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 73)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 73)) ;
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

void extensionSetter_insertType (GGS_unifiedTypeMap & ioObject,
                                 const GGS_lstring constinArgument_inTypeName,
                                 const GGS_omnibusType constinArgument_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_3376 = temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_node_3376.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_omnibusType extractedValue_3461__0 ;
          var_node_3376.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_3461__0) ;
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 83)) ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GGS_unifiedTypeMapElementClass var_e_3544 = var_node_3376.readProperty_mElement () ;
          var_e_3544.setProperty_mDefinition (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 86))) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_3641 = GGS_unifiedTypeMapElementClass::init_21__21_ (constinArgument_inTypeName, GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 89)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_3641, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 90)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchType (const GGS_unifiedTypeMap inObject,
                                 const GGS_lstring constinArgument_inLKey,
                                 GGS_omnibusType & outArgument_outTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTypeDefinition.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = inObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4045 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_node_4045.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_omnibusType extractedValue_4126_definition_0 ;
          var_node_4045.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4126_definition_0) ;
          outArgument_outTypeDefinition = extractedValue_4126_definition_0 ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 103)) ;
          outArgument_outTypeDefinition.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is not '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 106)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 106)) ;
    outArgument_outTypeDefinition.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum typeDefinition
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition::GGS_typeDefinition (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_unsolved (UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_unsolved ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_solved (const GGS_omnibusType & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_solved ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeDefinition_2E_solved (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::method_extractSolved (GGS_omnibusType & outAssociatedValue_type,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_solved) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("method @typeDefinition.solved invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition::getter_getSolved (UNUSED_LOCATION_ARGS) const {
  GGS_typeDefinition_2E_solved_3F_ result ;
  if (mEnum == Enumeration::enum_solved) {
    const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeDefinition_2E_solved (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::getAssociatedValuesFor_solved (GGS_omnibusType & out_type) const {
  const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsolved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_solved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeDefinition: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeDefinition [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  const GGS_typeDefinition * p = (const GGS_typeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass_2E_weak::objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const {
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

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak & GGS_unifiedTypeMapElementClass_2E_weak::operator = (const GGS_unifiedTypeMapElementClass & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (const GGS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (const class GGS_unifiedTypeMapElementClass_3F_ & inSource) :
AC_GALGAS_weak_reference () {
  if (inSource.isValid ()) {
    if (inSource.isNil ()) {
      macroMyNew (mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    }else if (inSource.isValuated ()) {
      const GGS_unifiedTypeMapElementClass v = inSource.unwrappedValue () ;
      acStrongPtr_class * ptr = (acStrongPtr_class *) v.ptr () ;
      if (ptr != nullptr) {
        cPtr_weakReference_proxy * proxy = ptr->getProxy () ;
        macroAssignSharedObject (mProxyPtr, proxy) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GGS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ("unifiedTypeMapElementClass.weak",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapElementClass_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  const GGS_unifiedTypeMapElementClass_2E_weak * p = (const GGS_unifiedTypeMapElementClass_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//
//     @unifiedTypeMapEntry generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ("unifiedTypeMapEntry",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntry::staticTypeDescriptor (void) const {
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
//
//Extension Getter '@unifiedTypeMapEntry type'
//
//--------------------------------------------------------------------------------------------------

GGS_omnibusType extensionGetter_type (const GGS_unifiedTypeMapEntry & inObject,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 160)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 160)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_3F_ extractedValue_6142_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_6142_weakElement_0) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_6168 = extractedValue_6142_weakElement_0.unwrappedValue () ;
        if (!extractedValue_6142_weakElement_0.isValuated ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          switch (var_type_6168.readProperty_mDefinition ().enumValue ()) {
          case GGS_typeDefinition::Enumeration::invalid:
            break ;
          case GGS_typeDefinition::Enumeration::enum_unsolved:
            {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 165)), GGS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 165)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GGS_typeDefinition::Enumeration::enum_solved:
            {
              GGS_omnibusType extractedValue_6313_definition_0 ;
              var_type_6168.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_6313_definition_0) ;
              result_result = extractedValue_6313_definition_0 ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 170)), GGS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas", 170)) ;
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

GGS_string extensionGetter_key (const GGS_unifiedTypeMapEntry & inObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 180)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 180)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_3F_ extractedValue_6665_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_6665_weakElement_0) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_6691 = extractedValue_6665_weakElement_0.unwrappedValue () ;
        if (!extractedValue_6665_weakElement_0.isValuated ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          result_result = var_type_6691.readProperty_mTypeName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 185)), GGS_string ("nil type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 185)) ;
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
                                           const GGS_semanticContext constin_inContext,
                                           GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
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

cMapElement_staticListInvokedFunctionSetMap::cMapElement_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap_2E_element & inValue
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInvokedFunctionSet (inValue.mProperty_mInvokedFunctionSet) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInvokedFunctionSetMap::cMapElement_staticListInvokedFunctionSetMap (const GGS_lstring & inKey,
                                                                                          const GGS_stringset & in_mInvokedFunctionSet
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInvokedFunctionSet" ":") ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap::GGS_staticListInvokedFunctionSetMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap::GGS_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap & GGS_staticListInvokedFunctionSetMap::operator = (const GGS_staticListInvokedFunctionSetMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element_3F_ GGS_staticListInvokedFunctionSetMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListInvokedFunctionSetMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_staticListInvokedFunctionSetMap * p = (cMapElement_staticListInvokedFunctionSetMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_staticListInvokedFunctionSetMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticListInvokedFunctionSetMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mInvokedFunctionSet = p->mProperty_mInvokedFunctionSet ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::class_func_mapWithMapToOverride (const GGS_staticListInvokedFunctionSetMap & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_staticListInvokedFunctionSetMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::enterElement (const GGS_staticListInvokedFunctionSetMap_2E_element & inValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInvokedFunctionSetMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::addAssign_operation (const GGS_lstring & inKey,
                                                               const GGS_stringset & inArgument0,
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

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::add_operation (const GGS_staticListInvokedFunctionSetMap & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_staticListInvokedFunctionSetMap result = *this ;
  cEnumerator_staticListInvokedFunctionSetMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInvokedFunctionSet (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::setter_insertKey (GGS_lstring inKey,
                                                            GGS_stringset inArgument0,
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

void GGS_staticListInvokedFunctionSetMap::method_searchKey (GGS_lstring inKey,
                                                            GGS_stringset & outArgument0,
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

GGS_stringset GGS_staticListInvokedFunctionSetMap::getter_mInvokedFunctionSetForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  GGS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInvokedFunctionSetMap::setter_setMInvokedFunctionSetForKey (GGS_stringset inAttributeValue,
                                                                               GGS_string inKey,
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

cMapElement_staticListInvokedFunctionSetMap * GGS_staticListInvokedFunctionSetMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                      const GGS_string & inKey
                                                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * result = (cMapElement_staticListInvokedFunctionSetMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInvokedFunctionSetMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticListInvokedFunctionSetMap::cEnumerator_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInvokedFunctionSetMap_2E_element cEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return GGS_staticListInvokedFunctionSetMap_2E_element (p->mProperty_lkey, p->mProperty_mInvokedFunctionSet) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset cEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return p->mProperty_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInvokedFunctionSetMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ("staticListInvokedFunctionSetMap",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListInvokedFunctionSetMap::staticTypeDescriptor (void) const {
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
// @compiletimeBoolAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compiletimeBoolAST::objectCompare (const GGS_compiletimeBoolAST & inOperand) const {
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

GGS_compiletimeBoolAST::GGS_compiletimeBoolAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compiletimeBoolAST GGS_compiletimeBoolAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compiletimeBoolAST * object = nullptr ;
  macroMyNew (object, cPtr_compiletimeBoolAST (inCompiler COMMA_THERE)) ;
  object->compiletimeBoolAST_init (inCompiler) ;
  const GGS_compiletimeBoolAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::
compiletimeBoolAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST::GGS_compiletimeBoolAST (const cPtr_compiletimeBoolAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimeBoolAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST GGS_compiletimeBoolAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compiletimeBoolAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compiletimeBoolAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compiletimeBoolAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compiletimeBoolAST::cPtr_compiletimeBoolAST (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compiletimeBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST ;
}

void cPtr_compiletimeBoolAST::description (String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compiletimeBoolAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compiletimeBoolAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compiletimeBoolAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compiletimeBoolAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compiletimeBoolAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST ("compiletimeBoolAST",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compiletimeBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compiletimeBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compiletimeBoolAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST GGS_compiletimeBoolAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_compiletimeBoolAST result ;
  const GGS_compiletimeBoolAST * p = (const GGS_compiletimeBoolAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compiletimeBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimeBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compiletimeBoolAST_2E_weak::objectCompare (const GGS_compiletimeBoolAST_2E_weak & inOperand) const {
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

GGS_compiletimeBoolAST_2E_weak::GGS_compiletimeBoolAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST_2E_weak & GGS_compiletimeBoolAST_2E_weak::operator = (const GGS_compiletimeBoolAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST_2E_weak::GGS_compiletimeBoolAST_2E_weak (const GGS_compiletimeBoolAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST_2E_weak GGS_compiletimeBoolAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compiletimeBoolAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST GGS_compiletimeBoolAST_2E_weak::bang_compiletimeBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compiletimeBoolAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compiletimeBoolAST) ;
      result = GGS_compiletimeBoolAST ((cPtr_compiletimeBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compiletimeBoolAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST_2E_weak ("compiletimeBoolAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compiletimeBoolAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compiletimeBoolAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compiletimeBoolAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimeBoolAST_2E_weak GGS_compiletimeBoolAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_compiletimeBoolAST_2E_weak result ;
  const GGS_compiletimeBoolAST_2E_weak * p = (const GGS_compiletimeBoolAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compiletimeBoolAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimeBoolAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractImplicitConverterToBoolean::objectCompare (const GGS_abstractImplicitConverterToBoolean & inOperand) const {
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

GGS_abstractImplicitConverterToBoolean::GGS_abstractImplicitConverterToBoolean (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean::GGS_abstractImplicitConverterToBoolean (const cPtr_abstractImplicitConverterToBoolean * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractImplicitConverterToBoolean::cPtr_abstractImplicitConverterToBoolean (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ("abstractImplicitConverterToBoolean",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean result ;
  const GGS_abstractImplicitConverterToBoolean * p = (const GGS_abstractImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_abstractImplicitConverterToBoolean_2E_weak & inOperand) const {
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

GGS_abstractImplicitConverterToBoolean_2E_weak::GGS_abstractImplicitConverterToBoolean_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak & GGS_abstractImplicitConverterToBoolean_2E_weak::operator = (const GGS_abstractImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak::GGS_abstractImplicitConverterToBoolean_2E_weak (const GGS_abstractImplicitConverterToBoolean & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak GGS_abstractImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean_2E_weak::bang_abstractImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractImplicitConverterToBoolean) ;
      result = GGS_abstractImplicitConverterToBoolean ((cPtr_abstractImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractImplicitConverterToBoolean.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ("abstractImplicitConverterToBoolean.weak",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean_2E_weak GGS_abstractImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractImplicitConverterToBoolean_2E_weak result ;
  const GGS_abstractImplicitConverterToBoolean_2E_weak * p = (const GGS_abstractImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ("prefixOperatorUsage",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefixOperatorUsage::staticTypeDescriptor (void) const {
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

GGS_prefixOperatorUsage_2E_weak::GGS_prefixOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage_2E_weak & GGS_prefixOperatorUsage_2E_weak::operator = (const GGS_prefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorUsage_2E_weak::bang_prefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @prefixOperatorUsage.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ("prefixOperatorUsage.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
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
//
//     @omnibusInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ("omnibusInfixOperatorUsage",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_omnibusInfixOperatorUsage::staticTypeDescriptor (void) const {
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

GGS_omnibusInfixOperatorUsage_2E_weak::GGS_omnibusInfixOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage_2E_weak & GGS_omnibusInfixOperatorUsage_2E_weak::operator = (const GGS_omnibusInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_omnibusInfixOperatorUsage_2E_weak::bang_omnibusInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_omnibusInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @omnibusInfixOperatorUsage.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ("omnibusInfixOperatorUsage.weak",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_omnibusInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
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
// @compileTimeBoolXorOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolXorOperator::objectCompare (const GGS_compileTimeBoolXorOperator & inOperand) const {
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

GGS_compileTimeBoolXorOperator::GGS_compileTimeBoolXorOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeBoolXorOperator GGS_compileTimeBoolXorOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolXorOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolXorOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolXorOperator_init (inCompiler) ;
  const GGS_compileTimeBoolXorOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolXorOperator::
compileTimeBoolXorOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator::GGS_compileTimeBoolXorOperator (const cPtr_compileTimeBoolXorOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolXorOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator GGS_compileTimeBoolXorOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolXorOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolXorOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolXorOperator::cPtr_compileTimeBoolXorOperator (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;
}

void cPtr_compileTimeBoolXorOperator::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeBoolXorOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolXorOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolXorOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolXorOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolXorOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ("compileTimeBoolXorOperator",
                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolXorOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator GGS_compileTimeBoolXorOperator::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolXorOperator result ;
  const GGS_compileTimeBoolXorOperator * p = (const GGS_compileTimeBoolXorOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolXorOperator_2E_weak::objectCompare (const GGS_compileTimeBoolXorOperator_2E_weak & inOperand) const {
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

GGS_compileTimeBoolXorOperator_2E_weak::GGS_compileTimeBoolXorOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator_2E_weak & GGS_compileTimeBoolXorOperator_2E_weak::operator = (const GGS_compileTimeBoolXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator_2E_weak::GGS_compileTimeBoolXorOperator_2E_weak (const GGS_compileTimeBoolXorOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator_2E_weak GGS_compileTimeBoolXorOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeBoolXorOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator GGS_compileTimeBoolXorOperator_2E_weak::bang_compileTimeBoolXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeBoolXorOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolXorOperator) ;
      result = GGS_compileTimeBoolXorOperator ((cPtr_compileTimeBoolXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolXorOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2E_weak ("compileTimeBoolXorOperator.weak",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolXorOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolXorOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolXorOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolXorOperator_2E_weak GGS_compileTimeBoolXorOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolXorOperator_2E_weak result ;
  const GGS_compileTimeBoolXorOperator_2E_weak * p = (const GGS_compileTimeBoolXorOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolXorOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolXorOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeBoolOrOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolOrOperator::objectCompare (const GGS_compileTimeBoolOrOperator & inOperand) const {
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

GGS_compileTimeBoolOrOperator::GGS_compileTimeBoolOrOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeBoolOrOperator GGS_compileTimeBoolOrOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeBoolOrOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeBoolOrOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeBoolOrOperator_init (inCompiler) ;
  const GGS_compileTimeBoolOrOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolOrOperator::
compileTimeBoolOrOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator::GGS_compileTimeBoolOrOperator (const cPtr_compileTimeBoolOrOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolOrOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator GGS_compileTimeBoolOrOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolOrOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolOrOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolOrOperator::cPtr_compileTimeBoolOrOperator (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;
}

void cPtr_compileTimeBoolOrOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeBoolOrOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolOrOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeBoolOrOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeBoolOrOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolOrOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ("compileTimeBoolOrOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolOrOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator GGS_compileTimeBoolOrOperator::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolOrOperator result ;
  const GGS_compileTimeBoolOrOperator * p = (const GGS_compileTimeBoolOrOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeBoolOrOperator_2E_weak::objectCompare (const GGS_compileTimeBoolOrOperator_2E_weak & inOperand) const {
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

GGS_compileTimeBoolOrOperator_2E_weak::GGS_compileTimeBoolOrOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator_2E_weak & GGS_compileTimeBoolOrOperator_2E_weak::operator = (const GGS_compileTimeBoolOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator_2E_weak::GGS_compileTimeBoolOrOperator_2E_weak (const GGS_compileTimeBoolOrOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator_2E_weak GGS_compileTimeBoolOrOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeBoolOrOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator GGS_compileTimeBoolOrOperator_2E_weak::bang_compileTimeBoolOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeBoolOrOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolOrOperator) ;
      result = GGS_compileTimeBoolOrOperator ((cPtr_compileTimeBoolOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeBoolOrOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2E_weak ("compileTimeBoolOrOperator.weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeBoolOrOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeBoolOrOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeBoolOrOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeBoolOrOperator_2E_weak GGS_compileTimeBoolOrOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeBoolOrOperator_2E_weak result ;
  const GGS_compileTimeBoolOrOperator_2E_weak * p = (const GGS_compileTimeBoolOrOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeBoolOrOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolOrOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_compileTimeIntAST GGS_compileTimeIntAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAST (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntAST::classDescriptor (void) const {
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
//
//     @compileTimeIntAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST ("compileTimeIntAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntAST::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST_2E_weak ("compileTimeIntAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntAST_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntModuloOperator GGS_compileTimeIntModuloOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntModuloOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntModuloOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntModuloOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntModuloOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ("compileTimeIntModuloOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntModuloOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntModuloOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2E_weak ("compileTimeIntModuloOperator.weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntModuloOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntModuloZeroOperator GGS_compileTimeIntModuloZeroOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntModuloZeroOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntModuloZeroOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntModuloZeroOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntModuloZeroOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ("compileTimeIntModuloZeroOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntModuloZeroOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntModuloZeroOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2E_weak ("compileTimeIntModuloZeroOperator.weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntModuloZeroOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntDivideOperator GGS_compileTimeIntDivideOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntDivideOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntDivideOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntDivideOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntDivideOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ("compileTimeIntDivideOperator",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntDivideOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntDivideOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2E_weak ("compileTimeIntDivideOperator.weak",
                                                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntDivideOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntDivideZeroOperator GGS_compileTimeIntDivideZeroOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntDivideZeroOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntDivideZeroOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntDivideZeroOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntDivideZeroOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ("compileTimeIntDivideZeroOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntDivideZeroOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntDivideZeroOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2E_weak ("compileTimeIntDivideZeroOperator.weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntDivideZeroOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntMultiplyOperator GGS_compileTimeIntMultiplyOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMultiplyOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMultiplyOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntMultiplyOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntMultiplyOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ("compileTimeIntMultiplyOperator",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntMultiplyOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntMultiplyOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2E_weak ("compileTimeIntMultiplyOperator.weak",
                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntMultiplyOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntSubtractOperator GGS_compileTimeIntSubtractOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntSubtractOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntSubtractOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntSubtractOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntSubtractOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ("compileTimeIntSubtractOperator",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntSubtractOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntSubtractOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2E_weak ("compileTimeIntSubtractOperator.weak",
                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntSubtractOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntEqualOperator GGS_compileTimeIntEqualOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntEqualOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntEqualOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntEqualOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ("compileTimeIntEqualOperator",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntEqualOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntEqualOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2E_weak ("compileTimeIntEqualOperator.weak",
                                                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntEqualOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntAddOperator GGS_compileTimeIntAddOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntAddOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAddOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntAddOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntAddOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator ("compileTimeIntAddOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntAddOperator::staticTypeDescriptor (void) const {
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
//
//     @compileTimeIntAddOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2E_weak ("compileTimeIntAddOperator.weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntAddOperator_2E_weak::staticTypeDescriptor (void) const {
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

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseAndOperator (inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_compileTimeIntBitWiseAndOperator::classDescriptor (void) const {
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
//
//     @compileTimeIntBitWiseAndOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ("compileTimeIntBitWiseAndOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntBitWiseAndOperator::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseAndOperator_2E_weak::objectCompare (const GGS_compileTimeIntBitWiseAndOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntBitWiseAndOperator_2E_weak::GGS_compileTimeIntBitWiseAndOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak & GGS_compileTimeIntBitWiseAndOperator_2E_weak::operator = (const GGS_compileTimeIntBitWiseAndOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak::GGS_compileTimeIntBitWiseAndOperator_2E_weak (const GGS_compileTimeIntBitWiseAndOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak GGS_compileTimeIntBitWiseAndOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator GGS_compileTimeIntBitWiseAndOperator_2E_weak::bang_compileTimeIntBitWiseAndOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntBitWiseAndOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseAndOperator) ;
      result = GGS_compileTimeIntBitWiseAndOperator ((cPtr_compileTimeIntBitWiseAndOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseAndOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2E_weak ("compileTimeIntBitWiseAndOperator.weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntBitWiseAndOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseAndOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseAndOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseAndOperator_2E_weak GGS_compileTimeIntBitWiseAndOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseAndOperator_2E_weak result ;
  const GGS_compileTimeIntBitWiseAndOperator_2E_weak * p = (const GGS_compileTimeIntBitWiseAndOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseAndOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntShiftLeftOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftLeftOperator::objectCompare (const GGS_compileTimeIntShiftLeftOperator & inOperand) const {
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

GGS_compileTimeIntShiftLeftOperator::GGS_compileTimeIntShiftLeftOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntShiftLeftOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntShiftLeftOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntShiftLeftOperator_init (inCompiler) ;
  const GGS_compileTimeIntShiftLeftOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftLeftOperator::
compileTimeIntShiftLeftOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator::GGS_compileTimeIntShiftLeftOperator (const cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftLeftOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftLeftOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftLeftOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftLeftOperator::cPtr_compileTimeIntShiftLeftOperator (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntShiftLeftOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

void cPtr_compileTimeIntShiftLeftOperator::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntShiftLeftOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftLeftOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftLeftOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntShiftLeftOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftLeftOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ("compileTimeIntShiftLeftOperator",
                                                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntShiftLeftOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftLeftOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftLeftOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator result ;
  const GGS_compileTimeIntShiftLeftOperator * p = (const GGS_compileTimeIntShiftLeftOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftLeftOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftLeftOperator_2E_weak::objectCompare (const GGS_compileTimeIntShiftLeftOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntShiftLeftOperator_2E_weak::GGS_compileTimeIntShiftLeftOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak & GGS_compileTimeIntShiftLeftOperator_2E_weak::operator = (const GGS_compileTimeIntShiftLeftOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak::GGS_compileTimeIntShiftLeftOperator_2E_weak (const GGS_compileTimeIntShiftLeftOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak GGS_compileTimeIntShiftLeftOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator GGS_compileTimeIntShiftLeftOperator_2E_weak::bang_compileTimeIntShiftLeftOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntShiftLeftOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftLeftOperator) ;
      result = GGS_compileTimeIntShiftLeftOperator ((cPtr_compileTimeIntShiftLeftOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftLeftOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2E_weak ("compileTimeIntShiftLeftOperator.weak",
                                                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntShiftLeftOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftLeftOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftLeftOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftLeftOperator_2E_weak GGS_compileTimeIntShiftLeftOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftLeftOperator_2E_weak result ;
  const GGS_compileTimeIntShiftLeftOperator_2E_weak * p = (const GGS_compileTimeIntShiftLeftOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftLeftOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntShiftRightOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftRightOperator::objectCompare (const GGS_compileTimeIntShiftRightOperator & inOperand) const {
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

GGS_compileTimeIntShiftRightOperator::GGS_compileTimeIntShiftRightOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntShiftRightOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntShiftRightOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntShiftRightOperator_init (inCompiler) ;
  const GGS_compileTimeIntShiftRightOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftRightOperator::
compileTimeIntShiftRightOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator::GGS_compileTimeIntShiftRightOperator (const cPtr_compileTimeIntShiftRightOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftRightOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftRightOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftRightOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftRightOperator::cPtr_compileTimeIntShiftRightOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntShiftRightOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

void cPtr_compileTimeIntShiftRightOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntShiftRightOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftRightOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftRightOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntShiftRightOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftRightOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ("compileTimeIntShiftRightOperator",
                                                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntShiftRightOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftRightOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftRightOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator result ;
  const GGS_compileTimeIntShiftRightOperator * p = (const GGS_compileTimeIntShiftRightOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftRightOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntShiftRightOperator_2E_weak::objectCompare (const GGS_compileTimeIntShiftRightOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntShiftRightOperator_2E_weak::GGS_compileTimeIntShiftRightOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak & GGS_compileTimeIntShiftRightOperator_2E_weak::operator = (const GGS_compileTimeIntShiftRightOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak::GGS_compileTimeIntShiftRightOperator_2E_weak (const GGS_compileTimeIntShiftRightOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak GGS_compileTimeIntShiftRightOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator GGS_compileTimeIntShiftRightOperator_2E_weak::bang_compileTimeIntShiftRightOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntShiftRightOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftRightOperator) ;
      result = GGS_compileTimeIntShiftRightOperator ((cPtr_compileTimeIntShiftRightOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntShiftRightOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2E_weak ("compileTimeIntShiftRightOperator.weak",
                                                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntShiftRightOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntShiftRightOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntShiftRightOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntShiftRightOperator_2E_weak GGS_compileTimeIntShiftRightOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntShiftRightOperator_2E_weak result ;
  const GGS_compileTimeIntShiftRightOperator_2E_weak * p = (const GGS_compileTimeIntShiftRightOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntShiftRightOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntLessThanOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLessThanOperator::objectCompare (const GGS_compileTimeIntLessThanOperator & inOperand) const {
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

GGS_compileTimeIntLessThanOperator::GGS_compileTimeIntLessThanOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntLessThanOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntLessThanOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntLessThanOperator_init (inCompiler) ;
  const GGS_compileTimeIntLessThanOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLessThanOperator::
compileTimeIntLessThanOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator::GGS_compileTimeIntLessThanOperator (const cPtr_compileTimeIntLessThanOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLessThanOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLessThanOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLessThanOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLessThanOperator::cPtr_compileTimeIntLessThanOperator (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntLessThanOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

void cPtr_compileTimeIntLessThanOperator::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntLessThanOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLessThanOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntLessThanOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntLessThanOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLessThanOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ("compileTimeIntLessThanOperator",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntLessThanOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLessThanOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLessThanOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator result ;
  const GGS_compileTimeIntLessThanOperator * p = (const GGS_compileTimeIntLessThanOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLessThanOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLessThanOperator_2E_weak::objectCompare (const GGS_compileTimeIntLessThanOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntLessThanOperator_2E_weak::GGS_compileTimeIntLessThanOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak & GGS_compileTimeIntLessThanOperator_2E_weak::operator = (const GGS_compileTimeIntLessThanOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak::GGS_compileTimeIntLessThanOperator_2E_weak (const GGS_compileTimeIntLessThanOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak GGS_compileTimeIntLessThanOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator GGS_compileTimeIntLessThanOperator_2E_weak::bang_compileTimeIntLessThanOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntLessThanOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLessThanOperator) ;
      result = GGS_compileTimeIntLessThanOperator ((cPtr_compileTimeIntLessThanOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLessThanOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2E_weak ("compileTimeIntLessThanOperator.weak",
                                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntLessThanOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLessThanOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLessThanOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLessThanOperator_2E_weak GGS_compileTimeIntLessThanOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLessThanOperator_2E_weak result ;
  const GGS_compileTimeIntLessThanOperator_2E_weak * p = (const GGS_compileTimeIntLessThanOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLessThanOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntLowerOrEqualOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLowerOrEqualOperator::objectCompare (const GGS_compileTimeIntLowerOrEqualOperator & inOperand) const {
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

GGS_compileTimeIntLowerOrEqualOperator::GGS_compileTimeIntLowerOrEqualOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntLowerOrEqualOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntLowerOrEqualOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntLowerOrEqualOperator_init (inCompiler) ;
  const GGS_compileTimeIntLowerOrEqualOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLowerOrEqualOperator::
compileTimeIntLowerOrEqualOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator::GGS_compileTimeIntLowerOrEqualOperator (const cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLowerOrEqualOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLowerOrEqualOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLowerOrEqualOperator::cPtr_compileTimeIntLowerOrEqualOperator (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntLowerOrEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

void cPtr_compileTimeIntLowerOrEqualOperator::description (String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntLowerOrEqualOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLowerOrEqualOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntLowerOrEqualOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntLowerOrEqualOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLowerOrEqualOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ("compileTimeIntLowerOrEqualOperator",
                                                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntLowerOrEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLowerOrEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLowerOrEqualOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  const GGS_compileTimeIntLowerOrEqualOperator * p = (const GGS_compileTimeIntLowerOrEqualOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLowerOrEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntLowerOrEqualOperator_2E_weak::objectCompare (const GGS_compileTimeIntLowerOrEqualOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntLowerOrEqualOperator_2E_weak::GGS_compileTimeIntLowerOrEqualOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak & GGS_compileTimeIntLowerOrEqualOperator_2E_weak::operator = (const GGS_compileTimeIntLowerOrEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak::GGS_compileTimeIntLowerOrEqualOperator_2E_weak (const GGS_compileTimeIntLowerOrEqualOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak GGS_compileTimeIntLowerOrEqualOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator GGS_compileTimeIntLowerOrEqualOperator_2E_weak::bang_compileTimeIntLowerOrEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntLowerOrEqualOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
      result = GGS_compileTimeIntLowerOrEqualOperator ((cPtr_compileTimeIntLowerOrEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntLowerOrEqualOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2E_weak ("compileTimeIntLowerOrEqualOperator.weak",
                                                                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntLowerOrEqualOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntLowerOrEqualOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntLowerOrEqualOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntLowerOrEqualOperator_2E_weak GGS_compileTimeIntLowerOrEqualOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntLowerOrEqualOperator_2E_weak result ;
  const GGS_compileTimeIntLowerOrEqualOperator_2E_weak * p = (const GGS_compileTimeIntLowerOrEqualOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntLowerOrEqualOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntXorOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntXorOperator::objectCompare (const GGS_compileTimeIntXorOperator & inOperand) const {
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

GGS_compileTimeIntXorOperator::GGS_compileTimeIntXorOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntXorOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntXorOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntXorOperator_init (inCompiler) ;
  const GGS_compileTimeIntXorOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntXorOperator::
compileTimeIntXorOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator::GGS_compileTimeIntXorOperator (const cPtr_compileTimeIntXorOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntXorOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntXorOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntXorOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntXorOperator::cPtr_compileTimeIntXorOperator (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

void cPtr_compileTimeIntXorOperator::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntXorOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntXorOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntXorOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntXorOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntXorOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator ("compileTimeIntXorOperator",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntXorOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator result ;
  const GGS_compileTimeIntXorOperator * p = (const GGS_compileTimeIntXorOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntXorOperator_2E_weak::objectCompare (const GGS_compileTimeIntXorOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntXorOperator_2E_weak::GGS_compileTimeIntXorOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak & GGS_compileTimeIntXorOperator_2E_weak::operator = (const GGS_compileTimeIntXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak::GGS_compileTimeIntXorOperator_2E_weak (const GGS_compileTimeIntXorOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak GGS_compileTimeIntXorOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator GGS_compileTimeIntXorOperator_2E_weak::bang_compileTimeIntXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntXorOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntXorOperator) ;
      result = GGS_compileTimeIntXorOperator ((cPtr_compileTimeIntXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntXorOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2E_weak ("compileTimeIntXorOperator.weak",
                                                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntXorOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntXorOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntXorOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntXorOperator_2E_weak GGS_compileTimeIntXorOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntXorOperator_2E_weak result ;
  const GGS_compileTimeIntXorOperator_2E_weak * p = (const GGS_compileTimeIntXorOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntXorOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseOrOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseOrOperator::objectCompare (const GGS_compileTimeIntBitWiseOrOperator & inOperand) const {
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

GGS_compileTimeIntBitWiseOrOperator::GGS_compileTimeIntBitWiseOrOperator (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntBitWiseOrOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntBitWiseOrOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntBitWiseOrOperator_init (inCompiler) ;
  const GGS_compileTimeIntBitWiseOrOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseOrOperator::
compileTimeIntBitWiseOrOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator::GGS_compileTimeIntBitWiseOrOperator (const cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseOrOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseOrOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseOrOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseOrOperator::cPtr_compileTimeIntBitWiseOrOperator (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntBitWiseOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

void cPtr_compileTimeIntBitWiseOrOperator::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntBitWiseOrOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseOrOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseOrOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntBitWiseOrOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseOrOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ("compileTimeIntBitWiseOrOperator",
                                                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntBitWiseOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseOrOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator result ;
  const GGS_compileTimeIntBitWiseOrOperator * p = (const GGS_compileTimeIntBitWiseOrOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntBitWiseOrOperator_2E_weak::objectCompare (const GGS_compileTimeIntBitWiseOrOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntBitWiseOrOperator_2E_weak::GGS_compileTimeIntBitWiseOrOperator_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak & GGS_compileTimeIntBitWiseOrOperator_2E_weak::operator = (const GGS_compileTimeIntBitWiseOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak::GGS_compileTimeIntBitWiseOrOperator_2E_weak (const GGS_compileTimeIntBitWiseOrOperator & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak GGS_compileTimeIntBitWiseOrOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator GGS_compileTimeIntBitWiseOrOperator_2E_weak::bang_compileTimeIntBitWiseOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntBitWiseOrOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseOrOperator) ;
      result = GGS_compileTimeIntBitWiseOrOperator ((cPtr_compileTimeIntBitWiseOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntBitWiseOrOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2E_weak ("compileTimeIntBitWiseOrOperator.weak",
                                                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntBitWiseOrOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntBitWiseOrOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntBitWiseOrOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntBitWiseOrOperator_2E_weak GGS_compileTimeIntBitWiseOrOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntBitWiseOrOperator_2E_weak result ;
  const GGS_compileTimeIntBitWiseOrOperator_2E_weak * p = (const GGS_compileTimeIntBitWiseOrOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntBitWiseOrOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntMinusOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntMinusOperator::objectCompare (const GGS_compileTimeIntMinusOperator & inOperand) const {
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

GGS_compileTimeIntMinusOperator::GGS_compileTimeIntMinusOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntMinusOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntMinusOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntMinusOperator_init (inCompiler) ;
  const GGS_compileTimeIntMinusOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMinusOperator::
compileTimeIntMinusOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator::GGS_compileTimeIntMinusOperator (const cPtr_compileTimeIntMinusOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMinusOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMinusOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMinusOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMinusOperator::cPtr_compileTimeIntMinusOperator (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntMinusOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

void cPtr_compileTimeIntMinusOperator::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntMinusOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMinusOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntMinusOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntMinusOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMinusOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ("compileTimeIntMinusOperator",
                                                                                   & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntMinusOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntMinusOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntMinusOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator result ;
  const GGS_compileTimeIntMinusOperator * p = (const GGS_compileTimeIntMinusOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntMinusOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntMinusOperator_2E_weak::objectCompare (const GGS_compileTimeIntMinusOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntMinusOperator_2E_weak::GGS_compileTimeIntMinusOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak & GGS_compileTimeIntMinusOperator_2E_weak::operator = (const GGS_compileTimeIntMinusOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak::GGS_compileTimeIntMinusOperator_2E_weak (const GGS_compileTimeIntMinusOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak GGS_compileTimeIntMinusOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator GGS_compileTimeIntMinusOperator_2E_weak::bang_compileTimeIntMinusOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntMinusOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMinusOperator) ;
      result = GGS_compileTimeIntMinusOperator ((cPtr_compileTimeIntMinusOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntMinusOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2E_weak ("compileTimeIntMinusOperator.weak",
                                                                                           & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntMinusOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntMinusOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntMinusOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntMinusOperator_2E_weak GGS_compileTimeIntMinusOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntMinusOperator_2E_weak result ;
  const GGS_compileTimeIntMinusOperator_2E_weak * p = (const GGS_compileTimeIntMinusOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntMinusOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeIntComplementOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntComplementOperator::objectCompare (const GGS_compileTimeIntComplementOperator & inOperand) const {
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

GGS_compileTimeIntComplementOperator::GGS_compileTimeIntComplementOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeIntComplementOperator * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeIntComplementOperator (inCompiler COMMA_THERE)) ;
  object->compileTimeIntComplementOperator_init (inCompiler) ;
  const GGS_compileTimeIntComplementOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntComplementOperator::
compileTimeIntComplementOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator::GGS_compileTimeIntComplementOperator (const cPtr_compileTimeIntComplementOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntComplementOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntComplementOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntComplementOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeIntComplementOperator::cPtr_compileTimeIntComplementOperator (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntComplementOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

void cPtr_compileTimeIntComplementOperator::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeIntComplementOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntComplementOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeIntComplementOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeIntComplementOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntComplementOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ("compileTimeIntComplementOperator",
                                                                                        & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntComplementOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntComplementOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntComplementOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator result ;
  const GGS_compileTimeIntComplementOperator * p = (const GGS_compileTimeIntComplementOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntComplementOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeIntComplementOperator_2E_weak::objectCompare (const GGS_compileTimeIntComplementOperator_2E_weak & inOperand) const {
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

GGS_compileTimeIntComplementOperator_2E_weak::GGS_compileTimeIntComplementOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak & GGS_compileTimeIntComplementOperator_2E_weak::operator = (const GGS_compileTimeIntComplementOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak::GGS_compileTimeIntComplementOperator_2E_weak (const GGS_compileTimeIntComplementOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak GGS_compileTimeIntComplementOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator GGS_compileTimeIntComplementOperator_2E_weak::bang_compileTimeIntComplementOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeIntComplementOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntComplementOperator) ;
      result = GGS_compileTimeIntComplementOperator ((cPtr_compileTimeIntComplementOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeIntComplementOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2E_weak ("compileTimeIntComplementOperator.weak",
                                                                                                & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeIntComplementOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeIntComplementOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeIntComplementOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeIntComplementOperator_2E_weak GGS_compileTimeIntComplementOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeIntComplementOperator_2E_weak result ;
  const GGS_compileTimeIntComplementOperator_2E_weak * p = (const GGS_compileTimeIntComplementOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeIntComplementOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolTypeAST::objectCompare (const GGS_boolTypeAST & inOperand) const {
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

GGS_boolTypeAST::GGS_boolTypeAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  object->boolTypeAST_init (inCompiler) ;
  const GGS_boolTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::
boolTypeAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST::GGS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolTypeAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolTypeAST::cPtr_boolTypeAST (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

void cPtr_boolTypeAST::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolTypeAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolTypeAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @boolTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST ("boolTypeAST",
                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST result ;
  const GGS_boolTypeAST * p = (const GGS_boolTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolTypeAST_2E_weak::objectCompare (const GGS_boolTypeAST_2E_weak & inOperand) const {
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

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak & GGS_boolTypeAST_2E_weak::operator = (const GGS_boolTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak::GGS_boolTypeAST_2E_weak (const GGS_boolTypeAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak GGS_boolTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST GGS_boolTypeAST_2E_weak::bang_boolTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolTypeAST) ;
      result = GGS_boolTypeAST ((cPtr_boolTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolTypeAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ("boolTypeAST.weak",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolTypeAST_2E_weak GGS_boolTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_boolTypeAST_2E_weak result ;
  const GGS_boolTypeAST_2E_weak * p = (const GGS_boolTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolImplicitConverterToBoolean::objectCompare (const GGS_boolImplicitConverterToBoolean & inOperand) const {
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

GGS_boolImplicitConverterToBoolean::GGS_boolImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->boolImplicitConverterToBoolean_init (inCompiler) ;
  const GGS_boolImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::
boolImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean::GGS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolImplicitConverterToBoolean::cPtr_boolImplicitConverterToBoolean (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

void cPtr_boolImplicitConverterToBoolean::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolImplicitConverterToBoolean]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @boolImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ("boolImplicitConverterToBoolean",
                                                                                      & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean result ;
  const GGS_boolImplicitConverterToBoolean * p = (const GGS_boolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_boolImplicitConverterToBoolean_2E_weak & inOperand) const {
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

GGS_boolImplicitConverterToBoolean_2E_weak::GGS_boolImplicitConverterToBoolean_2E_weak (void) :
GGS_abstractImplicitConverterToBoolean_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak & GGS_boolImplicitConverterToBoolean_2E_weak::operator = (const GGS_boolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak::GGS_boolImplicitConverterToBoolean_2E_weak (const GGS_boolImplicitConverterToBoolean & inSource) :
GGS_abstractImplicitConverterToBoolean_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak GGS_boolImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean_2E_weak::bang_boolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolImplicitConverterToBoolean) ;
      result = GGS_boolImplicitConverterToBoolean ((cPtr_boolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolImplicitConverterToBoolean.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ("boolImplicitConverterToBoolean.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak GGS_boolImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean_2E_weak result ;
  const GGS_boolImplicitConverterToBoolean_2E_weak * p = (const GGS_boolImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolNotOperator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolNotOperator::objectCompare (const GGS_boolNotOperator & inOperand) const {
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

GGS_boolNotOperator::GGS_boolNotOperator (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolNotOperator * object = nullptr ;
  macroMyNew (object, cPtr_boolNotOperator (inCompiler COMMA_THERE)) ;
  object->boolNotOperator_init (inCompiler) ;
  const GGS_boolNotOperator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolNotOperator::
boolNotOperator_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator::GGS_boolNotOperator (const cPtr_boolNotOperator * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolNotOperator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_boolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_boolNotOperator (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolNotOperator class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolNotOperator::cPtr_boolNotOperator (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

void cPtr_boolNotOperator::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolNotOperator]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolNotOperator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolNotOperator (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolNotOperator::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @boolNotOperator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator ("boolNotOperator",
                                                                       & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolNotOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_boolNotOperator result ;
  const GGS_boolNotOperator * p = (const GGS_boolNotOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolNotOperator_2E_weak::objectCompare (const GGS_boolNotOperator_2E_weak & inOperand) const {
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

GGS_boolNotOperator_2E_weak::GGS_boolNotOperator_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak & GGS_boolNotOperator_2E_weak::operator = (const GGS_boolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak::GGS_boolNotOperator_2E_weak (const GGS_boolNotOperator & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak GGS_boolNotOperator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolNotOperator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator GGS_boolNotOperator_2E_weak::bang_boolNotOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolNotOperator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolNotOperator) ;
      result = GGS_boolNotOperator ((cPtr_boolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolNotOperator.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ("boolNotOperator.weak",
                                                                               & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolNotOperator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolNotOperator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolNotOperator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolNotOperator_2E_weak GGS_boolNotOperator_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_boolNotOperator_2E_weak result ;
  const GGS_boolNotOperator_2E_weak * p = (const GGS_boolNotOperator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolNotOperator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeAliasDeclarationAST_2E_weak::objectCompare (const GGS_typeAliasDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeAliasDeclarationAST_2E_weak::GGS_typeAliasDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak & GGS_typeAliasDeclarationAST_2E_weak::operator = (const GGS_typeAliasDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak::GGS_typeAliasDeclarationAST_2E_weak (const GGS_typeAliasDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak GGS_typeAliasDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeAliasDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST GGS_typeAliasDeclarationAST_2E_weak::bang_typeAliasDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeAliasDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeAliasDeclarationAST) ;
      result = GGS_typeAliasDeclarationAST ((cPtr_typeAliasDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeAliasDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2E_weak ("typeAliasDeclarationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeAliasDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeAliasDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeAliasDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeAliasDeclarationAST_2E_weak GGS_typeAliasDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeAliasDeclarationAST_2E_weak result ;
  const GGS_typeAliasDeclarationAST_2E_weak * p = (const GGS_typeAliasDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeAliasDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @expressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_expressionAST::staticTypeDescriptor (void) const {
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
//
//     @fixedSizeArrayTypeDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ("fixedSizeArrayTypeDeclarationAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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
//
//     @userLLVMStaticArrayTypeDefinitionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ("userLLVMStaticArrayTypeDefinitionIR.weak",
                                                                                                   & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ("abstractAssignmentOperatorUsage",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractAssignmentOperatorUsage::staticTypeDescriptor (void) const {
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

GGS_abstractAssignmentOperatorUsage_2E_weak::GGS_abstractAssignmentOperatorUsage_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage_2E_weak & GGS_abstractAssignmentOperatorUsage_2E_weak::operator = (const GGS_abstractAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_abstractAssignmentOperatorUsage_2E_weak::bang_abstractAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @abstractAssignmentOperatorUsage.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ("abstractAssignmentOperatorUsage.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
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
//
//     @abstractRoutineIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak ("abstractRoutineIR.weak",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractRoutineIR_2E_weak::staticTypeDescriptor (void) const {
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
//
//     @staticArrayTypeAssignFunctionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ("staticArrayTypeAssignFunctionIR.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticArrayTypeAssignFunctionIR_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_typeDynamicArrayDeclarationAST_2E_weak::objectCompare (const GGS_typeDynamicArrayDeclarationAST_2E_weak & inOperand) const {
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

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak & GGS_typeDynamicArrayDeclarationAST_2E_weak::operator = (const GGS_typeDynamicArrayDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak::GGS_typeDynamicArrayDeclarationAST_2E_weak (const GGS_typeDynamicArrayDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak GGS_typeDynamicArrayDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST_2E_weak::bang_typeDynamicArrayDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeDynamicArrayDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDynamicArrayDeclarationAST) ;
      result = GGS_typeDynamicArrayDeclarationAST ((cPtr_typeDynamicArrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeDynamicArrayDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ("typeDynamicArrayDeclarationAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeDynamicArrayDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDynamicArrayDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDynamicArrayDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST_2E_weak GGS_typeDynamicArrayDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
  const GGS_typeDynamicArrayDeclarationAST_2E_weak * p = (const GGS_typeDynamicArrayDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDynamicArrayDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayRemoveAllFunctionIR_2E_weak::objectCompare (const GGS_dynArrayRemoveAllFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak & GGS_dynArrayRemoveAllFunctionIR_2E_weak::operator = (const GGS_dynArrayRemoveAllFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak::GGS_dynArrayRemoveAllFunctionIR_2E_weak (const GGS_dynArrayRemoveAllFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak GGS_dynArrayRemoveAllFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR_2E_weak::bang_dynArrayRemoveAllFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayRemoveAllFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayRemoveAllFunctionIR) ;
      result = GGS_dynArrayRemoveAllFunctionIR ((cPtr_dynArrayRemoveAllFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dynArrayRemoveAllFunctionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ("dynArrayRemoveAllFunctionIR.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynArrayRemoveAllFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayRemoveAllFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayRemoveAllFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR_2E_weak GGS_dynArrayRemoveAllFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
  const GGS_dynArrayRemoveAllFunctionIR_2E_weak * p = (const GGS_dynArrayRemoveAllFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayRemoveAllFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayLengthFunctionIR_2E_weak::objectCompare (const GGS_dynArrayLengthFunctionIR_2E_weak & inOperand) const {
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

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak & GGS_dynArrayLengthFunctionIR_2E_weak::operator = (const GGS_dynArrayLengthFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak::GGS_dynArrayLengthFunctionIR_2E_weak (const GGS_dynArrayLengthFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak GGS_dynArrayLengthFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR_2E_weak::bang_dynArrayLengthFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dynArrayLengthFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayLengthFunctionIR) ;
      result = GGS_dynArrayLengthFunctionIR ((cPtr_dynArrayLengthFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dynArrayLengthFunctionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ("dynArrayLengthFunctionIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dynArrayLengthFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayLengthFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayLengthFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR_2E_weak GGS_dynArrayLengthFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR_2E_weak result ;
  const GGS_dynArrayLengthFunctionIR_2E_weak * p = (const GGS_dynArrayLengthFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayLengthFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

