#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_panicRoutinePriorityMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_panicRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_panicRoutinePriorityMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_panicRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_panicRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_panicRoutinePriorityMap * operand = (cMapElement_panicRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap & GALGAS_panicRoutinePriorityMap::operator = (const GALGAS_panicRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_panicRoutinePriorityMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::setter_insertSetupKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic setup routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::setter_insertLoopKey (GALGAS_lstring inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic loop routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey = "there is no panic setup routine with priority %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::method_searchSetupKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey
                                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey = "there is no panic loop routine with priority %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap::method_searchLoopKey (GALGAS_lstring inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey
                                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_panicRoutinePriorityMap * GALGAS_panicRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * result = (cMapElement_panicRoutinePriorityMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_panicRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_panicRoutinePriorityMap::cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element cEnumerator_panicRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  return GALGAS_panicRoutinePriorityMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_panicRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @panicRoutinePriorityMap type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap ("panicRoutinePriorityMap",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  const GALGAS_panicRoutinePriorityMap * p = (const GALGAS_panicRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bootRoutinePriorityMap::cMapElement_bootRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_bootRoutinePriorityMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_bootRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_bootRoutinePriorityMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_bootRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_bootRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_bootRoutinePriorityMap * operand = (cMapElement_bootRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap::GALGAS_bootRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap::GALGAS_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap & GALGAS_bootRoutinePriorityMap::operator = (const GALGAS_bootRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_bootRoutinePriorityMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_bootRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_bootRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bootRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap::setter_insertKey (GALGAS_lstring inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_bootRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a boot routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bootRoutinePriorityMap * GALGAS_bootRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * result = (cMapElement_bootRoutinePriorityMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bootRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootRoutinePriorityMap::cEnumerator_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element cEnumerator_bootRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_bootRoutinePriorityMap * p = (const cMapElement_bootRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bootRoutinePriorityMap) ;
  return GALGAS_bootRoutinePriorityMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_bootRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bootRoutinePriorityMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootRoutinePriorityMap ("bootRoutinePriorityMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  const GALGAS_bootRoutinePriorityMap * p = (const GALGAS_bootRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@bootListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_bootListIR : public cCollectionElement {
  public : GALGAS_bootListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_bootListIR (const GALGAS_bigint & in_mBootIndex,
                                          const GALGAS_location & in_mInitLocation,
                                          const GALGAS_allocaList & in_mAllocaList,
                                          const GALGAS_instructionListIR & in_mInstructionListIR,
                                          const GALGAS_location & in_mEndOfInitLocation
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_bootListIR::cCollectionElement_bootListIR (const GALGAS_bigint & in_mBootIndex,
                                                              const GALGAS_location & in_mInitLocation,
                                                              const GALGAS_allocaList & in_mAllocaList,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR,
                                                              const GALGAS_location & in_mEndOfInitLocation
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBootIndex, in_mInitLocation, in_mAllocaList, in_mInstructionListIR, in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_bootListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_bootListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bootListIR (mObject.mAttribute_mBootIndex, mObject.mAttribute_mInitLocation, mObject.mAttribute_mAllocaList, mObject.mAttribute_mInstructionListIR, mObject.mAttribute_mEndOfInitLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_bootListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBootIndex" ":" ;
  mObject.mAttribute_mBootIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitLocation" ":" ;
  mObject.mAttribute_mInitLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mObject.mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListIR" ":" ;
  mObject.mAttribute_mInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInitLocation" ":" ;
  mObject.mAttribute_mEndOfInitLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_bootListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bootListIR * operand = (cCollectionElement_bootListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bootListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR::GALGAS_bootListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR::GALGAS_bootListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::constructor_listWithValue (const GALGAS_bigint & inOperand0,
                                                                const GALGAS_location & inOperand1,
                                                                const GALGAS_allocaList & inOperand2,
                                                                const GALGAS_instructionListIR & inOperand3,
                                                                const GALGAS_location & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_bootListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_bigint & in_mBootIndex,
                                                   const GALGAS_location & in_mInitLocation,
                                                   const GALGAS_allocaList & in_mAllocaList,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR,
                                                   const GALGAS_location & in_mEndOfInitLocation
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_bootListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_bootListIR (in_mBootIndex,
                                                in_mInitLocation,
                                                in_mAllocaList,
                                                in_mInstructionListIR,
                                                in_mEndOfInitLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::addAssign_operation (const GALGAS_bigint & inOperand0,
                                             const GALGAS_location & inOperand1,
                                             const GALGAS_allocaList & inOperand2,
                                             const GALGAS_instructionListIR & inOperand3,
                                             const GALGAS_location & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_insertAtIndex (const GALGAS_bigint inOperand0,
                                              const GALGAS_location inOperand1,
                                              const GALGAS_allocaList inOperand2,
                                              const GALGAS_instructionListIR inOperand3,
                                              const GALGAS_location inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_removeAtIndex (GALGAS_bigint & outOperand0,
                                              GALGAS_location & outOperand1,
                                              GALGAS_allocaList & outOperand2,
                                              GALGAS_instructionListIR & outOperand3,
                                              GALGAS_location & outOperand4,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bootListIR) ;
      outOperand0 = p->mObject.mAttribute_mBootIndex ;
      outOperand1 = p->mObject.mAttribute_mInitLocation ;
      outOperand2 = p->mObject.mAttribute_mAllocaList ;
      outOperand3 = p->mObject.mAttribute_mInstructionListIR ;
      outOperand4 = p->mObject.mAttribute_mEndOfInitLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_popFirst (GALGAS_bigint & outOperand0,
                                         GALGAS_location & outOperand1,
                                         GALGAS_allocaList & outOperand2,
                                         GALGAS_instructionListIR & outOperand3,
                                         GALGAS_location & outOperand4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mBootIndex ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mAllocaList ;
    outOperand3 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand4 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::setter_popLast (GALGAS_bigint & outOperand0,
                                        GALGAS_location & outOperand1,
                                        GALGAS_allocaList & outOperand2,
                                        GALGAS_instructionListIR & outOperand3,
                                        GALGAS_location & outOperand4,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mBootIndex ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mAllocaList ;
    outOperand3 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand4 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_first (GALGAS_bigint & outOperand0,
                                      GALGAS_location & outOperand1,
                                      GALGAS_allocaList & outOperand2,
                                      GALGAS_instructionListIR & outOperand3,
                                      GALGAS_location & outOperand4,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mBootIndex ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mAllocaList ;
    outOperand3 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand4 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_last (GALGAS_bigint & outOperand0,
                                     GALGAS_location & outOperand1,
                                     GALGAS_allocaList & outOperand2,
                                     GALGAS_instructionListIR & outOperand3,
                                     GALGAS_location & outOperand4,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mBootIndex ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mAllocaList ;
    outOperand3 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand4 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::add_operation (const GALGAS_bootListIR & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bootListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::plusAssign_operation (const GALGAS_bootListIR inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bootListIR::getter_mBootIndexAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mBootIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR::getter_mInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mInitLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_bootListIR::getter_mAllocaListAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_bootListIR::getter_mInstructionListIRAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mInstructionListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR::getter_mEndOfInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mEndOfInitLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootListIR::cEnumerator_bootListIR (const GALGAS_bootListIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element cEnumerator_bootListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_bootListIR::current_mBootIndex (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mBootIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootListIR::current_mInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_bootListIR::current_mAllocaList (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_bootListIR::current_mInstructionListIR (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootListIR::current_mEndOfInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mEndOfInitLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @bootListIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootListIR ("bootListIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  const GALGAS_bootListIR * p = (const GALGAS_bootListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutineMap::cMapElement_initRoutineMap (const GALGAS_lstring & inKey
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_initRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_initRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_initRoutineMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_initRoutineMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_initRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_initRoutineMap * operand = (cMapElement_initRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap::GALGAS_initRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap::GALGAS_initRoutineMap (const GALGAS_initRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap & GALGAS_initRoutineMap::operator = (const GALGAS_initRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::constructor_mapWithMapToOverride (const GALGAS_initRoutineMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_initRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@initRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%%%K' init routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_initRoutineMap_searchKey = "there is no '%%%K' init routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_initRoutineMap * p = (const cMapElement_initRoutineMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_initRoutineMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_initRoutineMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutineMap * GALGAS_initRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * result = (cMapElement_initRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_initRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRoutineMap::cEnumerator_initRoutineMap (const GALGAS_initRoutineMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element cEnumerator_initRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_initRoutineMap * p = (const cMapElement_initRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_initRoutineMap) ;
  return GALGAS_initRoutineMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @initRoutineMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutineMap ("initRoutineMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  const GALGAS_initRoutineMap * p = (const GALGAS_initRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutinePriorityMap::cMapElement_initRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_initRoutinePriorityMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_initRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_initRoutinePriorityMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_initRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_initRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_initRoutinePriorityMap * operand = (cMapElement_initRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap::GALGAS_initRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap::GALGAS_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap & GALGAS_initRoutinePriorityMap::operator = (const GALGAS_initRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_initRoutinePriorityMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_initRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@initRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap::setter_insertKey (GALGAS_lstring inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "an init routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutinePriorityMap * GALGAS_initRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * result = (cMapElement_initRoutinePriorityMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_initRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRoutinePriorityMap::cEnumerator_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element cEnumerator_initRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_initRoutinePriorityMap * p = (const cMapElement_initRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_initRoutinePriorityMap) ;
  return GALGAS_initRoutinePriorityMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRoutinePriorityMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutinePriorityMap ("initRoutinePriorityMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  const GALGAS_initRoutinePriorityMap * p = (const GALGAS_initRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@initListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_initListIR : public cCollectionElement {
  public : GALGAS_initListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_initListIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                          const GALGAS_string & in_mGlobalVariable,
                                          const GALGAS_lstringlist & in_mInitRequiredByProcList,
                                          const GALGAS_bigint & in_mPriority,
                                          const GALGAS_allocaList & in_mAllocaList,
                                          const GALGAS_instructionListIR & in_mInstructionListIR
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_initListIR::cCollectionElement_initListIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                                              const GALGAS_string & in_mGlobalVariable,
                                                              const GALGAS_lstringlist & in_mInitRequiredByProcList,
                                                              const GALGAS_bigint & in_mPriority,
                                                              const GALGAS_allocaList & in_mAllocaList,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelfType, in_mGlobalVariable, in_mInitRequiredByProcList, in_mPriority, in_mAllocaList, in_mInstructionListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_initListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_initListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_initListIR (mObject.mAttribute_mSelfType, mObject.mAttribute_mGlobalVariable, mObject.mAttribute_mInitRequiredByProcList, mObject.mAttribute_mPriority, mObject.mAttribute_mAllocaList, mObject.mAttribute_mInstructionListIR COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_initListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelfType" ":" ;
  mObject.mAttribute_mSelfType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobalVariable" ":" ;
  mObject.mAttribute_mGlobalVariable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitRequiredByProcList" ":" ;
  mObject.mAttribute_mInitRequiredByProcList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mAttribute_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mObject.mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListIR" ":" ;
  mObject.mAttribute_mInstructionListIR.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_initListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_initListIR * operand = (cCollectionElement_initListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_initListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR::GALGAS_initListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR::GALGAS_initListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_initListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_bigint & inOperand3,
                                                                const GALGAS_allocaList & inOperand4,
                                                                const GALGAS_instructionListIR & inOperand5
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_initListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                                   const GALGAS_string & in_mGlobalVariable,
                                                   const GALGAS_lstringlist & in_mInitRequiredByProcList,
                                                   const GALGAS_bigint & in_mPriority,
                                                   const GALGAS_allocaList & in_mAllocaList,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_initListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_initListIR (in_mSelfType,
                                                in_mGlobalVariable,
                                                in_mInitRequiredByProcList,
                                                in_mPriority,
                                                in_mAllocaList,
                                                in_mInstructionListIR COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                             const GALGAS_string & inOperand1,
                                             const GALGAS_lstringlist & inOperand2,
                                             const GALGAS_bigint & inOperand3,
                                             const GALGAS_allocaList & inOperand4,
                                             const GALGAS_instructionListIR & inOperand5
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                              const GALGAS_string inOperand1,
                                              const GALGAS_lstringlist inOperand2,
                                              const GALGAS_bigint inOperand3,
                                              const GALGAS_allocaList inOperand4,
                                              const GALGAS_instructionListIR inOperand5,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_lstringlist & outOperand2,
                                              GALGAS_bigint & outOperand3,
                                              GALGAS_allocaList & outOperand4,
                                              GALGAS_instructionListIR & outOperand5,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_initListIR) ;
      outOperand0 = p->mObject.mAttribute_mSelfType ;
      outOperand1 = p->mObject.mAttribute_mGlobalVariable ;
      outOperand2 = p->mObject.mAttribute_mInitRequiredByProcList ;
      outOperand3 = p->mObject.mAttribute_mPriority ;
      outOperand4 = p->mObject.mAttribute_mAllocaList ;
      outOperand5 = p->mObject.mAttribute_mInstructionListIR ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_lstringlist & outOperand2,
                                         GALGAS_bigint & outOperand3,
                                         GALGAS_allocaList & outOperand4,
                                         GALGAS_instructionListIR & outOperand5,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mSelfType ;
    outOperand1 = p->mObject.mAttribute_mGlobalVariable ;
    outOperand2 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
    outOperand4 = p->mObject.mAttribute_mAllocaList ;
    outOperand5 = p->mObject.mAttribute_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_lstringlist & outOperand2,
                                        GALGAS_bigint & outOperand3,
                                        GALGAS_allocaList & outOperand4,
                                        GALGAS_instructionListIR & outOperand5,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mSelfType ;
    outOperand1 = p->mObject.mAttribute_mGlobalVariable ;
    outOperand2 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
    outOperand4 = p->mObject.mAttribute_mAllocaList ;
    outOperand5 = p->mObject.mAttribute_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                      GALGAS_string & outOperand1,
                                      GALGAS_lstringlist & outOperand2,
                                      GALGAS_bigint & outOperand3,
                                      GALGAS_allocaList & outOperand4,
                                      GALGAS_instructionListIR & outOperand5,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mSelfType ;
    outOperand1 = p->mObject.mAttribute_mGlobalVariable ;
    outOperand2 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
    outOperand4 = p->mObject.mAttribute_mAllocaList ;
    outOperand5 = p->mObject.mAttribute_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                     GALGAS_string & outOperand1,
                                     GALGAS_lstringlist & outOperand2,
                                     GALGAS_bigint & outOperand3,
                                     GALGAS_allocaList & outOperand4,
                                     GALGAS_instructionListIR & outOperand5,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mSelfType ;
    outOperand1 = p->mObject.mAttribute_mGlobalVariable ;
    outOperand2 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
    outOperand4 = p->mObject.mAttribute_mAllocaList ;
    outOperand5 = p->mObject.mAttribute_mInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::add_operation (const GALGAS_initListIR & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::plusAssign_operation (const GALGAS_initListIR inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_initListIR::getter_mSelfTypeAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initListIR::getter_mGlobalVariableAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mGlobalVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_initListIR::getter_mInitRequiredByProcListAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mInitRequiredByProcList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_initListIR::getter_mPriorityAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_initListIR::getter_mAllocaListAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR::getter_mInstructionListIRAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mInstructionListIR ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initListIR::cEnumerator_initListIR (const GALGAS_initListIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element cEnumerator_initListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_initListIR::current_mSelfType (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_initListIR::current_mGlobalVariable (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mGlobalVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_initListIR::current_mInitRequiredByProcList (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mInitRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_initListIR::current_mPriority (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_initListIR::current_mAllocaList (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_initListIR::current_mInstructionListIR (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mInstructionListIR ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @initListIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListIR ("initListIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  const GALGAS_initListIR * p = (const GALGAS_initListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@procFormalArgumentList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procFormalArgumentList : public cCollectionElement {
  public : GALGAS_procFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procFormalArgumentList (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                      const GALGAS_lstring & in_mSelector,
                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                      const GALGAS_lstring & in_mFormalArgumentName
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procFormalArgumentList::cCollectionElement_procFormalArgumentList (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                      const GALGAS_lstring & in_mSelector,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procFormalArgumentList (mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mSelector, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procFormalArgumentList * operand = (cCollectionElement_procFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList::GALGAS_procFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList::GALGAS_procFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                               const GALGAS_lstring & in_mSelector,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_procFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_procFormalArgumentList (in_mFormalArgumentPassingMode,
                                                            in_mSelector,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_lstring inOperand3,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::add_operation (const GALGAS_procFormalArgumentList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result = GALGAS_procFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result = GALGAS_procFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result = GALGAS_procFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::plusAssign_operation (const GALGAS_procFormalArgumentList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentList::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procFormalArgumentList::cEnumerator_procFormalArgumentList (const GALGAS_procFormalArgumentList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element cEnumerator_procFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_procFormalArgumentList::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procFormalArgumentList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procFormalArgumentList::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procFormalArgumentList::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procFormalArgumentList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentList ("procFormalArgumentList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList result ;
  const GALGAS_procFormalArgumentList * p = (const GALGAS_procFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode::GALGAS_procFormalArgumentPassingMode (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  result.mEnum = kEnum_inputOutput ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_procFormalArgumentPassingMode [4] = {
  "(not built)",
  "input",
  "output",
  "inputOutput"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procFormalArgumentPassingMode::getter_isInputOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputOutput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentPassingMode::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @procFormalArgumentPassingMode: " << gEnumNameArrayFor_procFormalArgumentPassingMode [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentPassingMode::objectCompare (const GALGAS_procFormalArgumentPassingMode & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @procFormalArgumentPassingMode type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentPassingMode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentPassingMode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentPassingMode::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentPassingMode result ;
  const GALGAS_procFormalArgumentPassingMode * p = (const GALGAS_procFormalArgumentPassingMode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentPassingMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentPassingMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_labelMap::cMapElement_labelMap (const GALGAS_lstring & inKey
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_labelMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_labelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_labelMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_labelMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_labelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_labelMap * operand = (cMapElement_labelMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap::GALGAS_labelMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap::GALGAS_labelMap (const GALGAS_labelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap & GALGAS_labelMap::operator = (const GALGAS_labelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::constructor_mapWithMapToOverride (const GALGAS_labelMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_labelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = NULL ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@labelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap::setter_insertKey (GALGAS_lstring inKey,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = NULL ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_labelMap * GALGAS_labelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * result = (cMapElement_labelMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_labelMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_labelMap::cEnumerator_labelMap (const GALGAS_labelMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element cEnumerator_labelMap::current (LOCATION_ARGS) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_labelMap) ;
  return GALGAS_labelMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @labelMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap ("labelMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  const GALGAS_labelMap * p = (const GALGAS_labelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                                                    const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mAttribute_mReturnType (in_mReturnType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_externProcedureMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mReturnType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_externProcedureMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externProcedureMapIR (mAttribute_lkey, mAttribute_mFormalArgumentListForGeneration, mAttribute_mReturnType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_externProcedureMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mAttribute_mReturnType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_externProcedureMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_externProcedureMapIR * operand = (cMapElement_externProcedureMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (operand->mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (operand->mAttribute_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR & GALGAS_externProcedureMapIR::operator = (const GALGAS_externProcedureMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_mapWithMapToOverride (const GALGAS_externProcedureMapIR & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_procFormalArgumentListForGeneration & inArgument0,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externProcedureMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_procFormalArgumentListForGeneration inArgument0,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "extern procedure %K is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_procFormalArgumentListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mAttribute_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_procFormalArgumentListForGeneration inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mAttribute_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureMapIR::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mAttribute_mReturnType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_externProcedureMapIR * GALGAS_externProcedureMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * result = (cMapElement_externProcedureMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externProcedureMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externProcedureMapIR::cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element cEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GALGAS_externProcedureMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalArgumentListForGeneration, p->mAttribute_mReturnType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration cEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mAttribute_mReturnType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externProcedureMapIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externProcedureMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  const GALGAS_externProcedureMapIR * p = (const GALGAS_externProcedureMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@procFormalArgumentListForGeneration' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procFormalArgumentListForGeneration : public cCollectionElement {
  public : GALGAS_procFormalArgumentListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                   const GALGAS_string & in_mFormalArgumentName
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procFormalArgumentListForGeneration::cCollectionElement_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procFormalArgumentListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procFormalArgumentListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procFormalArgumentListForGeneration (mObject.mAttribute_mFormalArgumentKind, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procFormalArgumentListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentKind" ":" ;
  mObject.mAttribute_mFormalArgumentKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procFormalArgumentListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procFormalArgumentListForGeneration * operand = (cCollectionElement_procFormalArgumentListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procFormalArgumentListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration::GALGAS_procFormalArgumentListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration::GALGAS_procFormalArgumentListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procFormalArgumentListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_procFormalArgumentListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_procFormalArgumentListForGeneration (in_mFormalArgumentKind,
                                                                         in_mFormalArgumentType,
                                                                         in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                                       const GALGAS_string inOperand2,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                  GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                               GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::add_operation (const GALGAS_procFormalArgumentListForGeneration & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::plusAssign_operation (const GALGAS_procFormalArgumentListForGeneration inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentListForGeneration::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procFormalArgumentListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procFormalArgumentListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procFormalArgumentListForGeneration::cEnumerator_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentListForGeneration & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element cEnumerator_procFormalArgumentListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_procFormalArgumentListForGeneration::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_procFormalArgumentListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_procFormalArgumentListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procFormalArgumentListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration ("procFormalArgumentListForGeneration",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration result ;
  const GALGAS_procFormalArgumentListForGeneration * p = (const GALGAS_procFormalArgumentListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                                        const GALGAS_string & in_mGlobalVariableName,
                                                        const GALGAS_allocaList & in_mAllocaList,
                                                        const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                        const GALGAS_bool & in_mXTR
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSelfType (in_mSelfType),
mAttribute_mGlobalVariableName (in_mGlobalVariableName),
mAttribute_mAllocaList (in_mAllocaList),
mAttribute_mInstructionGenerationList (in_mInstructionGenerationList),
mAttribute_mXTR (in_mXTR) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_interruptMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSelfType.isValid () && mAttribute_mGlobalVariableName.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mXTR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_interruptMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_interruptMapIR (mAttribute_lkey, mAttribute_mSelfType, mAttribute_mGlobalVariableName, mAttribute_mAllocaList, mAttribute_mInstructionGenerationList, mAttribute_mXTR COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_interruptMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelfType" ":" ;
  mAttribute_mSelfType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobalVariableName" ":" ;
  mAttribute_mGlobalVariableName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mAttribute_mInstructionGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mXTR" ":" ;
  mAttribute_mXTR.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_interruptMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_interruptMapIR * operand = (cMapElement_interruptMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelfType.objectCompare (operand->mAttribute_mSelfType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGlobalVariableName.objectCompare (operand->mAttribute_mGlobalVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllocaList.objectCompare (operand->mAttribute_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionGenerationList.objectCompare (operand->mAttribute_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mXTR.objectCompare (operand->mAttribute_mXTR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR::GALGAS_interruptMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR::GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR & GALGAS_interruptMapIR::operator = (const GALGAS_interruptMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::constructor_mapWithMapToOverride (const GALGAS_interruptMapIR & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_interruptMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                 const GALGAS_string & inArgument1,
                                                 const GALGAS_allocaList & inArgument2,
                                                 const GALGAS_instructionListIR & inArgument3,
                                                 const GALGAS_bool & inArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = NULL ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@interruptMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                              GALGAS_string inArgument1,
                                              GALGAS_allocaList inArgument2,
                                              GALGAS_instructionListIR inArgument3,
                                              GALGAS_bool inArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = NULL ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_interruptMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              GALGAS_string & outArgument1,
                                              GALGAS_allocaList & outArgument2,
                                              GALGAS_instructionListIR & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_interruptMapIR_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    outArgument0 = p->mAttribute_mSelfType ;
    outArgument1 = p->mAttribute_mGlobalVariableName ;
    outArgument2 = p->mAttribute_mAllocaList ;
    outArgument3 = p->mAttribute_mInstructionGenerationList ;
    outArgument4 = p->mAttribute_mXTR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_removeKey (GALGAS_lstring inKey,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              GALGAS_string & outArgument1,
                                              GALGAS_allocaList & outArgument2,
                                              GALGAS_instructionListIR & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    outArgument0 = p->mAttribute_mSelfType ;
    outArgument1 = p->mAttribute_mGlobalVariableName ;
    outArgument2 = p->mAttribute_mAllocaList ;
    outArgument3 = p->mAttribute_mInstructionGenerationList ;
    outArgument4 = p->mAttribute_mXTR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_interruptMapIR::getter_mSelfTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mAttribute_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_interruptMapIR::getter_mGlobalVariableNameForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mAttribute_mGlobalVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_interruptMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mAttribute_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_interruptMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mAttribute_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptMapIR::getter_mXTRForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mAttribute_mXTR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMSelfTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mAttribute_mSelfType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMGlobalVariableNameForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mAttribute_mGlobalVariableName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mAttribute_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mAttribute_mInstructionGenerationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR::setter_setMXTRForKey (GALGAS_bool inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mAttribute_mXTR = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_interruptMapIR * GALGAS_interruptMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * result = (cMapElement_interruptMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_interruptMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_interruptMapIR::cEnumerator_interruptMapIR (const GALGAS_interruptMapIR & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element cEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return GALGAS_interruptMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mSelfType, p->mAttribute_mGlobalVariableName, p->mAttribute_mAllocaList, p->mAttribute_mInstructionGenerationList, p->mAttribute_mXTR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mAttribute_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_interruptMapIR::current_mGlobalVariableName (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mAttribute_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_interruptMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_interruptMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_interruptMapIR::current_mXTR (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mAttribute_mXTR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @interruptMapIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_interruptMapIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  const GALGAS_interruptMapIR * p = (const GALGAS_interruptMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapIR::cMapElement_routineMapIR (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                    const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                    const GALGAS_allocaList & in_mAllocaList,
                                                    const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                    const GALGAS_bool & in_mIsRequired,
                                                    const GALGAS_bool & in_mWarnIfUnused,
                                                    const GALGAS_bool & in_mWeak,
                                                    const GALGAS_bool & in_mGlobal,
                                                    const GALGAS_routineKind & in_mKind,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                    const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRoutineNameForGeneration (in_mRoutineNameForGeneration),
mAttribute_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mAttribute_mAllocaList (in_mAllocaList),
mAttribute_mInstructionGenerationList (in_mInstructionGenerationList),
mAttribute_mIsRequired (in_mIsRequired),
mAttribute_mWarnIfUnused (in_mWarnIfUnused),
mAttribute_mWeak (in_mWeak),
mAttribute_mGlobal (in_mGlobal),
mAttribute_mKind (in_mKind),
mAttribute_mReturnType (in_mReturnType),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineNameForGeneration.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mIsRequired.isValid () && mAttribute_mWarnIfUnused.isValid () && mAttribute_mWeak.isValid () && mAttribute_mGlobal.isValid () && mAttribute_mKind.isValid () && mAttribute_mReturnType.isValid () && mAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMapIR (mAttribute_lkey, mAttribute_mRoutineNameForGeneration, mAttribute_mFormalArgumentListForGeneration, mAttribute_mAllocaList, mAttribute_mInstructionGenerationList, mAttribute_mIsRequired, mAttribute_mWarnIfUnused, mAttribute_mWeak, mAttribute_mGlobal, mAttribute_mKind, mAttribute_mReturnType, mAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineNameForGeneration" ":" ;
  mAttribute_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mAttribute_mInstructionGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsRequired" ":" ;
  mAttribute_mIsRequired.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWarnIfUnused" ":" ;
  mAttribute_mWarnIfUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWeak" ":" ;
  mAttribute_mWeak.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGlobal" ":" ;
  mAttribute_mGlobal.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mAttribute_mReturnType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAppendFileAndLineArgumentForPanicLocation" ":" ;
  mAttribute_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMapIR * operand = (cMapElement_routineMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineNameForGeneration.objectCompare (operand->mAttribute_mRoutineNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (operand->mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllocaList.objectCompare (operand->mAttribute_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionGenerationList.objectCompare (operand->mAttribute_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsRequired.objectCompare (operand->mAttribute_mIsRequired) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarnIfUnused.objectCompare (operand->mAttribute_mWarnIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWeak.objectCompare (operand->mAttribute_mWeak) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGlobal.objectCompare (operand->mAttribute_mGlobal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (operand->mAttribute_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAppendFileAndLineArgumentForPanicLocation.objectCompare (operand->mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR::GALGAS_routineMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR::GALGAS_routineMapIR (const GALGAS_routineMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR & GALGAS_routineMapIR::operator = (const GALGAS_routineMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::constructor_mapWithMapToOverride (const GALGAS_routineMapIR & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_routineMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_lstring & inArgument0,
                                               const GALGAS_procFormalArgumentListForGeneration & inArgument1,
                                               const GALGAS_allocaList & inArgument2,
                                               const GALGAS_instructionListIR & inArgument3,
                                               const GALGAS_bool & inArgument4,
                                               const GALGAS_bool & inArgument5,
                                               const GALGAS_bool & inArgument6,
                                               const GALGAS_bool & inArgument7,
                                               const GALGAS_routineKind & inArgument8,
                                               const GALGAS_unifiedTypeMap_2D_proxy & inArgument9,
                                               const GALGAS_bool & inArgument10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMapIR * p = NULL ;
  macroMyNew (p, cMapElement_routineMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_lstring inArgument0,
                                            GALGAS_procFormalArgumentListForGeneration inArgument1,
                                            GALGAS_allocaList inArgument2,
                                            GALGAS_instructionListIR inArgument3,
                                            GALGAS_bool inArgument4,
                                            GALGAS_bool inArgument5,
                                            GALGAS_bool inArgument6,
                                            GALGAS_bool inArgument7,
                                            GALGAS_routineKind inArgument8,
                                            GALGAS_unifiedTypeMap_2D_proxy inArgument9,
                                            GALGAS_bool inArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_routineMapIR * p = NULL ;
  macroMyNew (p, cMapElement_routineMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "routine '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_lstring & outArgument0,
                                            GALGAS_procFormalArgumentListForGeneration & outArgument1,
                                            GALGAS_allocaList & outArgument2,
                                            GALGAS_instructionListIR & outArgument3,
                                            GALGAS_bool & outArgument4,
                                            GALGAS_bool & outArgument5,
                                            GALGAS_bool & outArgument6,
                                            GALGAS_bool & outArgument7,
                                            GALGAS_routineKind & outArgument8,
                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument9,
                                            GALGAS_bool & outArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_routineMapIR_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
    outArgument10.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    outArgument0 = p->mAttribute_mRoutineNameForGeneration ;
    outArgument1 = p->mAttribute_mFormalArgumentListForGeneration ;
    outArgument2 = p->mAttribute_mAllocaList ;
    outArgument3 = p->mAttribute_mInstructionGenerationList ;
    outArgument4 = p->mAttribute_mIsRequired ;
    outArgument5 = p->mAttribute_mWarnIfUnused ;
    outArgument6 = p->mAttribute_mWeak ;
    outArgument7 = p->mAttribute_mGlobal ;
    outArgument8 = p->mAttribute_mKind ;
    outArgument9 = p->mAttribute_mReturnType ;
    outArgument10 = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_removeKey (GALGAS_lstring inKey,
                                            GALGAS_lstring & outArgument0,
                                            GALGAS_procFormalArgumentListForGeneration & outArgument1,
                                            GALGAS_allocaList & outArgument2,
                                            GALGAS_instructionListIR & outArgument3,
                                            GALGAS_bool & outArgument4,
                                            GALGAS_bool & outArgument5,
                                            GALGAS_bool & outArgument6,
                                            GALGAS_bool & outArgument7,
                                            GALGAS_routineKind & outArgument8,
                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument9,
                                            GALGAS_bool & outArgument10,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    outArgument0 = p->mAttribute_mRoutineNameForGeneration ;
    outArgument1 = p->mAttribute_mFormalArgumentListForGeneration ;
    outArgument2 = p->mAttribute_mAllocaList ;
    outArgument3 = p->mAttribute_mInstructionGenerationList ;
    outArgument4 = p->mAttribute_mIsRequired ;
    outArgument5 = p->mAttribute_mWarnIfUnused ;
    outArgument6 = p->mAttribute_mWeak ;
    outArgument7 = p->mAttribute_mGlobal ;
    outArgument8 = p->mAttribute_mKind ;
    outArgument9 = p->mAttribute_mReturnType ;
    outArgument10 = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR::getter_mRoutineNameForGenerationForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mRoutineNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_routineMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_procFormalArgumentListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_routineMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_routineMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mIsRequiredForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mIsRequired ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mWarnIfUnusedForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mWarnIfUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mWeakForKey (const GALGAS_string & inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mWeak ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mGlobalForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mGlobal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapIR::getter_mKindForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_routineKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR::getter_mAppendFileAndLineArgumentForPanicLocationForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    result = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMRoutineNameForGenerationForKey (GALGAS_lstring inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mRoutineNameForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_procFormalArgumentListForGeneration inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mInstructionGenerationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMIsRequiredForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mIsRequired = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMWarnIfUnusedForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mWarnIfUnused = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMWeakForKey (GALGAS_bool inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mWeak = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMGlobalForKey (GALGAS_bool inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mGlobal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMKindForKey (GALGAS_routineKind inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mReturnType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR::setter_setMAppendFileAndLineArgumentForPanicLocationForKey (GALGAS_bool inAttributeValue,
                                                                                      GALGAS_string inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapIR * p = (cMapElement_routineMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapIR) ;
    p->mAttribute_mAppendFileAndLineArgumentForPanicLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapIR * GALGAS_routineMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_routineMapIR * result = (cMapElement_routineMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineMapIR::cEnumerator_routineMapIR (const GALGAS_routineMapIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element cEnumerator_routineMapIR::current (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return GALGAS_routineMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mRoutineNameForGeneration, p->mAttribute_mFormalArgumentListForGeneration, p->mAttribute_mAllocaList, p->mAttribute_mInstructionGenerationList, p->mAttribute_mIsRequired, p->mAttribute_mWarnIfUnused, p->mAttribute_mWeak, p->mAttribute_mGlobal, p->mAttribute_mKind, p->mAttribute_mReturnType, p->mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMapIR::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration cEnumerator_routineMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_routineMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_routineMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mIsRequired (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mWarnIfUnused (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mWeak (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mWeak ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mGlobal (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mGlobal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind cEnumerator_routineMapIR::current_mKind (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_routineMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapIR::current_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const {
  const cMapElement_routineMapIR * p = (const cMapElement_routineMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapIR) ;
  return p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @routineMapIR type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapIR ("routineMapIR",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_routineMapIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR result ;
  const GALGAS_routineMapIR * p = (const GALGAS_routineMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@procCallEffectiveParameterListIR' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procCallEffectiveParameterListIR : public cCollectionElement {
  public : GALGAS_procCallEffectiveParameterListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                const GALGAS_operandIR & in_mParameter
                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GALGAS_operandIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procCallEffectiveParameterListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procCallEffectiveParameterListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procCallEffectiveParameterListIR (mObject.mAttribute_mEffectiveParameterPassingMode, mObject.mAttribute_mParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procCallEffectiveParameterListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterPassingMode" ":" ;
  mObject.mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameter" ":" ;
  mObject.mAttribute_mParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procCallEffectiveParameterListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procCallEffectiveParameterListIR * operand = (cCollectionElement_procCallEffectiveParameterListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procCallEffectiveParameterListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_listWithValue (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                            const GALGAS_operandIR & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                         const GALGAS_operandIR & in_mParameter
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode,
                                                                      in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                   const GALGAS_operandIR & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                                    const GALGAS_operandIR inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_removeAtIndex (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                    GALGAS_operandIR & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
      outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mAttribute_mParameter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_popFirst (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                               GALGAS_operandIR & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::setter_popLast (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                              GALGAS_operandIR & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::method_first (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GALGAS_operandIR & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::method_last (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GALGAS_operandIR & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_operandIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mAttribute_mParameter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mAttribute_mParameter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @procCallEffectiveParameterListIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  const GALGAS_procCallEffectiveParameterListIR * p = (const GALGAS_procCallEffectiveParameterListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapIR::cMapElement_guardMapIR (const GALGAS_lstring & inKey,
                                                const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                const GALGAS_allocaList & in_mAllocaList,
                                                const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                const GALGAS_bool & in_mWarnIfUnused
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mAttribute_mGuardKindGenerationIR (in_mGuardKindGenerationIR),
mAttribute_mAllocaList (in_mAllocaList),
mAttribute_mInstructionGenerationList (in_mInstructionGenerationList),
mAttribute_mWarnIfUnused (in_mWarnIfUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_guardMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mGuardKindGenerationIR.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mWarnIfUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_guardMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapIR (mAttribute_lkey, mAttribute_mFormalArgumentListForGeneration, mAttribute_mGuardKindGenerationIR, mAttribute_mAllocaList, mAttribute_mInstructionGenerationList, mAttribute_mWarnIfUnused COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_guardMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardKindGenerationIR" ":" ;
  mAttribute_mGuardKindGenerationIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mAttribute_mInstructionGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWarnIfUnused" ":" ;
  mAttribute_mWarnIfUnused.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_guardMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapIR * operand = (cMapElement_guardMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (operand->mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGuardKindGenerationIR.objectCompare (operand->mAttribute_mGuardKindGenerationIR) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllocaList.objectCompare (operand->mAttribute_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionGenerationList.objectCompare (operand->mAttribute_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarnIfUnused.objectCompare (operand->mAttribute_mWarnIfUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR::GALGAS_guardMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR::GALGAS_guardMapIR (const GALGAS_guardMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR & GALGAS_guardMapIR::operator = (const GALGAS_guardMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::constructor_mapWithMapToOverride (const GALGAS_guardMapIR & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_procFormalArgumentListForGeneration & inArgument0,
                                             const GALGAS_guardKindGenerationIR & inArgument1,
                                             const GALGAS_allocaList & inArgument2,
                                             const GALGAS_instructionListIR & inArgument3,
                                             const GALGAS_bool & inArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * p = NULL ;
  macroMyNew (p, cMapElement_guardMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_procFormalArgumentListForGeneration inArgument0,
                                          GALGAS_guardKindGenerationIR inArgument1,
                                          GALGAS_allocaList inArgument2,
                                          GALGAS_instructionListIR inArgument3,
                                          GALGAS_bool inArgument4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * p = NULL ;
  macroMyNew (p, cMapElement_guardMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "guard '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_guardMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_procFormalArgumentListForGeneration & outArgument0,
                                          GALGAS_guardKindGenerationIR & outArgument1,
                                          GALGAS_allocaList & outArgument2,
                                          GALGAS_instructionListIR & outArgument3,
                                          GALGAS_bool & outArgument4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_guardMapIR_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    outArgument0 = p->mAttribute_mFormalArgumentListForGeneration ;
    outArgument1 = p->mAttribute_mGuardKindGenerationIR ;
    outArgument2 = p->mAttribute_mAllocaList ;
    outArgument3 = p->mAttribute_mInstructionGenerationList ;
    outArgument4 = p->mAttribute_mWarnIfUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_removeKey (GALGAS_lstring inKey,
                                          GALGAS_procFormalArgumentListForGeneration & outArgument0,
                                          GALGAS_guardKindGenerationIR & outArgument1,
                                          GALGAS_allocaList & outArgument2,
                                          GALGAS_instructionListIR & outArgument3,
                                          GALGAS_bool & outArgument4,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    outArgument0 = p->mAttribute_mFormalArgumentListForGeneration ;
    outArgument1 = p->mAttribute_mGuardKindGenerationIR ;
    outArgument2 = p->mAttribute_mAllocaList ;
    outArgument3 = p->mAttribute_mInstructionGenerationList ;
    outArgument4 = p->mAttribute_mWarnIfUnused ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_guardMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_procFormalArgumentListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mAttribute_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardMapIR::getter_mGuardKindGenerationIRForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_guardKindGenerationIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mAttribute_mGuardKindGenerationIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_guardMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mAttribute_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_guardMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mAttribute_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapIR::getter_mWarnIfUnusedForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mAttribute_mWarnIfUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_procFormalArgumentListForGeneration inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mAttribute_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMGuardKindGenerationIRForKey (GALGAS_guardKindGenerationIR inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mAttribute_mGuardKindGenerationIR = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mAttribute_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mAttribute_mInstructionGenerationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapIR::setter_setMWarnIfUnusedForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mAttribute_mWarnIfUnused = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapIR * GALGAS_guardMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * result = (cMapElement_guardMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guardMapIR::cEnumerator_guardMapIR (const GALGAS_guardMapIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR_2D_element cEnumerator_guardMapIR::current (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return GALGAS_guardMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalArgumentListForGeneration, p->mAttribute_mGuardKindGenerationIR, p->mAttribute_mAllocaList, p->mAttribute_mInstructionGenerationList, p->mAttribute_mWarnIfUnused) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guardMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration cEnumerator_guardMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR cEnumerator_guardMapIR::current_mGuardKindGenerationIR (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mAttribute_mGuardKindGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_guardMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_guardMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_guardMapIR::current_mWarnIfUnused (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mAttribute_mWarnIfUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @guardMapIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapIR ("guardMapIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_guardMapIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  const GALGAS_guardMapIR * p = (const GALGAS_guardMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@functionCallEffectiveParameterList' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_functionCallEffectiveParameterList : public cCollectionElement {
  public : GALGAS_functionCallEffectiveParameterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_functionCallEffectiveParameterList (const GALGAS_lstring & in_mSelector,
                                                                  const GALGAS_expressionAST & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_functionCallEffectiveParameterList::cCollectionElement_functionCallEffectiveParameterList (const GALGAS_lstring & in_mSelector,
                                                                                                              const GALGAS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_functionCallEffectiveParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_functionCallEffectiveParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionCallEffectiveParameterList (mObject.mAttribute_mSelector, mObject.mAttribute_mExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_functionCallEffectiveParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_functionCallEffectiveParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionCallEffectiveParameterList * operand = (cCollectionElement_functionCallEffectiveParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionCallEffectiveParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList::GALGAS_functionCallEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList::GALGAS_functionCallEffectiveParameterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_expressionAST & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_functionCallEffectiveParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mSelector,
                                                                           const GALGAS_expressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_functionCallEffectiveParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_functionCallEffectiveParameterList (in_mSelector,
                                                                        in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_expressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionCallEffectiveParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_expressionAST inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionCallEffectiveParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_expressionAST & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
      outOperand0 = p->mObject.mAttribute_mSelector ;
      outOperand1 = p->mObject.mAttribute_mExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_expressionAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_expressionAST & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_expressionAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_expressionAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::add_operation (const GALGAS_functionCallEffectiveParameterList & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterList result = GALGAS_functionCallEffectiveParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterList result = GALGAS_functionCallEffectiveParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterList result = GALGAS_functionCallEffectiveParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList::plusAssign_operation (const GALGAS_functionCallEffectiveParameterList inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionCallEffectiveParameterList * p = (cCollectionElement_functionCallEffectiveParameterList *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionCallEffectiveParameterList::cEnumerator_functionCallEffectiveParameterList (const GALGAS_functionCallEffectiveParameterList & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element cEnumerator_functionCallEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_functionCallEffectiveParameterList * p = (const cCollectionElement_functionCallEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionCallEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionCallEffectiveParameterList * p = (const cCollectionElement_functionCallEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_functionCallEffectiveParameterList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_functionCallEffectiveParameterList * p = (const cCollectionElement_functionCallEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionCallEffectiveParameterList) ;
  return p->mObject.mAttribute_mExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionCallEffectiveParameterList type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterList ("functionCallEffectiveParameterList",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_functionCallEffectiveParameterList::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList result ;
  const GALGAS_functionCallEffectiveParameterList * p = (const GALGAS_functionCallEffectiveParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator::GALGAS_infixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_nonEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_nonEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_strictInf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_strictInf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_strictSup (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_strictSup ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_infEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_infEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_supEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_supEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_andOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_andOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_orOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_orOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_xorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_xorOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_booleanXorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_booleanXorOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_addOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_addOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_addOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_addOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_subOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_subOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_subOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_subOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_mulOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_mulOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_mulOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_mulOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_divOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_divOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_divOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_divOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_modOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_modOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_modOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_modOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_leftShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_leftShiftOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_rightShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_rightShiftOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_infixOperator [23] = {
  "(not built)",
  "equal",
  "nonEqual",
  "strictInf",
  "strictSup",
  "infEqual",
  "supEqual",
  "andOp",
  "orOp",
  "xorOp",
  "booleanXorOp",
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isNonEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_nonEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isStrictInf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictInf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isStrictSup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictSup == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isInfEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_infEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSupEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_supEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAndOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_andOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isOrOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_orOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xorOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isBooleanXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_booleanXorOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAddOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSubOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isMulOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isDivOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isModOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isLeftShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShiftOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isRightShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShiftOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperator::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @infixOperator: " << gEnumNameArrayFor_infixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperator::objectCompare (const GALGAS_infixOperator & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @infixOperator type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperator ("infixOperator",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  const GALGAS_infixOperator * p = (const GALGAS_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                            const GALGAS_infixOperatorDescription & in_mOperation
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mResultType (in_mResultType),
mAttribute_mOperation (in_mOperation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () && mAttribute_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_infixOperatorMap (mAttribute_lkey, mAttribute_mResultType, mAttribute_mOperation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_infixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperation" ":" ;
  mAttribute_mOperation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_infixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_infixOperatorMap * operand = (cMapElement_infixOperatorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperation.objectCompare (operand->mAttribute_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap & GALGAS_infixOperatorMap::operator = (const GALGAS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_infixOperatorMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                   const GALGAS_infixOperatorDescription & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                GALGAS_infixOperatorDescription inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                GALGAS_infixOperatorDescription & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_infixOperatorMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mAttribute_mResultType ;
    outArgument1 = p->mAttribute_mOperation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap::getter_mOperationForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_infixOperatorDescription result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mAttribute_mOperation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::setter_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::setter_setMOperationForKey (GALGAS_infixOperatorDescription inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mAttribute_mOperation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_infixOperatorMap * GALGAS_infixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GALGAS_infixOperatorMap_2D_element (p->mAttribute_lkey, p->mAttribute_mResultType, p->mAttribute_mOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription cEnumerator_infixOperatorMap::current_mOperation (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mAttribute_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @infixOperatorMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  const GALGAS_infixOperatorMap * p = (const GALGAS_infixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator::GALGAS_prefixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_notOperator (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_notOperator ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_minus (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minus ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_unsignedComplement (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_unsignedComplement ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_minusNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minusNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_prefixOperator [5] = {
  "(not built)",
  "notOperator",
  "minus",
  "unsignedComplement",
  "minusNoOvf"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isNotOperator (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notOperator == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isMinus (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minus == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isUnsignedComplement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedComplement == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isMinusNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperator::description (C_String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString << "<enum @prefixOperator: " << gEnumNameArrayFor_prefixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperator::objectCompare (const GALGAS_prefixOperator & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefixOperator type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperator ("prefixOperator",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  const GALGAS_prefixOperator * p = (const GALGAS_prefixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@fieldList' list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_fieldList : public cCollectionElement {
  public : GALGAS_fieldList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_fieldList (const GALGAS_lstring & in_mFieldName,
                                         const GALGAS_arrayElementAccess & in_mArrayAccess
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_fieldList::cCollectionElement_fieldList (const GALGAS_lstring & in_mFieldName,
                                                            const GALGAS_arrayElementAccess & in_mArrayAccess
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mArrayAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_fieldList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_fieldList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fieldList (mObject.mAttribute_mFieldName, mObject.mAttribute_mArrayAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_fieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mAttribute_mFieldName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayAccess" ":" ;
  mObject.mAttribute_mArrayAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_fieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fieldList * operand = (cCollectionElement_fieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList::GALGAS_fieldList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList::GALGAS_fieldList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_fieldList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_arrayElementAccess & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_fieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GALGAS_lstring & in_mFieldName,
                                                  const GALGAS_arrayElementAccess & in_mArrayAccess
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_fieldList * p = NULL ;
  macroMyNew (p, cCollectionElement_fieldList (in_mFieldName,
                                               in_mArrayAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                            const GALGAS_arrayElementAccess & inOperand1
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                             const GALGAS_arrayElementAccess inOperand1,
                                             const GALGAS_uint inInsertionIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                             GALGAS_arrayElementAccess & outOperand1,
                                             const GALGAS_uint inRemoveIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fieldList) ;
      outOperand0 = p->mObject.mAttribute_mFieldName ;
      outOperand1 = p->mObject.mAttribute_mArrayAccess ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::setter_popFirst (GALGAS_lstring & outOperand0,
                                        GALGAS_arrayElementAccess & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fieldList) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::setter_popLast (GALGAS_lstring & outOperand0,
                                       GALGAS_arrayElementAccess & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fieldList) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::method_first (GALGAS_lstring & outOperand0,
                                     GALGAS_arrayElementAccess & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fieldList) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::method_last (GALGAS_lstring & outOperand0,
                                    GALGAS_arrayElementAccess & outOperand1,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fieldList) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::add_operation (const GALGAS_fieldList & inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_fieldList result = GALGAS_fieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_fieldList result = GALGAS_fieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_fieldList result = GALGAS_fieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldList::plusAssign_operation (const GALGAS_fieldList inOperand,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_fieldList::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fieldList) ;
    result = p->mObject.mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess GALGAS_fieldList::getter_mArrayAccessAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fieldList * p = (cCollectionElement_fieldList *) attributes.ptr () ;
  GALGAS_arrayElementAccess result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fieldList) ;
    result = p->mObject.mAttribute_mArrayAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_fieldList::cEnumerator_fieldList (const GALGAS_fieldList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList_2D_element cEnumerator_fieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_fieldList * p = (const cCollectionElement_fieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fieldList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_fieldList::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_fieldList * p = (const cCollectionElement_fieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fieldList) ;
  return p->mObject.mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess cEnumerator_fieldList::current_mArrayAccess (LOCATION_ARGS) const {
  const cCollectionElement_fieldList * p = (const cCollectionElement_fieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fieldList) ;
  return p->mObject.mAttribute_mArrayAccess ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @fieldList type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fieldList ("fieldList",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fieldList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldList GALGAS_fieldList::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fieldList result ;
  const GALGAS_fieldList * p = (const GALGAS_fieldList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayElementAccess_access::cEnumAssociatedValues_arrayElementAccess_access (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayElementAccess_access::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayElementAccess_access::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayElementAccess_access * ptr = dynamic_cast<const cEnumAssociatedValues_arrayElementAccess_access *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess::GALGAS_arrayElementAccess (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess GALGAS_arrayElementAccess::constructor_noAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayElementAccess result ;
  result.mEnum = kEnum_noAccess ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess GALGAS_arrayElementAccess::constructor_access (const GALGAS_expressionAST & inAssociatedValue0,
                                                                         const GALGAS_location & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_arrayElementAccess result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_access ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayElementAccess_access (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayElementAccess::method_access (GALGAS_expressionAST & outAssociatedValue0,
                                               GALGAS_location & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_access) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @arrayElementAccess access invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayElementAccess_access * ptr = (const cEnumAssociatedValues_arrayElementAccess_access *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_arrayElementAccess [3] = {
  "(not built)",
  "noAccess",
  "access"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayElementAccess::getter_isNoAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayElementAccess::getter_isAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_access == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayElementAccess::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<enum @arrayElementAccess: " << gEnumNameArrayFor_arrayElementAccess [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayElementAccess::objectCompare (const GALGAS_arrayElementAccess & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @arrayElementAccess type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayElementAccess ("arrayElementAccess",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayElementAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayElementAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayElementAccess::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayElementAccess (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess GALGAS_arrayElementAccess::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayElementAccess result ;
  const GALGAS_arrayElementAccess * p = (const GALGAS_arrayElementAccess *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayElementAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayElementAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@effectiveParameterListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_effectiveParameterListAST : public cCollectionElement {
  public : GALGAS_effectiveParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_effectiveParameterListAST (const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                         const GALGAS_lstring & in_mSelector
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_effectiveParameterListAST::cCollectionElement_effectiveParameterListAST (const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                                                            const GALGAS_lstring & in_mSelector
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_effectiveParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_effectiveParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_effectiveParameterListAST (mObject.mAttribute_mEffectiveParameterKind, mObject.mAttribute_mSelector COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_effectiveParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterKind" ":" ;
  mObject.mAttribute_mEffectiveParameterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_effectiveParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_effectiveParameterListAST * operand = (cCollectionElement_effectiveParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_effectiveParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST::GALGAS_effectiveParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST::GALGAS_effectiveParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_effectiveParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::constructor_listWithValue (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_effectiveParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                                  const GALGAS_lstring & in_mSelector
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_effectiveParameterListAST (in_mEffectiveParameterKind,
                                                               in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::addAssign_operation (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                            const GALGAS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::setter_insertAtIndex (const GALGAS_effectiveParameterPassingModeAST inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::setter_removeAtIndex (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::setter_popFirst (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::setter_popLast (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::method_first (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::method_last (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::add_operation (const GALGAS_effectiveParameterListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result = GALGAS_effectiveParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result = GALGAS_effectiveParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result = GALGAS_effectiveParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST::plusAssign_operation (const GALGAS_effectiveParameterListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterListAST::getter_mEffectiveParameterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
  GALGAS_effectiveParameterPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
    result = p->mObject.mAttribute_mEffectiveParameterKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_effectiveParameterListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveParameterListAST * p = (cCollectionElement_effectiveParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_effectiveParameterListAST::cEnumerator_effectiveParameterListAST (const GALGAS_effectiveParameterListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST_2D_element cEnumerator_effectiveParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_effectiveParameterListAST * p = (const cCollectionElement_effectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST cEnumerator_effectiveParameterListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_effectiveParameterListAST * p = (const cCollectionElement_effectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
  return p->mObject.mAttribute_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_effectiveParameterListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_effectiveParameterListAST * p = (const cCollectionElement_effectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveParameterListAST) ;
  return p->mObject.mAttribute_mSelector ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @effectiveParameterListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveParameterListAST ("effectiveParameterListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_effectiveParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterListAST result ;
  const GALGAS_effectiveParameterListAST * p = (const GALGAS_effectiveParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR::GALGAS_routineKindIR (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_function (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_function ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_primitiveInProcessorUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_primitiveInProcessorUserMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_sectionInProcessorUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_sectionInProcessorUserMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_serviceInProcessorUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_serviceInProcessorUserMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_primitiveInProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_primitiveInProcessorPrivilegedMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_sectionInProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_sectionInProcessorPrivilegedMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::constructor_serviceInProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  result.mEnum = kEnum_serviceInProcessorPrivilegedMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_routineKindIR [8] = {
  "(not built)",
  "function",
  "primitiveInProcessorUserMode",
  "sectionInProcessorUserMode",
  "serviceInProcessorUserMode",
  "primitiveInProcessorPrivilegedMode",
  "sectionInProcessorPrivilegedMode",
  "serviceInProcessorPrivilegedMode"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isPrimitiveInProcessorUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveInProcessorUserMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isSectionInProcessorUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionInProcessorUserMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isServiceInProcessorUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceInProcessorUserMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isPrimitiveInProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveInProcessorPrivilegedMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isSectionInProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionInProcessorPrivilegedMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKindIR::getter_isServiceInProcessorPrivilegedMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceInProcessorPrivilegedMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineKindIR::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @routineKindIR: " << gEnumNameArrayFor_routineKindIR [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineKindIR::objectCompare (const GALGAS_routineKindIR & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @routineKindIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineKindIR ("routineKindIR",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineKindIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKindIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineKindIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKindIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_routineKindIR::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineKindIR result ;
  const GALGAS_routineKindIR * p = (const GALGAS_routineKindIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineKindIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKindIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@registerIntegerFieldListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_registerIntegerFieldListAST : public cCollectionElement {
  public : GALGAS_registerIntegerFieldListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_registerIntegerFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                           const GALGAS_expressionAST & in_mExpression,
                                                           const GALGAS_location & in_mExpressionLocation
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_registerIntegerFieldListAST::cCollectionElement_registerIntegerFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                                                                const GALGAS_expressionAST & in_mExpression,
                                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mExpression, in_mExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_registerIntegerFieldListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_registerIntegerFieldListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerIntegerFieldListAST (mObject.mAttribute_mFieldName, mObject.mAttribute_mExpression, mObject.mAttribute_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_registerIntegerFieldListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mAttribute_mFieldName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpressionLocation" ":" ;
  mObject.mAttribute_mExpressionLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_registerIntegerFieldListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerIntegerFieldListAST * operand = (cCollectionElement_registerIntegerFieldListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerIntegerFieldListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST::GALGAS_registerIntegerFieldListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST::GALGAS_registerIntegerFieldListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_expressionAST & inOperand1,
                                                                                                  const GALGAS_location & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_registerIntegerFieldListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFieldName,
                                                                    const GALGAS_expressionAST & in_mExpression,
                                                                    const GALGAS_location & in_mExpressionLocation
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_registerIntegerFieldListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (in_mFieldName,
                                                                 in_mExpression,
                                                                 in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_expressionAST & inOperand1,
                                                              const GALGAS_location & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_expressionAST inOperand1,
                                                               const GALGAS_location inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerIntegerFieldListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_expressionAST & outOperand1,
                                                               GALGAS_location & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
      outOperand0 = p->mObject.mAttribute_mFieldName ;
      outOperand1 = p->mObject.mAttribute_mExpression ;
      outOperand2 = p->mObject.mAttribute_mExpressionLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_expressionAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_expressionAST & outOperand1,
                                                         GALGAS_location & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_expressionAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_expressionAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mExpression ;
    outOperand2 = p->mObject.mAttribute_mExpressionLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::add_operation (const GALGAS_registerIntegerFieldListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result = GALGAS_registerIntegerFieldListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST::plusAssign_operation (const GALGAS_registerIntegerFieldListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerFieldListAST::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListAST::getter_mExpressionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerIntegerFieldListAST * p = (cCollectionElement_registerIntegerFieldListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
    result = p->mObject.mAttribute_mExpressionLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerIntegerFieldListAST::cEnumerator_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element cEnumerator_registerIntegerFieldListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerIntegerFieldListAST::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_registerIntegerFieldListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_registerIntegerFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_registerIntegerFieldListAST * p = (const cCollectionElement_registerIntegerFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerIntegerFieldListAST) ;
  return p->mObject.mAttribute_mExpressionLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @registerIntegerFieldListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListAST ("registerIntegerFieldListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST GALGAS_registerIntegerFieldListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST result ;
  const GALGAS_registerIntegerFieldListAST * p = (const GALGAS_registerIntegerFieldListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@accessList' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_accessList : public cCollectionElement {
  public : GALGAS_accessList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_accessList (const GALGAS_lstring & in_mName,
                                          const GALGAS_arrayElementAccess & in_mArrayAccess
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_accessList::cCollectionElement_accessList (const GALGAS_lstring & in_mName,
                                                              const GALGAS_arrayElementAccess & in_mArrayAccess
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mArrayAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_accessList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_accessList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_accessList (mObject.mAttribute_mName, mObject.mAttribute_mArrayAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_accessList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayAccess" ":" ;
  mObject.mAttribute_mArrayAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_accessList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_accessList * operand = (cCollectionElement_accessList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_accessList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList::GALGAS_accessList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList::GALGAS_accessList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_accessList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_arrayElementAccess & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_accessList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_accessList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_lstring & in_mName,
                                                   const GALGAS_arrayElementAccess & in_mArrayAccess
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_accessList * p = NULL ;
  macroMyNew (p, cCollectionElement_accessList (in_mName,
                                                in_mArrayAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                             const GALGAS_arrayElementAccess & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_accessList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                              const GALGAS_arrayElementAccess inOperand1,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_accessList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                              GALGAS_arrayElementAccess & outOperand1,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_accessList) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mArrayAccess ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::setter_popFirst (GALGAS_lstring & outOperand0,
                                         GALGAS_arrayElementAccess & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessList) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::setter_popLast (GALGAS_lstring & outOperand0,
                                        GALGAS_arrayElementAccess & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessList) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::method_first (GALGAS_lstring & outOperand0,
                                      GALGAS_arrayElementAccess & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessList) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::method_last (GALGAS_lstring & outOperand0,
                                     GALGAS_arrayElementAccess & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_accessList) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mArrayAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::add_operation (const GALGAS_accessList & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_accessList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_accessList result = GALGAS_accessList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_accessList result = GALGAS_accessList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_accessList result = GALGAS_accessList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessList::plusAssign_operation (const GALGAS_accessList inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_accessList::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_accessList) ;
    result = p->mObject.mAttribute_mName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess GALGAS_accessList::getter_mArrayAccessAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_accessList * p = (cCollectionElement_accessList *) attributes.ptr () ;
  GALGAS_arrayElementAccess result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_accessList) ;
    result = p->mObject.mAttribute_mArrayAccess ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_accessList::cEnumerator_accessList (const GALGAS_accessList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList_2D_element cEnumerator_accessList::current (LOCATION_ARGS) const {
  const cCollectionElement_accessList * p = (const cCollectionElement_accessList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_accessList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_accessList * p = (const cCollectionElement_accessList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessList) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayElementAccess cEnumerator_accessList::current_mArrayAccess (LOCATION_ARGS) const {
  const cCollectionElement_accessList * p = (const cCollectionElement_accessList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_accessList) ;
  return p->mObject.mAttribute_mArrayAccess ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @accessList type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessList ("accessList",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessList GALGAS_accessList::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_accessList result ;
  const GALGAS_accessList * p = (const GALGAS_accessList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind::GALGAS_operatorAssignKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_bitWiseOrAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_bitWiseOrAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_bitWiseAndAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_bitWiseAndAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_bitWiseXorAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_bitWiseXorAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_addAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_addAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_addModuloAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_addModuloAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_subAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_subAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_subModuloAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_subModuloAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_mulAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_mulAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_mulModuloAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_mulModuloAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_divAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_divAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_divZeroAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_divZeroAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_modAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_modAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_modZeroAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_modZeroAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_operatorAssignKind [14] = {
  "(not built)",
  "bitWiseOrAssign",
  "bitWiseAndAssign",
  "bitWiseXorAssign",
  "addAssign",
  "addModuloAssign",
  "subAssign",
  "subModuloAssign",
  "mulAssign",
  "mulModuloAssign",
  "divAssign",
  "divZeroAssign",
  "modAssign",
  "modZeroAssign"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isBitWiseOrAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseOrAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isBitWiseAndAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseAndAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isBitWiseXorAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseXorAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isAddAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isAddModuloAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addModuloAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isSubAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isSubModuloAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subModuloAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isMulAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isMulModuloAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulModuloAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isDivAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isDivZeroAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divZeroAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isModAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isModZeroAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modZeroAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operatorAssignKind::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "<enum @operatorAssignKind: " << gEnumNameArrayFor_operatorAssignKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operatorAssignKind::objectCompare (const GALGAS_operatorAssignKind & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @operatorAssignKind type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operatorAssignKind ("operatorAssignKind",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operatorAssignKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operatorAssignKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operatorAssignKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  const GALGAS_operatorAssignKind * p = (const GALGAS_operatorAssignKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operatorAssignKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operatorAssignKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@syncInstructionBranchListIR' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syncInstructionBranchListIR : public cCollectionElement {
  public : GALGAS_syncInstructionBranchListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                           const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_syncInstructionBranchListIR::cCollectionElement_syncInstructionBranchListIR (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                                                const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syncInstructionBranchListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syncInstructionBranchListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListIR (mObject.mAttribute_mGuardedCommand, mObject.mAttribute_mInstructionGenerationList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syncInstructionBranchListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommand" ":" ;
  mObject.mAttribute_mGuardedCommand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mObject.mAttribute_mInstructionGenerationList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syncInstructionBranchListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListIR * operand = (cCollectionElement_syncInstructionBranchListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR::GALGAS_syncInstructionBranchListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::constructor_listWithValue (const GALGAS_guardedCommandIR & inOperand0,
                                                                                                  const GALGAS_instructionListIR & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (in_mGuardedCommand,
                                                                 in_mInstructionGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::addAssign_operation (const GALGAS_guardedCommandIR & inOperand0,
                                                              const GALGAS_instructionListIR & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::setter_insertAtIndex (const GALGAS_guardedCommandIR inOperand0,
                                                               const GALGAS_instructionListIR inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListIR (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::setter_removeAtIndex (GALGAS_guardedCommandIR & outOperand0,
                                                               GALGAS_instructionListIR & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
      outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
      outOperand1 = p->mObject.mAttribute_mInstructionGenerationList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::setter_popFirst (GALGAS_guardedCommandIR & outOperand0,
                                                          GALGAS_instructionListIR & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::setter_popLast (GALGAS_guardedCommandIR & outOperand0,
                                                         GALGAS_instructionListIR & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::method_first (GALGAS_guardedCommandIR & outOperand0,
                                                       GALGAS_instructionListIR & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::method_last (GALGAS_guardedCommandIR & outOperand0,
                                                      GALGAS_instructionListIR & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::add_operation (const GALGAS_syncInstructionBranchListIR & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result = GALGAS_syncInstructionBranchListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR::plusAssign_operation (const GALGAS_syncInstructionBranchListIR inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_syncInstructionBranchListIR::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GALGAS_guardedCommandIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mAttribute_mGuardedCommand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_syncInstructionBranchListIR::getter_mInstructionGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListIR * p = (cCollectionElement_syncInstructionBranchListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
    result = p->mObject.mAttribute_mInstructionGenerationList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syncInstructionBranchListIR::cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element cEnumerator_syncInstructionBranchListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR cEnumerator_syncInstructionBranchListIR::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mAttribute_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_syncInstructionBranchListIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListIR * p = (const cCollectionElement_syncInstructionBranchListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListIR) ;
  return p->mObject.mAttribute_mInstructionGenerationList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @syncInstructionBranchListIR type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListIR ("syncInstructionBranchListIR",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionBranchListIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR result ;
  const GALGAS_syncInstructionBranchListIR * p = (const GALGAS_syncInstructionBranchListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@procEffectiveParameterList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public : GALGAS_procEffectiveParameterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                          const GALGAS_lstring & in_mSelector,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GALGAS_lstring & in_mSelector,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procEffectiveParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procEffectiveParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procEffectiveParameterList (mObject.mAttribute_mEffectiveParameterPassingMode, mObject.mAttribute_mSelector, mObject.mAttribute_mParameterType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procEffectiveParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterPassingMode" ":" ;
  mObject.mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterType" ":" ;
  mObject.mAttribute_mParameterType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procEffectiveParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procEffectiveParameterList * operand = (cCollectionElement_procEffectiveParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procEffectiveParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_listWithValue (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procEffectiveParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                   const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode,
                                                                in_mSelector,
                                                                in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::addAssign_operation (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_insertAtIndex (const GALGAS_effectiveParameterPassingModeAST inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_removeAtIndex (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
      outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
      outOperand2 = p->mObject.mAttribute_mParameterType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_popFirst (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::setter_popLast (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::method_first (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::method_last (GALGAS_effectiveParameterPassingModeAST & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_effectiveParameterPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mAttribute_mParameterType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mAttribute_mParameterType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procEffectiveParameterList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList ("procEffectiveParameterList",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  const GALGAS_procEffectiveParameterList * p = (const GALGAS_procEffectiveParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR::GALGAS_procEffectiveParameterPassingModeIR (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_outputInput ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeIR [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterPassingModeIR::description (C_String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @procEffectiveParameterPassingModeIR: " << gEnumNameArrayFor_procEffectiveParameterPassingModeIR [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterPassingModeIR::objectCompare (const GALGAS_procEffectiveParameterPassingModeIR & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterPassingModeIR type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ("procEffectiveParameterPassingModeIR",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterPassingModeIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterPassingModeIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  const GALGAS_procEffectiveParameterPassingModeIR * p = (const GALGAS_procEffectiveParameterPassingModeIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterPassingModeIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterPassingModeIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap::cMapElement_variableMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_type,
                                                  const GALGAS_bool & in_readAccessAllowed,
                                                  const GALGAS_objectInMemoryIR & in_variableKind,
                                                  const GALGAS_bool & in_copyable,
                                                  const GALGAS_bool & in_canBeUsedAsInputParameter
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_type (in_type),
mAttribute_readAccessAllowed (in_readAccessAllowed),
mAttribute_variableKind (in_variableKind),
mAttribute_copyable (in_copyable),
mAttribute_canBeUsedAsInputParameter (in_canBeUsedAsInputParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_variableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () && mAttribute_readAccessAllowed.isValid () && mAttribute_variableKind.isValid () && mAttribute_copyable.isValid () && mAttribute_canBeUsedAsInputParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_variableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_variableMap (mAttribute_lkey, mAttribute_type, mAttribute_readAccessAllowed, mAttribute_variableKind, mAttribute_copyable, mAttribute_canBeUsedAsInputParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_variableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mAttribute_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "readAccessAllowed" ":" ;
  mAttribute_readAccessAllowed.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "variableKind" ":" ;
  mAttribute_variableKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "copyable" ":" ;
  mAttribute_copyable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "canBeUsedAsInputParameter" ":" ;
  mAttribute_canBeUsedAsInputParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_variableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_variableMap * operand = (cMapElement_variableMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (operand->mAttribute_type) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_readAccessAllowed.objectCompare (operand->mAttribute_readAccessAllowed) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_variableKind.objectCompare (operand->mAttribute_variableKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_copyable.objectCompare (operand->mAttribute_copyable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_canBeUsedAsInputParameter.objectCompare (operand->mAttribute_canBeUsedAsInputParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap::GALGAS_variableMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonIssueWarning, "declaration of '%K' variable shadows a variable declared in %L") {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap::GALGAS_variableMap (const GALGAS_variableMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap & GALGAS_variableMap::operator = (const GALGAS_variableMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap GALGAS_variableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_variableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const uint32_t kMapStateCount_variableMap = 22 ;
#endif
static const uint32_t kMapState_variableMap_constantInputFormalArgument = 15 ;
static const uint32_t kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused = 17 ;
static const uint32_t kMapState_variableMap_definedLocalVariable = 6 ;
static const uint32_t kMapState_variableMap_definedOutputFormalArgument = 10 ;
static const uint32_t kMapState_variableMap_droppedInputFormalArgument = 20 ;
static const uint32_t kMapState_variableMap_droppedInputOutputFormalArgument = 13 ;
static const uint32_t kMapState_variableMap_droppedLocalVariable = 8 ;
static const uint32_t kMapState_variableMap_inaccessibleControlRegister = 0 ;
static const uint32_t kMapState_variableMap_inputFormalArgumentDeclaredAsUnused = 21 ;
static const uint32_t kMapState_variableMap_inputFormalParameter = 18 ;
static const uint32_t kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused = 14 ;
static const uint32_t kMapState_variableMap_localConstant = 3 ;
static const uint32_t kMapState_variableMap_module = 1 ;
static const uint32_t kMapState_variableMap_undefinedLocalConstant = 4 ;
static const uint32_t kMapState_variableMap_undefinedLocalVariable = 5 ;
static const uint32_t kMapState_variableMap_undefinedOutputFormalArgument = 9 ;
static const uint32_t kMapState_variableMap_unusedInputOutputFormalArgument = 11 ;
static const uint32_t kMapState_variableMap_usedConstantInputFormalArgument = 16 ;
static const uint32_t kMapState_variableMap_usedInputFormalArgument = 19 ;
static const uint32_t kMapState_variableMap_usedInputOutputFormalArgument = 12 ;
static const uint32_t kMapState_variableMap_usedLocalConstant = 2 ;
static const uint32_t kMapState_variableMap_usedLocalVariable = 7 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapStateNames_variableMap [22] = {
  "inaccessibleControlRegister",
  "module",
  "usedLocalConstant",
  "localConstant",
  "undefinedLocalConstant",
  "undefinedLocalVariable",
  "definedLocalVariable",
  "usedLocalVariable",
  "droppedLocalVariable",
  "undefinedOutputFormalArgument",
  "definedOutputFormalArgument",
  "unusedInputOutputFormalArgument",
  "usedInputOutputFormalArgument",
  "droppedInputOutputFormalArgument",
  "inputOutputFormalArgumentDeclaredAsUnused",
  "constantInputFormalArgument",
  "usedConstantInputFormalArgument",
  "constantInputFormalArgumentDeclaredAsUnused",
  "inputFormalParameter",
  "usedInputFormalArgument",
  "droppedInputFormalArgument",
  "inputFormalArgumentDeclaredAsUnused"
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static const uint32_t kMapActionCount_variableMap = 7 ;
static const uint32_t kMapAction_variableMap_constMethodCall = 4 ;
static const uint32_t kMapAction_variableMap_dropAccess = 3 ;
static const uint32_t kMapAction_variableMap_methodCall = 5 ;
static const uint32_t kMapAction_variableMap_neutralAccess = 6 ;
static const uint32_t kMapAction_variableMap_readAccess = 0 ;
static const uint32_t kMapAction_variableMap_readWriteAccess = 2 ;
static const uint32_t kMapAction_variableMap_writeAccess = 1 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapActionNames_variableMap [7] = {
  "constMethodCall",
  "dropAccess",
  "methodCall",
  "neutralAccess",
  "readAccess",
  "readWriteAccess",
  "writeAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonTransition kMapTransitions_variableMap [22 * 7] = {
// State 'inaccessibleControlRegister', index 0 
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonIssueError, "the control register is inaccessible"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_inaccessibleControlRegister /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'module', index 1 
  {kMapState_variableMap_module /* 1 */, kMapAutomatonIssueError, "a module cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonIssueError, "a module cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonIssueError, "a module cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonIssueError, "a module cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_module /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedLocalConstant', index 2 
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'localConstant', index 3 
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_localConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'undefinedLocalConstant', index 4 
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_localConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "a constant cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'undefinedLocalVariable', index 5 
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueWarning, "the local variable has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "an undefined local variable cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'definedLocalVariable', index 6 
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueWarning, "the local variable has been dropped without any read"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedLocalVariable', index 7 
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'droppedLocalVariable', index 8 
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueWarning, "the local variable is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "the local variable is dropped"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "the local variable is dropped"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'undefinedOutputFormalArgument', index 9 
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'definedOutputFormalArgument', index 10 
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'unusedInputOutputFormalArgument', index 11 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedInputOutputFormalArgument', index 12 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'droppedInputOutputFormalArgument', index 13 
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueWarning, "the input/output formal argument is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "the input/output formal argument is dropped"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "the input/output formal argument is dropped"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'inputOutputFormalArgumentDeclaredAsUnused', index 14 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'constantInputFormalArgument', index 15 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedConstantInputFormalArgument', index 16 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'constantInputFormalArgumentDeclaredAsUnused', index 17 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueWarning, "the constant input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueWarning, "the constant input formal parameter is declared as unused"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'inputFormalParameter', index 18 
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'usedInputFormalArgument', index 19 
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'droppedInputFormalArgument', index 20 
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be modified"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is dropped"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be modified"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
// State 'inputFormalArgumentDeclaredAsUnused', index 21 
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'constMethodCall', (index 4)
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'methodCall', (index 5)
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 6)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_variableMap [22] = {
  {kMapAutomatonNoIssue, ""},// state 'inaccessibleControlRegister' (index 0)
  {kMapAutomatonNoIssue, ""},// state 'module' (index 1)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalConstant' (index 2)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'localConstant' (index 3)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'undefinedLocalConstant' (index 4)
  {kMapAutomatonIssueWarning, "the '%K' local variable is unused"},// state 'undefinedLocalVariable' (index 5)
  {kMapAutomatonNoIssue, ""},// state 'definedLocalVariable' (index 6)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalVariable' (index 7)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalVariable' (index 8)
  {kMapAutomatonIssueError, "the '%K' output formal parameter is undefined"},// state 'undefinedOutputFormalArgument' (index 9)
  {kMapAutomatonNoIssue, ""},// state 'definedOutputFormalArgument' (index 10)
  {kMapAutomatonIssueWarning, "the '%K' input/output formal parameter is unused"},// state 'unusedInputOutputFormalArgument' (index 11)
  {kMapAutomatonNoIssue, ""},// state 'usedInputOutputFormalArgument' (index 12)
  {kMapAutomatonIssueError, "the '%K' input/ouput formal argument should be valuated at the end of the routine"},// state 'droppedInputOutputFormalArgument' (index 13)
  {kMapAutomatonNoIssue, ""},// state 'inputOutputFormalArgumentDeclaredAsUnused' (index 14)
  {kMapAutomatonIssueWarning, "the constant '%K' input formal parameter is not used and is not declared as unused"},// state 'constantInputFormalArgument' (index 15)
  {kMapAutomatonNoIssue, ""},// state 'usedConstantInputFormalArgument' (index 16)
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgumentDeclaredAsUnused' (index 17)
  {kMapAutomatonIssueWarning, "the '%K' input formal parameter is not used and is not declared as unused"},// state 'inputFormalParameter' (index 18)
  {kMapAutomatonNoIssue, ""},// state 'usedInputFormalArgument' (index 19)
  {kMapAutomatonNoIssue, ""},// state 'droppedInputFormalArgument' (index 20)
  {kMapAutomatonNoIssue, ""},// state 'inputFormalArgumentDeclaredAsUnused' (index 21)
} ;
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_closeBranch (GALGAS_location inErrorLocation,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  closeBranch (inErrorLocation,
               kMapAutomatonFinalIssue_variableMap,
               #ifndef DO_NOT_GENERATE_CHECKINGS
                 kMapStateCount_variableMap,
               #endif
               inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::method_checkAutomatonStates (GALGAS_location inErrorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_variableMap, inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'selectBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_selectBlock [28] = {
  {kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_selectBlock [40] = {
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous defines let it"},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch defines the '%K' output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonIssueError, "this branch lets the '%K' input formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument defined, while previous ones let it defined"},
  {kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_inputFormalParameter /* 18 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch defines the '%K' input formal argument, while previous ones let it dropped"},
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_selectBlock, 28,
                kBranchCombinationForOverride_variableMap_selectBlock, 40,
                "selectBlock",
                inCompiler
                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'repeatBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_repeatBlock [28] = {
  {kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_undefinedLocalConstant /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonIssueError, "the repeated branch should not define the dropped '%K' variable"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' output formal argument"},
  {kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapState_variableMap_undefinedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' output formal argument"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapAutomatonIssueError, "the repeated branch should define the '%K' input formal argument"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_inputFormalParameter /* 18 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_droppedInputFormalArgument /* 20 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_repeatBlock [18] = {
  {kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 2 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 8 */, kMapState_variableMap_undefinedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 14 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_constantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 17 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 16 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 21 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_repeatBlock, 28,
                kBranchCombinationForOverride_variableMap_repeatBlock, 18,
                "repeatBlock",
                inCompiler
                COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertInaccessibleControlRegister (GALGAS_lstring inKey,
                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                   GALGAS_bool inArgument1,
                                                                   GALGAS_objectInMemoryIR inArgument2,
                                                                   GALGAS_bool inArgument3,
                                                                   GALGAS_bool inArgument4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inaccessibleControlRegister,
                     kMapStateNames_variableMap [kMapState_variableMap_inaccessibleControlRegister],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertModule (GALGAS_lstring inKey,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_objectInMemoryIR inArgument2,
                                              GALGAS_bool inArgument3,
                                              GALGAS_bool inArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_module,
                     kMapStateNames_variableMap [kMapState_variableMap_module],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertUndefinedVariable (GALGAS_lstring inKey,
                                                         GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                         GALGAS_bool inArgument1,
                                                         GALGAS_objectInMemoryIR inArgument2,
                                                         GALGAS_bool inArgument3,
                                                         GALGAS_bool inArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_undefinedLocalVariable,
                     kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertDefinedVariable (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                       GALGAS_bool inArgument1,
                                                       GALGAS_objectInMemoryIR inArgument2,
                                                       GALGAS_bool inArgument3,
                                                       GALGAS_bool inArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_definedLocalVariable,
                     kMapStateNames_variableMap [kMapState_variableMap_definedLocalVariable],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertUndefinedConstant (GALGAS_lstring inKey,
                                                         GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                         GALGAS_bool inArgument1,
                                                         GALGAS_objectInMemoryIR inArgument2,
                                                         GALGAS_bool inArgument3,
                                                         GALGAS_bool inArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_undefinedLocalConstant,
                     kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertConstant (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                GALGAS_bool inArgument1,
                                                GALGAS_objectInMemoryIR inArgument2,
                                                GALGAS_bool inArgument3,
                                                GALGAS_bool inArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_localConstant,
                     kMapStateNames_variableMap [kMapState_variableMap_localConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertUsedConstant (GALGAS_lstring inKey,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                    GALGAS_bool inArgument1,
                                                    GALGAS_objectInMemoryIR inArgument2,
                                                    GALGAS_bool inArgument3,
                                                    GALGAS_bool inArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_usedLocalConstant,
                     kMapStateNames_variableMap [kMapState_variableMap_usedLocalConstant],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertInputFormalArgument (GALGAS_lstring inKey,
                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                           GALGAS_bool inArgument1,
                                                           GALGAS_objectInMemoryIR inArgument2,
                                                           GALGAS_bool inArgument3,
                                                           GALGAS_bool inArgument4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inputFormalParameter,
                     kMapStateNames_variableMap [kMapState_variableMap_inputFormalParameter],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                           GALGAS_bool inArgument1,
                                                                           GALGAS_objectInMemoryIR inArgument2,
                                                                           GALGAS_bool inArgument3,
                                                                           GALGAS_bool inArgument4,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_variableMap [kMapState_variableMap_inputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                   GALGAS_bool inArgument1,
                                                                   GALGAS_objectInMemoryIR inArgument2,
                                                                   GALGAS_bool inArgument3,
                                                                   GALGAS_bool inArgument4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_constantInputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertUsedConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                       GALGAS_bool inArgument1,
                                                                       GALGAS_objectInMemoryIR inArgument2,
                                                                       GALGAS_bool inArgument3,
                                                                       GALGAS_bool inArgument4,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_usedConstantInputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_usedConstantInputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                   GALGAS_bool inArgument1,
                                                                                   GALGAS_objectInMemoryIR inArgument2,
                                                                                   GALGAS_bool inArgument3,
                                                                                   GALGAS_bool inArgument4,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertOutputFormalArgument (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                            GALGAS_bool inArgument1,
                                                            GALGAS_objectInMemoryIR inArgument2,
                                                            GALGAS_bool inArgument3,
                                                            GALGAS_bool inArgument4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_undefinedOutputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_undefinedOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertInputOutputFormalArgument (GALGAS_lstring inKey,
                                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                 GALGAS_bool inArgument1,
                                                                 GALGAS_objectInMemoryIR inArgument2,
                                                                 GALGAS_bool inArgument3,
                                                                 GALGAS_bool inArgument4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_unusedInputOutputFormalArgument,
                     kMapStateNames_variableMap [kMapState_variableMap_unusedInputOutputFormalArgument],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                 GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                 GALGAS_bool inArgument1,
                                                                                 GALGAS_objectInMemoryIR inArgument2,
                                                                                 GALGAS_bool inArgument3,
                                                                                 GALGAS_bool inArgument4,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' object (previous declaration was in %L)" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused,
                     kMapStateNames_variableMap [kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused],
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForReadAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_searchForReadAccess (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                     GALGAS_bool & outArgument1,
                                                     GALGAS_objectInMemoryIR & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     GALGAS_bool & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_searchForWriteAccess (GALGAS_lstring inKey,
                                                      GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                      GALGAS_bool & outArgument1,
                                                      GALGAS_objectInMemoryIR & outArgument2,
                                                      GALGAS_bool & outArgument3,
                                                      GALGAS_bool & outArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_writeAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForReadWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_searchForReadWriteAccess (GALGAS_lstring inKey,
                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                          GALGAS_bool & outArgument1,
                                                          GALGAS_objectInMemoryIR & outArgument2,
                                                          GALGAS_bool & outArgument3,
                                                          GALGAS_bool & outArgument4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readWriteAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForDropAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_searchForDropAccess (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                     GALGAS_bool & outArgument1,
                                                     GALGAS_objectInMemoryIR & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     GALGAS_bool & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_dropAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForDropAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForConstantMethodCall = "the '%K' object is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_searchForConstantMethodCall (GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                             GALGAS_bool & outArgument1,
                                                             GALGAS_objectInMemoryIR & outArgument2,
                                                             GALGAS_bool & outArgument3,
                                                             GALGAS_bool & outArgument4,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_constMethodCall,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForConstantMethodCall
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForMethodCall = "the '%K' object is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_searchForMethodCall (GALGAS_lstring inKey,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                     GALGAS_bool & outArgument1,
                                                     GALGAS_objectInMemoryIR & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     GALGAS_bool & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_methodCall,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForMethodCall
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_neutralAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_neutralAccess (GALGAS_lstring inKey,
                                               GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               GALGAS_bool & outArgument1,
                                               GALGAS_objectInMemoryIR & outArgument2,
                                               GALGAS_bool & outArgument3,
                                               GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_neutralAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_neutralAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_type ;
    outArgument1 = p->mAttribute_readAccessAllowed ;
    outArgument2 = p->mAttribute_variableKind ;
    outArgument3 = p->mAttribute_copyable ;
    outArgument4 = p->mAttribute_canBeUsedAsInputParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap::getter_typeForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_readAccessAllowedForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_readAccessAllowed ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_variableMap::getter_variableKindForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_objectInMemoryIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_variableKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_copyableForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_copyable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_canBeUsedAsInputParameterForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_canBeUsedAsInputParameter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_setTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                               GALGAS_string inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_type = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_setReadAccessAllowedForKey (GALGAS_bool inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_readAccessAllowed = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_setVariableKindForKey (GALGAS_objectInMemoryIR inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_variableKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_setCopyableForKey (GALGAS_bool inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_copyable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::setter_setCanBeUsedAsInputParameterForKey (GALGAS_bool inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_canBeUsedAsInputParameter = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap * GALGAS_variableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * result = (cMapElement_variableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_variableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_variableMap::cEnumerator_variableMap (const GALGAS_variableMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_variableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_variableMap::current_type (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_readAccessAllowed (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_readAccessAllowed ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR cEnumerator_variableMap::current_variableKind (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_variableKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_copyable (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_copyable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_canBeUsedAsInputParameter (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_canBeUsedAsInputParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @variableMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap ("variableMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap GALGAS_variableMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_variableMap result ;
  const GALGAS_variableMap * p = (const GALGAS_variableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy::GALGAS_variableMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap_2D_proxy::class_method_makeProxy (GALGAS_variableMap & ioMap,
                                                          GALGAS_lstring inKey,
                                                          GALGAS_variableMap_2D_proxy & outProxy
                                                          COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap_2D_proxy::class_method_makeProxyFromString (GALGAS_variableMap & ioMap,
                                                                    GALGAS_string inKey,
                                                                    GALGAS_variableMap_2D_proxy & outProxy
                                                                    COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap_2D_proxy::getter_type (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "type" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_type;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_readAccessAllowed (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "readAccessAllowed" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_readAccessAllowed;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_variableMap_2D_proxy::getter_variableKind (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_objectInMemoryIR result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "variableKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_variableKind;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_copyable (C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "copyable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_copyable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_canBeUsedAsInputParameter (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "canBeUsedAsInputParameter" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_canBeUsedAsInputParameter;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForWriteAccess (const GALGAS_variableMap & inMap,
                                                                                           const GALGAS_lstring & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadWriteAccess (const GALGAS_variableMap & inMap,
                                                                                               const GALGAS_lstring & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForDropAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForDropAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForConstantMethodCall (const GALGAS_variableMap & inMap,
                                                                                                  const GALGAS_lstring & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForConstantMethodCall, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForMethodCall (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForMethodCall, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_neutralAccess (const GALGAS_variableMap & inMap,
                                                                                    const GALGAS_lstring & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_neutralAccess, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @variableMap-proxy type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap_2D_proxy ("variableMap-proxy",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  const GALGAS_variableMap_2D_proxy * p = (const GALGAS_variableMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        '@semanticTypePrecedenceGraph' graph                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_abstractDeclaration inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_topologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                 GALGAS_lstringlist & outSortedKeyList,
                                                                 GALGAS_declarationListAST & outUnsortedList,
                                                                 GALGAS_lstringlist & outUnsortedKeyList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
  GALGAS_declarationListAST::detachSharedList (sortedList) ;
  GALGAS_declarationListAST::detachSharedList (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                           GALGAS_lstringlist & outSortedKeyList,
                                                                           GALGAS_declarationListAST & outUnsortedList,
                                                                           GALGAS_lstringlist & outUnsortedKeyList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
  GALGAS_declarationListAST::detachSharedList (sortedList) ;
  GALGAS_declarationListAST::detachSharedList (unsortedList) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
  GALGAS_declarationListAST::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
  GALGAS_declarationListAST::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
  GALGAS_declarationListAST::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::getter_accessibleNodesFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            GALGAS_stringset::constructor_emptySet (HERE),
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticTypePrecedenceGraph type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  const GALGAS_semanticTypePrecedenceGraph * p = (const GALGAS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                                                    const GALGAS_lstring & in_mRoutineLLVMName,
                                                                    const GALGAS_bool & in_mIsPublic,
                                                                    const GALGAS_modeMap & in_mModeMap,
                                                                    const GALGAS_procedureSignature & in_mSignature,
                                                                    const GALGAS_routineKind & in_mRoutineKind,
                                                                    const GALGAS_bool & in_mWeak,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                                    const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                    const GALGAS_bool & in_mCanAccessProperties,
                                                                    const GALGAS_bool & in_mCanMutateProperties
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRoutineLLVMName (in_mRoutineLLVMName),
mAttribute_mIsPublic (in_mIsPublic),
mAttribute_mModeMap (in_mModeMap),
mAttribute_mSignature (in_mSignature),
mAttribute_mRoutineKind (in_mRoutineKind),
mAttribute_mWeak (in_mWeak),
mAttribute_mReturnType (in_mReturnType),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation),
mAttribute_mCanAccessProperties (in_mCanAccessProperties),
mAttribute_mCanMutateProperties (in_mCanMutateProperties) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineMapForContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineLLVMName.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mRoutineKind.isValid () && mAttribute_mWeak.isValid () && mAttribute_mReturnType.isValid () && mAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid () && mAttribute_mCanAccessProperties.isValid () && mAttribute_mCanMutateProperties.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMapForContext (mAttribute_lkey, mAttribute_mRoutineLLVMName, mAttribute_mIsPublic, mAttribute_mModeMap, mAttribute_mSignature, mAttribute_mRoutineKind, mAttribute_mWeak, mAttribute_mReturnType, mAttribute_mAppendFileAndLineArgumentForPanicLocation, mAttribute_mCanAccessProperties, mAttribute_mCanMutateProperties COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineLLVMName" ":" ;
  mAttribute_mRoutineLLVMName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mAttribute_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModeMap" ":" ;
  mAttribute_mModeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mAttribute_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineKind" ":" ;
  mAttribute_mRoutineKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWeak" ":" ;
  mAttribute_mWeak.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mAttribute_mReturnType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAppendFileAndLineArgumentForPanicLocation" ":" ;
  mAttribute_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCanAccessProperties" ":" ;
  mAttribute_mCanAccessProperties.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCanMutateProperties" ":" ;
  mAttribute_mCanMutateProperties.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMapForContext * operand = (cMapElement_routineMapForContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineLLVMName.objectCompare (operand->mAttribute_mRoutineLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsPublic.objectCompare (operand->mAttribute_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModeMap.objectCompare (operand->mAttribute_mModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSignature.objectCompare (operand->mAttribute_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineKind.objectCompare (operand->mAttribute_mRoutineKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWeak.objectCompare (operand->mAttribute_mWeak) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (operand->mAttribute_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAppendFileAndLineArgumentForPanicLocation.objectCompare (operand->mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCanAccessProperties.objectCompare (operand->mAttribute_mCanAccessProperties) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCanMutateProperties.objectCompare (operand->mAttribute_mCanMutateProperties) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_routineMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext & GALGAS_routineMapForContext::operator = (const GALGAS_routineMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_mapWithMapToOverride (const GALGAS_routineMapForContext & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_routineMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_lstring & inArgument0,
                                                       const GALGAS_bool & inArgument1,
                                                       const GALGAS_modeMap & inArgument2,
                                                       const GALGAS_procedureSignature & inArgument3,
                                                       const GALGAS_routineKind & inArgument4,
                                                       const GALGAS_bool & inArgument5,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inArgument6,
                                                       const GALGAS_bool & inArgument7,
                                                       const GALGAS_bool & inArgument8,
                                                       const GALGAS_bool & inArgument9,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_lstring inArgument0,
                                                    GALGAS_bool inArgument1,
                                                    GALGAS_modeMap inArgument2,
                                                    GALGAS_procedureSignature inArgument3,
                                                    GALGAS_routineKind inArgument4,
                                                    GALGAS_bool inArgument5,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument6,
                                                    GALGAS_bool inArgument7,
                                                    GALGAS_bool inArgument8,
                                                    GALGAS_bool inArgument9,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineMapForContext_searchKey = "there is no '%K' routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_lstring & outArgument0,
                                                    GALGAS_bool & outArgument1,
                                                    GALGAS_modeMap & outArgument2,
                                                    GALGAS_procedureSignature & outArgument3,
                                                    GALGAS_routineKind & outArgument4,
                                                    GALGAS_bool & outArgument5,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outArgument6,
                                                    GALGAS_bool & outArgument7,
                                                    GALGAS_bool & outArgument8,
                                                    GALGAS_bool & outArgument9,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_routineMapForContext_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mAttribute_mRoutineLLVMName ;
    outArgument1 = p->mAttribute_mIsPublic ;
    outArgument2 = p->mAttribute_mModeMap ;
    outArgument3 = p->mAttribute_mSignature ;
    outArgument4 = p->mAttribute_mRoutineKind ;
    outArgument5 = p->mAttribute_mWeak ;
    outArgument6 = p->mAttribute_mReturnType ;
    outArgument7 = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
    outArgument8 = p->mAttribute_mCanAccessProperties ;
    outArgument9 = p->mAttribute_mCanMutateProperties ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_removeKey (GALGAS_lstring inKey,
                                                    GALGAS_lstring & outArgument0,
                                                    GALGAS_bool & outArgument1,
                                                    GALGAS_modeMap & outArgument2,
                                                    GALGAS_procedureSignature & outArgument3,
                                                    GALGAS_routineKind & outArgument4,
                                                    GALGAS_bool & outArgument5,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outArgument6,
                                                    GALGAS_bool & outArgument7,
                                                    GALGAS_bool & outArgument8,
                                                    GALGAS_bool & outArgument9,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' routine" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mAttribute_mRoutineLLVMName ;
    outArgument1 = p->mAttribute_mIsPublic ;
    outArgument2 = p->mAttribute_mModeMap ;
    outArgument3 = p->mAttribute_mSignature ;
    outArgument4 = p->mAttribute_mRoutineKind ;
    outArgument5 = p->mAttribute_mWeak ;
    outArgument6 = p->mAttribute_mReturnType ;
    outArgument7 = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
    outArgument8 = p->mAttribute_mCanAccessProperties ;
    outArgument9 = p->mAttribute_mCanMutateProperties ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapForContext::getter_mRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mRoutineLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_routineMapForContext::getter_mModeMapForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_modeMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mModeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_routineMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_procedureSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapForContext::getter_mRoutineKindForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_routineKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mRoutineKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext::getter_mWeakForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mWeak ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineMapForContext::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext::getter_mAppendFileAndLineArgumentForPanicLocationForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext::getter_mCanAccessPropertiesForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mCanAccessProperties ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext::getter_mCanMutatePropertiesForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mAttribute_mCanMutateProperties ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mRoutineLLVMName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mIsPublic = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMModeMapForKey (GALGAS_modeMap inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mModeMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMSignatureForKey (GALGAS_procedureSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMRoutineKindForKey (GALGAS_routineKind inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mRoutineKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMWeakForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mWeak = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mReturnType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMAppendFileAndLineArgumentForPanicLocationForKey (GALGAS_bool inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mAppendFileAndLineArgumentForPanicLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMCanAccessPropertiesForKey (GALGAS_bool inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mCanAccessProperties = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::setter_setMCanMutatePropertiesForKey (GALGAS_bool inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mAttribute_mCanMutateProperties = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMapForContext * GALGAS_routineMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * result = (cMapElement_routineMapForContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineMapForContext::cEnumerator_routineMapForContext (const GALGAS_routineMapForContext & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext_2D_element cEnumerator_routineMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return GALGAS_routineMapForContext_2D_element (p->mAttribute_lkey, p->mAttribute_mRoutineLLVMName, p->mAttribute_mIsPublic, p->mAttribute_mModeMap, p->mAttribute_mSignature, p->mAttribute_mRoutineKind, p->mAttribute_mWeak, p->mAttribute_mReturnType, p->mAttribute_mAppendFileAndLineArgumentForPanicLocation, p->mAttribute_mCanAccessProperties, p->mAttribute_mCanMutateProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMapForContext::current_mRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mRoutineLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap cEnumerator_routineMapForContext::current_mModeMap (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature cEnumerator_routineMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind cEnumerator_routineMapForContext::current_mRoutineKind (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapForContext::current_mWeak (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mWeak ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_routineMapForContext::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapForContext::current_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapForContext::current_mCanAccessProperties (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mCanAccessProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMapForContext::current_mCanMutateProperties (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mAttribute_mCanMutateProperties ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineMapForContext type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  const GALGAS_routineMapForContext * p = (const GALGAS_routineMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_modeMap::cMapElement_modeMap (const GALGAS_lstring & inKey
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_modeMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_modeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_modeMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_modeMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_modeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_modeMap * operand = (cMapElement_modeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap::GALGAS_modeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap::GALGAS_modeMap (const GALGAS_modeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap & GALGAS_modeMap::operator = (const GALGAS_modeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_modeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::constructor_mapWithMapToOverride (const GALGAS_modeMap & inMapToOverride
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_modeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_modeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_modeMap * p = NULL ;
  macroMyNew (p, cMapElement_modeMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@modeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap::setter_insertKey (GALGAS_lstring inKey,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_modeMap * p = NULL ;
  macroMyNew (p, cMapElement_modeMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%%%K' mode is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_modeMap_searchKey = "there is no '%%%K' mode" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap::method_searchKey (GALGAS_lstring inKey,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_modeMap * p = (const cMapElement_modeMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_modeMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_modeMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_modeMap * GALGAS_modeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_modeMap * result = (cMapElement_modeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_modeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_modeMap::cEnumerator_modeMap (const GALGAS_modeMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element cEnumerator_modeMap::current (LOCATION_ARGS) const {
  const cMapElement_modeMap * p = (const cMapElement_modeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_modeMap) ;
  return GALGAS_modeMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_modeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @modeMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modeMap ("modeMap",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_modeMap result ;
  const GALGAS_modeMap * p = (const GALGAS_modeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@procedureSignature' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procedureSignature : public cCollectionElement {
  public : GALGAS_procedureSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procedureSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                  const GALGAS_string & in_mSelector,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procedureSignature::cCollectionElement_procedureSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                              const GALGAS_string & in_mSelector,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procedureSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procedureSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procedureSignature (mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mSelector, mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procedureSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procedureSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procedureSignature * operand = (cCollectionElement_procedureSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procedureSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature::GALGAS_procedureSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature::GALGAS_procedureSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procedureSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procedureSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procedureSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GALGAS_string & in_mSelector,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_procedureSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_procedureSignature (in_mFormalArgumentPassingMode,
                                                        in_mSelector,
                                                        in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procedureSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procedureSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
      outOperand2 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::add_operation (const GALGAS_procedureSignature & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procedureSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procedureSignature result = GALGAS_procedureSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procedureSignature result = GALGAS_procedureSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_procedureSignature result = GALGAS_procedureSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature::plusAssign_operation (const GALGAS_procedureSignature inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procedureSignature::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procedureSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procedureSignature::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procedureSignature * p = (cCollectionElement_procedureSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procedureSignature::cEnumerator_procedureSignature (const GALGAS_procedureSignature & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element cEnumerator_procedureSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_procedureSignature * p = (const cCollectionElement_procedureSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_procedureSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procedureSignature * p = (const cCollectionElement_procedureSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_procedureSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procedureSignature * p = (const cCollectionElement_procedureSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_procedureSignature::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_procedureSignature * p = (const cCollectionElement_procedureSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procedureSignature) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @procedureSignature type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureSignature ("procedureSignature",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureSignature::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procedureSignature result ;
  const GALGAS_procedureSignature * p = (const GALGAS_procedureSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_procedureSignature & in_mSignature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPublic (in_mIsPublic),
mAttribute_mSignature (in_mSignature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_guardMapForContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapForContext (mAttribute_lkey, mAttribute_mIsPublic, mAttribute_mSignature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_guardMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mAttribute_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mAttribute_mSignature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_guardMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapForContext * operand = (cMapElement_guardMapForContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPublic.objectCompare (operand->mAttribute_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSignature.objectCompare (operand->mAttribute_mSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext::GALGAS_guardMapForContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext::GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext & GALGAS_guardMapForContext::operator = (const GALGAS_guardMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_mapWithMapToOverride (const GALGAS_guardMapForContext & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_guardMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_bool & inArgument0,
                                                     const GALGAS_procedureSignature & inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_bool inArgument0,
                                                  GALGAS_procedureSignature inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_guardMapForContext_searchKey = "there is no '%K' guard" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_procedureSignature & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_guardMapForContext_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mAttribute_mIsPublic ;
    outArgument1 = p->mAttribute_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_removeKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_procedureSignature & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' guard" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mAttribute_mIsPublic ;
    outArgument1 = p->mAttribute_mSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapForContext::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mAttribute_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_guardMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_procedureSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mAttribute_mIsPublic = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext::setter_setMSignatureForKey (GALGAS_procedureSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mAttribute_mSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_guardMapForContext * GALGAS_guardMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GALGAS_guardMapForContext_2D_element (p->mAttribute_lkey, p->mAttribute_mIsPublic, p->mAttribute_mSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mAttribute_mSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @guardMapForContext type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_guardMapForContext::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  const GALGAS_guardMapForContext * p = (const GALGAS_guardMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_prefixOperatorMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_prefixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_prefixOperatorMap * operand = (cMapElement_prefixOperatorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap & GALGAS_prefixOperatorMap::operator = (const GALGAS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_prefixOperatorMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "prefix operation is not defined for $%K type" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_prefixOperatorMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_prefixOperatorMap * GALGAS_prefixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @prefixOperatorMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  const GALGAS_prefixOperatorMap * p = (const GALGAS_prefixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

