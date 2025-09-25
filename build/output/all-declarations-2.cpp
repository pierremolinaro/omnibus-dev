#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//  Map type @typePropertyGetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::GGS_typePropertyGetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::~ GGS_typePropertyGetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::GGS_typePropertyGetterMap (const GGS_typePropertyGetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap & GGS_typePropertyGetterMap::operator = (const GGS_typePropertyGetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typePropertyGetterMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typePropertyGetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typePropertyGetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typePropertyGetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_typePropertyGetterMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_typePropertyGetterMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typePropertyGetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typePropertyGetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::performInsert (const GGS_typePropertyGetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>
GGS_typePropertyGetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_typePropertyGetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>>
GGS_typePropertyGetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_typePropertyGetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_typePropertyGetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typePropertyGetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mGetterMap = info->mProperty_mGetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::class_func_mapWithMapToOverride (const GGS_typePropertyGetterMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_typePropertyGetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_propertyGetterMap inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_typePropertyGetterMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::method_searchKey (GGS_lstring inLKey,
                                                  GGS_propertyGetterMap & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no $%K type" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mGetterMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_replaceKey (GGS_typePropertyGetterMap_2E_element inElement,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no $%K type" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_insertOrReplace (GGS_lstring inLKey,
                                                        GGS_propertyGetterMap inArgument0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_typePropertyGetterMap_2E_element element (inLKey, inArgument0) ;
  OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot.insulate (THERE) ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_typePropertyGetterMap::getter_mGetterMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mGetterMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_setMGetterMapForKey (GGS_propertyGetterMap inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_typePropertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mGetterMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_typePropertyGetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mGetterMap:") ;
    inArray (i COMMA_HERE)->mProperty_mGetterMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertyGetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_typePropertyGetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_typePropertyGetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_typePropertyGetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @typePropertyGetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_typePropertyGetterMap::DownEnumerator_typePropertyGetterMap (const GGS_typePropertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element DownEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap DownEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGetterMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @typePropertyGetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_typePropertyGetterMap::UpEnumerator_typePropertyGetterMap (const GGS_typePropertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element UpEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap UpEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGetterMap ;
}


//--------------------------------------------------------------------------------------------------
//     @typePropertyGetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ("typePropertyGetterMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typePropertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  const GGS_typePropertyGetterMap * p = (const GGS_typePropertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_availableInterruptMap GGS_availableInterruptMap::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_infixOperatorMap GGS_infixOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_prefixOperatorMap GGS_prefixOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
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
//  Map type @implicitConversionToBooleanMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap::GGS_implicitConversionToBooleanMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap::~ GGS_implicitConversionToBooleanMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap::GGS_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap & GGS_implicitConversionToBooleanMap::operator = (const GGS_implicitConversionToBooleanMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_implicitConversionToBooleanMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_implicitConversionToBooleanMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_implicitConversionToBooleanMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_implicitConversionToBooleanMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_implicitConversionToBooleanMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_implicitConversionToBooleanMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitConversionToBooleanMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_implicitConversionToBooleanMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::performInsert (const GGS_implicitConversionToBooleanMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_implicitConversionToBooleanMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element>
GGS_implicitConversionToBooleanMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_implicitConversionToBooleanMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element>>
GGS_implicitConversionToBooleanMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_implicitConversionToBooleanMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element_3F_ GGS_implicitConversionToBooleanMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_implicitConversionToBooleanMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_implicitConversionToBooleanMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_implicitConversionToBooleanMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mConverter = info->mProperty_mConverter ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::class_func_mapWithMapToOverride (const GGS_implicitConversionToBooleanMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_implicitConversionToBooleanMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_implicitConversionToBooleanMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::setter_insertKey (GGS_lstring inLKey,
                                                           GGS_abstractImplicitConverterToBoolean inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_implicitConversionToBooleanMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::method_searchKey (GGS_lstring inLKey,
                                                           GGS_abstractImplicitConverterToBoolean & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' type cannot be implicitly converted to boolean" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mConverter ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_implicitConversionToBooleanMap::getter_mConverterForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConverter ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::setter_setMConverterForKey (GGS_abstractImplicitConverterToBoolean inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_implicitConversionToBooleanMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConverter = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_implicitConversionToBooleanMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element>> & inArray,
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
    ioString.appendString ("mConverter:") ;
    inArray (i COMMA_HERE)->mProperty_mConverter.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_implicitConversionToBooleanMap_2E_element>> array = sortedInfoArray () ;
    GGS_implicitConversionToBooleanMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_implicitConversionToBooleanMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_implicitConversionToBooleanMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @implicitConversionToBooleanMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_implicitConversionToBooleanMap::DownEnumerator_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element DownEnumerator_implicitConversionToBooleanMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_implicitConversionToBooleanMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean DownEnumerator_implicitConversionToBooleanMap::current_mConverter (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConverter ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @implicitConversionToBooleanMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_implicitConversionToBooleanMap::UpEnumerator_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element UpEnumerator_implicitConversionToBooleanMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_implicitConversionToBooleanMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean UpEnumerator_implicitConversionToBooleanMap::current_mConverter (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConverter ;
}


//--------------------------------------------------------------------------------------------------
//     @implicitConversionToBooleanMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ("implicitConversionToBooleanMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitConversionToBooleanMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitConversionToBooleanMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitConversionToBooleanMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  const GGS_implicitConversionToBooleanMap * p = (const GGS_implicitConversionToBooleanMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitConversionToBooleanMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_taskMap GGS_taskMap::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_globalTaskVariableList GGS_globalTaskVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//Class for element of '@declarationDecorationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public: GGS_declarationDecorationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationDecorationList (const GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationDecorationList (const GGS_declarationDecorationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @declarationDecorationList
//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList::GGS_declarationDecorationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList::GGS_declarationDecorationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    const GGS_declarationDecorationList_2E_element element (p->mObject.mProperty_mDeclaration) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_declarationDecorationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_declarationDecorationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::description (String & ioString,
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

GGS_declarationDecorationList GGS_declarationDecorationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationDecorationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::plusPlusAssignOperation (const GGS_declarationDecorationList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::class_func_listWithValue (const GGS_abstractDecoratedDeclaration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element element (inOperand0) ;
  GGS_declarationDecorationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::addAssignOperation (const GGS_abstractDecoratedDeclaration & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_append (const GGS_abstractDecoratedDeclaration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::setter_insertAtIndex (const GGS_abstractDecoratedDeclaration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_declarationDecorationList_2E_element newElement (inOperand0) ;
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

void GGS_declarationDecorationList::setter_removeAtIndex (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::setter_popFirst (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::setter_popLast (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::method_first (GGS_abstractDecoratedDeclaration & outOperand0,
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

void GGS_declarationDecorationList::method_last (GGS_abstractDecoratedDeclaration & outOperand0,
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

GGS_declarationDecorationList GGS_declarationDecorationList::add_operation (const GGS_declarationDecorationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
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

GGS_declarationDecorationList GGS_declarationDecorationList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
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

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList GGS_declarationDecorationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_declarationDecorationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationDecorationList::plusAssignOperation (const GGS_declarationDecorationList inList,
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

void GGS_declarationDecorationList::setter_setMDeclarationAtIndex (GGS_abstractDecoratedDeclaration inOperand,
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
  
GGS_abstractDecoratedDeclaration GGS_declarationDecorationList::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_abstractDecoratedDeclaration result ;
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
// Down Enumerator for @declarationDecorationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_declarationDecorationList::DownEnumerator_declarationDecorationList (const GGS_declarationDecorationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element DownEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration DownEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @declarationDecorationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_declarationDecorationList::UpEnumerator_declarationDecorationList (const GGS_declarationDecorationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationDecorationList_2E_element UpEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration UpEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @declarationDecorationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationDecorationList ("declarationDecorationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationDecorationList::staticTypeDescriptor (void) const {
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
//  Map type @constantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::~ GGS_constantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap::GGS_constantMap (const GGS_constantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap & GGS_constantMap::operator = (const GGS_constantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_constantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constantMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_constantMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::performInsert (const GGS_constantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>
GGS_constantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_constantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>>
GGS_constantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_constantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_constantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mClassTypeName = info->mProperty_mClassTypeName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::class_func_mapWithMapToOverride (const GGS_constantMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_constantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_constantMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_constantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_bigint inArgument0,
                                        GGS_lstring inArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_constantMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_bigint & outArgument0,
                                        GGS_lstring & outArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' constant" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mClassTypeName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_constantMap::getter_mIndexForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_constantMap::getter_mClassTypeNameForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mClassTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_setMIndexForKey (GGS_bigint inValue,
                                              GGS_string inKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_constantMap::setter_setMClassTypeNameForKey (GGS_lstring inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mClassTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_constantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> & inArray,
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
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mClassTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mClassTypeName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> array = sortedInfoArray () ;
    GGS_constantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_constantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantMap::DownEnumerator_constantMap (const GGS_constantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element DownEnumerator_constantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassTypeName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantMap::UpEnumerator_constantMap (const GGS_constantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element UpEnumerator_constantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassTypeName ;
}


//--------------------------------------------------------------------------------------------------
//     @constantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap::staticTypeDescriptor (void) const {
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
//  Map type @constructorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::GGS_constructorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::~ GGS_constructorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap::GGS_constructorMap (const GGS_constructorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap & GGS_constructorMap::operator = (const GGS_constructorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_constructorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constructorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constructorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constructorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constructorMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_constructorMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constructorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::performInsert (const GGS_constructorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_constructorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>
GGS_constructorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_constructorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>>
GGS_constructorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_constructorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element_3F_ GGS_constructorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constructorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_constructorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constructorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mInitValue = info->mProperty_mInitValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::class_func_mapWithMapToOverride (const GGS_constructorMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_constructorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_constructorMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_constructorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_constructorSignature inArgument0,
                                           GGS_constructorValue inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_constructorMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_constructorSignature & outArgument0,
                                           GGS_constructorValue & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "constructor is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mSignature ;
    outArgument1 = info->mProperty_mInitValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_constructorValue GGS_constructorMap::getter_mInitValueForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_constructorValue result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_setMSignatureForKey (GGS_constructorSignature inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constructorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::setter_setMInitValueForKey (GGS_constructorValue inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constructorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_constructorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> & inArray,
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
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInitValue:") ;
    inArray (i COMMA_HERE)->mProperty_mInitValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> array = sortedInfoArray () ;
    GGS_constructorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_constructorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constructorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constructorMap::DownEnumerator_constructorMap (const GGS_constructorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element DownEnumerator_constructorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature DownEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue DownEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constructorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constructorMap::UpEnumerator_constructorMap (const GGS_constructorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap_2E_element UpEnumerator_constructorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature UpEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorValue UpEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitValue ;
}


//--------------------------------------------------------------------------------------------------
//     @constructorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorMap::staticTypeDescriptor (void) const {
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
//     @constructorValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue ("constructorValue",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorValue::staticTypeDescriptor (void) const {
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
//Class for element of '@constructorSignature' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_constructorSignature : public cCollectionElement {
  public: GGS_constructorSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_constructorSignature (const GGS_string & in_mSelector,
                                                   const GGS_omnibusType & in_mType,
                                                   const GGS_uint & in_mFieldIndex
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_constructorSignature (const GGS_constructorSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @constructorSignature
//--------------------------------------------------------------------------------------------------

GGS_constructorSignature::GGS_constructorSignature (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature::GGS_constructorSignature (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    const GGS_constructorSignature_2E_element element (p->mObject.mProperty_mSelector, p->mObject.mProperty_mType, p->mObject.mProperty_mFieldIndex) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_string & in_mSelector,
                                                          const GGS_omnibusType & in_mType,
                                                          const GGS_uint & in_mFieldIndex
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_constructorSignature (in_mSelector, in_mType, in_mFieldIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constructorSignature::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_constructorSignature::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::description (String & ioString,
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
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFieldIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFieldIndex.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_constructorSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constructorSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::plusPlusAssignOperation (const GGS_constructorSignature_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::class_func_listWithValue (const GGS_string & inOperand0,
                                                                             const GGS_omnibusType & inOperand1,
                                                                             const GGS_uint & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_constructorSignature result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::addAssignOperation (const GGS_string & inOperand0,
                                                   const GGS_omnibusType & inOperand1,
                                                   const GGS_uint & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_append (const GGS_string inOperand0,
                                              const GGS_omnibusType inOperand1,
                                              const GGS_uint inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::setter_insertAtIndex (const GGS_string inOperand0,
                                                     const GGS_omnibusType inOperand1,
                                                     const GGS_uint inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_constructorSignature_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_constructorSignature::setter_removeAtIndex (GGS_string & outOperand0,
                                                     GGS_omnibusType & outOperand1,
                                                     GGS_uint & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFieldIndex ;
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

void GGS_constructorSignature::setter_popFirst (GGS_string & outOperand0,
                                                GGS_omnibusType & outOperand1,
                                                GGS_uint & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFieldIndex ;
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

void GGS_constructorSignature::setter_popLast (GGS_string & outOperand0,
                                               GGS_omnibusType & outOperand1,
                                               GGS_uint & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFieldIndex ;
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

void GGS_constructorSignature::method_first (GGS_string & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_uint & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFieldIndex ;
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

void GGS_constructorSignature::method_last (GGS_string & outOperand0,
                                            GGS_omnibusType & outOperand1,
                                            GGS_uint & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFieldIndex ;
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

GGS_constructorSignature GGS_constructorSignature::add_operation (const GGS_constructorSignature & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
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

GGS_constructorSignature GGS_constructorSignature::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
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

GGS_constructorSignature GGS_constructorSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature GGS_constructorSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_constructorSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorSignature::plusAssignOperation (const GGS_constructorSignature inList,
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

void GGS_constructorSignature::setter_setMSelectorAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_constructorSignature::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_constructorSignature::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
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
  
GGS_omnibusType GGS_constructorSignature::getter_mTypeAtIndex (const GGS_uint & inIndex,
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

void GGS_constructorSignature::setter_setMFieldIndexAtIndex (GGS_uint inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldIndex = inOperand ;
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
  
GGS_uint GGS_constructorSignature::getter_mFieldIndexAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldIndex ;
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
// Down Enumerator for @constructorSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_constructorSignature::DownEnumerator_constructorSignature (const GGS_constructorSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element DownEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @constructorSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_constructorSignature::UpEnumerator_constructorSignature (const GGS_constructorSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constructorSignature_2E_element UpEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @constructorSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorSignature ("constructorSignature",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constructorSignature::staticTypeDescriptor (void) const {
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
//  Map type @propertyGetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::GGS_propertyGetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::~ GGS_propertyGetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap::GGS_propertyGetterMap (const GGS_propertyGetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap & GGS_propertyGetterMap::operator = (const GGS_propertyGetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyGetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyGetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyGetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyGetterMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_propertyGetterMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::performInsert (const GGS_propertyGetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>
GGS_propertyGetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyGetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>>
GGS_propertyGetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyGetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element_3F_ GGS_propertyGetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyGetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyGetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyGetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mVisibility = info->mProperty_mVisibility ;
      element.mProperty_mAccess = info->mProperty_mAccess ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::class_func_mapWithMapToOverride (const GGS_propertyGetterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_propertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility inArgument0,
                                              GGS_propertyGetterKind inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_propertyGetterMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility & outArgument0,
                                              GGS_propertyGetterKind & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mVisibility ;
    outArgument1 = info->mProperty_mAccess ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_replaceKey (GGS_propertyGetterMap_2E_element inElement,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no '%K' property" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertyGetterMap::getter_mVisibilityForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_propertyVisibility result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mVisibility ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind GGS_propertyGetterMap::getter_mAccessForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_propertyGetterKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccess ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_setMVisibilityForKey (GGS_propertyVisibility inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mVisibility = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::setter_setMAccessForKey (GGS_propertyGetterKind inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyGetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccess = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyGetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mVisibility:") ;
    inArray (i COMMA_HERE)->mProperty_mVisibility.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAccess:") ;
    inArray (i COMMA_HERE)->mProperty_mAccess.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyGetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyGetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyGetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyGetterMap::DownEnumerator_propertyGetterMap (const GGS_propertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element DownEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility DownEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind DownEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyGetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyGetterMap::UpEnumerator_propertyGetterMap (const GGS_propertyGetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap_2E_element UpEnumerator_propertyGetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyGetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility UpEnumerator_propertyGetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterKind UpEnumerator_propertyGetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyGetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap ("propertyGetterMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterMap::staticTypeDescriptor (void) const {
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
//     @propertyGetterKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind ("propertyGetterKind",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGetterKind::staticTypeDescriptor (void) const {
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
//     @propertyVisibility generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyVisibility ("propertyVisibility",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyVisibility::staticTypeDescriptor (void) const {
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
//  Map type @propertySetterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::GGS_propertySetterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::~ GGS_propertySetterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap::GGS_propertySetterMap (const GGS_propertySetterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap & GGS_propertySetterMap::operator = (const GGS_propertySetterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertySetterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertySetterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertySetterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertySetterMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_propertySetterMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertySetterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::performInsert (const GGS_propertySetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertySetterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>
GGS_propertySetterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertySetterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>>
GGS_propertySetterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertySetterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element_3F_ GGS_propertySetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertySetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertySetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertySetterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mVisibility = info->mProperty_mVisibility ;
      element.mProperty_mAccess = info->mProperty_mAccess ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::class_func_mapWithMapToOverride (const GGS_propertySetterMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertySetterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_propertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_propertySetterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility inArgument0,
                                              GGS_propertySetterKind inArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_propertySetterMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_propertyVisibility & outArgument0,
                                              GGS_propertySetterKind & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mVisibility ;
    outArgument1 = info->mProperty_mAccess ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility GGS_propertySetterMap::getter_mVisibilityForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_propertyVisibility result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mVisibility ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind GGS_propertySetterMap::getter_mAccessForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_propertySetterKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccess ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_setMVisibilityForKey (GGS_propertyVisibility inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertySetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mVisibility = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::setter_setMAccessForKey (GGS_propertySetterKind inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertySetterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccess = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertySetterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> & inArray,
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
    ioString.appendString ("mVisibility:") ;
    inArray (i COMMA_HERE)->mProperty_mVisibility.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAccess:") ;
    inArray (i COMMA_HERE)->mProperty_mAccess.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertySetterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertySetterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertySetterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertySetterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertySetterMap::DownEnumerator_propertySetterMap (const GGS_propertySetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element DownEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility DownEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind DownEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertySetterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertySetterMap::UpEnumerator_propertySetterMap (const GGS_propertySetterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap_2E_element UpEnumerator_propertySetterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertySetterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyVisibility UpEnumerator_propertySetterMap::current_mVisibility (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVisibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterKind UpEnumerator_propertySetterMap::current_mAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccess ;
}


//--------------------------------------------------------------------------------------------------
//     @propertySetterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap ("propertySetterMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterMap::staticTypeDescriptor (void) const {
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
//     @propertySetterKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind ("propertySetterKind",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertySetterKind::staticTypeDescriptor (void) const {
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
//  Map type @staticStringMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::GGS_staticStringMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::~ GGS_staticStringMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap::GGS_staticStringMap (const GGS_staticStringMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap & GGS_staticStringMap::operator = (const GGS_staticStringMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_staticStringMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticStringMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticStringMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticStringMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticStringMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_staticStringMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_staticStringMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_staticStringMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticStringMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::performInsert (const GGS_staticStringMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_staticStringMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>
GGS_staticStringMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_staticStringMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>>
GGS_staticStringMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_staticStringMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element_3F_ GGS_staticStringMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticStringMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_staticStringMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticStringMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::class_func_mapWithMapToOverride (const GGS_staticStringMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_staticStringMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_staticStringMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap GGS_staticStringMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_staticStringMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_staticStringMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_uint & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "-- internal error --" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_staticStringMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::setter_setMIndexForKey (GGS_uint inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_staticStringMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_staticStringMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>> & inArray,
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
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticStringMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticStringMap_2E_element>> array = sortedInfoArray () ;
    GGS_staticStringMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_staticStringMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_staticStringMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @staticStringMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticStringMap::DownEnumerator_staticStringMap (const GGS_staticStringMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element DownEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @staticStringMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticStringMap::UpEnumerator_staticStringMap (const GGS_staticStringMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticStringMap_2E_element UpEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @staticStringMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticStringMap::staticTypeDescriptor (void) const {
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
//Class for element of '@globalStructuredConstantList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_globalStructuredConstantList : public cCollectionElement {
  public: GGS_globalStructuredConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_globalStructuredConstantList (const GGS_omnibusType & in_mType,
                                                           const GGS_operandIRList & in_mOperandIRList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalStructuredConstantList (const GGS_globalStructuredConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @globalStructuredConstantList
//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList::GGS_globalStructuredConstantList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList::GGS_globalStructuredConstantList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    const GGS_globalStructuredConstantList_2E_element element (p->mObject.mProperty_mType, p->mObject.mProperty_mOperandIRList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_operandIRList & in_mOperandIRList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType, in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalStructuredConstantList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_globalStructuredConstantList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::description (String & ioString,
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
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOperandIRList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOperandIRList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_globalStructuredConstantList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalStructuredConstantList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::plusPlusAssignOperation (const GGS_globalStructuredConstantList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::class_func_listWithValue (const GGS_omnibusType & inOperand0,
                                                                                             const GGS_operandIRList & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element element (inOperand0, inOperand1) ;
  GGS_globalStructuredConstantList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::addAssignOperation (const GGS_omnibusType & inOperand0,
                                                           const GGS_operandIRList & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_append (const GGS_omnibusType inOperand0,
                                                      const GGS_operandIRList inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::setter_insertAtIndex (const GGS_omnibusType inOperand0,
                                                             const GGS_operandIRList inOperand1,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_globalStructuredConstantList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_globalStructuredConstantList::setter_removeAtIndex (GGS_omnibusType & outOperand0,
                                                             GGS_operandIRList & outOperand1,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOperandIRList ;
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

void GGS_globalStructuredConstantList::setter_popFirst (GGS_omnibusType & outOperand0,
                                                        GGS_operandIRList & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOperandIRList ;
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

void GGS_globalStructuredConstantList::setter_popLast (GGS_omnibusType & outOperand0,
                                                       GGS_operandIRList & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOperandIRList ;
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

void GGS_globalStructuredConstantList::method_first (GGS_omnibusType & outOperand0,
                                                     GGS_operandIRList & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOperandIRList ;
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

void GGS_globalStructuredConstantList::method_last (GGS_omnibusType & outOperand0,
                                                    GGS_operandIRList & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOperandIRList ;
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

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::add_operation (const GGS_globalStructuredConstantList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
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

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
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

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList GGS_globalStructuredConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_globalStructuredConstantList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalStructuredConstantList::plusAssignOperation (const GGS_globalStructuredConstantList inList,
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

void GGS_globalStructuredConstantList::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
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
  
GGS_omnibusType GGS_globalStructuredConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
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

void GGS_globalStructuredConstantList::setter_setMOperandIRListAtIndex (GGS_operandIRList inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOperandIRList = inOperand ;
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
  
GGS_operandIRList GGS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOperandIRList ;
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
// Down Enumerator for @globalStructuredConstantList
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalStructuredConstantList::DownEnumerator_globalStructuredConstantList (const GGS_globalStructuredConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element DownEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList DownEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperandIRList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @globalStructuredConstantList
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalStructuredConstantList::UpEnumerator_globalStructuredConstantList (const GGS_globalStructuredConstantList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalStructuredConstantList_2E_element UpEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList UpEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperandIRList ;
}




//--------------------------------------------------------------------------------------------------
//     @globalStructuredConstantList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalStructuredConstantList ("globalStructuredConstantList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalStructuredConstantList::staticTypeDescriptor (void) const {
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
//Class for element of '@operandIRList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_operandIRList : public cCollectionElement {
  public: GGS_operandIRList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_operandIRList (const GGS_objectIR & in_mOperand
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_operandIRList (const GGS_operandIRList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @operandIRList
//--------------------------------------------------------------------------------------------------

GGS_operandIRList::GGS_operandIRList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList::GGS_operandIRList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    const GGS_operandIRList_2E_element element (p->mObject.mProperty_mOperand) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_operandIRList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_operandIRList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::description (String & ioString,
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
      ioString.appendString ("mOperand:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOperand.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_operandIRList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_operandIRList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::plusPlusAssignOperation (const GGS_operandIRList_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::class_func_listWithValue (const GGS_objectIR & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element element (inOperand0) ;
  GGS_operandIRList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::addAssignOperation (const GGS_objectIR & inOperand0
                                            COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_append (const GGS_objectIR inOperand0,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::setter_insertAtIndex (const GGS_objectIR inOperand0,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_operandIRList_2E_element newElement (inOperand0) ;
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

void GGS_operandIRList::setter_removeAtIndex (GGS_objectIR & outOperand0,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOperand ;
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

void GGS_operandIRList::setter_popFirst (GGS_objectIR & outOperand0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOperand ;
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

void GGS_operandIRList::setter_popLast (GGS_objectIR & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOperand ;
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

void GGS_operandIRList::method_first (GGS_objectIR & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOperand ;
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

void GGS_operandIRList::method_last (GGS_objectIR & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOperand ;
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

GGS_operandIRList GGS_operandIRList::add_operation (const GGS_operandIRList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_operandIRList result ;
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

GGS_operandIRList GGS_operandIRList::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
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

GGS_operandIRList GGS_operandIRList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList GGS_operandIRList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_operandIRList::plusAssignOperation (const GGS_operandIRList inList,
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

void GGS_operandIRList::setter_setMOperandAtIndex (GGS_objectIR inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOperand = inOperand ;
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
  
GGS_objectIR GGS_operandIRList::getter_mOperandAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOperand ;
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

ComparisonResult GGS_operandIRList::objectCompare (const GGS_operandIRList & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_operandIRList_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_operandIRList_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @operandIRList
//--------------------------------------------------------------------------------------------------

DownEnumerator_operandIRList::DownEnumerator_operandIRList (const GGS_operandIRList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element DownEnumerator_operandIRList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperand ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @operandIRList
//--------------------------------------------------------------------------------------------------

UpEnumerator_operandIRList::UpEnumerator_operandIRList (const GGS_operandIRList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList_2E_element UpEnumerator_operandIRList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOperand ;
}




//--------------------------------------------------------------------------------------------------
//     @operandIRList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_operandIRList ("operandIRList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_operandIRList::staticTypeDescriptor (void) const {
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

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public: GGS_arcAssignmentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_arcAssignmentList (const GGS_string & in_mPropertyName,
                                                const GGS_omnibusType & in_mPropertyType,
                                                const GGS_uintlist & in_mPropertyIndexPath
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arcAssignmentList (const GGS_arcAssignmentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @arcAssignmentList
//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList::GGS_arcAssignmentList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    const GGS_arcAssignmentList_2E_element element (p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mPropertyType, p->mObject.mProperty_mPropertyIndexPath) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_string & in_mPropertyName,
                                                       const GGS_omnibusType & in_mPropertyType,
                                                       const GGS_uintlist & in_mPropertyIndexPath
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath COMMA_THERE)) ;
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

GGS_arcAssignmentList GGS_arcAssignmentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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


void cPtr_userLLVMTypeDefinitionIR::
userLLVMTypeDefinitionIR_init_21_ (const GGS_string & in_mLLVMDefinedTypeName,
                                   Compiler * /* inCompiler */) {
  mProperty_mLLVMDefinedTypeName = in_mLLVMDefinedTypeName ;
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
//     @userLLVMTypeDefinitionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ("userLLVMTypeDefinitionIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionIR::staticTypeDescriptor (void) const {
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

GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionIR_2E_weak::unwrappedValue (void) const {
  GGS_userLLVMTypeDefinitionIR result ;
  if (isValid ()) {
    const cPtr_userLLVMTypeDefinitionIR * p = (cPtr_userLLVMTypeDefinitionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_userLLVMTypeDefinitionIR (p) ;
    }
  }
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
//     @userLLVMTypeDefinitionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ("userLLVMTypeDefinitionIR.weak",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@userLLVMTypeDefinitionListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_userLLVMTypeDefinitionListIR : public cCollectionElement {
  public: GGS_userLLVMTypeDefinitionListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionIR & in_mType
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @userLLVMTypeDefinitionListIR
//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR::GGS_userLLVMTypeDefinitionListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR::GGS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_userLLVMTypeDefinitionListIR * p = (cCollectionElement_userLLVMTypeDefinitionListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_userLLVMTypeDefinitionListIR) ;
    const GGS_userLLVMTypeDefinitionListIR_2E_element element (p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_userLLVMTypeDefinitionListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_userLLVMTypeDefinitionListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::description (String & ioString,
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
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_userLLVMTypeDefinitionListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::plusPlusAssignOperation (const GGS_userLLVMTypeDefinitionListIR_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::class_func_listWithValue (const GGS_userLLVMTypeDefinitionIR & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element element (inOperand0) ;
  GGS_userLLVMTypeDefinitionListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::addAssignOperation (const GGS_userLLVMTypeDefinitionIR & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_append (const GGS_userLLVMTypeDefinitionIR inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::setter_insertAtIndex (const GGS_userLLVMTypeDefinitionIR inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_userLLVMTypeDefinitionListIR_2E_element newElement (inOperand0) ;
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

void GGS_userLLVMTypeDefinitionListIR::setter_removeAtIndex (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
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

void GGS_userLLVMTypeDefinitionListIR::setter_popFirst (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_userLLVMTypeDefinitionListIR::setter_popLast (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
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

void GGS_userLLVMTypeDefinitionListIR::method_first (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_userLLVMTypeDefinitionListIR::method_last (GGS_userLLVMTypeDefinitionIR & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
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

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::add_operation (const GGS_userLLVMTypeDefinitionListIR & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
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

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
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

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR GGS_userLLVMTypeDefinitionListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_userLLVMTypeDefinitionListIR::plusAssignOperation (const GGS_userLLVMTypeDefinitionListIR inList,
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

void GGS_userLLVMTypeDefinitionListIR::setter_setMTypeAtIndex (GGS_userLLVMTypeDefinitionIR inOperand,
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
  
GGS_userLLVMTypeDefinitionIR GGS_userLLVMTypeDefinitionListIR::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_userLLVMTypeDefinitionIR result ;
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
// Down Enumerator for @userLLVMTypeDefinitionListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_userLLVMTypeDefinitionListIR::DownEnumerator_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element DownEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR DownEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @userLLVMTypeDefinitionListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_userLLVMTypeDefinitionListIR::UpEnumerator_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionListIR_2E_element UpEnumerator_userLLVMTypeDefinitionListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMTypeDefinitionIR UpEnumerator_userLLVMTypeDefinitionListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @userLLVMTypeDefinitionListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ("userLLVMTypeDefinitionListIR",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMTypeDefinitionListIR::staticTypeDescriptor (void) const {
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
//  Extension Getter '@unifiedTypeMap unsolvedEntryList'
//--------------------------------------------------------------------------------------------------

GGS_lstringlist extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 19)) ;
  result_result = temp_0 ;
  const GGS_unifiedTypeMap temp_1 = inObject ;
  UpEnumerator_unifiedTypeMap enumerator_1144 (temp_1) ;
  while (enumerator_1144.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_1144.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 21)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        result_result.addAssignOperation (enumerator_1144.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 22)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_1444 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_1444.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 31)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 43)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_1971 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_1971.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 45)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2067 = GGS_unifiedTypeMapElementClass::init_21__21_ (constinArgument_inLKey, GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 47)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2067, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 48)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2067  COMMA_SOURCE_FILE ("unified-type-map.galgas", 49)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_2445 = temp_1.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2445.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 57)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_2540 = GGS_unifiedTypeMapElementClass::init_21__21_ (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 59)), inCompiler COMMA_HERE), GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 59)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 60)), inCompiler COMMA_HERE), var_newElement_2540, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 60)) ;
    }
    outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2540  COMMA_SOURCE_FILE ("unified-type-map.galgas", 61)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap searchKey'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_searchKey (const GGS_unifiedTypeMap & inObject,
                                                   const GGS_lstring & constinArgument_inLKey,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 69)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2981 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_2981.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 71)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GenericArray <FixItDescription> fixItArray3 ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_3353 = temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      switch (var_node_3353.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_omnibusType extractedValue_3438__0 ;
          var_node_3353.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_3438__0) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 83)) ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GGS_unifiedTypeMapElementClass var_e_3521 = var_node_3353.readProperty_mElement () ;
          var_e_3521.setProperty_mDefinition (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 86))) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_3618 = GGS_unifiedTypeMapElementClass::init_21__21_ (constinArgument_inTypeName, GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 89)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_3618, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 90)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = inObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4017 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      switch (var_node_4017.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_omnibusType extractedValue_4098_definition_0 ;
          var_node_4017.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4098_definition_0) ;
          outArgument_outTypeDefinition = extractedValue_4098_definition_0 ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 103)) ;
          outArgument_outTypeDefinition.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray3 ;
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
//     @typeDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition::staticTypeDescriptor (void) const {
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

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::unwrappedValue (void) const {
  GGS_unifiedTypeMapElementClass result ;
  if (isValid ()) {
    const cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) ptr () ;
    if (nullptr != p) {
      result = GGS_unifiedTypeMapElementClass (p) ;
    }
  }
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
//     @unifiedTypeMapElementClass.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ("unifiedTypeMapElementClass.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass_2E_weak::staticTypeDescriptor (void) const {
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
//  Extension Getter '@unifiedTypeMapEntry type'
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
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 160)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 160)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_3F_ extractedValue_6114_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_6114_weakElement_0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_6140 = extractedValue_6114_weakElement_0.unwrappedValue () ;
        if (!extractedValue_6114_weakElement_0.isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          switch (var_type_6140.readProperty_mDefinition ().enumValue ()) {
          case GGS_typeDefinition::Enumeration::invalid:
            break ;
          case GGS_typeDefinition::Enumeration::enum_unsolved:
            {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 165)), GGS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 165)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GGS_typeDefinition::Enumeration::enum_solved:
            {
              GGS_omnibusType extractedValue_6285_definition_0 ;
              var_type_6140.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_6285_definition_0) ;
              result_result = extractedValue_6285_definition_0 ;
            }
            break ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
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
//  Extension Getter '@unifiedTypeMapEntry key'
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
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 180)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 180)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_3F_ extractedValue_6637_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_6637_weakElement_0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_6663 = extractedValue_6637_weakElement_0.unwrappedValue () ;
        if (!extractedValue_6637_weakElement_0.isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          result_result = var_type_6663.readProperty_mTypeName ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
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

GGS_staticListInvokedFunctionSetMap GGS_staticListInvokedFunctionSetMap::class_func_emptyMap (LOCATION_ARGS) {
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

const GALGAS_TypeDescriptor * cPtr_compiletimeBoolAST::classDescriptor (void) const {
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
//     @compiletimeBoolAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimeBoolAST ("compiletimeBoolAST",
                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compiletimeBoolAST::staticTypeDescriptor (void) const {
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

GGS_compiletimeBoolAST GGS_compiletimeBoolAST_2E_weak::unwrappedValue (void) const {
  GGS_compiletimeBoolAST result ;
  if (isValid ()) {
    const cPtr_compiletimeBoolAST * p = (cPtr_compiletimeBoolAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compiletimeBoolAST (p) ;
    }
  }
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
//     @compiletimeBoolAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimeBoolAST_2E_weak ("compiletimeBoolAST.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compiletimeBoolAST_2E_weak::staticTypeDescriptor (void) const {
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


void cPtr_abstractImplicitConverterToBoolean::
abstractImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
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
//     @abstractImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ("abstractImplicitConverterToBoolean",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractImplicitConverterToBoolean::staticTypeDescriptor (void) const {
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

GGS_abstractImplicitConverterToBoolean GGS_abstractImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_abstractImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_abstractImplicitConverterToBoolean * p = (cPtr_abstractImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractImplicitConverterToBoolean (p) ;
    }
  }
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
//     @abstractImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ("abstractImplicitConverterToBoolean.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

const GALGAS_TypeDescriptor * cPtr_compileTimeBoolXorOperator::classDescriptor (void) const {
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
//     @compileTimeBoolXorOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ("compileTimeBoolXorOperator",
                                                                               & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeBoolXorOperator::staticTypeDescriptor (void) const {
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

GGS_compileTimeBoolXorOperator GGS_compileTimeBoolXorOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeBoolXorOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeBoolXorOperator * p = (cPtr_compileTimeBoolXorOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeBoolXorOperator (p) ;
    }
  }
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
//     @compileTimeBoolXorOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2E_weak ("compileTimeBoolXorOperator.weak",
                                                                                       & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeBoolXorOperator_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_compileTimeBoolOrOperator::classDescriptor (void) const {
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
//     @compileTimeBoolOrOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ("compileTimeBoolOrOperator",
                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeBoolOrOperator::staticTypeDescriptor (void) const {
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

GGS_compileTimeBoolOrOperator GGS_compileTimeBoolOrOperator_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeBoolOrOperator result ;
  if (isValid ()) {
    const cPtr_compileTimeBoolOrOperator * p = (cPtr_compileTimeBoolOrOperator *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeBoolOrOperator (p) ;
    }
  }
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
//     @compileTimeBoolOrOperator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2E_weak ("compileTimeBoolOrOperator.weak",
                                                                                      & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeBoolOrOperator_2E_weak::staticTypeDescriptor (void) const {
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

