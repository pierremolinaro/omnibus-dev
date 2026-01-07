#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//  Enum llvmBinaryOperation
//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation::GGS_llvmBinaryOperation (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_addNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_addNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_subNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_subNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_mulNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_udivNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sdivNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_uremNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sremNoOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_uaddOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_uaddOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_saddOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_saddOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_usubOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_usubOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_ssubOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_ssubOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_umulOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_umulOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_smulOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_smulOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_udivOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_udivOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sdivOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sdivOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_uremOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_uremOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_sremOVF (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_sremOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_and (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_and ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_ior (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_ior ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_xor (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_xor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_shl (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_shl ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_ashr (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_ashr ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_lshr (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_lshr ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_eq ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_ult ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_ule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_slt ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::class_func_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  result.mEnum = Enumeration::enum_icmp_5F_sle ;
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

static const char * gEnumNameArrayFor_llvmBinaryOperation [29] = {
  "(not built)",
  "addNoOVF",
  "subNoOVF",
  "mulNoOVF",
  "udivNoOVF",
  "sdivNoOVF",
  "uremNoOVF",
  "sremNoOVF",
  "uaddOVF",
  "saddOVF",
  "usubOVF",
  "ssubOVF",
  "umulOVF",
  "smulOVF",
  "udivOVF",
  "sdivOVF",
  "uremOVF",
  "sremOVF",
  "and",
  "ior",
  "xor",
  "shl",
  "ashr",
  "lshr",
  "icmp_eq",
  "icmp_ult",
  "icmp_ule",
  "icmp_slt",
  "icmp_sle"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_udivNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sdivNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uremNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sremNoOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uaddOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_saddOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_usubOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ssubOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_umulOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_smulOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_udivOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sdivOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uremOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sremOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_and == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ior == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_xor == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_shl == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ashr == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lshr == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_eq == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_ult == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_ule == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_slt == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_icmp_5F_sle == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmBinaryOperation::description (String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @llvmBinaryOperation: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmBinaryOperation [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @llvmBinaryOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmBinaryOperation GGS_llvmBinaryOperation::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_llvmBinaryOperation result ;
  const GGS_llvmBinaryOperation * p = (const GGS_llvmBinaryOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmBinaryOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmBinaryOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_noteTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_11400 (temp_0.readProperty_mRegisters ()) ;
  while (enumerator_11400.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_11400.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)), enumerator_11400.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 298)) ;
    }
    enumerator_11400.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterGroupDeclarationAST) ;
    inObject->method_noteTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Map type @controlRegisterMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap::GGS_controlRegisterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap::~ GGS_controlRegisterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap::GGS_controlRegisterMap (const GGS_controlRegisterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap & GGS_controlRegisterMap::operator = (const GGS_controlRegisterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_controlRegisterMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_controlRegisterMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::performInsert (const GGS_controlRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>
GGS_controlRegisterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_controlRegisterMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>>
GGS_controlRegisterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_controlRegisterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element_3F_ GGS_controlRegisterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_controlRegisterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_controlRegisterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mType = info->mProperty_mType ;
      element.mProperty_mIsReadOnly = info->mProperty_mIsReadOnly ;
      element.mProperty_mUserAccess = info->mProperty_mUserAccess ;
      element.mProperty_mRegisterFieldAccessMap = info->mProperty_mRegisterFieldAccessMap ;
      element.mProperty_mRegisterFieldMap = info->mProperty_mRegisterFieldMap ;
      element.mProperty_mAddressOffset = info->mProperty_mAddressOffset ;
      element.mProperty_mControlRegisterFieldList = info->mProperty_mControlRegisterFieldList ;
      element.mProperty_mRegisterBitCount = info->mProperty_mRegisterBitCount ;
      element.mProperty_mArraySize = info->mProperty_mArraySize ;
      element.mProperty_mElementArraySize = info->mProperty_mElementArraySize ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::class_func_mapWithMapToOverride (const GGS_controlRegisterMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_omnibusType inArgument0,
                                               GGS_bool inArgument1,
                                               GGS_bool inArgument2,
                                               GGS_sliceMap inArgument3,
                                               GGS_controlRegisterFieldMap inArgument4,
                                               GGS_bigint inArgument5,
                                               GGS_controlRegisterFieldList inArgument6,
                                               GGS_uint inArgument7,
                                               GGS_uint inArgument8,
                                               GGS_uint inArgument9,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9) ;
  const char * kInsertErrorMessage = "the '%K' control register has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_omnibusType & outArgument0,
                                               GGS_bool & outArgument1,
                                               GGS_bool & outArgument2,
                                               GGS_sliceMap & outArgument3,
                                               GGS_controlRegisterFieldMap & outArgument4,
                                               GGS_bigint & outArgument5,
                                               GGS_controlRegisterFieldList & outArgument6,
                                               GGS_uint & outArgument7,
                                               GGS_uint & outArgument8,
                                               GGS_uint & outArgument9,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' control register is not declared" ;
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
    outArgument8.drop () ;
    outArgument9.drop () ;
  }else{
    outArgument0 = info->mProperty_mType ;
    outArgument1 = info->mProperty_mIsReadOnly ;
    outArgument2 = info->mProperty_mUserAccess ;
    outArgument3 = info->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = info->mProperty_mRegisterFieldMap ;
    outArgument5 = info->mProperty_mAddressOffset ;
    outArgument6 = info->mProperty_mControlRegisterFieldList ;
    outArgument7 = info->mProperty_mRegisterBitCount ;
    outArgument8 = info->mProperty_mArraySize ;
    outArgument9 = info->mProperty_mElementArraySize ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_controlRegisterMap::getter_mTypeForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_mIsReadOnlyForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsReadOnly ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_controlRegisterMap::getter_mUserAccessForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUserAccess ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_sliceMap GGS_controlRegisterMap::getter_mRegisterFieldAccessMapForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_sliceMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterFieldAccessMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap GGS_controlRegisterMap::getter_mRegisterFieldMapForKey (const GGS_string & inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterFieldMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_controlRegisterMap::getter_mAddressOffsetForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAddressOffset ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList GGS_controlRegisterMap::getter_mControlRegisterFieldListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterFieldList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControlRegisterFieldList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_mRegisterBitCountForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_mArraySizeForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mArraySize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterMap::getter_mElementArraySizeForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mElementArraySize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMTypeForKey (GGS_omnibusType inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMIsReadOnlyForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsReadOnly = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMUserAccessForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUserAccess = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GGS_sliceMap inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterFieldAccessMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GGS_controlRegisterFieldMap inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterFieldMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMAddressOffsetForKey (GGS_bigint inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAddressOffset = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GGS_controlRegisterFieldList inValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControlRegisterFieldList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMRegisterBitCountForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMArraySizeForKey (GGS_uint inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mArraySize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::setter_setMElementArraySizeForKey (GGS_uint inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_controlRegisterMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mElementArraySize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_controlRegisterMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> & inArray,
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
    ioString.appendString ("mType:") ;
    inArray (i COMMA_HERE)->mProperty_mType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsReadOnly:") ;
    inArray (i COMMA_HERE)->mProperty_mIsReadOnly.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUserAccess:") ;
    inArray (i COMMA_HERE)->mProperty_mUserAccess.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterFieldAccessMap:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterFieldMap:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterFieldMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAddressOffset:") ;
    inArray (i COMMA_HERE)->mProperty_mAddressOffset.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControlRegisterFieldList:") ;
    inArray (i COMMA_HERE)->mProperty_mControlRegisterFieldList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRegisterBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterBitCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mArraySize:") ;
    inArray (i COMMA_HERE)->mProperty_mArraySize.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mElementArraySize:") ;
    inArray (i COMMA_HERE)->mProperty_mElementArraySize.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> array = sortedInfoArray () ;
    GGS_controlRegisterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_controlRegisterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @controlRegisterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterMap::DownEnumerator_controlRegisterMap (const GGS_controlRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element DownEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsReadOnly ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserAccess ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap DownEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldAccessMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap DownEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAddressOffset ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList DownEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControlRegisterFieldList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElementArraySize ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @controlRegisterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterMap::UpEnumerator_controlRegisterMap (const GGS_controlRegisterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap_2E_element UpEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsReadOnly ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserAccess ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceMap UpEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldAccessMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldMap UpEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterFieldMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAddressOffset ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterFieldList UpEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControlRegisterFieldList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElementArraySize ;
}


//--------------------------------------------------------------------------------------------------
//     @controlRegisterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap ("controlRegisterMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_controlRegisterMap result ;
  const GGS_controlRegisterMap * p = (const GGS_controlRegisterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum registerGroupKind
//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind::GGS_registerGroupKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_registerGroupKind::class_func_single (const GGS_bigint & inAssociatedValue0
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind result ;
  result.mEnum = Enumeration::enum_single ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerGroupKind_2E_single (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_registerGroupKind::class_func_arrayGroup (const GGS_lbigintlist & inAssociatedValue0
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupKind result ;
  result.mEnum = Enumeration::enum_arrayGroup ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerGroupKind_2E_arrayGroup (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::method_extractSingle (GGS_bigint & outAssociatedValue_baseAddress,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_single) {
    outAssociatedValue_baseAddress.drop () ;
    String s ;
    s.appendCString ("method @registerGroupKind.single invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_registerGroupKind_2E_single *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_baseAddress = ptr->mProperty_baseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::method_extractArrayGroup (GGS_lbigintlist & outAssociatedValue_baseAddresses,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayGroup) {
    outAssociatedValue_baseAddresses.drop () ;
    String s ;
    s.appendCString ("method @registerGroupKind.arrayGroup invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_registerGroupKind_2E_arrayGroup *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_baseAddresses = ptr->mProperty_baseAddresses ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_single_3F_ GGS_registerGroupKind::getter_getSingle (UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupKind_2E_single_3F_ result ;
  if (mEnum == Enumeration::enum_single) {
    const auto ptr = (const GGS_registerGroupKind_2E_single *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerGroupKind_2E_single (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::getAssociatedValuesFor_single (GGS_bigint & out_baseAddress) const {
  const auto ptr = (const GGS_registerGroupKind_2E_single *) mAssociatedValues.associatedValuesPointer () ;
  out_baseAddress = ptr->mProperty_baseAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind_2E_arrayGroup_3F_ GGS_registerGroupKind::getter_getArrayGroup (UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupKind_2E_arrayGroup_3F_ result ;
  if (mEnum == Enumeration::enum_arrayGroup) {
    const auto ptr = (const GGS_registerGroupKind_2E_arrayGroup *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerGroupKind_2E_arrayGroup (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::getAssociatedValuesFor_arrayGroup (GGS_lbigintlist & out_baseAddresses) const {
  const auto ptr = (const GGS_registerGroupKind_2E_arrayGroup *) mAssociatedValues.associatedValuesPointer () ;
  out_baseAddresses = ptr->mProperty_baseAddresses ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupKind [3] = {
  "(not built)",
  "single",
  "arrayGroup"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupKind::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_single == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupKind::getter_isArrayGroup (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayGroup == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupKind::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerGroupKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerGroupKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @registerGroupKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind ("registerGroupKind",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_registerGroupKind::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_registerGroupKind result ;
  const GGS_registerGroupKind * p = (const GGS_registerGroupKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & inOperand) const {
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

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::operator = (const GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (const GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedControlRegisterArrayGroupDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::bang_decoratedControlRegisterArrayGroupDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
      result = GGS_decoratedControlRegisterArrayGroupDeclaration ((cPtr_decoratedControlRegisterArrayGroupDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedControlRegisterArrayGroupDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2E_weak ("decoratedControlRegisterArrayGroupDeclaration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak result ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak * p = (const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controlRegisterGroupArrayList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controlRegisterGroupArrayList : public cCollectionElement {
  public: GGS_controlRegisterGroupArrayList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_controlRegisterGroupArrayList (const GGS_lstring & in_mGroupName,
                                                            const GGS_lbigintlist & in_mBaseAddresses
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GGS_lstring & in_mGroupName,
                                                                                                    const GGS_lbigintlist & in_mBaseAddresses
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupName, in_mBaseAddresses) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupName, inElement.mProperty_mBaseAddresses) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controlRegisterGroupArrayList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controlRegisterGroupArrayList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controlRegisterGroupArrayList (mObject.mProperty_mGroupName, mObject.mProperty_mBaseAddresses COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controlRegisterGroupArrayList
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList::GGS_controlRegisterGroupArrayList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList::GGS_controlRegisterGroupArrayList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    const GGS_controlRegisterGroupArrayList_2E_element element (p->mObject.mProperty_mGroupName, p->mObject.mProperty_mBaseAddresses) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mGroupName,
                                                                   const GGS_lbigintlist & in_mBaseAddresses
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (in_mGroupName, in_mBaseAddresses COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterGroupArrayList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controlRegisterGroupArrayList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::description (String & ioString,
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
      ioString.appendString ("mGroupName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBaseAddresses:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBaseAddresses.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::plusPlusAssignOperation (const GGS_controlRegisterGroupArrayList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lbigintlist & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element element (inOperand0, inOperand1) ;
  GGS_controlRegisterGroupArrayList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lbigintlist & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lbigintlist inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lbigintlist inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterGroupArrayList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_controlRegisterGroupArrayList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lbigintlist & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGroupName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lbigintlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lbigintlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lbigintlist & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBaseAddresses ;
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

void GGS_controlRegisterGroupArrayList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lbigintlist & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBaseAddresses ;
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

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::add_operation (const GGS_controlRegisterGroupArrayList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
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

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
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

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupArrayList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupArrayList::plusAssignOperation (const GGS_controlRegisterGroupArrayList inList,
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

void GGS_controlRegisterGroupArrayList::setter_setMGroupNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName = inOperand ;
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
  
GGS_lstring GGS_controlRegisterGroupArrayList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName ;
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

void GGS_controlRegisterGroupArrayList::setter_setMBaseAddressesAtIndex (GGS_lbigintlist inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBaseAddresses = inOperand ;
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
  
GGS_lbigintlist GGS_controlRegisterGroupArrayList::getter_mBaseAddressesAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lbigintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBaseAddresses ;
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
// Down Enumerator for @controlRegisterGroupArrayList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterGroupArrayList::DownEnumerator_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element DownEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist DownEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBaseAddresses ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterGroupArrayList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterGroupArrayList::UpEnumerator_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList_2E_element UpEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigintlist UpEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBaseAddresses ;
}




//--------------------------------------------------------------------------------------------------
//     @controlRegisterGroupArrayList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ("controlRegisterGroupArrayList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterGroupArrayList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupArrayList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupArrayList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupArrayList GGS_controlRegisterGroupArrayList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupArrayList result ;
  const GGS_controlRegisterGroupArrayList * p = (const GGS_controlRegisterGroupArrayList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupArrayList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@controlRegisterByAddress' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_controlRegisterByAddress (const GGS_controlRegisterByAddress_2E_element & inLeft,
                                                           const GGS_controlRegisterByAddress_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mAddress.objectCompare (inRight.mProperty_mAddress) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress::GGS_controlRegisterByAddress (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterByAddress::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::plusPlusAssignOperation (const GGS_controlRegisterByAddress_2E_element & inElement
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByAddress) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::class_func_sortedListWithValue (const GGS_bigint & inOperand0,
                                                                                           const GGS_string & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result = class_func_emptySortedList (THERE) ;
  const GGS_controlRegisterByAddress_2E_element newElement (inOperand0, inOperand1) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::addAssignOperation (const GGS_bigint & inOperand0,
                                                       const GGS_string & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByAddress_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::setter_insert (const GGS_bigint inOperand0,
                                                  const GGS_string inOperand1,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByAddress_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::plusAssignOperation (const GGS_controlRegisterByAddress inSortedList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByAddress) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::setter_popSmallest (GGS_bigint & outOperand0,
                                                       GGS_string & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::setter_popGreatest (GGS_bigint & outOperand0,
                                                       GGS_string & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::method_smallest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::method_greatest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByAddress::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @controlRegisterByAddress
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterByAddress::DownEnumerator_controlRegisterByAddress (const GGS_controlRegisterByAddress & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element DownEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterByAddress
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterByAddress::UpEnumerator_controlRegisterByAddress (const GGS_controlRegisterByAddress & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress_2E_element UpEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}



//--------------------------------------------------------------------------------------------------
//     @controlRegisterByAddress generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress ("controlRegisterByAddress",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterByAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByAddress::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByAddress (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByAddress GGS_controlRegisterByAddress::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByAddress result ;
  const GGS_controlRegisterByAddress * p = (const GGS_controlRegisterByAddress *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@controlRegisterByName' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_controlRegisterByName (const GGS_controlRegisterByName_2E_element & inLeft,
                                                        const GGS_controlRegisterByName_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mName.objectCompare (inRight.mProperty_mName) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName::GGS_controlRegisterByName (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controlRegisterByName::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::plusPlusAssignOperation (const GGS_controlRegisterByName_2E_element & inElement
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByName) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterByName result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::class_func_sortedListWithValue (const GGS_bigint & inOperand0,
                                                                                     const GGS_string & inOperand1,
                                                                                     const GGS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByName result = class_func_emptySortedList (THERE) ;
  const GGS_controlRegisterByName_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::addAssignOperation (const GGS_bigint & inOperand0,
                                                    const GGS_string & inOperand1,
                                                    const GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByName_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::setter_insert (const GGS_bigint inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_string inOperand2,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_controlRegisterByName_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::plusAssignOperation (const GGS_controlRegisterByName inSortedList,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_controlRegisterByName) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::setter_popSmallest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mName ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::setter_popGreatest (GGS_bigint & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mName ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::method_smallest (GGS_bigint & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_string & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mName ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::method_greatest (GGS_bigint & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_string & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mAddress ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mHTML ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mName ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterByName::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @controlRegisterByName
//--------------------------------------------------------------------------------------------------

DownEnumerator_controlRegisterByName::DownEnumerator_controlRegisterByName (const GGS_controlRegisterByName & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element DownEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controlRegisterByName
//--------------------------------------------------------------------------------------------------

UpEnumerator_controlRegisterByName::UpEnumerator_controlRegisterByName (const GGS_controlRegisterByName & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName_2E_element UpEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mName ;
}



//--------------------------------------------------------------------------------------------------
//     @controlRegisterByName generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName ("controlRegisterByName",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterByName::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterByName::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterByName (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterByName GGS_controlRegisterByName::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_controlRegisterByName result ;
  const GGS_controlRegisterByName * p = (const GGS_controlRegisterByName *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterByName *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_globalConstantDeclarationAST_2E_weak::objectCompare (const GGS_globalConstantDeclarationAST_2E_weak & inOperand) const {
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

GGS_globalConstantDeclarationAST_2E_weak::GGS_globalConstantDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST_2E_weak & GGS_globalConstantDeclarationAST_2E_weak::operator = (const GGS_globalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST_2E_weak::GGS_globalConstantDeclarationAST_2E_weak (const GGS_globalConstantDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST_2E_weak GGS_globalConstantDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_globalConstantDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_globalConstantDeclarationAST result ;
  if (isValid ()) {
    const cPtr_globalConstantDeclarationAST * p = (cPtr_globalConstantDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_globalConstantDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST GGS_globalConstantDeclarationAST_2E_weak::bang_globalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_globalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_globalConstantDeclarationAST) ;
      result = GGS_globalConstantDeclarationAST ((cPtr_globalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @globalConstantDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2E_weak ("globalConstantDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalConstantDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantDeclarationAST_2E_weak GGS_globalConstantDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_globalConstantDeclarationAST_2E_weak result ;
  const GGS_globalConstantDeclarationAST_2E_weak * p = (const GGS_globalConstantDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addDependenceEdgeForStaticExpression (cPtr_expressionAST * inObject,
                                                               const GGS_lstring constin_inConstantName,
                                                               GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_addDependenceEdgeForStaticExpression (constin_inConstantName, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncToolInstanceDeclarationAST_2E_weak::objectCompare (const GGS_syncToolInstanceDeclarationAST_2E_weak & inOperand) const {
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

GGS_syncToolInstanceDeclarationAST_2E_weak::GGS_syncToolInstanceDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak & GGS_syncToolInstanceDeclarationAST_2E_weak::operator = (const GGS_syncToolInstanceDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak::GGS_syncToolInstanceDeclarationAST_2E_weak (const GGS_syncToolInstanceDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak GGS_syncToolInstanceDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_syncToolInstanceDeclarationAST result ;
  if (isValid ()) {
    const cPtr_syncToolInstanceDeclarationAST * p = (cPtr_syncToolInstanceDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syncToolInstanceDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST GGS_syncToolInstanceDeclarationAST_2E_weak::bang_syncToolInstanceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syncToolInstanceDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syncToolInstanceDeclarationAST) ;
      result = GGS_syncToolInstanceDeclarationAST ((cPtr_syncToolInstanceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syncToolInstanceDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ("syncToolInstanceDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncToolInstanceDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncToolInstanceDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncToolInstanceDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncToolInstanceDeclarationAST_2E_weak GGS_syncToolInstanceDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syncToolInstanceDeclarationAST_2E_weak result ;
  const GGS_syncToolInstanceDeclarationAST_2E_weak * p = (const GGS_syncToolInstanceDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncToolInstanceDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncToolInstanceDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedSyncInstance_2E_weak::objectCompare (const GGS_decoratedSyncInstance_2E_weak & inOperand) const {
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

GGS_decoratedSyncInstance_2E_weak::GGS_decoratedSyncInstance_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak & GGS_decoratedSyncInstance_2E_weak::operator = (const GGS_decoratedSyncInstance & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak::GGS_decoratedSyncInstance_2E_weak (const GGS_decoratedSyncInstance & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak GGS_decoratedSyncInstance_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedSyncInstance_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance_2E_weak::unwrappedValue (void) const {
  GGS_decoratedSyncInstance result ;
  if (isValid ()) {
    const cPtr_decoratedSyncInstance * p = (cPtr_decoratedSyncInstance *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedSyncInstance (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance GGS_decoratedSyncInstance_2E_weak::bang_decoratedSyncInstance_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedSyncInstance result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedSyncInstance) ;
      result = GGS_decoratedSyncInstance ((cPtr_decoratedSyncInstance *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedSyncInstance.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ("decoratedSyncInstance.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedSyncInstance_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedSyncInstance_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedSyncInstance_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedSyncInstance_2E_weak GGS_decoratedSyncInstance_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedSyncInstance_2E_weak result ;
  const GGS_decoratedSyncInstance_2E_weak * p = (const GGS_decoratedSyncInstance_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedSyncInstance_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedSyncInstance.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @globalSyncInstanceMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR::GGS_globalSyncInstanceMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR::~ GGS_globalSyncInstanceMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR::GGS_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR & GGS_globalSyncInstanceMapIR::operator = (const GGS_globalSyncInstanceMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalSyncInstanceMapIR::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_globalSyncInstanceMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalSyncInstanceMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalSyncInstanceMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_globalSyncInstanceMapIR::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_globalSyncInstanceMapIR::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_globalSyncInstanceMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::performInsert (const GGS_globalSyncInstanceMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMapIR_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>
GGS_globalSyncInstanceMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_globalSyncInstanceMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>>
GGS_globalSyncInstanceMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_globalSyncInstanceMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element_3F_ GGS_globalSyncInstanceMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_globalSyncInstanceMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_globalSyncInstanceMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInitialValue = info->mProperty_mInitialValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::class_func_mapWithMapToOverride (const GGS_globalSyncInstanceMapIR & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_objectIR inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_globalSyncInstanceMapIR_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalSyncInstanceMapIR::getter_mInitialValueForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitialValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::setter_setMInitialValueForKey (GGS_objectIR inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_globalSyncInstanceMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitialValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_globalSyncInstanceMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>> & inArray,
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
    ioString.appendString ("mInitialValue:") ;
    inArray (i COMMA_HERE)->mProperty_mInitialValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_globalSyncInstanceMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_globalSyncInstanceMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @globalSyncInstanceMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalSyncInstanceMapIR::DownEnumerator_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element DownEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @globalSyncInstanceMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalSyncInstanceMapIR::UpEnumerator_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR_2E_element UpEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialValue ;
}


//--------------------------------------------------------------------------------------------------
//     @globalSyncInstanceMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ("globalSyncInstanceMapIR",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalSyncInstanceMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMapIR GGS_globalSyncInstanceMapIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMapIR result ;
  const GGS_globalSyncInstanceMapIR * p = (const GGS_globalSyncInstanceMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_instructionListAST GGS_instructionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_instructionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//Class for element of '@driverInstanciationArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationArgumentListAST : public cCollectionElement {
  public: GGS_driverInstanciationArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverInstanciationArgumentListAST (const GGS_lstring & in_mSelector,
                                                                 const GGS_expressionAST & in_mExpression
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GGS_lstring & in_mSelector,
                                                                                                              const GGS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverInstanciationArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverInstanciationArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverInstanciationArgumentListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @driverInstanciationArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST::GGS_driverInstanciationArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST::GGS_driverInstanciationArgumentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    const GGS_driverInstanciationArgumentListAST_2E_element element (p->mObject.mProperty_mSelector, p->mObject.mProperty_mExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mSelector,
                                                                        const GGS_expressionAST & in_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (in_mSelector, in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationArgumentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_driverInstanciationArgumentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::description (String & ioString,
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

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::plusPlusAssignOperation (const GGS_driverInstanciationArgumentListAST_2E_element & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                         const GGS_expressionAST & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_driverInstanciationArgumentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                 const GGS_expressionAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_append (const GGS_lstring inOperand0,
                                                            const GGS_expressionAST inOperand1,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                   const GGS_expressionAST inOperand1,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_driverInstanciationArgumentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
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

void GGS_driverInstanciationArgumentListAST::setter_popFirst (GGS_lstring & outOperand0,
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

void GGS_driverInstanciationArgumentListAST::setter_popLast (GGS_lstring & outOperand0,
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

void GGS_driverInstanciationArgumentListAST::method_first (GGS_lstring & outOperand0,
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

void GGS_driverInstanciationArgumentListAST::method_last (GGS_lstring & outOperand0,
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

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::add_operation (const GGS_driverInstanciationArgumentListAST & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
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

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::subList (const int32_t inStart,
                                                                                        const int32_t inLength,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
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

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentListAST::plusAssignOperation (const GGS_driverInstanciationArgumentListAST inList,
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

void GGS_driverInstanciationArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_driverInstanciationArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
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

void GGS_driverInstanciationArgumentListAST::setter_setMExpressionAtIndex (GGS_expressionAST inOperand,
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
  
GGS_expressionAST GGS_driverInstanciationArgumentListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @driverInstanciationArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverInstanciationArgumentListAST::DownEnumerator_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element DownEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @driverInstanciationArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverInstanciationArgumentListAST::UpEnumerator_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST_2E_element UpEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @driverInstanciationArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ("driverInstanciationArgumentListAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentListAST result ;
  const GGS_driverInstanciationArgumentListAST * p = (const GGS_driverInstanciationArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_implementedDriverAST_2E_weak::objectCompare (const GGS_implementedDriverAST_2E_weak & inOperand) const {
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

GGS_implementedDriverAST_2E_weak::GGS_implementedDriverAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak & GGS_implementedDriverAST_2E_weak::operator = (const GGS_implementedDriverAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak::GGS_implementedDriverAST_2E_weak (const GGS_implementedDriverAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak GGS_implementedDriverAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_implementedDriverAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST_2E_weak::unwrappedValue (void) const {
  GGS_implementedDriverAST result ;
  if (isValid ()) {
    const cPtr_implementedDriverAST * p = (cPtr_implementedDriverAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_implementedDriverAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST GGS_implementedDriverAST_2E_weak::bang_implementedDriverAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_implementedDriverAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_implementedDriverAST) ;
      result = GGS_implementedDriverAST ((cPtr_implementedDriverAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @implementedDriverAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST_2E_weak ("implementedDriverAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implementedDriverAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implementedDriverAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implementedDriverAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implementedDriverAST_2E_weak GGS_implementedDriverAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_implementedDriverAST_2E_weak result ;
  const GGS_implementedDriverAST_2E_weak * p = (const GGS_implementedDriverAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implementedDriverAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @driverInstanciationArgumentMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap::GGS_driverInstanciationArgumentMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap::~ GGS_driverInstanciationArgumentMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap::GGS_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap & GGS_driverInstanciationArgumentMap::operator = (const GGS_driverInstanciationArgumentMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_driverInstanciationArgumentMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_driverInstanciationArgumentMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationArgumentMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverInstanciationArgumentMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_driverInstanciationArgumentMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_driverInstanciationArgumentMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_driverInstanciationArgumentMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::performInsert (const GGS_driverInstanciationArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_driverInstanciationArgumentMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>
GGS_driverInstanciationArgumentMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_driverInstanciationArgumentMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>>
GGS_driverInstanciationArgumentMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_driverInstanciationArgumentMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element_3F_ GGS_driverInstanciationArgumentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_driverInstanciationArgumentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_driverInstanciationArgumentMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExpression = info->mProperty_mExpression ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::class_func_mapWithMapToOverride (const GGS_driverInstanciationArgumentMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::setter_insertKey (GGS_lstring inLKey,
                                                           GGS_expressionAST inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_driverInstanciationArgumentMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "duplicated '%K' selector" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::method_searchKey (GGS_lstring inLKey,
                                                           GGS_expressionAST & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "uninitialized '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExpression ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_driverInstanciationArgumentMap::getter_mExpressionForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExpression ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::setter_setMExpressionForKey (GGS_expressionAST inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_driverInstanciationArgumentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExpression = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_driverInstanciationArgumentMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> & inArray,
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
    ioString.appendString ("mExpression:") ;
    inArray (i COMMA_HERE)->mProperty_mExpression.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationArgumentMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> array = sortedInfoArray () ;
    GGS_driverInstanciationArgumentMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_driverInstanciationArgumentMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @driverInstanciationArgumentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverInstanciationArgumentMap::DownEnumerator_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element DownEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @driverInstanciationArgumentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverInstanciationArgumentMap::UpEnumerator_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap_2E_element UpEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExpression ;
}


//--------------------------------------------------------------------------------------------------
//     @driverInstanciationArgumentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ("driverInstanciationArgumentMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverInstanciationArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverInstanciationArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverInstanciationArgumentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_driverInstanciationArgumentMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationArgumentMap result ;
  const GGS_driverInstanciationArgumentMap * p = (const GGS_driverInstanciationArgumentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverInstanciationArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @instanciedDriverMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap::GGS_instanciedDriverMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap::~ GGS_instanciedDriverMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap::GGS_instanciedDriverMap (const GGS_instanciedDriverMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap & GGS_instanciedDriverMap::operator = (const GGS_instanciedDriverMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanciedDriverMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanciedDriverMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instanciedDriverMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instanciedDriverMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_instanciedDriverMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_instanciedDriverMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanciedDriverMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::performInsert (const GGS_instanciedDriverMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_instanciedDriverMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>
GGS_instanciedDriverMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_instanciedDriverMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>>
GGS_instanciedDriverMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_instanciedDriverMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element_3F_ GGS_instanciedDriverMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instanciedDriverMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_instanciedDriverMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_instanciedDriverMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDriverInstanciationArgumentMap = info->mProperty_mDriverInstanciationArgumentMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::class_func_mapWithMapToOverride (const GGS_instanciedDriverMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_instanciedDriverMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_driverInstanciationArgumentMap inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_instanciedDriverMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' driver is already instancied in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_driverInstanciationArgumentMap & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error %K" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mDriverInstanciationArgumentMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap GGS_instanciedDriverMap::getter_mDriverInstanciationArgumentMapForKey (const GGS_string & inKey,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationArgumentMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDriverInstanciationArgumentMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::setter_setMDriverInstanciationArgumentMapForKey (GGS_driverInstanciationArgumentMap inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_instanciedDriverMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDriverInstanciationArgumentMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_instanciedDriverMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> & inArray,
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
    ioString.appendString ("mDriverInstanciationArgumentMap:") ;
    inArray (i COMMA_HERE)->mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanciedDriverMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> array = sortedInfoArray () ;
    GGS_instanciedDriverMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_instanciedDriverMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @instanciedDriverMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_instanciedDriverMap::DownEnumerator_instanciedDriverMap (const GGS_instanciedDriverMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element DownEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap DownEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverInstanciationArgumentMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @instanciedDriverMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_instanciedDriverMap::UpEnumerator_instanciedDriverMap (const GGS_instanciedDriverMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap_2E_element UpEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentMap UpEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverInstanciationArgumentMap ;
}


//--------------------------------------------------------------------------------------------------
//     @instanciedDriverMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap ("instanciedDriverMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_instanciedDriverMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanciedDriverMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanciedDriverMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanciedDriverMap GGS_instanciedDriverMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_instanciedDriverMap result ;
  const GGS_instanciedDriverMap * p = (const GGS_instanciedDriverMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanciedDriverMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedRequiredDriver_2E_weak::objectCompare (const GGS_decoratedRequiredDriver_2E_weak & inOperand) const {
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

GGS_decoratedRequiredDriver_2E_weak::GGS_decoratedRequiredDriver_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak & GGS_decoratedRequiredDriver_2E_weak::operator = (const GGS_decoratedRequiredDriver & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak::GGS_decoratedRequiredDriver_2E_weak (const GGS_decoratedRequiredDriver & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak GGS_decoratedRequiredDriver_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedRequiredDriver_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver_2E_weak::unwrappedValue (void) const {
  GGS_decoratedRequiredDriver result ;
  if (isValid ()) {
    const cPtr_decoratedRequiredDriver * p = (cPtr_decoratedRequiredDriver *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedRequiredDriver (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver GGS_decoratedRequiredDriver_2E_weak::bang_decoratedRequiredDriver_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedRequiredDriver result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedRequiredDriver) ;
      result = GGS_decoratedRequiredDriver ((cPtr_decoratedRequiredDriver *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedRequiredDriver.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver_2E_weak ("decoratedRequiredDriver.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRequiredDriver_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRequiredDriver_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRequiredDriver_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRequiredDriver_2E_weak GGS_decoratedRequiredDriver_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedRequiredDriver_2E_weak result ;
  const GGS_decoratedRequiredDriver_2E_weak * p = (const GGS_decoratedRequiredDriver_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRequiredDriver_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@driverListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverListIR : public cCollectionElement {
  public: GGS_driverListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverListIR (const GGS_lstring & in_mDriverName,
                                           const GGS_omnibusType & in_mType,
                                           const GGS_operandIRList & in_mInitialValueList
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverListIR (const GGS_driverListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GGS_lstring & in_mDriverName,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_operandIRList & in_mInitialValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mType, in_mInitialValueList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GGS_driverListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mType, inElement.mProperty_mInitialValueList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverListIR (mObject.mProperty_mDriverName, mObject.mProperty_mType, mObject.mProperty_mInitialValueList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @driverListIR
//--------------------------------------------------------------------------------------------------

GGS_driverListIR::GGS_driverListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR::GGS_driverListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    const GGS_driverListIR_2E_element element (p->mObject.mProperty_mDriverName, p->mObject.mProperty_mType, p->mObject.mProperty_mInitialValueList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_lstring & in_mDriverName,
                                                  const GGS_omnibusType & in_mType,
                                                  const GGS_operandIRList & in_mInitialValueList
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverListIR (in_mDriverName, in_mType, in_mInitialValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_driverListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_driverListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::description (String & ioString,
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
      ioString.appendString ("mDriverName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDriverName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInitialValueList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInitialValueList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_driverListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_driverListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::plusPlusAssignOperation (const GGS_driverListIR_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                             const GGS_omnibusType & inOperand1,
                                                             const GGS_operandIRList & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_driverListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::addAssignOperation (const GGS_lstring & inOperand0,
                                           const GGS_omnibusType & inOperand1,
                                           const GGS_operandIRList & inOperand2
                                           COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_append (const GGS_lstring inOperand0,
                                      const GGS_omnibusType inOperand1,
                                      const GGS_operandIRList inOperand2,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::setter_insertAtIndex (const GGS_lstring inOperand0,
                                             const GGS_omnibusType inOperand1,
                                             const GGS_operandIRList inOperand2,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_driverListIR::setter_removeAtIndex (GGS_lstring & outOperand0,
                                             GGS_omnibusType & outOperand1,
                                             GGS_operandIRList & outOperand2,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDriverName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInitialValueList ;
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

void GGS_driverListIR::setter_popFirst (GGS_lstring & outOperand0,
                                        GGS_omnibusType & outOperand1,
                                        GGS_operandIRList & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriverName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValueList ;
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

void GGS_driverListIR::setter_popLast (GGS_lstring & outOperand0,
                                       GGS_omnibusType & outOperand1,
                                       GGS_operandIRList & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriverName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValueList ;
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

void GGS_driverListIR::method_first (GGS_lstring & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     GGS_operandIRList & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDriverName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValueList ;
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

void GGS_driverListIR::method_last (GGS_lstring & outOperand0,
                                    GGS_omnibusType & outOperand1,
                                    GGS_operandIRList & outOperand2,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDriverName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValueList ;
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

GGS_driverListIR GGS_driverListIR::add_operation (const GGS_driverListIR & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverListIR result ;
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

GGS_driverListIR GGS_driverListIR::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
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

GGS_driverListIR GGS_driverListIR::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_driverListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverListIR::plusAssignOperation (const GGS_driverListIR inList,
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

void GGS_driverListIR::setter_setMDriverNameAtIndex (GGS_lstring inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverName = inOperand ;
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
  
GGS_lstring GGS_driverListIR::getter_mDriverNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDriverName ;
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

void GGS_driverListIR::setter_setMTypeAtIndex (GGS_omnibusType inOperand,
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
  
GGS_omnibusType GGS_driverListIR::getter_mTypeAtIndex (const GGS_uint & inIndex,
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

void GGS_driverListIR::setter_setMInitialValueListAtIndex (GGS_operandIRList inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValueList = inOperand ;
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
  
GGS_operandIRList GGS_driverListIR::getter_mInitialValueListAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_operandIRList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValueList ;
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
// Down Enumerator for @driverListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_driverListIR::DownEnumerator_driverListIR (const GGS_driverListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element DownEnumerator_driverListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList DownEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValueList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @driverListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_driverListIR::UpEnumerator_driverListIR (const GGS_driverListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR_2E_element UpEnumerator_driverListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_operandIRList UpEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValueList ;
}




//--------------------------------------------------------------------------------------------------
//     @driverListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverListIR ("driverListIR",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_driverListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_driverListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_driverListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverListIR GGS_driverListIR::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_driverListIR result ;
  const GGS_driverListIR * p = (const GGS_driverListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_driverListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const GGS_driverListIR inObject,
                                             GGS_string & ioArgument_ioLLVMcode,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)) ;
  const GGS_driverListIR temp_0 = inObject ;
  UpEnumerator_driverListIR enumerator_18502 (temp_0) ;
  while (enumerator_18502.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmBootRoutineNameFromDriver (enumerator_18502.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18502.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (function_llvmNameForGlobalVariable (enumerator_18502.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 444)) ;
    enumerator_18502.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 446)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 447)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Startup"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @startup ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)) ;
  const GGS_driverListIR temp_1 = inObject ;
  UpEnumerator_driverListIR enumerator_18975 (temp_1) ;
  while (enumerator_18975.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmStartupRoutineNameFromDriver (enumerator_18975.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18975.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (function_llvmNameForGlobalVariable (enumerator_18975.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 454)) ;
    enumerator_18975.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 456)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 457)) ;
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

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_staticListValueListAST GGS_staticListValueListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_staticListValueListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListElementAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_staticListInitializationMap GGS_staticListInitializationMap::class_func_emptyMap (LOCATION_ARGS) {
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
  GGS_bool var_first_22715 = GGS_bool (true) ;
  const GGS_staticListInitializationMap temp_0 = inObject ;
  UpEnumerator_staticListInitializationMap enumerator_22739 (temp_0) ;
  while (enumerator_22739.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_22739.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 539)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_first_22715.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_first_22715 = GGS_bool (false) ;
            ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_22739.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(enumerator_22739.current_mInitializationList (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 545)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GGS_string (" x %"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (function_llvmNameForStaticListElementType (enumerator_22739.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GGS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)) ;
        UpEnumerator_stringlist enumerator_23140 (enumerator_22739.current_mInitializationList (HERE)) ;
        while (enumerator_23140.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (function_llvmNameForStaticListElementType (enumerator_22739.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (enumerator_23140.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)) ;
          enumerator_23140.gotoNextObject () ;
          if (enumerator_23140.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n]\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)) ;
      }
    }
    enumerator_22739.gotoNextObject () ;
  }
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

GGS_routineTypedSignature GGS_routineTypedSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_taskSetupListAST GGS_taskSetupListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_taskSetupListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
  UpEnumerator_taskListAST enumerator_4993 (temp_0) ;
  while (enumerator_4993.hasCurrentObject ()) {
    UpEnumerator_syncInstructionBranchListAST enumerator_5033 (enumerator_4993.current_mGuardedCommandList (HERE)) ;
    while (enumerator_5033.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5033.current (HERE).readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 148)) ;
      enumerator_5033.gotoNextObject () ;
    }
    enumerator_4993.gotoNextObject () ;
  }
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
  GGS_taskListAST var_taskList_6249 = temp_0 ;
  GGS_taskListAST temp_1 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 175)) ;
  GGS_taskListAST var_sortedTaskList_6284 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 176)) ;
  GGS_stringset var_handledTaskSet_6322 = temp_2 ;
  GGS_bool var_continue_6349 = GGS_bool (true) ;
  if (var_taskList_6249.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).isValid ()) {
    uint32_t variant_6367 = var_taskList_6249.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).uintValue () ;
    bool loop_6367 = true ;
    while (loop_6367) {
      GGS_bool test_3 = var_continue_6349 ;
      if (GalgasBool::boolTrue == test_3.boolEnum ()) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_taskList_6249.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_6367 = test_3.isValid () ;
      if (loop_6367) {
        loop_6367 = test_3.boolValue () ;
      }
      if (loop_6367 && (0 == variant_6367)) {
        loop_6367 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 178)) ;
      }
      if (loop_6367) {
        variant_6367 -= 1 ;
        var_continue_6349 = GGS_bool (false) ;
        GGS_taskListAST temp_4 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 180)) ;
        GGS_taskListAST var_candidateTaskList_6477 = temp_4 ;
        GGS_bigint var_idx_6509 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 181)) ;
        UpEnumerator_taskListAST enumerator_6533 (var_taskList_6249) ;
        while (enumerator_6533.hasCurrentObject ()) {
          GGS_bool var_allPrecedenceDefined_6555 = GGS_bool (true) ;
          UpEnumerator_lstringlist enumerator_6594 (enumerator_6533.current (HERE).readProperty_mLowerPriorityTaskList ()) ;
          bool bool_5 = var_allPrecedenceDefined_6555.isValidAndTrue () ;
          if (enumerator_6594.hasCurrentObject () && bool_5) {
            while (enumerator_6594.hasCurrentObject () && bool_5) {
              var_allPrecedenceDefined_6555 = var_handledTaskSet_6322.getter_hasKey (enumerator_6594.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 185)) ;
              enumerator_6594.gotoNextObject () ;
              if (enumerator_6594.hasCurrentObject ()) {
                bool_5 = var_allPrecedenceDefined_6555.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_allPrecedenceDefined_6555.boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_candidateTaskList_6477.addAssignOperation (enumerator_6533.current (HERE).readProperty_mTaskName (), enumerator_6533.current (HERE).readProperty_mLowerPriorityTaskList (), enumerator_6533.current (HERE).readProperty_mStackSize (), enumerator_6533.current (HERE).readProperty_mTaskSetupListAST (), enumerator_6533.current (HERE).readProperty_mTaskActivateListAST (), enumerator_6533.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_6533.current (HERE).readProperty_mGuardedCommandList (), enumerator_6533.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_6533.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 188)) ;
              var_continue_6349 = GGS_bool (true) ;
              {
              GGS_lstring joker_7184_9 ; // Joker input parameter
              GGS_lstringlist joker_7184_8 ; // Joker input parameter
              GGS_lbigint joker_7184_7 ; // Joker input parameter
              GGS_taskSetupListAST joker_7184_6 ; // Joker input parameter
              GGS_taskSetupListAST joker_7184_5 ; // Joker input parameter
              GGS_taskSetupListAST joker_7184_4 ; // Joker input parameter
              GGS_syncInstructionBranchListAST joker_7184_3 ; // Joker input parameter
              GGS_location joker_7184_2 ; // Joker input parameter
              GGS_bool joker_7184_1 ; // Joker input parameter
              var_taskList_6249.setter_removeAtIndex (joker_7184_9, joker_7184_8, joker_7184_7, joker_7184_6, joker_7184_5, joker_7184_4, joker_7184_3, joker_7184_2, joker_7184_1, var_idx_6509.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            var_idx_6509 = var_idx_6509.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 201)) ;
          }
          enumerator_6533.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_bool test_8 = GGS_bool (gOption_omnibus_5F_options_taskStrictPriorityOrder.readProperty_value ()) ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6477.getter_count (SOURCE_FILE ("task-declaration.galgas", 204)).objectCompare (GGS_uint (uint32_t (1U)))) ;
          }
          test_7 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            UpEnumerator_taskListAST enumerator_7365 (var_candidateTaskList_6477) ;
            while (enumerator_7365.hasCurrentObject ()) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7365.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string ("this task does not respect a strict priority order"), fixItArray9  COMMA_SOURCE_FILE ("task-declaration.galgas", 206)) ;
              enumerator_7365.gotoNextObject () ;
            }
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6477.getter_count (SOURCE_FILE ("task-declaration.galgas", 209)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            var_continue_6349 = GGS_bool (true) ;
            UpEnumerator_taskListAST enumerator_7570 (var_candidateTaskList_6477) ;
            while (enumerator_7570.hasCurrentObject ()) {
              var_handledTaskSet_6322.plusPlusAssignOperation (enumerator_7570.current (HERE).readProperty_mTaskName ().readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 212)) ;
              enumerator_7570.gotoNextObject () ;
            }
            var_sortedTaskList_6284.plusAssignOperation(var_candidateTaskList_6477, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 214)) ;
          }
        }
      }
    }
  }
  UpEnumerator_taskListAST enumerator_7757 (var_taskList_6249) ;
  while (enumerator_7757.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (enumerator_7757.current_mTaskName (HERE).readProperty_location (), GGS_string ("this task is out of priority order"), fixItArray11  COMMA_SOURCE_FILE ("task-declaration.galgas", 219)) ;
    enumerator_7757.gotoNextObject () ;
  }
  GGS_decoratedTaskList temp_12 = GGS_decoratedTaskList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 222)) ;
  GGS_decoratedTaskList var_decoratedTaskList_7865 = temp_12 ;
  UpEnumerator_taskListAST enumerator_7903 (var_sortedTaskList_6284) ;
  GGS_uint index_7891 (uint32_t (0)) ;
  while (enumerator_7903.hasCurrentObject ()) {
    {
    GGS_lstring joker_8229 ; // Joker input parameter
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("activate"), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_safeUserMode (SOURCE_FILE ("task-declaration.galgas", 229)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("task-declaration.galgas", 230)), joker_8229, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 225)) ;
    }
    GGS_string var_assemblerTaskName_8262 = enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 233)) ;
    GGS_string var_activateTaskCallName_8331 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)) ;
    GGS_routineFormalArgumentListAST temp_13 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)) ;
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_taskActivateFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (function_routineMangledNameFromAST (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 236)), temp_13, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)), GGS_bool (false), GGS_bool (false), var_assemblerTaskName_8262, var_activateTaskCallName_8331, index_7891, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 235)) ;
    GGS_instructionListAST temp_14 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 245)) ;
    GGS_instructionListAST var_taskListInstructionList_8833 = temp_14 ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::greaterThan, enumerator_7903.current (HERE).readProperty_mGuardedCommandList ().getter_count (SOURCE_FILE ("task-declaration.galgas", 246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_syncInstructionAST var_syncInstruction_8922 = GGS_syncInstructionAST::init_21__21__21_ (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), enumerator_7903.current (HERE).readProperty_mGuardedCommandList (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
        var_taskListInstructionList_8833.addAssignOperation (var_syncInstruction_8922  COMMA_SOURCE_FILE ("task-declaration.galgas", 248)) ;
      }
    }
    GGS_routineFormalArgumentListAST temp_16 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GGS_lstring var_routineMangledName_9104 = function_routineMangledNameFromAST (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)).getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 250)), temp_16, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GGS_routineFormalArgumentListAST temp_17 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 260)) ;
    ioArgument_ioDecoratedRoutineList.addAssignOperation (enumerator_7903.current (HERE).readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 253)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-declaration.galgas", 255)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-declaration.galgas", 258)), var_routineMangledName_9104, temp_17, GGS_bool (true), var_taskListInstructionList_8833, enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 264))  COMMA_SOURCE_FILE ("task-declaration.galgas", 251)) ;
    GGS_omnibusType var_taskType_9739 ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), enumerator_7903.current (HERE).readProperty_mTaskName (), var_taskType_9739, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 265)) ;
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_7903.current (HERE).readProperty_mTaskName (), var_taskType_9739, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 266)) ;
    }
    GGS_sortedOperandIRList temp_18 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 267)) ;
    GGS_sortedOperandIRList var_initialValueList_9829 = temp_18 ;
    GGS_lstring var_typeName_9881 = GGS_lstring::init_21__21_ (var_taskType_9739.readProperty_omnibusTypeDescriptionName (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constructorMap var_constructorMap_10025 ;
    ioArgument_ioContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_9881, var_constructorMap_10025, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 269)) ;
    UpEnumerator_constructorMap enumerator_10054 (var_constructorMap_10025) ;
    while (enumerator_10054.hasCurrentObject ()) {
      enumerator_10054.current_mInitValue (HERE).method_extractStructure (var_initialValueList_9829, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 272)) ;
      enumerator_10054.gotoNextObject () ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssignOperation (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_objectIR::class_func_llvmStructureValue (var_taskType_9739, var_initialValueList_9829  COMMA_SOURCE_FILE ("task-declaration.galgas", 277))  COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
    var_decoratedTaskList_7865.addAssignOperation (enumerator_7903.current (HERE).readProperty_mTaskName (), enumerator_7903.current (HERE).readProperty_mStackSize (), enumerator_7903.current (HERE).readProperty_mTaskSetupListAST (), enumerator_7903.current (HERE).readProperty_mTaskActivateListAST (), enumerator_7903.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_7903.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_7903.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 279)) ;
    enumerator_7903.gotoNextObject () ;
    index_7891.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 223)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedTaskListDeclaration::init_21_ (var_decoratedTaskList_7865, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 289)) ;
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

GGS_decoratedTaskList GGS_decoratedTaskList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
// @decoratedTaskListDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration::objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const {
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

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::
init_21_ (const GGS_decoratedTaskList & in_mTaskList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedTaskListDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedTaskListDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedTaskListDeclaration_init_21_ (in_mTaskList, inCompiler) ;
  const GGS_decoratedTaskListDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::
decoratedTaskListDeclaration_init_21_ (const GGS_decoratedTaskList & in_mTaskList,
                                       Compiler * /* inCompiler */) {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::class_func_new (const GGS_decoratedTaskList & in_mTaskList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (in_mTaskList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskListDeclaration::readProperty_mTaskList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedTaskList () ;
  }else{
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    return p->mProperty_mTaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskListDeclaration::setProperty_mTaskList (const GGS_decoratedTaskList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    p->mProperty_mTaskList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedTaskListDeclaration:") ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedTaskListDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mTaskList.printNonNullClassInstanceProperties ("mTaskList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  const GGS_decoratedTaskListDeclaration * p = (const GGS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration_2E_weak::objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const {
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

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak & GGS_decoratedTaskListDeclaration_2E_weak::operator = (const GGS_decoratedTaskListDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (const GGS_decoratedTaskListDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedTaskListDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedTaskListDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskListDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedTaskListDeclaration) ;
      result = GGS_decoratedTaskListDeclaration ((cPtr_decoratedTaskListDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ("decoratedTaskListDeclaration.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskListDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  const GGS_decoratedTaskListDeclaration_2E_weak * p = (const GGS_decoratedTaskListDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_taskMapIR GGS_taskMapIR::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_taskSortedListIR GGS_taskSortedListIR::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
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
  GGS_taskSortedListIR result = class_func_emptySortedList (THERE) ;
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
  GGS_string var_activateTaskImplementationName_18005 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)) ;
  GGS_string var_activateTaskCallName_18107 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)) ;
  ioArgument_ioServiceList.addAssignOperation (var_activateTaskCallName_18107, var_activateTaskImplementationName_18005, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_activateTaskCallName_18107, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)).add_operation (GGS_string (" (i8 %inTaskIndex) nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 486)) ;
  GGS_string var_waitForActivationImplementationName_18477 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)) ;
  GGS_string var_waitForActivationCallName_18594 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)) ;
  ioArgument_ioServiceList.addAssignOperation (var_waitForActivationCallName_18594, var_waitForActivationImplementationName_18477, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_waitForActivationCallName_18594, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)).add_operation (GGS_string (" () nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 492)) ;
  UpEnumerator_globalTaskVariableList enumerator_18974 (constinArgument_inGenerationContext.readProperty_mGlobalTaskVariableList ()) ;
  while (enumerator_18974.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_18974.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 494)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 495)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(enumerator_18974.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_18974.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
    enumerator_18974.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 499)) ;
  GGS_taskSortedListIR temp_0 = GGS_taskSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 501)) ;
  GGS_taskSortedListIR var_orderedTaskList_19337 = temp_0 ;
  const GGS_taskMapIR temp_1 = inObject ;
  UpEnumerator_taskMapIR enumerator_19373 (temp_1) ;
  while (enumerator_19373.hasCurrentObject ()) {
    var_orderedTaskList_19337.addAssignOperation (enumerator_19373.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_19373.current (HERE).readProperty_mPriority (), enumerator_19373.current (HERE).readProperty_mStackSize (), enumerator_19373.current (HERE).readProperty_mSetupOrderedList (), enumerator_19373.current (HERE).readProperty_mActivateOrderedList (), enumerator_19373.current (HERE).readProperty_mDeactivateOrderedList (), enumerator_19373.current (HERE).readProperty_mTaskNameStringIndex (), enumerator_19373.current (HERE).readProperty_mActivate ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
    enumerator_19373.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 514)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 515)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 516)) ;
  UpEnumerator_taskSortedListIR enumerator_19956 (var_orderedTaskList_19337) ;
  while (enumerator_19956.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task ").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 518)) ;
    GGS_string var_assemblerTaskName_20046 = enumerator_19956.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_stackNameForTask (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GGS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (enumerator_19956.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).getter_string (SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GGS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 521)) ;
    GGS_string var_effectiveParameter_20261 = GGS_string ("(%").add_operation (var_assemblerTaskName_20046, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (function_llvmNameForGlobalVariable (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)) ;
    GGS_string var_formalArgument_20374 = GGS_string (" (%").add_operation (var_assemblerTaskName_20046, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 526)) ;
    UpEnumerator_stringlist enumerator_20661 (enumerator_19956.current (HERE).readProperty_mSetupOrderedList ()) ;
    while (enumerator_20661.hasCurrentObject ()) {
      GGS_string var_mangledName_20711 = GGS_string ("task.setup.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (enumerator_20661.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_20711.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 529)) ;
      enumerator_20661.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 531)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 532)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 533)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 534)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (function_activateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_formalArgument_20374.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 537)) ;
    UpEnumerator_stringlist enumerator_21216 (enumerator_19956.current (HERE).readProperty_mActivateOrderedList ()) ;
    while (enumerator_21216.hasCurrentObject ()) {
      GGS_string var_mangledName_21272 = GGS_string ("task.activate.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (enumerator_21216.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21272.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 540)) ;
      enumerator_21216.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 542)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 543)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 544)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 545)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 547)) ;
    UpEnumerator_stringlist enumerator_21744 (enumerator_19956.current (HERE).readProperty_mDeactivateOrderedList ()) ;
    while (enumerator_21744.hasCurrentObject ()) {
      GGS_string var_mangledName_21804 = GGS_string ("task.deactivate.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (enumerator_21744.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21804.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 550)) ;
      enumerator_21744.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 552)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 553)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 554)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 555)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 557)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 558)) ;
    GGS_string var_taskLoopLabel_22386 = GGS_string ("loop.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 559)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_22386, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 560)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_taskLoopLabel_22386.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 561)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_19956.current (HERE).readProperty_mActivate ().operator_not (SOURCE_FILE ("task-declaration.galgas", 562)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18594, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 563)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_activateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 565)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_19956.current (HERE).readProperty_mTaskName ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 566)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 567)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_19956.current (HERE).readProperty_mActivate ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18594, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 569)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_22386, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 572)) ;
    enumerator_19956.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 575)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 576)) ;
  UpEnumerator_taskSortedListIR enumerator_23476 (var_orderedTaskList_19337) ;
  GGS_uint index_23464 (uint32_t (0)) ;
  while (enumerator_23476.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (function_stackAddressForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 578)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = getelementptr inbounds [").add_operation (enumerator_23476.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).getter_string (SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).add_operation (GGS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("[").add_operation (enumerator_23476.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).getter_string (SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (GGS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (function_stackNameForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 581)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %task.name.").add_operation (index_23464.getter_string (SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GGS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (function_literalStringName (enumerator_23476.current (HERE).readProperty_mTaskNameStringIndex (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 582)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 583)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 ").add_operation (index_23464.getter_string (SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 584)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i8* %task.name.").add_operation (index_23464.getter_string (SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_23476.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 587)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 588)) ;
    enumerator_23476.gotoNextObject () ;
    index_23464.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 577)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 590)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 591)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskActivateFunctionIR_2E_weak::objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const {
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

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak & GGS_taskActivateFunctionIR_2E_weak::operator = (const GGS_taskActivateFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (const GGS_taskActivateFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_taskActivateFunctionIR result ;
  if (isValid ()) {
    const cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_taskActivateFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_taskActivateFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskActivateFunctionIR) ;
      result = GGS_taskActivateFunctionIR ((cPtr_taskActivateFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @taskActivateFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ("taskActivateFunctionIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskActivateFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskActivateFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskActivateFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  const GGS_taskActivateFunctionIR_2E_weak * p = (const GGS_taskActivateFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskActivateFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//Class for element of '@routineFormalArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineFormalArgumentListAST : public cCollectionElement {
  public: GGS_routineFormalArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineFormalArgumentListAST (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GGS_lstring & in_mSelector,
                                                           const GGS_lstring & in_mFormalArgumentTypeName,
                                                           const GGS_lstring & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                  const GGS_lstring & in_mSelector,
                                                                                                  const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                  const GGS_lstring & in_mFormalArgumentName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineFormalArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListAST (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineFormalArgumentListAST
//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST::GGS_routineFormalArgumentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST::GGS_routineFormalArgumentListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    const GGS_routineFormalArgumentListAST_2E_element element (p->mObject.mProperty_mFormalArgumentPassingMode, p->mObject.mProperty_mSelector, p->mObject.mProperty_mFormalArgumentTypeName, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                  const GGS_lstring & in_mSelector,
                                                                  const GGS_lstring & in_mFormalArgumentTypeName,
                                                                  const GGS_lstring & in_mFormalArgumentName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName COMMA_THERE)) ;
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

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

