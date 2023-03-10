#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyGetterMap::cMapElement_propertyGetterMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_propertyVisibility & in_mVisibility,
                                                              const GALGAS_propertyGetterKind & in_mAccess
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mVisibility (in_mVisibility),
mProperty_mAccess (in_mAccess) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_propertyGetterMap::isValid (void) const {
  /* return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyGetterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyGetterMap (mProperty_lkey, mProperty_mVisibility, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_propertyGetterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVisibility" ":" ;
  mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap::GALGAS_propertyGetterMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap::GALGAS_propertyGetterMap (const GALGAS_propertyGetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap & GALGAS_propertyGetterMap::operator = (const GALGAS_propertyGetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::constructor_mapWithMapToOverride (const GALGAS_propertyGetterMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_propertyVisibility & inArgument0,
                                                    const GALGAS_propertyGetterKind & inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyGetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility inArgument0,
                                                 GALGAS_propertyGetterKind inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyGetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyGetterMap_searchKey = "there is no '%K' property" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility & outArgument0,
                                                 GALGAS_propertyGetterKind & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_propertyGetterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    outArgument0 = p->mProperty_mVisibility ;
    outArgument1 = p->mProperty_mAccess ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyGetterMap::getter_mVisibilityForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) attributes ;
  GALGAS_propertyVisibility result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    result = p->mProperty_mVisibility ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterMap::getter_mAccessForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) attributes ;
  GALGAS_propertyGetterKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::setter_setMVisibilityForKey (GALGAS_propertyVisibility inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyGetterMap * p = (cMapElement_propertyGetterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    p->mProperty_mVisibility = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap::setter_setMAccessForKey (GALGAS_propertyGetterKind inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyGetterMap * p = (cMapElement_propertyGetterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
    p->mProperty_mAccess = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyGetterMap * GALGAS_propertyGetterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_propertyGetterMap * result = (cMapElement_propertyGetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyGetterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyGetterMap::cEnumerator_propertyGetterMap (const GALGAS_propertyGetterMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element cEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return GALGAS_propertyGetterMap_2D_element (p->mProperty_lkey, p->mProperty_mVisibility, p->mProperty_mAccess) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility cEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return p->mProperty_mVisibility ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind cEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyGetterMap) ;
  return p->mProperty_mAccess ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_propertyVisibility & outArgument0,
                                                   GALGAS_propertyGetterKind & outArgument1) const {
  const cMapElement_propertyGetterMap * p = (const cMapElement_propertyGetterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyGetterMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGetterMap ("propertyGetterMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_propertyGetterMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterMap result ;
  const GALGAS_propertyGetterMap * p = (const GALGAS_propertyGetterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyGetterKind_storedProperty::cEnumAssociatedValues_propertyGetterKind_storedProperty (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                  const GALGAS_uint inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyGetterKind_storedProperty::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyGetterKind_computedProperty::cEnumAssociatedValues_propertyGetterKind_computedProperty (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                                                                      const GALGAS_routineLLVMNameDict inAssociatedValue1
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyGetterKind_computedProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyGetterKind_constantProperty::cEnumAssociatedValues_propertyGetterKind_constantProperty (const GALGAS_objectIR inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyGetterKind_constantProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_propertyGetterKind_constantProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyGetterKind_constantProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyGetterKind_constantProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind::GALGAS_propertyGetterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::constructor_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                 const GALGAS_uint & inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_storedProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyGetterKind_storedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::constructor_computedProperty (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                                   const GALGAS_routineLLVMNameDict & inAssociatedValue1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_computedProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyGetterKind_computedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::constructor_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_constantProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyGetterKind_constantProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::method_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_uint & outAssociatedValue1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_storedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyGetterKind storedProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyGetterKind_storedProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::method_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                         GALGAS_routineLLVMNameDict & outAssociatedValue1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_computedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyGetterKind computedProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyGetterKind_computedProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::method_constantProperty (GALGAS_objectIR & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_constantProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyGetterKind constantProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyGetterKind_constantProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind::optional_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                         GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_storedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyGetterKind_storedProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind::optional_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                           GALGAS_routineLLVMNameDict & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_computedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyGetterKind_computedProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterKind::optional_constantProperty (GALGAS_objectIR & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_constantProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyGetterKind_constantProperty * ptr = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyGetterKind [4] = {
  "(not built)",
  "storedProperty",
  "computedProperty",
  "constantProperty"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyGetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_storedProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyGetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_computedProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyGetterKind::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_constantProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterKind::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<enum @propertyGetterKind: " << gEnumNameArrayFor_propertyGetterKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyGetterKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGetterKind ("propertyGetterKind",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterKind GALGAS_propertyGetterKind::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterKind result ;
  const GALGAS_propertyGetterKind * p = (const GALGAS_propertyGetterKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility::GALGAS_propertyVisibility (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyVisibility::constructor_isPublic (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyVisibility result ;
  result.mEnum = kEnum_isPublic ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyVisibility::constructor_isPrivate (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyVisibility result ;
  result.mEnum = kEnum_isPrivate ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyVisibility::optional_isPublic () const {
  const bool ok = mEnum == kEnum_isPublic ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyVisibility::optional_isPrivate () const {
  const bool ok = mEnum == kEnum_isPrivate ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyVisibility [3] = {
  "(not built)",
  "isPublic",
  "isPrivate"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyVisibility::getter_isIsPublic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isPublic == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyVisibility::getter_isIsPrivate (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_isPrivate == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyVisibility::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "<enum @propertyVisibility: " << gEnumNameArrayFor_propertyVisibility [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyVisibility type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyVisibility ("propertyVisibility",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyVisibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyVisibility ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyVisibility::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyVisibility (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertyVisibility::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyVisibility result ;
  const GALGAS_propertyVisibility * p = (const GALGAS_propertyVisibility *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyVisibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyVisibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertySetterMap::cMapElement_propertySetterMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_propertyVisibility & in_mVisibility,
                                                              const GALGAS_propertySetterKind & in_mAccess
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mVisibility (in_mVisibility),
mProperty_mAccess (in_mAccess) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_propertySetterMap::isValid (void) const {
  /* return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertySetterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertySetterMap (mProperty_lkey, mProperty_mVisibility, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_propertySetterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVisibility" ":" ;
  mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap::GALGAS_propertySetterMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap::GALGAS_propertySetterMap (const GALGAS_propertySetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap & GALGAS_propertySetterMap::operator = (const GALGAS_propertySetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::constructor_mapWithMapToOverride (const GALGAS_propertySetterMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_propertySetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_propertyVisibility & inArgument0,
                                                    const GALGAS_propertySetterKind & inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * p = NULL ;
  macroMyNew (p, cMapElement_propertySetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility inArgument0,
                                                 GALGAS_propertySetterKind inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * p = NULL ;
  macroMyNew (p, cMapElement_propertySetterMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertySetterMap_searchKey = "there is no '%K' property" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_propertyVisibility & outArgument0,
                                                 GALGAS_propertySetterKind & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_propertySetterMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    outArgument0 = p->mProperty_mVisibility ;
    outArgument1 = p->mProperty_mAccess ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_propertySetterMap::getter_mVisibilityForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) attributes ;
  GALGAS_propertyVisibility result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    result = p->mProperty_mVisibility ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterMap::getter_mAccessForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) attributes ;
  GALGAS_propertySetterKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::setter_setMVisibilityForKey (GALGAS_propertyVisibility inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertySetterMap * p = (cMapElement_propertySetterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    p->mProperty_mVisibility = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap::setter_setMAccessForKey (GALGAS_propertySetterKind inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertySetterMap * p = (cMapElement_propertySetterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertySetterMap) ;
    p->mProperty_mAccess = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertySetterMap * GALGAS_propertySetterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_propertySetterMap * result = (cMapElement_propertySetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertySetterMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertySetterMap::cEnumerator_propertySetterMap (const GALGAS_propertySetterMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element cEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return GALGAS_propertySetterMap_2D_element (p->mProperty_lkey, p->mProperty_mVisibility, p->mProperty_mAccess) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility cEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return p->mProperty_mVisibility ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind cEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertySetterMap) ;
  return p->mProperty_mAccess ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterMap::optional_searchKey (const GALGAS_string & inKey,
                                                   GALGAS_propertyVisibility & outArgument0,
                                                   GALGAS_propertySetterKind & outArgument1) const {
  const cMapElement_propertySetterMap * p = (const cMapElement_propertySetterMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//@propertySetterMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertySetterMap ("propertySetterMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_propertySetterMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterMap result ;
  const GALGAS_propertySetterMap * p = (const GALGAS_propertySetterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertySetterKind_storedProperty::cEnumAssociatedValues_propertySetterKind_storedProperty (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                  const GALGAS_uint inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertySetterKind_storedProperty::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertySetterKind_computedProperty::cEnumAssociatedValues_propertySetterKind_computedProperty (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                                                                      const GALGAS_routineLLVMNameDict inAssociatedValue1,
                                                                                                                      const GALGAS_routineLLVMNameDict inAssociatedValue2
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertySetterKind_computedProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind::GALGAS_propertySetterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterKind::constructor_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                                 const GALGAS_uint & inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_storedProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertySetterKind_storedProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterKind::constructor_computedProperty (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                                   const GALGAS_routineLLVMNameDict & inAssociatedValue1,
                                                                                   const GALGAS_routineLLVMNameDict & inAssociatedValue2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_computedProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertySetterKind_computedProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind::method_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_uint & outAssociatedValue1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_storedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertySetterKind storedProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertySetterKind_storedProperty * ptr = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind::method_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                         GALGAS_routineLLVMNameDict & outAssociatedValue1,
                                                         GALGAS_routineLLVMNameDict & outAssociatedValue2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_computedProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @propertySetterKind computedProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertySetterKind_computedProperty * ptr = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterKind::optional_storedProperty (GALGAS_omnibusType & outAssociatedValue0,
                                                         GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_storedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_propertySetterKind_storedProperty * ptr = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterKind::optional_computedProperty (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                           GALGAS_routineLLVMNameDict & outAssociatedValue1,
                                                           GALGAS_routineLLVMNameDict & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_computedProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_propertySetterKind_computedProperty * ptr = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertySetterKind [3] = {
  "(not built)",
  "storedProperty",
  "computedProperty"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertySetterKind::getter_isStoredProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_storedProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertySetterKind::getter_isComputedProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_computedProperty == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertySetterKind::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<enum @propertySetterKind: " << gEnumNameArrayFor_propertySetterKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@propertySetterKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertySetterKind ("propertySetterKind",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterKind GALGAS_propertySetterKind::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterKind result ;
  const GALGAS_propertySetterKind * p = (const GALGAS_propertySetterKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertySetterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticStringMap::cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_staticStringMap::isValid (void) const {
  /* return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticStringMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticStringMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_staticStringMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_staticStringMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticStringMap * operand = (cMapElement_staticStringMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap::GALGAS_staticStringMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap::GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap & GALGAS_staticStringMap::operator = (const GALGAS_staticStringMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_mapWithMapToOverride (const GALGAS_staticStringMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticStringMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = NULL ;
  macroMyNew (p, cMapElement_staticStringMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticStringMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = NULL ;
  macroMyNew (p, cMapElement_staticStringMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_staticStringMap_searchKey = "-- internal error --" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_staticStringMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_staticStringMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticStringMap * p = (cMapElement_staticStringMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticStringMap * GALGAS_staticStringMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GALGAS_staticStringMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_staticStringMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticStringMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticStringMap GALGAS_staticStringMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  const GALGAS_staticStringMap * p = (const GALGAS_staticStringMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticStringMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@globalStructuredConstantList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_globalStructuredConstantList : public cCollectionElement {
  public: GALGAS_globalStructuredConstantList_2D_element mObject ;

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_omnibusType & in_mType,
                                                                                                  const GALGAS_operandIRList & in_mOperandIRList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mOperandIRList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_globalStructuredConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mOperandIRList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_globalStructuredConstantList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_globalStructuredConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalStructuredConstantList (mObject.mProperty_mType, mObject.mProperty_mOperandIRList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_globalStructuredConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandIRList" ":" ;
  mObject.mProperty_mOperandIRList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_globalStructuredConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalStructuredConstantList * operand = (cCollectionElement_globalStructuredConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalStructuredConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalStructuredConstantList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::constructor_listWithValue (const GALGAS_omnibusType & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_omnibusType & in_mType,
                                                                     const GALGAS_operandIRList & in_mOperandIRList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType,
                                                                  in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::addAssign_operation (const GALGAS_omnibusType & inOperand0,
                                                               const GALGAS_operandIRList & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_append (GALGAS_globalStructuredConstantList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_globalStructuredConstantList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_insertAtIndex (const GALGAS_omnibusType inOperand0,
                                                                const GALGAS_operandIRList inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_removeAtIndex (GALGAS_omnibusType & outOperand0,
                                                                GALGAS_operandIRList & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_popFirst (GALGAS_omnibusType & outOperand0,
                                                           GALGAS_operandIRList & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_popLast (GALGAS_omnibusType & outOperand0,
                                                          GALGAS_operandIRList & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::method_first (GALGAS_omnibusType & outOperand0,
                                                        GALGAS_operandIRList & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::method_last (GALGAS_omnibusType & outOperand0,
                                                       GALGAS_operandIRList & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::add_operation (const GALGAS_globalStructuredConstantList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::plusAssign_operation (const GALGAS_globalStructuredConstantList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_globalStructuredConstantList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList::setter_setMOperandIRListAtIndex (GALGAS_operandIRList inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOperandIRList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mOperandIRList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_globalStructuredConstantList::cEnumerator_globalStructuredConstantList (const GALGAS_globalStructuredConstantList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element cEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList cEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mOperandIRList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@globalStructuredConstantList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalStructuredConstantList ("globalStructuredConstantList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalStructuredConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  const GALGAS_globalStructuredConstantList * p = (const GALGAS_globalStructuredConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalStructuredConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@operandIRList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_operandIRList : public cCollectionElement {
  public: GALGAS_operandIRList_2D_element mObject ;

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_operandIRList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_operandIRList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_operandIRList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_operandIRList (mObject.mProperty_mOperand COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_operandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_operandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_operandIRList * operand = (cCollectionElement_operandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_operandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList::GALGAS_operandIRList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList::GALGAS_operandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_operandIRList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::constructor_listWithValue (const GALGAS_objectIR & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_objectIR & in_mOperand
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = NULL ;
  macroMyNew (p, cCollectionElement_operandIRList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_append (GALGAS_operandIRList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_operandIRList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_insertAtIndex (const GALGAS_objectIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_removeAtIndex (GALGAS_objectIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_popFirst (GALGAS_objectIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_popLast (GALGAS_objectIR & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::method_first (GALGAS_objectIR & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::method_last (GALGAS_objectIR & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::add_operation (const GALGAS_operandIRList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::plusAssign_operation (const GALGAS_operandIRList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList::setter_setMOperandAtIndex (GALGAS_objectIR inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOperand = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_operandIRList::getter_mOperandAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    result = p->mObject.mProperty_mOperand ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_operandIRList::cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element cEnumerator_operandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject.mProperty_mOperand ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@operandIRList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList ("operandIRList",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_operandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_operandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_operandIRList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  const GALGAS_operandIRList * p = (const GALGAS_operandIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_reference::cEnumAssociatedValues_objectIR_reference (const GALGAS_omnibusType inAssociatedValue0,
                                                                                    const GALGAS_string inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_reference::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_null::cEnumAssociatedValues_objectIR_null (const GALGAS_omnibusType inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_null::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_null::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_null * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_null *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmNamedValue::cEnumAssociatedValues_objectIR_llvmNamedValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                              const GALGAS_string inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmNamedValue::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_literalInteger::cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_omnibusType inAssociatedValue0,
                                                                                              const GALGAS_bigint inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_literalInteger::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmStructureValue::cEnumAssociatedValues_objectIR_llvmStructureValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                      const GALGAS_sortedOperandIRList inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmStructureValue::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_literalString::cEnumAssociatedValues_objectIR_literalString (const GALGAS_uint inAssociatedValue0,
                                                                                            const GALGAS_uint inAssociatedValue1
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_literalString::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_zero::cEnumAssociatedValues_objectIR_zero (const GALGAS_omnibusType inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_zero::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_objectIR_zero::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_zero * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_zero *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayStaticValues::cEnumAssociatedValues_objectIR_llvmArrayStaticValues (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                            const GALGAS_operandIRList inAssociatedValue1,
                                                                                                            const GALGAS_uint inAssociatedValue2
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayStaticValues::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                              const GALGAS_operandIRList inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                                            const GALGAS_uint inAssociatedValue1,
                                                                                                                            const GALGAS_objectIR inAssociatedValue2
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR::GALGAS_objectIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_void (UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_reference (const GALGAS_omnibusType & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_reference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_reference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_null (const GALGAS_omnibusType & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_null ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_null (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_llvmNamedValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                             const GALGAS_string & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmNamedValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmNamedValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_literalInteger (const GALGAS_omnibusType & inAssociatedValue0,
                                                             const GALGAS_bigint & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalInteger ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalInteger (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_llvmStructureValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                 const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmStructureValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmStructureValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_literalString (const GALGAS_uint & inAssociatedValue0,
                                                            const GALGAS_uint & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalString ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalString (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_zero (const GALGAS_omnibusType & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_zero ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_zero (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayStaticValues (const GALGAS_omnibusType & inAssociatedValue0,
                                                                    const GALGAS_operandIRList & inAssociatedValue1,
                                                                    const GALGAS_uint & inAssociatedValue2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmArrayStaticValues ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayStaticValues (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayDynamicValues (const GALGAS_omnibusType & inAssociatedValue0,
                                                                     const GALGAS_operandIRList & inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmArrayDynamicValues ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                           const GALGAS_uint & inAssociatedValue1,
                                                                           const GALGAS_objectIR & inAssociatedValue2,
                                                                           const GALGAS_uint & inAssociatedValue3
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_llvmArrayRepeatedStaticValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                            const GALGAS_uint & inAssociatedValue1,
                                                                            const GALGAS_objectIR & inAssociatedValue2
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmArrayRepeatedDynamicValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_reference (GALGAS_omnibusType & outAssociatedValue0,
                                        GALGAS_string & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_reference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR reference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_reference * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_null (GALGAS_omnibusType & outAssociatedValue0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_null) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectIR null invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_null * ptr = (const cEnumAssociatedValues_objectIR_null *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmNamedValue (GALGAS_omnibusType & outAssociatedValue0,
                                             GALGAS_string & outAssociatedValue1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmNamedValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmNamedValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmNamedValue * ptr = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_literalInteger (GALGAS_omnibusType & outAssociatedValue0,
                                             GALGAS_bigint & outAssociatedValue1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalInteger) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR literalInteger invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalInteger * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmStructureValue (GALGAS_omnibusType & outAssociatedValue0,
                                                 GALGAS_sortedOperandIRList & outAssociatedValue1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmStructureValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmStructureValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmStructureValue * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_literalString (GALGAS_uint & outAssociatedValue0,
                                            GALGAS_uint & outAssociatedValue1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalString) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR literalString invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalString * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_zero (GALGAS_omnibusType & outAssociatedValue0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_zero) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectIR zero invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_zero * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayStaticValues (GALGAS_omnibusType & outAssociatedValue0,
                                                    GALGAS_operandIRList & outAssociatedValue1,
                                                    GALGAS_uint & outAssociatedValue2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayStaticValues) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayStaticValues invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayDynamicValues (GALGAS_omnibusType & outAssociatedValue0,
                                                     GALGAS_operandIRList & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayDynamicValues) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayDynamicValues invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayRepeatedStaticValue (GALGAS_omnibusType & outAssociatedValue0,
                                                           GALGAS_uint & outAssociatedValue1,
                                                           GALGAS_objectIR & outAssociatedValue2,
                                                           GALGAS_uint & outAssociatedValue3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayRepeatedStaticValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayRepeatedStaticValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::method_llvmArrayRepeatedDynamicValue (GALGAS_omnibusType & outAssociatedValue0,
                                                            GALGAS_uint & outAssociatedValue1,
                                                            GALGAS_objectIR & outAssociatedValue2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayRepeatedDynamicValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayRepeatedDynamicValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_void () const {
  const bool ok = mEnum == kEnum_void ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_reference (GALGAS_omnibusType & outAssociatedValue0,
                                          GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_reference ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_reference * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_null (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_null ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_null *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_null * ptr = (const cEnumAssociatedValues_objectIR_null *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmNamedValue (GALGAS_omnibusType & outAssociatedValue0,
                                               GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_llvmNamedValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_llvmNamedValue * ptr = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_literalInteger (GALGAS_omnibusType & outAssociatedValue0,
                                               GALGAS_bigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_literalInteger ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_literalInteger * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmStructureValue (GALGAS_omnibusType & outAssociatedValue0,
                                                   GALGAS_sortedOperandIRList & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_llvmStructureValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_llvmStructureValue * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_literalString (GALGAS_uint & outAssociatedValue0,
                                              GALGAS_uint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_literalString ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_literalString * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_zero (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_zero ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_zero * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayStaticValues (GALGAS_omnibusType & outAssociatedValue0,
                                                      GALGAS_operandIRList & outAssociatedValue1,
                                                      GALGAS_uint & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_llvmArrayStaticValues ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayDynamicValues (GALGAS_omnibusType & outAssociatedValue0,
                                                       GALGAS_operandIRList & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_llvmArrayDynamicValues ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayRepeatedStaticValue (GALGAS_omnibusType & outAssociatedValue0,
                                                             GALGAS_uint & outAssociatedValue1,
                                                             GALGAS_objectIR & outAssociatedValue2,
                                                             GALGAS_uint & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_llvmArrayRepeatedStaticValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_objectIR::optional_llvmArrayRepeatedDynamicValue (GALGAS_omnibusType & outAssociatedValue0,
                                                              GALGAS_uint & outAssociatedValue1,
                                                              GALGAS_objectIR & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_llvmArrayRepeatedDynamicValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) unsafePointer () ;
    // const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_reference == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmNamedValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmNamedValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmStructureValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayStaticValues (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayStaticValues == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayDynamicValues (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayDynamicValues == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayRepeatedStaticValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayRepeatedStaticValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayRepeatedDynamicValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayRepeatedDynamicValue == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_objectIR::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @objectIR: " << gEnumNameArrayFor_objectIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@objectIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_objectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_objectIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_objectIR::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  const GALGAS_objectIR * p = (const GALGAS_objectIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (cPtr_abstractDeclarationAST * inObject,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         GALGAS_routineListIR & io_ioRoutineListIR,
                                         GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                         GALGAS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         GALGAS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInContext (io_ioContext, io_ioDecoratedDeclarationList, io_ioDecoratedRoutineList, io_ioRoutineListIR, io_ioStaticListValueMap, io_ioStaticEntityMap, io_ioControlRegisterUserAccesMapAST, io_ioUserLLVMTypeDefinitionListIR, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_subscript_staticSubscript::cEnumAssociatedValues_subscript_staticSubscript (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                  const GALGAS_bigint inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_subscript_staticSubscript::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subscript::GALGAS_subscript (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::constructor_noSubscript (UNUSED_LOCATION_ARGS) {
  GALGAS_subscript result ;
  result.mEnum = kEnum_noSubscript ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::constructor_staticSubscript (const GALGAS_omnibusType & inAssociatedValue0,
                                                                const GALGAS_bigint & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_subscript result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_staticSubscript ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_subscript_staticSubscript (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::constructor_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_subscript result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subscript::method_staticSubscript (GALGAS_omnibusType & outAssociatedValue0,
                                               GALGAS_bigint & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_staticSubscript) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @subscript staticSubscript invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_subscript_staticSubscript * ptr = (const cEnumAssociatedValues_subscript_staticSubscript *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_subscript::optional_noSubscript () const {
  const bool ok = mEnum == kEnum_noSubscript ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_subscript::optional_staticSubscript (GALGAS_omnibusType & outAssociatedValue0,
                                                 GALGAS_bigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_staticSubscript ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_subscript_staticSubscript *) unsafePointer () ;
    // const cEnumAssociatedValues_subscript_staticSubscript * ptr = (const cEnumAssociatedValues_subscript_staticSubscript *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_subscript::optional_literalString () const {
  const bool ok = mEnum == kEnum_literalString ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_subscript [4] = {
  "(not built)",
  "noSubscript",
  "staticSubscript",
  "literalString"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_subscript::getter_isNoSubscript (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noSubscript == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_subscript::getter_isStaticSubscript (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticSubscript == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_subscript::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_subscript::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @subscript: " << gEnumNameArrayFor_subscript [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@subscript type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subscript ("subscript",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subscript::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscript ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subscript::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subscript (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subscript GALGAS_subscript::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subscript result ;
  const GALGAS_subscript * p = (const GALGAS_subscript *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subscript *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscript", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes::GALGAS_omnibusTypeAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes::GALGAS_omnibusTypeAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::constructor_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (0) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::constructor_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes ((uint64_t) 0x3) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::constructor_instanciable (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (((uint64_t) 1) << 0) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::constructor_copyable (UNUSED_LOCATION_ARGS) {
  return GALGAS_omnibusTypeAttributes (((uint64_t) 1) << 1) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_omnibusTypeAttributes::isValid (void) const {
  return mIsValid ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusTypeAttributes::drop (void) {
  mIsValid = false ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_or (const GALGAS_omnibusTypeAttributes & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_and (const GALGAS_omnibusTypeAttributes & inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_xor (const GALGAS_omnibusTypeAttributes & inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::substract_operation (const GALGAS_omnibusTypeAttributes & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_omnibusTypeAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusTypeAttributes result ;
  if (mIsValid) {
    result = GALGAS_omnibusTypeAttributes (((uint64_t) 0x3) ^ mFlags) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_omnibusTypeAttributes::description (C_String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString << "<boolset @omnibusTypeAttributes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString << " instanciable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString << " copyable" ;
    }
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == (uint64_t) 0x3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_instanciable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 0) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_omnibusTypeAttributes::getter_copyable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 1) != 0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@omnibusTypeAttributes type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_omnibusTypeAttributes ("omnibusTypeAttributes",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusTypeAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusTypeAttributes ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusTypeAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusTypeAttributes (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusTypeAttributes GALGAS_omnibusTypeAttributes::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_omnibusTypeAttributes result ;
  const GALGAS_omnibusTypeAttributes * p = (const GALGAS_omnibusTypeAttributes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_omnibusTypeAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusTypeAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_enumeration::cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_enumeration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_enumeration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumeration * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumeration *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_structure::cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_structure::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_structure * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_structure *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_integer::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_llvmType::cEnumAssociatedValues_typeKind_llvmType (const GALGAS_bigint inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_llvmType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_llvmType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_llvmType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_llvmType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_generic::cEnumAssociatedValues_typeKind_generic (const GALGAS_genericFormalParameterList inAssociatedValue0,
                                                                                const GALGAS_ctExpressionAST inAssociatedValue1,
                                                                                const GALGAS_llvmStringDefinition inAssociatedValue2
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_generic::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_opaque::cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_opaque::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_opaque::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_opaque * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_opaque *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_staticArrayType::cEnumAssociatedValues_typeKind_staticArrayType (const GALGAS_omnibusType inAssociatedValue0,
                                                                                                const GALGAS_bigint inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_staticArrayType::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_dynamicArrayType::cEnumAssociatedValues_typeKind_dynamicArrayType (const GALGAS_omnibusType inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_dynamicArrayType::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeKind_dynamicArrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_dynamicArrayType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKind_function::cEnumAssociatedValues_typeKind_function (const GALGAS_mode inAssociatedValue0,
                                                                                  const GALGAS_routineTypedSignature inAssociatedValue1,
                                                                                  const GALGAS_unifiedTypeMapEntry inAssociatedValue2
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKind_function::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_void (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_boolean (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolean ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_enumeration (const GALGAS_uint & inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_enumeration ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumeration (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_structure (const GALGAS_propertyList & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_structure (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_syncTool (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_syncTool ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_integer (const GALGAS_bigint & inAssociatedValue0,
                                                      const GALGAS_bigint & inAssociatedValue1,
                                                      const GALGAS_bool & inAssociatedValue2,
                                                      const GALGAS_uint & inAssociatedValue3
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_integer ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_integer (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_compileTimeInteger (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_compileTimeInteger ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_compileTimeBool (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_compileTimeBool ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_llvmType (const GALGAS_bigint & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_llvmType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_llvmType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_generic (const GALGAS_genericFormalParameterList & inAssociatedValue0,
                                                      const GALGAS_ctExpressionAST & inAssociatedValue1,
                                                      const GALGAS_llvmStringDefinition & inAssociatedValue2
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_generic ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_generic (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_opaque (const GALGAS_bigint & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_opaque ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_opaque (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_staticArrayType (const GALGAS_omnibusType & inAssociatedValue0,
                                                              const GALGAS_bigint & inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_staticArrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_staticArrayType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_dynamicArrayType (const GALGAS_omnibusType & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_dynamicArrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_dynamicArrayType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::constructor_function (const GALGAS_mode & inAssociatedValue0,
                                                       const GALGAS_routineTypedSignature & inAssociatedValue1,
                                                       const GALGAS_unifiedTypeMapEntry & inAssociatedValue2
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_enumeration (GALGAS_uint & outAssociatedValue0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumeration) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind enumeration invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumeration * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_structure (GALGAS_propertyList & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_integer (GALGAS_bigint & outAssociatedValue0,
                                      GALGAS_bigint & outAssociatedValue1,
                                      GALGAS_bool & outAssociatedValue2,
                                      GALGAS_uint & outAssociatedValue3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_integer) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @typeKind integer invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_integer * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_llvmType (GALGAS_bigint & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind llvmType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_llvmType * ptr = (const cEnumAssociatedValues_typeKind_llvmType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_generic (GALGAS_genericFormalParameterList & outAssociatedValue0,
                                      GALGAS_ctExpressionAST & outAssociatedValue1,
                                      GALGAS_llvmStringDefinition & outAssociatedValue2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_generic) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @typeKind generic invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_generic * ptr = (const cEnumAssociatedValues_typeKind_generic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_opaque (GALGAS_bigint & outAssociatedValue0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_opaque) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind opaque invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_opaque * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_staticArrayType (GALGAS_omnibusType & outAssociatedValue0,
                                              GALGAS_bigint & outAssociatedValue1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_staticArrayType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind staticArrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_staticArrayType * ptr = (const cEnumAssociatedValues_typeKind_staticArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_dynamicArrayType (GALGAS_omnibusType & outAssociatedValue0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_dynamicArrayType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind dynamicArrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::method_function (GALGAS_mode & outAssociatedValue0,
                                       GALGAS_routineTypedSignature & outAssociatedValue1,
                                       GALGAS_unifiedTypeMapEntry & outAssociatedValue2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @typeKind function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_function * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_void () const {
  const bool ok = mEnum == kEnum_void ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_boolean () const {
  const bool ok = mEnum == kEnum_boolean ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_literalString () const {
  const bool ok = mEnum == kEnum_literalString ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_enumeration (GALGAS_uint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_enumeration ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_enumeration * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_structure (GALGAS_propertyList & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_structure ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_syncTool () const {
  const bool ok = mEnum == kEnum_syncTool ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_integer (GALGAS_bigint & outAssociatedValue0,
                                        GALGAS_bigint & outAssociatedValue1,
                                        GALGAS_bool & outAssociatedValue2,
                                        GALGAS_uint & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_integer ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_integer * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_compileTimeInteger () const {
  const bool ok = mEnum == kEnum_compileTimeInteger ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_compileTimeBool () const {
  const bool ok = mEnum == kEnum_compileTimeBool ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_llvmType (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_llvmType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_llvmType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_llvmType * ptr = (const cEnumAssociatedValues_typeKind_llvmType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_generic (GALGAS_genericFormalParameterList & outAssociatedValue0,
                                        GALGAS_ctExpressionAST & outAssociatedValue1,
                                        GALGAS_llvmStringDefinition & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_generic ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_generic *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_generic * ptr = (const cEnumAssociatedValues_typeKind_generic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_opaque (GALGAS_bigint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_opaque ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_opaque * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_staticArrayType (GALGAS_omnibusType & outAssociatedValue0,
                                                GALGAS_bigint & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_staticArrayType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_staticArrayType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_staticArrayType * ptr = (const cEnumAssociatedValues_typeKind_staticArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_dynamicArrayType (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_dynamicArrayType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKind::optional_function (GALGAS_mode & outAssociatedValue0,
                                         GALGAS_routineTypedSignature & outAssociatedValue1,
                                         GALGAS_unifiedTypeMapEntry & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_function ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    // const cEnumAssociatedValues_typeKind_function * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumeration == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isSyncTool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_syncTool == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integer == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isCompileTimeInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_compileTimeInteger == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isCompileTimeBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_compileTimeBool == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isLlvmType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isGeneric (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_generic == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_opaque == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isStaticArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticArrayType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dynamicArrayType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@typeKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak::GALGAS_omnibusType_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak & GALGAS_omnibusType_2D_weak::operator = (const GALGAS_omnibusType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak::GALGAS_omnibusType_2D_weak (const GALGAS_omnibusType & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak GALGAS_omnibusType_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_omnibusType_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_omnibusType_2D_weak::bang_omnibusType_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_omnibusType result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusType) ;
      result = GALGAS_omnibusType ((cPtr_omnibusType *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@omnibusType-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_omnibusType_2D_weak ("omnibusType-weak",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusType_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusType_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusType_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusType_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType_2D_weak GALGAS_omnibusType_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_omnibusType_2D_weak result ;
  const GALGAS_omnibusType_2D_weak * p = (const GALGAS_omnibusType_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_omnibusType_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusType-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@arcAssignmentList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public: GALGAS_arcAssignmentList_2D_element mObject ;

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                                            const GALGAS_omnibusType & in_mPropertyType,
                                                                            const GALGAS_uintlist & in_mPropertyIndexPath
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_arcAssignmentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType, inElement.mProperty_mPropertyIndexPath) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_arcAssignmentList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arcAssignmentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arcAssignmentList (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType, mObject.mProperty_mPropertyIndexPath COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_arcAssignmentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyIndexPath" ":" ;
  mObject.mProperty_mPropertyIndexPath.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_arcAssignmentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arcAssignmentList * operand = (cCollectionElement_arcAssignmentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arcAssignmentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arcAssignmentList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_string & in_mPropertyName,
                                                          const GALGAS_omnibusType & in_mPropertyType,
                                                          const GALGAS_uintlist & in_mPropertyIndexPath
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = NULL ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName,
                                                       in_mPropertyType,
                                                       in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::addAssign_operation (const GALGAS_string & inOperand0,
                                                    const GALGAS_omnibusType & inOperand1,
                                                    const GALGAS_uintlist & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_append (GALGAS_arcAssignmentList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_arcAssignmentList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                     const GALGAS_omnibusType inOperand1,
                                                     const GALGAS_uintlist inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                     GALGAS_omnibusType & outOperand1,
                                                     GALGAS_uintlist & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_popFirst (GALGAS_string & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                GALGAS_uintlist & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_popLast (GALGAS_string & outOperand0,
                                               GALGAS_omnibusType & outOperand1,
                                               GALGAS_uintlist & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::method_first (GALGAS_string & outOperand0,
                                             GALGAS_omnibusType & outOperand1,
                                             GALGAS_uintlist & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::method_last (GALGAS_string & outOperand0,
                                            GALGAS_omnibusType & outOperand1,
                                            GALGAS_uintlist & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::add_operation (const GALGAS_arcAssignmentList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::plusAssign_operation (const GALGAS_arcAssignmentList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_setMPropertyNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arcAssignmentList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_setMPropertyTypeAtIndex (GALGAS_omnibusType inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList::setter_setMPropertyIndexPathAtIndex (GALGAS_uintlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyIndexPath = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyIndexPath ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_arcAssignmentList::cEnumerator_arcAssignmentList (const GALGAS_arcAssignmentList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element cEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyIndexPath ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@arcAssignmentList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arcAssignmentList ("arcAssignmentList",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arcAssignmentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arcAssignmentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  const GALGAS_arcAssignmentList * p = (const GALGAS_arcAssignmentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arcAssignmentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @userLLVMTypeDefinitionIR reference class
//----------------------------------------------------------------------------------------------------------------------



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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR::GALGAS_userLLVMTypeDefinitionIR (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR::GALGAS_userLLVMTypeDefinitionIR (const cPtr_userLLVMTypeDefinitionIR * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_userLLVMTypeDefinitionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionIR::setter_setMLLVMDefinedTypeName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    p->mProperty_mLLVMDefinedTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_userLLVMTypeDefinitionIR::readProperty_mLLVMDefinedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_userLLVMTypeDefinitionIR) ;
    return p->mProperty_mLLVMDefinedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @userLLVMTypeDefinitionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_userLLVMTypeDefinitionIR::cPtr_userLLVMTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName
                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mLLVMDefinedTypeName (in_mLLVMDefinedTypeName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@userLLVMTypeDefinitionIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ("userLLVMTypeDefinitionIR",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionIR::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR result ;
  const GALGAS_userLLVMTypeDefinitionIR * p = (const GALGAS_userLLVMTypeDefinitionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMTypeDefinitionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak::GALGAS_userLLVMTypeDefinitionIR_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak & GALGAS_userLLVMTypeDefinitionIR_2D_weak::operator = (const GALGAS_userLLVMTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak::GALGAS_userLLVMTypeDefinitionIR_2D_weak (const GALGAS_userLLVMTypeDefinitionIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak GALGAS_userLLVMTypeDefinitionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionIR_2D_weak::bang_userLLVMTypeDefinitionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMTypeDefinitionIR) ;
      result = GALGAS_userLLVMTypeDefinitionIR ((cPtr_userLLVMTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@userLLVMTypeDefinitionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak ("userLLVMTypeDefinitionIR-weak",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR_2D_weak GALGAS_userLLVMTypeDefinitionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionIR_2D_weak result ;
  const GALGAS_userLLVMTypeDefinitionIR_2D_weak * p = (const GALGAS_userLLVMTypeDefinitionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMTypeDefinitionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (cPtr_userLLVMTypeDefinitionIR * inObject,
                                           GALGAS_string & io_ioLLVMcode,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_userLLVMTypeDefinitionIR) ;
    inObject->method_generateLLVMType (io_ioLLVMcode, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@userLLVMTypeDefinitionListIR' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_userLLVMTypeDefinitionListIR : public cCollectionElement {
  public: GALGAS_userLLVMTypeDefinitionListIR_2D_element mObject ;

//--- Constructors
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
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_userLLVMTypeDefinitionListIR::cCollectionElement_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_userLLVMTypeDefinitionListIR::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_userLLVMTypeDefinitionListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_userLLVMTypeDefinitionListIR (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_userLLVMTypeDefinitionListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_userLLVMTypeDefinitionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_userLLVMTypeDefinitionListIR * operand = (cCollectionElement_userLLVMTypeDefinitionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR::GALGAS_userLLVMTypeDefinitionListIR (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR::GALGAS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_userLLVMTypeDefinitionListIR  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::constructor_listWithValue (const GALGAS_userLLVMTypeDefinitionIR & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_userLLVMTypeDefinitionListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::addAssign_operation (const GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_append (GALGAS_userLLVMTypeDefinitionListIR_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_userLLVMTypeDefinitionListIR (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_insertAtIndex (const GALGAS_userLLVMTypeDefinitionIR inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_removeAtIndex (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_popFirst (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_popLast (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::method_first (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::method_last (GALGAS_userLLVMTypeDefinitionIR & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::add_operation (const GALGAS_userLLVMTypeDefinitionListIR & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMTypeDefinitionListIR result = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::plusAssign_operation (const GALGAS_userLLVMTypeDefinitionListIR inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR::setter_setMTypeAtIndex (GALGAS_userLLVMTypeDefinitionIR inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR GALGAS_userLLVMTypeDefinitionListIR::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) attributes.ptr () ;
  GALGAS_userLLVMTypeDefinitionIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_userLLVMTypeDefinitionListIR::cEnumerator_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element cEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_userLLVMTypeDefinitionListIR * p = (const cCollectionElement_userLLVMTypeDefinitionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionIR cEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_userLLVMTypeDefinitionListIR * p = (const cCollectionElement_userLLVMTypeDefinitionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
  return p->mObject.mProperty_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@userLLVMTypeDefinitionListIR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ("userLLVMTypeDefinitionListIR",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionListIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR GALGAS_userLLVMTypeDefinitionListIR::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR result ;
  const GALGAS_userLLVMTypeDefinitionListIR * p = (const GALGAS_userLLVMTypeDefinitionListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMTypeDefinitionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap unsolvedEntryList'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist extensionGetter_unsolvedEntryList (const GALGAS_unifiedTypeMap & inObject,
                                                      C_Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist result_result ; // Returned variable
  result_result = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("unified-type-map.galgas", 19)) ;
  const GALGAS_unifiedTypeMap temp_0 = inObject ;
  cEnumerator_unifiedTypeMap enumerator_1193 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1193.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_1193.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 21)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result.addAssign_operation (enumerator_1193.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 22)) ;
      }
    }
    enumerator_1193.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GALGAS_unifiedTypeMap & ioObject,
                                const GALGAS_lstring constinArgument_inLKey,
                                GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_1625 ;
    const bool optionalResult1576 = temp_1.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_1625) ;
    if (!optionalResult1576) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_element (var_element_1625  COMMA_SOURCE_FILE ("unified-type-map.galgas", 33)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_1705 = GALGAS_unifiedTypeMapElementClass::constructor_new (constinArgument_inLKey, GALGAS_typeDefinition::constructor_unsolved (SOURCE_FILE ("unified-type-map.galgas", 35))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 35)) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_1705, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 36)) ;
    }
    outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_element (var_newElement_1705  COMMA_SOURCE_FILE ("unified-type-map.galgas", 37)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeOptionalEntry'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_makeOptionalEntry (GALGAS_unifiedTypeMap & ioObject,
                                        const GALGAS_lstring constinArgument_inLKey,
                                        GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inLKey.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("unified-type-map.galgas", 45)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = ioObject ;
      GALGAS_unifiedTypeMapElementClass var_element_2216 ;
      const bool optionalResult2167 = temp_2.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_2216) ;
      if (!optionalResult2167) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_element (var_element_2216  COMMA_SOURCE_FILE ("unified-type-map.galgas", 47)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_unifiedTypeMapElementClass var_newElement_2296 = GALGAS_unifiedTypeMapElementClass::constructor_new (constinArgument_inLKey, GALGAS_typeDefinition::constructor_unsolved (SOURCE_FILE ("unified-type-map.galgas", 49))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 49)) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2296, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 50)) ;
      }
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_element (var_newElement_2296  COMMA_SOURCE_FILE ("unified-type-map.galgas", 51)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GALGAS_unifiedTypeMap & ioObject,
                                          const GALGAS_string constinArgument_inKey,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_2798 ;
    const bool optionalResult2750 = temp_1.optional_searchKey (constinArgument_inKey, var_element_2798) ;
    if (!optionalResult2750) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_element (var_element_2798  COMMA_SOURCE_FILE ("unified-type-map.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_2878 = GALGAS_unifiedTypeMapElementClass::constructor_new (GALGAS_lstring::constructor_new (constinArgument_inKey, GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 63))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 63)), GALGAS_typeDefinition::constructor_unsolved (SOURCE_FILE ("unified-type-map.galgas", 63))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 63)) ;
    {
    ioObject.setter_internalInsertKey (GALGAS_lstring::constructor_new (constinArgument_inKey, GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 64))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 64)), var_newElement_2878, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 64)) ;
    }
    outArgument_outEntry = GALGAS_unifiedTypeMapEntry::constructor_element (var_newElement_2878  COMMA_SOURCE_FILE ("unified-type-map.galgas", 65)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap searchKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry extensionGetter_searchKey (const GALGAS_unifiedTypeMap & inObject,
                                                      const GALGAS_lstring & constinArgument_inLKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inLKey.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("unified-type-map.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = inObject ;
      GALGAS_unifiedTypeMapElementClass var_element_3405 ;
      const bool optionalResult3356 = temp_2.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_3405) ;
      if (!optionalResult3356) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        result_result = GALGAS_unifiedTypeMapEntry::constructor_element (var_element_3405  COMMA_SOURCE_FILE ("unified-type-map.galgas", 75)) ;
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap insertType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertType (GALGAS_unifiedTypeMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTypeName,
                                 const GALGAS_omnibusType constinArgument_inTypeDefinition,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_3841 ;
    const bool optionalResult3788 = temp_1.optional_searchKey (constinArgument_inTypeName.readProperty_string (), var_element_3841) ;
    if (!optionalResult3788) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_element_3841.readProperty_mDefinition ().enumValue ()) {
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
          GALGAS_unifiedTypeMapElementClass var_e_3980 = var_element_3841 ;
          var_e_3980.setter_setMDefinition (GALGAS_typeDefinition::constructor_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 90)) COMMA_SOURCE_FILE ("unified-type-map.galgas", 90)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_4080 = GALGAS_unifiedTypeMapElementClass::constructor_new (constinArgument_inTypeName, GALGAS_typeDefinition::constructor_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 93))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 93)) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_4080, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 94)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchType (const GALGAS_unifiedTypeMap inObject,
                                 const GALGAS_lstring constinArgument_inLKey,
                                 GALGAS_omnibusType & outArgument_outTypeDefinition,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTypeDefinition.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = inObject ;
    GALGAS_unifiedTypeMapElementClass var_element_4559 ;
    const bool optionalResult4510 = temp_1.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_4559) ;
    if (!optionalResult4510) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_element_4559.readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_4664 = (const cEnumAssociatedValues_typeDefinition_solved *) (var_element_4559.readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_omnibusType extractedValue_4624_definition = extractPtr_4664->mAssociatedValue0 ;
          outArgument_outTypeDefinition = extractedValue_4624_definition ;
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


//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeDefinition_solved::cEnumAssociatedValues_typeDefinition_solved (const GALGAS_omnibusType inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeDefinition_solved::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_typeDefinition_solved::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeDefinition_solved * ptr = dynamic_cast<const cEnumAssociatedValues_typeDefinition_solved *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDefinition::GALGAS_typeDefinition (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::constructor_unsolved (UNUSED_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  result.mEnum = kEnum_unsolved ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::constructor_solved (const GALGAS_omnibusType & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_solved ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeDefinition_solved (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeDefinition::method_solved (GALGAS_omnibusType & outAssociatedValue0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_solved) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeDefinition solved invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeDefinition_solved * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeDefinition::optional_unsolved () const {
  const bool ok = mEnum == kEnum_unsolved ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeDefinition::optional_solved (GALGAS_omnibusType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_solved ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    // const cEnumAssociatedValues_typeDefinition_solved * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsolved == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_solved == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeDefinition::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @typeDefinition: " << gEnumNameArrayFor_typeDefinition [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@typeDefinition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  const GALGAS_typeDefinition * p = (const GALGAS_typeDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak::GALGAS_unifiedTypeMapElementClass_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak & GALGAS_unifiedTypeMapElementClass_2D_weak::operator = (const GALGAS_unifiedTypeMapElementClass & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak::GALGAS_unifiedTypeMapElementClass_2D_weak (const GALGAS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak GALGAS_unifiedTypeMapElementClass_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass_2D_weak::bang_unifiedTypeMapElementClass_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GALGAS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMapElementClass-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ("unifiedTypeMapElementClass-weak",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapElementClass_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapElementClass_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapElementClass_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak GALGAS_unifiedTypeMapElementClass_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass_2D_weak result ;
  const GALGAS_unifiedTypeMapElementClass_2D_weak * p = (const GALGAS_unifiedTypeMapElementClass_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapElementClass_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_unifiedTypeMapEntry_element::cEnumAssociatedValues_unifiedTypeMapEntry_element (const GALGAS_unifiedTypeMapElementClass_2D_weak inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_unifiedTypeMapEntry_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_unifiedTypeMapEntry_element::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_unifiedTypeMapEntry_element * ptr = dynamic_cast<const cEnumAssociatedValues_unifiedTypeMapEntry_element *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry::GALGAS_unifiedTypeMapEntry (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntry::constructor_null (UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result ;
  result.mEnum = kEnum_null ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntry::constructor_element (const GALGAS_unifiedTypeMapElementClass_2D_weak & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_element ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_unifiedTypeMapEntry_element (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry::method_element (GALGAS_unifiedTypeMapElementClass_2D_weak & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_element) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @unifiedTypeMapEntry element invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_unifiedTypeMapEntry_element * ptr = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry::optional_null () const {
  const bool ok = mEnum == kEnum_null ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntry::optional_element (GALGAS_unifiedTypeMapElementClass_2D_weak & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_element ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) unsafePointer () ;
    // const cEnumAssociatedValues_unifiedTypeMapEntry_element * ptr = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_unifiedTypeMapEntry [3] = {
  "(not built)",
  "null",
  "element"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMapEntry::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_unifiedTypeMapEntry::getter_isElement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_element == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntry::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @unifiedTypeMapEntry: " << gEnumNameArrayFor_unifiedTypeMapEntry [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@unifiedTypeMapEntry type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapEntry ("unifiedTypeMapEntry",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntry::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntry (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_unifiedTypeMapEntry::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result ;
  const GALGAS_unifiedTypeMapEntry * p = (const GALGAS_unifiedTypeMapEntry *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapEntry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType extensionGetter_type (const GALGAS_unifiedTypeMapEntry & inObject,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 164)), GALGAS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 164)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_7106 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_6835_weakElement = extractPtr_7106->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapElementClass var_type_6854 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_6835_weakElement.ptr ())) ;
        if (NULL == var_type_6854.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          switch (var_type_6854.readProperty_mDefinition ().enumValue ()) {
          case GALGAS_typeDefinition::kNotBuilt:
            break ;
          case GALGAS_typeDefinition::kEnum_unsolved:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 169)), GALGAS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 169)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeDefinition::kEnum_solved:
            {
              const cEnumAssociatedValues_typeDefinition_solved * extractPtr_7036 = (const cEnumAssociatedValues_typeDefinition_solved *) (var_type_6854.readProperty_mDefinition ().unsafePointer ()) ;
              const GALGAS_omnibusType extractedValue_7005_definition = extractPtr_7036->mAssociatedValue0 ;
              result_result = extractedValue_7005_definition ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 174)), GALGAS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas", 174)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry key'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_key (const GALGAS_unifiedTypeMapEntry & inObject,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 184)), GALGAS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 184)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_7515 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_7380_weakElement = extractPtr_7515->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapElementClass var_type_7399 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_7380_weakElement.ptr ())) ;
        if (NULL == var_type_7399.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          result_result = var_type_7399.readProperty_mTypeName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("unified-type-map.galgas", 189)), GALGAS_string ("nil type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 189)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_abstractDecoratedDeclaration * inObject,
                                           const GALGAS_semanticContext constin_inContext,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDecoratedDeclaration) ;
    inObject->method_semanticAnalysis (constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticListInvokedFunctionSetMap::cMapElement_staticListInvokedFunctionSetMap (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_stringset & in_mInvokedFunctionSet
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_staticListInvokedFunctionSetMap::isValid (void) const {
  /* return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticListInvokedFunctionSetMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticListInvokedFunctionSetMap (mProperty_lkey, mProperty_mInvokedFunctionSet COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_staticListInvokedFunctionSetMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvokedFunctionSet" ":" ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_staticListInvokedFunctionSetMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInvokedFunctionSetMap * operand = (cMapElement_staticListInvokedFunctionSetMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (operand->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap & GALGAS_staticListInvokedFunctionSetMap::operator = (const GALGAS_staticListInvokedFunctionSetMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::constructor_mapWithMapToOverride (const GALGAS_staticListInvokedFunctionSetMap & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInvokedFunctionSetMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_stringset & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInvokedFunctionSetMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey = "INTERNAL ERROR" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset & outArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    outArgument0 = p->mProperty_mInvokedFunctionSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_staticListInvokedFunctionSetMap::getter_mInvokedFunctionSetForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  GALGAS_stringset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap::setter_setMInvokedFunctionSetForKey (GALGAS_stringset inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInvokedFunctionSetMap * p = (cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    p->mProperty_mInvokedFunctionSet = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_staticListInvokedFunctionSetMap * GALGAS_staticListInvokedFunctionSetMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * result = (cMapElement_staticListInvokedFunctionSetMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInvokedFunctionSetMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_staticListInvokedFunctionSetMap::cEnumerator_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element cEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return GALGAS_staticListInvokedFunctionSetMap_2D_element (p->mProperty_lkey, p->mProperty_mInvokedFunctionSet) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return p->mProperty_mInvokedFunctionSet ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_staticListInvokedFunctionSetMap::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_stringset & outArgument0) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    outArgument0 = p->mProperty_mInvokedFunctionSet ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticListInvokedFunctionSetMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ("staticListInvokedFunctionSetMap",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  const GALGAS_staticListInvokedFunctionSetMap * p = (const GALGAS_staticListInvokedFunctionSetMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compiletimeBoolAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compiletimeBoolAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST::GALGAS_compiletimeBoolAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_compiletimeBoolAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST::GALGAS_compiletimeBoolAST (const cPtr_compiletimeBoolAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimeBoolAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST::constructor_new (LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compiletimeBoolAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compiletimeBoolAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compiletimeBoolAST::cPtr_compiletimeBoolAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compiletimeBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST ;
}

void cPtr_compiletimeBoolAST::description (C_String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString << "[@compiletimeBoolAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compiletimeBoolAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compiletimeBoolAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compiletimeBoolAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compiletimeBoolAST ("compiletimeBoolAST",
                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimeBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimeBoolAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimeBoolAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST result ;
  const GALGAS_compiletimeBoolAST * p = (const GALGAS_compiletimeBoolAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compiletimeBoolAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimeBoolAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak::GALGAS_compiletimeBoolAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak & GALGAS_compiletimeBoolAST_2D_weak::operator = (const GALGAS_compiletimeBoolAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak::GALGAS_compiletimeBoolAST_2D_weak (const GALGAS_compiletimeBoolAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak GALGAS_compiletimeBoolAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST GALGAS_compiletimeBoolAST_2D_weak::bang_compiletimeBoolAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compiletimeBoolAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compiletimeBoolAST) ;
      result = GALGAS_compiletimeBoolAST ((cPtr_compiletimeBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compiletimeBoolAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compiletimeBoolAST_2D_weak ("compiletimeBoolAST-weak",
                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compiletimeBoolAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimeBoolAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compiletimeBoolAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compiletimeBoolAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compiletimeBoolAST_2D_weak GALGAS_compiletimeBoolAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compiletimeBoolAST_2D_weak result ;
  const GALGAS_compiletimeBoolAST_2D_weak * p = (const GALGAS_compiletimeBoolAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compiletimeBoolAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimeBoolAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractImplicitConverterToBoolean reference class
//----------------------------------------------------------------------------------------------------------------------



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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean::GALGAS_abstractImplicitConverterToBoolean (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean::GALGAS_abstractImplicitConverterToBoolean (const cPtr_abstractImplicitConverterToBoolean * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractImplicitConverterToBoolean) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractImplicitConverterToBoolean class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractImplicitConverterToBoolean::cPtr_abstractImplicitConverterToBoolean (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractImplicitConverterToBoolean type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ("abstractImplicitConverterToBoolean",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean GALGAS_abstractImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractImplicitConverterToBoolean result ;
  const GALGAS_abstractImplicitConverterToBoolean * p = (const GALGAS_abstractImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak::GALGAS_abstractImplicitConverterToBoolean_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak & GALGAS_abstractImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_abstractImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak::GALGAS_abstractImplicitConverterToBoolean_2D_weak (const GALGAS_abstractImplicitConverterToBoolean & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak GALGAS_abstractImplicitConverterToBoolean_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean GALGAS_abstractImplicitConverterToBoolean_2D_weak::bang_abstractImplicitConverterToBoolean_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractImplicitConverterToBoolean result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractImplicitConverterToBoolean) ;
      result = GALGAS_abstractImplicitConverterToBoolean ((cPtr_abstractImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractImplicitConverterToBoolean-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak ("abstractImplicitConverterToBoolean-weak",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractImplicitConverterToBoolean_2D_weak GALGAS_abstractImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_abstractImplicitConverterToBoolean_2D_weak * p = (const GALGAS_abstractImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @prefixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------



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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage::GALGAS_prefixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage::GALGAS_prefixOperatorUsage (const cPtr_prefixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefixOperatorUsage::cPtr_prefixOperatorUsage (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@prefixOperatorUsage type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorUsage ("prefixOperatorUsage",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage GALGAS_prefixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorUsage result ;
  const GALGAS_prefixOperatorUsage * p = (const GALGAS_prefixOperatorUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak::GALGAS_prefixOperatorUsage_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak & GALGAS_prefixOperatorUsage_2D_weak::operator = (const GALGAS_prefixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak::GALGAS_prefixOperatorUsage_2D_weak (const GALGAS_prefixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak GALGAS_prefixOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_prefixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage GALGAS_prefixOperatorUsage_2D_weak::bang_prefixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorUsage result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorUsage) ;
      result = GALGAS_prefixOperatorUsage ((cPtr_prefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@prefixOperatorUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak ("prefixOperatorUsage-weak",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage_2D_weak GALGAS_prefixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorUsage_2D_weak result ;
  const GALGAS_prefixOperatorUsage_2D_weak * p = (const GALGAS_prefixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @omnibusInfixOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------



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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage::GALGAS_omnibusInfixOperatorUsage (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage::GALGAS_omnibusInfixOperatorUsage (const cPtr_omnibusInfixOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusInfixOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @omnibusInfixOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorUsage::cPtr_omnibusInfixOperatorUsage (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@omnibusInfixOperatorUsage type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ("omnibusInfixOperatorUsage",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage GALGAS_omnibusInfixOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorUsage result ;
  const GALGAS_omnibusInfixOperatorUsage * p = (const GALGAS_omnibusInfixOperatorUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_omnibusInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak::GALGAS_omnibusInfixOperatorUsage_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak & GALGAS_omnibusInfixOperatorUsage_2D_weak::operator = (const GALGAS_omnibusInfixOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak::GALGAS_omnibusInfixOperatorUsage_2D_weak (const GALGAS_omnibusInfixOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak GALGAS_omnibusInfixOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage GALGAS_omnibusInfixOperatorUsage_2D_weak::bang_omnibusInfixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_omnibusInfixOperatorUsage result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_omnibusInfixOperatorUsage) ;
      result = GALGAS_omnibusInfixOperatorUsage ((cPtr_omnibusInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@omnibusInfixOperatorUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak ("omnibusInfixOperatorUsage-weak",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_omnibusInfixOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_omnibusInfixOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_omnibusInfixOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage_2D_weak GALGAS_omnibusInfixOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorUsage_2D_weak result ;
  const GALGAS_omnibusInfixOperatorUsage_2D_weak * p = (const GALGAS_omnibusInfixOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_omnibusInfixOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("omnibusInfixOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeBoolXorOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolXorOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator::GALGAS_compileTimeBoolXorOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeBoolXorOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator::GALGAS_compileTimeBoolXorOperator (const cPtr_compileTimeBoolXorOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolXorOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolXorOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolXorOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolXorOperator::cPtr_compileTimeBoolXorOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;
}

void cPtr_compileTimeBoolXorOperator::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeBoolXorOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolXorOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeBoolXorOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolXorOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ("compileTimeBoolXorOperator",
                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolXorOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator result ;
  const GALGAS_compileTimeBoolXorOperator * p = (const GALGAS_compileTimeBoolXorOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak::GALGAS_compileTimeBoolXorOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak & GALGAS_compileTimeBoolXorOperator_2D_weak::operator = (const GALGAS_compileTimeBoolXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak::GALGAS_compileTimeBoolXorOperator_2D_weak (const GALGAS_compileTimeBoolXorOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak GALGAS_compileTimeBoolXorOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator GALGAS_compileTimeBoolXorOperator_2D_weak::bang_compileTimeBoolXorOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolXorOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolXorOperator) ;
      result = GALGAS_compileTimeBoolXorOperator ((cPtr_compileTimeBoolXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolXorOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2D_weak ("compileTimeBoolXorOperator-weak",
                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolXorOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolXorOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolXorOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolXorOperator_2D_weak GALGAS_compileTimeBoolXorOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolXorOperator_2D_weak result ;
  const GALGAS_compileTimeBoolXorOperator_2D_weak * p = (const GALGAS_compileTimeBoolXorOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolXorOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolXorOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeBoolOrOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeBoolOrOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator::GALGAS_compileTimeBoolOrOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeBoolOrOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator::GALGAS_compileTimeBoolOrOperator (const cPtr_compileTimeBoolOrOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeBoolOrOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeBoolOrOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeBoolOrOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeBoolOrOperator::cPtr_compileTimeBoolOrOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeBoolOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;
}

void cPtr_compileTimeBoolOrOperator::description (C_String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeBoolOrOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeBoolOrOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeBoolOrOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolOrOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ("compileTimeBoolOrOperator",
                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolOrOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator result ;
  const GALGAS_compileTimeBoolOrOperator * p = (const GALGAS_compileTimeBoolOrOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak::GALGAS_compileTimeBoolOrOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak & GALGAS_compileTimeBoolOrOperator_2D_weak::operator = (const GALGAS_compileTimeBoolOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak::GALGAS_compileTimeBoolOrOperator_2D_weak (const GALGAS_compileTimeBoolOrOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak GALGAS_compileTimeBoolOrOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator GALGAS_compileTimeBoolOrOperator_2D_weak::bang_compileTimeBoolOrOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeBoolOrOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeBoolOrOperator) ;
      result = GALGAS_compileTimeBoolOrOperator ((cPtr_compileTimeBoolOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeBoolOrOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2D_weak ("compileTimeBoolOrOperator-weak",
                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeBoolOrOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeBoolOrOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeBoolOrOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeBoolOrOperator_2D_weak GALGAS_compileTimeBoolOrOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeBoolOrOperator_2D_weak result ;
  const GALGAS_compileTimeBoolOrOperator_2D_weak * p = (const GALGAS_compileTimeBoolOrOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeBoolOrOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeBoolOrOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST::GALGAS_compileTimeIntAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST::GALGAS_compileTimeIntAST (const cPtr_compileTimeIntAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntAST::cPtr_compileTimeIntAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST ;
}

void cPtr_compileTimeIntAST::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntAST ("compileTimeIntAST",
                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAST result ;
  const GALGAS_compileTimeIntAST * p = (const GALGAS_compileTimeIntAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak::GALGAS_compileTimeIntAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak & GALGAS_compileTimeIntAST_2D_weak::operator = (const GALGAS_compileTimeIntAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak::GALGAS_compileTimeIntAST_2D_weak (const GALGAS_compileTimeIntAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak GALGAS_compileTimeIntAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST GALGAS_compileTimeIntAST_2D_weak::bang_compileTimeIntAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntAST) ;
      result = GALGAS_compileTimeIntAST ((cPtr_compileTimeIntAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntAST_2D_weak ("compileTimeIntAST-weak",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAST_2D_weak GALGAS_compileTimeIntAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAST_2D_weak result ;
  const GALGAS_compileTimeIntAST_2D_weak * p = (const GALGAS_compileTimeIntAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntModuloOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntModuloOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator::GALGAS_compileTimeIntModuloOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntModuloOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator::GALGAS_compileTimeIntModuloOperator (const cPtr_compileTimeIntModuloOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntModuloOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntModuloOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntModuloOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntModuloOperator::cPtr_compileTimeIntModuloOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntModuloOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;
}

void cPtr_compileTimeIntModuloOperator::description (C_String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntModuloOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntModuloOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntModuloOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntModuloOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ("compileTimeIntModuloOperator",
                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator result ;
  const GALGAS_compileTimeIntModuloOperator * p = (const GALGAS_compileTimeIntModuloOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntModuloOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak::GALGAS_compileTimeIntModuloOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak & GALGAS_compileTimeIntModuloOperator_2D_weak::operator = (const GALGAS_compileTimeIntModuloOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak::GALGAS_compileTimeIntModuloOperator_2D_weak (const GALGAS_compileTimeIntModuloOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak GALGAS_compileTimeIntModuloOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator GALGAS_compileTimeIntModuloOperator_2D_weak::bang_compileTimeIntModuloOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntModuloOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntModuloOperator) ;
      result = GALGAS_compileTimeIntModuloOperator ((cPtr_compileTimeIntModuloOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntModuloOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2D_weak ("compileTimeIntModuloOperator-weak",
                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloOperator_2D_weak GALGAS_compileTimeIntModuloOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloOperator_2D_weak result ;
  const GALGAS_compileTimeIntModuloOperator_2D_weak * p = (const GALGAS_compileTimeIntModuloOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntModuloOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntModuloZeroOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntModuloZeroOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator::GALGAS_compileTimeIntModuloZeroOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntModuloZeroOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator::GALGAS_compileTimeIntModuloZeroOperator (const cPtr_compileTimeIntModuloZeroOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntModuloZeroOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntModuloZeroOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntModuloZeroOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntModuloZeroOperator::cPtr_compileTimeIntModuloZeroOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntModuloZeroOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;
}

void cPtr_compileTimeIntModuloZeroOperator::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntModuloZeroOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntModuloZeroOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntModuloZeroOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntModuloZeroOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ("compileTimeIntModuloZeroOperator",
                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloZeroOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloZeroOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloZeroOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator result ;
  const GALGAS_compileTimeIntModuloZeroOperator * p = (const GALGAS_compileTimeIntModuloZeroOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntModuloZeroOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloZeroOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak::GALGAS_compileTimeIntModuloZeroOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak & GALGAS_compileTimeIntModuloZeroOperator_2D_weak::operator = (const GALGAS_compileTimeIntModuloZeroOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak::GALGAS_compileTimeIntModuloZeroOperator_2D_weak (const GALGAS_compileTimeIntModuloZeroOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak GALGAS_compileTimeIntModuloZeroOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator GALGAS_compileTimeIntModuloZeroOperator_2D_weak::bang_compileTimeIntModuloZeroOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntModuloZeroOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntModuloZeroOperator) ;
      result = GALGAS_compileTimeIntModuloZeroOperator ((cPtr_compileTimeIntModuloZeroOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntModuloZeroOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2D_weak ("compileTimeIntModuloZeroOperator-weak",
                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntModuloZeroOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntModuloZeroOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntModuloZeroOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntModuloZeroOperator_2D_weak GALGAS_compileTimeIntModuloZeroOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntModuloZeroOperator_2D_weak result ;
  const GALGAS_compileTimeIntModuloZeroOperator_2D_weak * p = (const GALGAS_compileTimeIntModuloZeroOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntModuloZeroOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntModuloZeroOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntDivideOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntDivideOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator::GALGAS_compileTimeIntDivideOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntDivideOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator::GALGAS_compileTimeIntDivideOperator (const cPtr_compileTimeIntDivideOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntDivideOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntDivideOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntDivideOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntDivideOperator::cPtr_compileTimeIntDivideOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntDivideOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;
}

void cPtr_compileTimeIntDivideOperator::description (C_String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntDivideOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntDivideOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntDivideOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntDivideOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ("compileTimeIntDivideOperator",
                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator result ;
  const GALGAS_compileTimeIntDivideOperator * p = (const GALGAS_compileTimeIntDivideOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntDivideOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak::GALGAS_compileTimeIntDivideOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak & GALGAS_compileTimeIntDivideOperator_2D_weak::operator = (const GALGAS_compileTimeIntDivideOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak::GALGAS_compileTimeIntDivideOperator_2D_weak (const GALGAS_compileTimeIntDivideOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak GALGAS_compileTimeIntDivideOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator GALGAS_compileTimeIntDivideOperator_2D_weak::bang_compileTimeIntDivideOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntDivideOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntDivideOperator) ;
      result = GALGAS_compileTimeIntDivideOperator ((cPtr_compileTimeIntDivideOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntDivideOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2D_weak ("compileTimeIntDivideOperator-weak",
                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideOperator_2D_weak GALGAS_compileTimeIntDivideOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideOperator_2D_weak result ;
  const GALGAS_compileTimeIntDivideOperator_2D_weak * p = (const GALGAS_compileTimeIntDivideOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntDivideOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntDivideZeroOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntDivideZeroOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator::GALGAS_compileTimeIntDivideZeroOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntDivideZeroOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator::GALGAS_compileTimeIntDivideZeroOperator (const cPtr_compileTimeIntDivideZeroOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntDivideZeroOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntDivideZeroOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntDivideZeroOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntDivideZeroOperator::cPtr_compileTimeIntDivideZeroOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntDivideZeroOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;
}

void cPtr_compileTimeIntDivideZeroOperator::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntDivideZeroOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntDivideZeroOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntDivideZeroOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntDivideZeroOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ("compileTimeIntDivideZeroOperator",
                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideZeroOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideZeroOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideZeroOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator result ;
  const GALGAS_compileTimeIntDivideZeroOperator * p = (const GALGAS_compileTimeIntDivideZeroOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntDivideZeroOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideZeroOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak::GALGAS_compileTimeIntDivideZeroOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak & GALGAS_compileTimeIntDivideZeroOperator_2D_weak::operator = (const GALGAS_compileTimeIntDivideZeroOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak::GALGAS_compileTimeIntDivideZeroOperator_2D_weak (const GALGAS_compileTimeIntDivideZeroOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak GALGAS_compileTimeIntDivideZeroOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator GALGAS_compileTimeIntDivideZeroOperator_2D_weak::bang_compileTimeIntDivideZeroOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntDivideZeroOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntDivideZeroOperator) ;
      result = GALGAS_compileTimeIntDivideZeroOperator ((cPtr_compileTimeIntDivideZeroOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntDivideZeroOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2D_weak ("compileTimeIntDivideZeroOperator-weak",
                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntDivideZeroOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntDivideZeroOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntDivideZeroOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntDivideZeroOperator_2D_weak GALGAS_compileTimeIntDivideZeroOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntDivideZeroOperator_2D_weak result ;
  const GALGAS_compileTimeIntDivideZeroOperator_2D_weak * p = (const GALGAS_compileTimeIntDivideZeroOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntDivideZeroOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntDivideZeroOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntMultiplyOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntMultiplyOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator::GALGAS_compileTimeIntMultiplyOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntMultiplyOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator::GALGAS_compileTimeIntMultiplyOperator (const cPtr_compileTimeIntMultiplyOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMultiplyOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMultiplyOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMultiplyOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMultiplyOperator::cPtr_compileTimeIntMultiplyOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntMultiplyOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;
}

void cPtr_compileTimeIntMultiplyOperator::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntMultiplyOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMultiplyOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntMultiplyOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntMultiplyOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ("compileTimeIntMultiplyOperator",
                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMultiplyOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMultiplyOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMultiplyOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator result ;
  const GALGAS_compileTimeIntMultiplyOperator * p = (const GALGAS_compileTimeIntMultiplyOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntMultiplyOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMultiplyOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak::GALGAS_compileTimeIntMultiplyOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak & GALGAS_compileTimeIntMultiplyOperator_2D_weak::operator = (const GALGAS_compileTimeIntMultiplyOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak::GALGAS_compileTimeIntMultiplyOperator_2D_weak (const GALGAS_compileTimeIntMultiplyOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak GALGAS_compileTimeIntMultiplyOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator GALGAS_compileTimeIntMultiplyOperator_2D_weak::bang_compileTimeIntMultiplyOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntMultiplyOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMultiplyOperator) ;
      result = GALGAS_compileTimeIntMultiplyOperator ((cPtr_compileTimeIntMultiplyOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntMultiplyOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2D_weak ("compileTimeIntMultiplyOperator-weak",
                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMultiplyOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMultiplyOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMultiplyOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMultiplyOperator_2D_weak GALGAS_compileTimeIntMultiplyOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMultiplyOperator_2D_weak result ;
  const GALGAS_compileTimeIntMultiplyOperator_2D_weak * p = (const GALGAS_compileTimeIntMultiplyOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntMultiplyOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMultiplyOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntSubtractOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntSubtractOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator::GALGAS_compileTimeIntSubtractOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntSubtractOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator::GALGAS_compileTimeIntSubtractOperator (const cPtr_compileTimeIntSubtractOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntSubtractOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntSubtractOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntSubtractOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntSubtractOperator::cPtr_compileTimeIntSubtractOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntSubtractOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;
}

void cPtr_compileTimeIntSubtractOperator::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntSubtractOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntSubtractOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntSubtractOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntSubtractOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ("compileTimeIntSubtractOperator",
                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntSubtractOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntSubtractOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntSubtractOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator result ;
  const GALGAS_compileTimeIntSubtractOperator * p = (const GALGAS_compileTimeIntSubtractOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntSubtractOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntSubtractOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak::GALGAS_compileTimeIntSubtractOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak & GALGAS_compileTimeIntSubtractOperator_2D_weak::operator = (const GALGAS_compileTimeIntSubtractOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak::GALGAS_compileTimeIntSubtractOperator_2D_weak (const GALGAS_compileTimeIntSubtractOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak GALGAS_compileTimeIntSubtractOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator GALGAS_compileTimeIntSubtractOperator_2D_weak::bang_compileTimeIntSubtractOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntSubtractOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntSubtractOperator) ;
      result = GALGAS_compileTimeIntSubtractOperator ((cPtr_compileTimeIntSubtractOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntSubtractOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2D_weak ("compileTimeIntSubtractOperator-weak",
                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntSubtractOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntSubtractOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntSubtractOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntSubtractOperator_2D_weak GALGAS_compileTimeIntSubtractOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntSubtractOperator_2D_weak result ;
  const GALGAS_compileTimeIntSubtractOperator_2D_weak * p = (const GALGAS_compileTimeIntSubtractOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntSubtractOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntSubtractOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntEqualOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntEqualOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator::GALGAS_compileTimeIntEqualOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntEqualOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator::GALGAS_compileTimeIntEqualOperator (const cPtr_compileTimeIntEqualOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntEqualOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntEqualOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntEqualOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntEqualOperator::cPtr_compileTimeIntEqualOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;
}

void cPtr_compileTimeIntEqualOperator::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntEqualOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntEqualOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntEqualOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntEqualOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ("compileTimeIntEqualOperator",
                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntEqualOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator result ;
  const GALGAS_compileTimeIntEqualOperator * p = (const GALGAS_compileTimeIntEqualOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak::GALGAS_compileTimeIntEqualOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak & GALGAS_compileTimeIntEqualOperator_2D_weak::operator = (const GALGAS_compileTimeIntEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak::GALGAS_compileTimeIntEqualOperator_2D_weak (const GALGAS_compileTimeIntEqualOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak GALGAS_compileTimeIntEqualOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator GALGAS_compileTimeIntEqualOperator_2D_weak::bang_compileTimeIntEqualOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntEqualOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntEqualOperator) ;
      result = GALGAS_compileTimeIntEqualOperator ((cPtr_compileTimeIntEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntEqualOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2D_weak ("compileTimeIntEqualOperator-weak",
                                                            & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntEqualOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntEqualOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntEqualOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntEqualOperator_2D_weak GALGAS_compileTimeIntEqualOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntEqualOperator_2D_weak result ;
  const GALGAS_compileTimeIntEqualOperator_2D_weak * p = (const GALGAS_compileTimeIntEqualOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntEqualOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntEqualOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntAddOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntAddOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator::GALGAS_compileTimeIntAddOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntAddOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator::GALGAS_compileTimeIntAddOperator (const cPtr_compileTimeIntAddOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntAddOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntAddOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntAddOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntAddOperator::cPtr_compileTimeIntAddOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntAddOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;
}

void cPtr_compileTimeIntAddOperator::description (C_String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntAddOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntAddOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntAddOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntAddOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntAddOperator ("compileTimeIntAddOperator",
                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAddOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAddOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAddOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator result ;
  const GALGAS_compileTimeIntAddOperator * p = (const GALGAS_compileTimeIntAddOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntAddOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAddOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak::GALGAS_compileTimeIntAddOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak & GALGAS_compileTimeIntAddOperator_2D_weak::operator = (const GALGAS_compileTimeIntAddOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak::GALGAS_compileTimeIntAddOperator_2D_weak (const GALGAS_compileTimeIntAddOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak GALGAS_compileTimeIntAddOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator GALGAS_compileTimeIntAddOperator_2D_weak::bang_compileTimeIntAddOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntAddOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntAddOperator) ;
      result = GALGAS_compileTimeIntAddOperator ((cPtr_compileTimeIntAddOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntAddOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2D_weak ("compileTimeIntAddOperator-weak",
                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntAddOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntAddOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntAddOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntAddOperator_2D_weak GALGAS_compileTimeIntAddOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntAddOperator_2D_weak result ;
  const GALGAS_compileTimeIntAddOperator_2D_weak * p = (const GALGAS_compileTimeIntAddOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntAddOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntAddOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseAndOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntBitWiseAndOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator::GALGAS_compileTimeIntBitWiseAndOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntBitWiseAndOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator::GALGAS_compileTimeIntBitWiseAndOperator (const cPtr_compileTimeIntBitWiseAndOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseAndOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseAndOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseAndOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseAndOperator::cPtr_compileTimeIntBitWiseAndOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntBitWiseAndOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;
}

void cPtr_compileTimeIntBitWiseAndOperator::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntBitWiseAndOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseAndOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseAndOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntBitWiseAndOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ("compileTimeIntBitWiseAndOperator",
                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseAndOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseAndOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseAndOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator result ;
  const GALGAS_compileTimeIntBitWiseAndOperator * p = (const GALGAS_compileTimeIntBitWiseAndOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntBitWiseAndOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak & GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::operator = (const GALGAS_compileTimeIntBitWiseAndOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (const GALGAS_compileTimeIntBitWiseAndOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::bang_compileTimeIntBitWiseAndOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntBitWiseAndOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseAndOperator) ;
      result = GALGAS_compileTimeIntBitWiseAndOperator ((cPtr_compileTimeIntBitWiseAndOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntBitWiseAndOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2D_weak ("compileTimeIntBitWiseAndOperator-weak",
                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseAndOperator_2D_weak GALGAS_compileTimeIntBitWiseAndOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseAndOperator_2D_weak result ;
  const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak * p = (const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseAndOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntShiftLeftOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntShiftLeftOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator::GALGAS_compileTimeIntShiftLeftOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntShiftLeftOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator::GALGAS_compileTimeIntShiftLeftOperator (const cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftLeftOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftLeftOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftLeftOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftLeftOperator::cPtr_compileTimeIntShiftLeftOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntShiftLeftOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

void cPtr_compileTimeIntShiftLeftOperator::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntShiftLeftOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftLeftOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftLeftOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntShiftLeftOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ("compileTimeIntShiftLeftOperator",
                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftLeftOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftLeftOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftLeftOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator result ;
  const GALGAS_compileTimeIntShiftLeftOperator * p = (const GALGAS_compileTimeIntShiftLeftOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntShiftLeftOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak::GALGAS_compileTimeIntShiftLeftOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak & GALGAS_compileTimeIntShiftLeftOperator_2D_weak::operator = (const GALGAS_compileTimeIntShiftLeftOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak::GALGAS_compileTimeIntShiftLeftOperator_2D_weak (const GALGAS_compileTimeIntShiftLeftOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak GALGAS_compileTimeIntShiftLeftOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator GALGAS_compileTimeIntShiftLeftOperator_2D_weak::bang_compileTimeIntShiftLeftOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntShiftLeftOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftLeftOperator) ;
      result = GALGAS_compileTimeIntShiftLeftOperator ((cPtr_compileTimeIntShiftLeftOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntShiftLeftOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2D_weak ("compileTimeIntShiftLeftOperator-weak",
                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftLeftOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftLeftOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftLeftOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftLeftOperator_2D_weak GALGAS_compileTimeIntShiftLeftOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftLeftOperator_2D_weak result ;
  const GALGAS_compileTimeIntShiftLeftOperator_2D_weak * p = (const GALGAS_compileTimeIntShiftLeftOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntShiftLeftOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftLeftOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntShiftRightOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntShiftRightOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator::GALGAS_compileTimeIntShiftRightOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntShiftRightOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator::GALGAS_compileTimeIntShiftRightOperator (const cPtr_compileTimeIntShiftRightOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntShiftRightOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntShiftRightOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntShiftRightOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntShiftRightOperator::cPtr_compileTimeIntShiftRightOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntShiftRightOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

void cPtr_compileTimeIntShiftRightOperator::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntShiftRightOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntShiftRightOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntShiftRightOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntShiftRightOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ("compileTimeIntShiftRightOperator",
                                                         & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftRightOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftRightOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftRightOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator result ;
  const GALGAS_compileTimeIntShiftRightOperator * p = (const GALGAS_compileTimeIntShiftRightOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntShiftRightOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak::GALGAS_compileTimeIntShiftRightOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak & GALGAS_compileTimeIntShiftRightOperator_2D_weak::operator = (const GALGAS_compileTimeIntShiftRightOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak::GALGAS_compileTimeIntShiftRightOperator_2D_weak (const GALGAS_compileTimeIntShiftRightOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak GALGAS_compileTimeIntShiftRightOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator GALGAS_compileTimeIntShiftRightOperator_2D_weak::bang_compileTimeIntShiftRightOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntShiftRightOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntShiftRightOperator) ;
      result = GALGAS_compileTimeIntShiftRightOperator ((cPtr_compileTimeIntShiftRightOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntShiftRightOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2D_weak ("compileTimeIntShiftRightOperator-weak",
                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntShiftRightOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntShiftRightOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntShiftRightOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntShiftRightOperator_2D_weak GALGAS_compileTimeIntShiftRightOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntShiftRightOperator_2D_weak result ;
  const GALGAS_compileTimeIntShiftRightOperator_2D_weak * p = (const GALGAS_compileTimeIntShiftRightOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntShiftRightOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntShiftRightOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntLessThanOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntLessThanOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator::GALGAS_compileTimeIntLessThanOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntLessThanOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator::GALGAS_compileTimeIntLessThanOperator (const cPtr_compileTimeIntLessThanOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLessThanOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLessThanOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLessThanOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLessThanOperator::cPtr_compileTimeIntLessThanOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntLessThanOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

void cPtr_compileTimeIntLessThanOperator::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntLessThanOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLessThanOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntLessThanOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntLessThanOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ("compileTimeIntLessThanOperator",
                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLessThanOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLessThanOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLessThanOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator result ;
  const GALGAS_compileTimeIntLessThanOperator * p = (const GALGAS_compileTimeIntLessThanOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntLessThanOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak::GALGAS_compileTimeIntLessThanOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak & GALGAS_compileTimeIntLessThanOperator_2D_weak::operator = (const GALGAS_compileTimeIntLessThanOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak::GALGAS_compileTimeIntLessThanOperator_2D_weak (const GALGAS_compileTimeIntLessThanOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak GALGAS_compileTimeIntLessThanOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator GALGAS_compileTimeIntLessThanOperator_2D_weak::bang_compileTimeIntLessThanOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntLessThanOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLessThanOperator) ;
      result = GALGAS_compileTimeIntLessThanOperator ((cPtr_compileTimeIntLessThanOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntLessThanOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2D_weak ("compileTimeIntLessThanOperator-weak",
                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLessThanOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLessThanOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLessThanOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLessThanOperator_2D_weak GALGAS_compileTimeIntLessThanOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLessThanOperator_2D_weak result ;
  const GALGAS_compileTimeIntLessThanOperator_2D_weak * p = (const GALGAS_compileTimeIntLessThanOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntLessThanOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLessThanOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntLowerOrEqualOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntLowerOrEqualOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator::GALGAS_compileTimeIntLowerOrEqualOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntLowerOrEqualOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator::GALGAS_compileTimeIntLowerOrEqualOperator (const cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntLowerOrEqualOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntLowerOrEqualOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntLowerOrEqualOperator::cPtr_compileTimeIntLowerOrEqualOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntLowerOrEqualOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

void cPtr_compileTimeIntLowerOrEqualOperator::description (C_String & ioString,
                                                           const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntLowerOrEqualOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntLowerOrEqualOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntLowerOrEqualOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntLowerOrEqualOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ("compileTimeIntLowerOrEqualOperator",
                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLowerOrEqualOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLowerOrEqualOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLowerOrEqualOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator result ;
  const GALGAS_compileTimeIntLowerOrEqualOperator * p = (const GALGAS_compileTimeIntLowerOrEqualOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntLowerOrEqualOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::operator = (const GALGAS_compileTimeIntLowerOrEqualOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (const GALGAS_compileTimeIntLowerOrEqualOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::bang_compileTimeIntLowerOrEqualOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntLowerOrEqualOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntLowerOrEqualOperator) ;
      result = GALGAS_compileTimeIntLowerOrEqualOperator ((cPtr_compileTimeIntLowerOrEqualOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntLowerOrEqualOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak ("compileTimeIntLowerOrEqualOperator-weak",
                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak result ;
  const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak * p = (const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntLowerOrEqualOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntXorOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntXorOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator::GALGAS_compileTimeIntXorOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntXorOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator::GALGAS_compileTimeIntXorOperator (const cPtr_compileTimeIntXorOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntXorOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntXorOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntXorOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntXorOperator::cPtr_compileTimeIntXorOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntXorOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

void cPtr_compileTimeIntXorOperator::description (C_String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntXorOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntXorOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntXorOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntXorOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntXorOperator ("compileTimeIntXorOperator",
                                                  & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntXorOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntXorOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntXorOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator result ;
  const GALGAS_compileTimeIntXorOperator * p = (const GALGAS_compileTimeIntXorOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntXorOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak::GALGAS_compileTimeIntXorOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak & GALGAS_compileTimeIntXorOperator_2D_weak::operator = (const GALGAS_compileTimeIntXorOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak::GALGAS_compileTimeIntXorOperator_2D_weak (const GALGAS_compileTimeIntXorOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak GALGAS_compileTimeIntXorOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator GALGAS_compileTimeIntXorOperator_2D_weak::bang_compileTimeIntXorOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntXorOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntXorOperator) ;
      result = GALGAS_compileTimeIntXorOperator ((cPtr_compileTimeIntXorOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntXorOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2D_weak ("compileTimeIntXorOperator-weak",
                                                          & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntXorOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntXorOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntXorOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntXorOperator_2D_weak GALGAS_compileTimeIntXorOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntXorOperator_2D_weak result ;
  const GALGAS_compileTimeIntXorOperator_2D_weak * p = (const GALGAS_compileTimeIntXorOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntXorOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntXorOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntBitWiseOrOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntBitWiseOrOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator::GALGAS_compileTimeIntBitWiseOrOperator (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntBitWiseOrOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator::GALGAS_compileTimeIntBitWiseOrOperator (const cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntBitWiseOrOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntBitWiseOrOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntBitWiseOrOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntBitWiseOrOperator::cPtr_compileTimeIntBitWiseOrOperator (LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntBitWiseOrOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

void cPtr_compileTimeIntBitWiseOrOperator::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntBitWiseOrOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntBitWiseOrOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntBitWiseOrOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntBitWiseOrOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ("compileTimeIntBitWiseOrOperator",
                                                        & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseOrOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseOrOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseOrOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator result ;
  const GALGAS_compileTimeIntBitWiseOrOperator * p = (const GALGAS_compileTimeIntBitWiseOrOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntBitWiseOrOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (void) :
GALGAS_omnibusInfixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::operator = (const GALGAS_compileTimeIntBitWiseOrOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (const GALGAS_compileTimeIntBitWiseOrOperator & inSource) :
GALGAS_omnibusInfixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::bang_compileTimeIntBitWiseOrOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntBitWiseOrOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntBitWiseOrOperator) ;
      result = GALGAS_compileTimeIntBitWiseOrOperator ((cPtr_compileTimeIntBitWiseOrOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntBitWiseOrOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2D_weak ("compileTimeIntBitWiseOrOperator-weak",
                                                                & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntBitWiseOrOperator_2D_weak GALGAS_compileTimeIntBitWiseOrOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntBitWiseOrOperator_2D_weak result ;
  const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak * p = (const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntBitWiseOrOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntMinusOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntMinusOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator::GALGAS_compileTimeIntMinusOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntMinusOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator::GALGAS_compileTimeIntMinusOperator (const cPtr_compileTimeIntMinusOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntMinusOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntMinusOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntMinusOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntMinusOperator::cPtr_compileTimeIntMinusOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntMinusOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

void cPtr_compileTimeIntMinusOperator::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntMinusOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntMinusOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntMinusOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntMinusOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ("compileTimeIntMinusOperator",
                                                    & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMinusOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMinusOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMinusOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator result ;
  const GALGAS_compileTimeIntMinusOperator * p = (const GALGAS_compileTimeIntMinusOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntMinusOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak::GALGAS_compileTimeIntMinusOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak & GALGAS_compileTimeIntMinusOperator_2D_weak::operator = (const GALGAS_compileTimeIntMinusOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak::GALGAS_compileTimeIntMinusOperator_2D_weak (const GALGAS_compileTimeIntMinusOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak GALGAS_compileTimeIntMinusOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator GALGAS_compileTimeIntMinusOperator_2D_weak::bang_compileTimeIntMinusOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntMinusOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntMinusOperator) ;
      result = GALGAS_compileTimeIntMinusOperator ((cPtr_compileTimeIntMinusOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntMinusOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ("compileTimeIntMinusOperator-weak",
                                                            & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntMinusOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntMinusOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntMinusOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntMinusOperator_2D_weak GALGAS_compileTimeIntMinusOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntMinusOperator_2D_weak result ;
  const GALGAS_compileTimeIntMinusOperator_2D_weak * p = (const GALGAS_compileTimeIntMinusOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntMinusOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntMinusOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @compileTimeIntComplementOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_compileTimeIntComplementOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator::GALGAS_compileTimeIntComplementOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_compileTimeIntComplementOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator::GALGAS_compileTimeIntComplementOperator (const cPtr_compileTimeIntComplementOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeIntComplementOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeIntComplementOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeIntComplementOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_compileTimeIntComplementOperator::cPtr_compileTimeIntComplementOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeIntComplementOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

void cPtr_compileTimeIntComplementOperator::description (C_String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString << "[@compileTimeIntComplementOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeIntComplementOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_compileTimeIntComplementOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntComplementOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ("compileTimeIntComplementOperator",
                                                         & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntComplementOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntComplementOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntComplementOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator result ;
  const GALGAS_compileTimeIntComplementOperator * p = (const GALGAS_compileTimeIntComplementOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntComplementOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak::GALGAS_compileTimeIntComplementOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak & GALGAS_compileTimeIntComplementOperator_2D_weak::operator = (const GALGAS_compileTimeIntComplementOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak::GALGAS_compileTimeIntComplementOperator_2D_weak (const GALGAS_compileTimeIntComplementOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak GALGAS_compileTimeIntComplementOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator GALGAS_compileTimeIntComplementOperator_2D_weak::bang_compileTimeIntComplementOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeIntComplementOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeIntComplementOperator) ;
      result = GALGAS_compileTimeIntComplementOperator ((cPtr_compileTimeIntComplementOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@compileTimeIntComplementOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ("compileTimeIntComplementOperator-weak",
                                                                 & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeIntComplementOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeIntComplementOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeIntComplementOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeIntComplementOperator_2D_weak GALGAS_compileTimeIntComplementOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeIntComplementOperator_2D_weak result ;
  const GALGAS_compileTimeIntComplementOperator_2D_weak * p = (const GALGAS_compileTimeIntComplementOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_compileTimeIntComplementOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeIntComplementOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolTypeAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolTypeAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST::GALGAS_boolTypeAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolTypeAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST::GALGAS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolTypeAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::constructor_new (LOCATION_ARGS) {
  GALGAS_boolTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolTypeAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolTypeAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolTypeAST::cPtr_boolTypeAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

void cPtr_boolTypeAST::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "[@boolTypeAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolTypeAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolTypeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolTypeAST ("boolTypeAST",
                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolTypeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolTypeAST result ;
  const GALGAS_boolTypeAST * p = (const GALGAS_boolTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak::GALGAS_boolTypeAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak & GALGAS_boolTypeAST_2D_weak::operator = (const GALGAS_boolTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak::GALGAS_boolTypeAST_2D_weak (const GALGAS_boolTypeAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak GALGAS_boolTypeAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST GALGAS_boolTypeAST_2D_weak::bang_boolTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolTypeAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolTypeAST) ;
      result = GALGAS_boolTypeAST ((cPtr_boolTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolTypeAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ("boolTypeAST-weak",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolTypeAST_2D_weak GALGAS_boolTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolTypeAST_2D_weak result ;
  const GALGAS_boolTypeAST_2D_weak * p = (const GALGAS_boolTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolImplicitConverterToBoolean reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolImplicitConverterToBoolean::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean::GALGAS_boolImplicitConverterToBoolean (void) :
GALGAS_abstractImplicitConverterToBoolean () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolImplicitConverterToBoolean::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean::GALGAS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) :
GALGAS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolImplicitConverterToBoolean) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::constructor_new (LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_boolImplicitConverterToBoolean (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolImplicitConverterToBoolean class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolImplicitConverterToBoolean::cPtr_boolImplicitConverterToBoolean (LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

void cPtr_boolImplicitConverterToBoolean::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "[@boolImplicitConverterToBoolean]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolImplicitConverterToBoolean::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolImplicitConverterToBoolean (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolImplicitConverterToBoolean type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ("boolImplicitConverterToBoolean",
                                                       & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean result ;
  const GALGAS_boolImplicitConverterToBoolean * p = (const GALGAS_boolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak::GALGAS_boolImplicitConverterToBoolean_2D_weak (void) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak & GALGAS_boolImplicitConverterToBoolean_2D_weak::operator = (const GALGAS_boolImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak::GALGAS_boolImplicitConverterToBoolean_2D_weak (const GALGAS_boolImplicitConverterToBoolean & inSource) :
GALGAS_abstractImplicitConverterToBoolean_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak GALGAS_boolImplicitConverterToBoolean_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean GALGAS_boolImplicitConverterToBoolean_2D_weak::bang_boolImplicitConverterToBoolean_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolImplicitConverterToBoolean result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolImplicitConverterToBoolean) ;
      result = GALGAS_boolImplicitConverterToBoolean ((cPtr_boolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolImplicitConverterToBoolean-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ("boolImplicitConverterToBoolean-weak",
                                                               & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolImplicitConverterToBoolean_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolImplicitConverterToBoolean_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolImplicitConverterToBoolean_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolImplicitConverterToBoolean_2D_weak GALGAS_boolImplicitConverterToBoolean_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolImplicitConverterToBoolean_2D_weak result ;
  const GALGAS_boolImplicitConverterToBoolean_2D_weak * p = (const GALGAS_boolImplicitConverterToBoolean_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolImplicitConverterToBoolean_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolNotOperator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolNotOperator::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator::GALGAS_boolNotOperator (void) :
GALGAS_prefixOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolNotOperator::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator::GALGAS_boolNotOperator (const cPtr_boolNotOperator * inSourcePtr) :
GALGAS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolNotOperator) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::constructor_new (LOCATION_ARGS) {
  GALGAS_boolNotOperator result ;
  macroMyNew (result.mObjectPtr, cPtr_boolNotOperator (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolNotOperator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolNotOperator::cPtr_boolNotOperator (LOCATION_ARGS) :
cPtr_prefixOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolNotOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

void cPtr_boolNotOperator::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "[@boolNotOperator]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolNotOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolNotOperator (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolNotOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolNotOperator ("boolNotOperator",
                                        & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolNotOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolNotOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolNotOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boolNotOperator result ;
  const GALGAS_boolNotOperator * p = (const GALGAS_boolNotOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolNotOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak::GALGAS_boolNotOperator_2D_weak (void) :
GALGAS_prefixOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak & GALGAS_boolNotOperator_2D_weak::operator = (const GALGAS_boolNotOperator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak::GALGAS_boolNotOperator_2D_weak (const GALGAS_boolNotOperator & inSource) :
GALGAS_prefixOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak GALGAS_boolNotOperator_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolNotOperator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator GALGAS_boolNotOperator_2D_weak::bang_boolNotOperator_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolNotOperator result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolNotOperator) ;
      result = GALGAS_boolNotOperator ((cPtr_boolNotOperator *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolNotOperator-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ("boolNotOperator-weak",
                                                & kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolNotOperator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolNotOperator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolNotOperator_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolNotOperator_2D_weak GALGAS_boolNotOperator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_boolNotOperator_2D_weak result ;
  const GALGAS_boolNotOperator_2D_weak * p = (const GALGAS_boolNotOperator_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolNotOperator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolNotOperator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeAliasDeclarationAST_2D_weak::objectCompare (const GALGAS_typeAliasDeclarationAST_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak::GALGAS_typeAliasDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak & GALGAS_typeAliasDeclarationAST_2D_weak::operator = (const GALGAS_typeAliasDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak::GALGAS_typeAliasDeclarationAST_2D_weak (const GALGAS_typeAliasDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak GALGAS_typeAliasDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST GALGAS_typeAliasDeclarationAST_2D_weak::bang_typeAliasDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeAliasDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeAliasDeclarationAST) ;
      result = GALGAS_typeAliasDeclarationAST ((cPtr_typeAliasDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeAliasDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ("typeAliasDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeAliasDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeAliasDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeAliasDeclarationAST_2D_weak GALGAS_typeAliasDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclarationAST_2D_weak result ;
  const GALGAS_typeAliasDeclarationAST_2D_weak * p = (const GALGAS_typeAliasDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeAliasDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @expressionAST reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_expressionAST::objectCompare (const GALGAS_expressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST::GALGAS_expressionAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST::GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionAST::cPtr_expressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_expressionAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionAST result ;
  const GALGAS_expressionAST * p = (const GALGAS_expressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::objectCompare (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::operator = (const GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (const GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::bang_fixedSizeArrayTypeDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_fixedSizeArrayTypeDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
      result = GALGAS_fixedSizeArrayTypeDeclarationAST ((cPtr_fixedSizeArrayTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@fixedSizeArrayTypeDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ("fixedSizeArrayTypeDeclarationAST-weak",
                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak result ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak * p = (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (void) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::operator = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) :
GALGAS_userLLVMTypeDefinitionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::bang_userLLVMStaticArrayTypeDefinitionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
      result = GALGAS_userLLVMStaticArrayTypeDefinitionIR ((cPtr_userLLVMStaticArrayTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@userLLVMStaticArrayTypeDefinitionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ("userLLVMStaticArrayTypeDefinitionIR-weak",
                                                                    & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak result ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak * p = (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractAssignmentOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractAssignmentOperatorUsage::objectCompare (const GALGAS_abstractAssignmentOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage::GALGAS_abstractAssignmentOperatorUsage (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage::GALGAS_abstractAssignmentOperatorUsage (const cPtr_abstractAssignmentOperatorUsage * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractAssignmentOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractAssignmentOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractAssignmentOperatorUsage::cPtr_abstractAssignmentOperatorUsage (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractAssignmentOperatorUsage type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ("abstractAssignmentOperatorUsage",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage GALGAS_abstractAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractAssignmentOperatorUsage result ;
  const GALGAS_abstractAssignmentOperatorUsage * p = (const GALGAS_abstractAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_abstractAssignmentOperatorUsage_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak::GALGAS_abstractAssignmentOperatorUsage_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak & GALGAS_abstractAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_abstractAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak::GALGAS_abstractAssignmentOperatorUsage_2D_weak (const GALGAS_abstractAssignmentOperatorUsage & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak GALGAS_abstractAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage GALGAS_abstractAssignmentOperatorUsage_2D_weak::bang_abstractAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractAssignmentOperatorUsage result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractAssignmentOperatorUsage) ;
      result = GALGAS_abstractAssignmentOperatorUsage ((cPtr_abstractAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractAssignmentOperatorUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak ("abstractAssignmentOperatorUsage-weak",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage_2D_weak GALGAS_abstractAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_abstractAssignmentOperatorUsage_2D_weak * p = (const GALGAS_abstractAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractRoutineIR_2D_weak::objectCompare (const GALGAS_abstractRoutineIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak::GALGAS_abstractRoutineIR_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak & GALGAS_abstractRoutineIR_2D_weak::operator = (const GALGAS_abstractRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak::GALGAS_abstractRoutineIR_2D_weak (const GALGAS_abstractRoutineIR & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak GALGAS_abstractRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_abstractRoutineIR_2D_weak::bang_abstractRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractRoutineIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractRoutineIR) ;
      result = GALGAS_abstractRoutineIR ((cPtr_abstractRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractRoutineIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ("abstractRoutineIR-weak",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR_2D_weak GALGAS_abstractRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractRoutineIR_2D_weak result ;
  const GALGAS_abstractRoutineIR_2D_weak * p = (const GALGAS_abstractRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::operator = (const GALGAS_staticArrayTypeAssignFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (const GALGAS_staticArrayTypeAssignFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::bang_staticArrayTypeAssignFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticArrayTypeAssignFunctionIR) ;
      result = GALGAS_staticArrayTypeAssignFunctionIR ((cPtr_staticArrayTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@staticArrayTypeAssignFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ("staticArrayTypeAssignFunctionIR-weak",
                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_staticArrayTypeAssignFunctionIR_2D_weak GALGAS_staticArrayTypeAssignFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR_2D_weak result ;
  const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak * p = (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeDynamicArrayDeclarationAST_2D_weak::objectCompare (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak::GALGAS_typeDynamicArrayDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak & GALGAS_typeDynamicArrayDeclarationAST_2D_weak::operator = (const GALGAS_typeDynamicArrayDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak::GALGAS_typeDynamicArrayDeclarationAST_2D_weak (const GALGAS_typeDynamicArrayDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak GALGAS_typeDynamicArrayDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST GALGAS_typeDynamicArrayDeclarationAST_2D_weak::bang_typeDynamicArrayDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeDynamicArrayDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeDynamicArrayDeclarationAST) ;
      result = GALGAS_typeDynamicArrayDeclarationAST ((cPtr_typeDynamicArrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@typeDynamicArrayDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ("typeDynamicArrayDeclarationAST-weak",
                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDynamicArrayDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDynamicArrayDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDynamicArrayDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeDynamicArrayDeclarationAST_2D_weak GALGAS_typeDynamicArrayDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDynamicArrayDeclarationAST_2D_weak result ;
  const GALGAS_typeDynamicArrayDeclarationAST_2D_weak * p = (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeDynamicArrayDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::operator = (const GALGAS_dynArrayRemoveAllFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (const GALGAS_dynArrayRemoveAllFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::bang_dynArrayRemoveAllFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayRemoveAllFunctionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayRemoveAllFunctionIR) ;
      result = GALGAS_dynArrayRemoveAllFunctionIR ((cPtr_dynArrayRemoveAllFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayRemoveAllFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ("dynArrayRemoveAllFunctionIR-weak",
                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayRemoveAllFunctionIR_2D_weak GALGAS_dynArrayRemoveAllFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayRemoveAllFunctionIR_2D_weak result ;
  const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak * p = (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayLengthFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayLengthFunctionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak::GALGAS_dynArrayLengthFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak & GALGAS_dynArrayLengthFunctionIR_2D_weak::operator = (const GALGAS_dynArrayLengthFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak::GALGAS_dynArrayLengthFunctionIR_2D_weak (const GALGAS_dynArrayLengthFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak GALGAS_dynArrayLengthFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR GALGAS_dynArrayLengthFunctionIR_2D_weak::bang_dynArrayLengthFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayLengthFunctionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayLengthFunctionIR) ;
      result = GALGAS_dynArrayLengthFunctionIR ((cPtr_dynArrayLengthFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayLengthFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ("dynArrayLengthFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayLengthFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayLengthFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayLengthFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayLengthFunctionIR_2D_weak GALGAS_dynArrayLengthFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayLengthFunctionIR_2D_weak result ;
  const GALGAS_dynArrayLengthFunctionIR_2D_weak * p = (const GALGAS_dynArrayLengthFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayLengthFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayAppendFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayAppendFunctionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak::GALGAS_dynArrayAppendFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak & GALGAS_dynArrayAppendFunctionIR_2D_weak::operator = (const GALGAS_dynArrayAppendFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak::GALGAS_dynArrayAppendFunctionIR_2D_weak (const GALGAS_dynArrayAppendFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak GALGAS_dynArrayAppendFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR GALGAS_dynArrayAppendFunctionIR_2D_weak::bang_dynArrayAppendFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayAppendFunctionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayAppendFunctionIR) ;
      result = GALGAS_dynArrayAppendFunctionIR ((cPtr_dynArrayAppendFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayAppendFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ("dynArrayAppendFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayAppendFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayAppendFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayAppendFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayAppendFunctionIR_2D_weak GALGAS_dynArrayAppendFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayAppendFunctionIR_2D_weak result ;
  const GALGAS_dynArrayAppendFunctionIR_2D_weak * p = (const GALGAS_dynArrayAppendFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayAppendFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynArrayInsertFunctionIR_2D_weak::objectCompare (const GALGAS_dynArrayInsertFunctionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak::GALGAS_dynArrayInsertFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak & GALGAS_dynArrayInsertFunctionIR_2D_weak::operator = (const GALGAS_dynArrayInsertFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak::GALGAS_dynArrayInsertFunctionIR_2D_weak (const GALGAS_dynArrayInsertFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak GALGAS_dynArrayInsertFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR GALGAS_dynArrayInsertFunctionIR_2D_weak::bang_dynArrayInsertFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynArrayInsertFunctionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynArrayInsertFunctionIR) ;
      result = GALGAS_dynArrayInsertFunctionIR ((cPtr_dynArrayInsertFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynArrayInsertFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ("dynArrayInsertFunctionIR-weak",
                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynArrayInsertFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynArrayInsertFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynArrayInsertFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynArrayInsertFunctionIR_2D_weak GALGAS_dynArrayInsertFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_dynArrayInsertFunctionIR_2D_weak result ;
  const GALGAS_dynArrayInsertFunctionIR_2D_weak * p = (const GALGAS_dynArrayInsertFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynArrayInsertFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicArrayTypeAssignUsage_2D_weak::objectCompare (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak::GALGAS_dynamicArrayTypeAssignUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak & GALGAS_dynamicArrayTypeAssignUsage_2D_weak::operator = (const GALGAS_dynamicArrayTypeAssignUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak::GALGAS_dynamicArrayTypeAssignUsage_2D_weak (const GALGAS_dynamicArrayTypeAssignUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak GALGAS_dynamicArrayTypeAssignUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage GALGAS_dynamicArrayTypeAssignUsage_2D_weak::bang_dynamicArrayTypeAssignUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynamicArrayTypeAssignUsage result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignUsage) ;
      result = GALGAS_dynamicArrayTypeAssignUsage ((cPtr_dynamicArrayTypeAssignUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicArrayTypeAssignUsage-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ("dynamicArrayTypeAssignUsage-weak",
                                                            & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignUsage_2D_weak GALGAS_dynamicArrayTypeAssignUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignUsage_2D_weak result ;
  const GALGAS_dynamicArrayTypeAssignUsage_2D_weak * p = (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::operator = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::bang_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
      result = GALGAS_dynamicArrayTypeAssignGenericFunctionIR ((cPtr_dynamicArrayTypeAssignGenericFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dynamicArrayTypeAssignGenericFunctionIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ("dynamicArrayTypeAssignGenericFunctionIR-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak result ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak * p = (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@enumerationConstantList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationConstantList : public cCollectionElement {
  public: GALGAS_enumerationConstantList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                      const GALGAS_bigint & in_mConstantValue
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationConstantList (const GALGAS_enumerationConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                                                        const GALGAS_bigint & in_mConstantValue
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mConstantValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_enumerationConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantName, inElement.mProperty_mConstantValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationConstantList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mConstantValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_enumerationConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantValue" ":" ;
  mObject.mProperty_mConstantValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_enumerationConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationConstantList * operand = (cCollectionElement_enumerationConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bigint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumerationConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mConstantName,
                                                                const GALGAS_bigint & in_mConstantValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationConstantList (in_mConstantName,
                                                             in_mConstantValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_bigint & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_append (GALGAS_enumerationConstantList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationConstantList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_bigint inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_bigint & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
        outOperand0 = p->mObject.mProperty_mConstantName ;
        outOperand1 = p->mObject.mProperty_mConstantValue ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_bigint & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_bigint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_bigint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::add_operation (const GALGAS_enumerationConstantList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::plusAssign_operation (const GALGAS_enumerationConstantList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_setMConstantNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumerationConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList::setter_setMConstantValueAtIndex (GALGAS_bigint inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_enumerationConstantList::getter_mConstantValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_enumerationConstantList::cEnumerator_enumerationConstantList (const GALGAS_enumerationConstantList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element cEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationConstantList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList ("enumerationConstantList",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  const GALGAS_enumerationConstantList * p = (const GALGAS_enumerationConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationDeclarationAST_2D_weak::objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak & GALGAS_enumerationDeclarationAST_2D_weak::operator = (const GALGAS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak::GALGAS_enumerationDeclarationAST_2D_weak (const GALGAS_enumerationDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST_2D_weak::bang_enumerationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GALGAS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ("enumerationDeclarationAST-weak",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST_2D_weak GALGAS_enumerationDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST_2D_weak result ;
  const GALGAS_enumerationDeclarationAST_2D_weak * p = (const GALGAS_enumerationDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumToUintRoutineIR_2D_weak::objectCompare (const GALGAS_enumToUintRoutineIR_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak::GALGAS_enumToUintRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak & GALGAS_enumToUintRoutineIR_2D_weak::operator = (const GALGAS_enumToUintRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak::GALGAS_enumToUintRoutineIR_2D_weak (const GALGAS_enumToUintRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak GALGAS_enumToUintRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR GALGAS_enumToUintRoutineIR_2D_weak::bang_enumToUintRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumToUintRoutineIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumToUintRoutineIR) ;
      result = GALGAS_enumToUintRoutineIR ((cPtr_enumToUintRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumToUintRoutineIR-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ("enumToUintRoutineIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumToUintRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumToUintRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumToUintRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumToUintRoutineIR_2D_weak GALGAS_enumToUintRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumToUintRoutineIR_2D_weak result ;
  const GALGAS_enumToUintRoutineIR_2D_weak * p = (const GALGAS_enumToUintRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumToUintRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumToUintRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@structurePropertyListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public: GALGAS_structurePropertyListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                       const GALGAS_propertyVisibility & in_mVisibility,
                                                       const GALGAS_lstring & in_mPropertyTypeName,
                                                       const GALGAS_propertyKindAST & in_mPropertyKind
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_structurePropertyListAST (const GALGAS_structurePropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                          const GALGAS_propertyVisibility & in_mVisibility,
                                                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_propertyKindAST & in_mPropertyKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mVisibility, in_mPropertyTypeName, in_mPropertyKind) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_structurePropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mVisibility, inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyKind) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mVisibility, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyKind COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_structurePropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyAttributeList" ":" ;
  mObject.mProperty_mPropertyAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVisibility" ":" ;
  mObject.mProperty_mVisibility.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyKind" ":" ;
  mObject.mProperty_mPropertyKind.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_structurePropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_structurePropertyListAST * operand = (cCollectionElement_structurePropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_structurePropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_structurePropertyListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_propertyAttributeList & inOperand1,
                                                                                            const GALGAS_propertyVisibility & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_propertyKindAST & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_structurePropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                 const GALGAS_propertyVisibility & in_mVisibility,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_propertyKindAST & in_mPropertyKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName,
                                                              in_mPropertyAttributeList,
                                                              in_mVisibility,
                                                              in_mPropertyTypeName,
                                                              in_mPropertyKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_propertyAttributeList & inOperand1,
                                                           const GALGAS_propertyVisibility & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_propertyKindAST & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_append (GALGAS_structurePropertyListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_structurePropertyListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_propertyAttributeList inOperand1,
                                                            const GALGAS_propertyVisibility inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_propertyKindAST inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_propertyAttributeList & outOperand1,
                                                            GALGAS_propertyVisibility & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_propertyKindAST & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
        outOperand0 = p->mObject.mProperty_mPropertyName ;
        outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
        outOperand2 = p->mObject.mProperty_mVisibility ;
        outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
        outOperand4 = p->mObject.mProperty_mPropertyKind ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_propertyAttributeList & outOperand1,
                                                       GALGAS_propertyVisibility & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_propertyKindAST & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_propertyAttributeList & outOperand1,
                                                      GALGAS_propertyVisibility & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_propertyKindAST & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_propertyAttributeList & outOperand1,
                                                    GALGAS_propertyVisibility & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_propertyKindAST & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_propertyAttributeList & outOperand1,
                                                   GALGAS_propertyVisibility & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_propertyKindAST & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mVisibility ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mPropertyKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::add_operation (const GALGAS_structurePropertyListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyAttributeListAtIndex (GALGAS_propertyAttributeList inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList GALGAS_structurePropertyListAST::getter_mPropertyAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyAttributeList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMVisibilityAtIndex (GALGAS_propertyVisibility inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVisibility = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility GALGAS_structurePropertyListAST::getter_mVisibilityAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyVisibility result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mVisibility ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structurePropertyListAST::setter_setMPropertyKindAtIndex (GALGAS_propertyKindAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST GALGAS_structurePropertyListAST::getter_mPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_propertyKindAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyKind ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_structurePropertyListAST::cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST_2D_element cEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList cEnumerator_structurePropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyVisibility cEnumerator_structurePropertyListAST::current_mVisibility (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mVisibility ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKindAST cEnumerator_structurePropertyListAST::current_mPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyKind ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@structurePropertyListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST ("structurePropertyListAST",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structurePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  const GALGAS_structurePropertyListAST * p = (const GALGAS_structurePropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

