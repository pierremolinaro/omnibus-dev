#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy::GALGAS_unifiedTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                       COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap_2D_proxy::getter_llvmTypeName (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "llvmTypeName" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_llvmTypeName;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_unifiedTypeMap_2D_proxy::getter_kind (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "kind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_kind;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_unifiedTypeMap_2D_proxy::getter_classMethodMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "classMethodMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_classMethodMap;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::getter_instantiable (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "instantiable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_instantiable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::getter_copyable (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "copyable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_copyable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::getter_equatable (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "equatable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_equatable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::getter_comparable (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "comparable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_comparable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::getter_enumerationType (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "enumerationType" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_enumerationType;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap-proxy type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ("unifiedTypeMap-proxy",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const GALGAS_unifiedTypeMap_2D_proxy * p = (const GALGAS_unifiedTypeMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_controlRegisterBitSlice_namedBit::cEnumAssociatedValues_controlRegisterBitSlice_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                const GALGAS_lbigint & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_controlRegisterBitSlice_namedBit::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_namedBit::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *> (inOperand) ;
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

GALGAS_controlRegisterBitSlice::GALGAS_controlRegisterBitSlice (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_unusedBits ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                     const GALGAS_lbigint & inAssociatedValue1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_namedBit ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_namedBit (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSlice::method_unusedBits (GALGAS_lbigint & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_unusedBits) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice unusedBits invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSlice::method_namedBit (GALGAS_lstring & outAssociatedValue0,
                                                      GALGAS_lbigint & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedBit) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice namedBit invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_controlRegisterBitSlice [3] = {
  "(not built)",
  "unusedBits",
  "namedBit"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isUnusedBits (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unusedBits == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isNamedBit (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedBit == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSlice::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterBitSlice: " << gEnumNameArrayFor_controlRegisterBitSlice [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterBitSlice::objectCompare (const GALGAS_controlRegisterBitSlice & inOperand) const {
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
//                                            @controlRegisterBitSlice type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSlice ("controlRegisterBitSlice",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSlice::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSlice (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  const GALGAS_controlRegisterBitSlice * p = (const GALGAS_controlRegisterBitSlice *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                                                            const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                                            const GALGAS_string & inAssociatedValue2,
                                                                                                                            const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR::GALGAS_guardKindGenerationIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::constructor_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                         const GALGAS_string & inAssociatedValue2,
                                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKindGenerationIR::method_convenienceGuard (GALGAS_allocaList & outAssociatedValue0,
                                                            GALGAS_instructionListIR & outAssociatedValue1,
                                                            GALGAS_string & outAssociatedValue2,
                                                            GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardKindGenerationIR convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardKindGenerationIR [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKindGenerationIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @guardKindGenerationIR: " << gEnumNameArrayFor_guardKindGenerationIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardKindGenerationIR::objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const {
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
//                                             @guardKindGenerationIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardKindGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardKindGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKindGenerationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  const GALGAS_guardKindGenerationIR * p = (const GALGAS_guardKindGenerationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKindGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommand_synchronization::cEnumAssociatedValues_guardedCommand_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                                                            const GALGAS_lstring & inAssociatedValue1,
                                                                                                            const GALGAS_lstring & inAssociatedValue2,
                                                                                                            const GALGAS_effectiveParameterListAST & inAssociatedValue3
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommand_synchronization::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommand_synchronization::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommand_synchronization * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommand_synchronization *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommand_boolean::cEnumAssociatedValues_guardedCommand_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                                            const GALGAS_expressionAST & inAssociatedValue1,
                                                                                            const GALGAS_location & inAssociatedValue2
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommand_boolean::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommand_boolean::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommand_boolean * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommand_boolean *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommand_boolAndSync::cEnumAssociatedValues_guardedCommand_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                                                    const GALGAS_expressionAST & inAssociatedValue1,
                                                                                                    const GALGAS_location & inAssociatedValue2,
                                                                                                    const GALGAS_lstring & inAssociatedValue3,
                                                                                                    const GALGAS_lstring & inAssociatedValue4,
                                                                                                    const GALGAS_effectiveParameterListAST & inAssociatedValue5
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommand_boolAndSync::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  mAssociatedValue5.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommand_boolAndSync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommand_boolAndSync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommand_boolAndSync *> (inOperand) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue5.objectCompare (ptr->mAssociatedValue5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand::GALGAS_guardedCommand (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_guardedCommand::constructor_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                          const GALGAS_lstring & inAssociatedValue1,
                                                                          const GALGAS_lstring & inAssociatedValue2,
                                                                          const GALGAS_effectiveParameterListAST & inAssociatedValue3
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommand result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_synchronization ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommand_synchronization (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_guardedCommand::constructor_boolean (const GALGAS_bool & inAssociatedValue0,
                                                                  const GALGAS_expressionAST & inAssociatedValue1,
                                                                  const GALGAS_location & inAssociatedValue2
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommand result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_boolean ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommand_boolean (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_guardedCommand::constructor_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                      const GALGAS_expressionAST & inAssociatedValue1,
                                                                      const GALGAS_location & inAssociatedValue2,
                                                                      const GALGAS_lstring & inAssociatedValue3,
                                                                      const GALGAS_lstring & inAssociatedValue4,
                                                                      const GALGAS_effectiveParameterListAST & inAssociatedValue5
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommand result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommand_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommand::method_synchronization (GALGAS_bool & outAssociatedValue0,
                                                    GALGAS_lstring & outAssociatedValue1,
                                                    GALGAS_lstring & outAssociatedValue2,
                                                    GALGAS_effectiveParameterListAST & outAssociatedValue3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_synchronization) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardedCommand synchronization invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommand_synchronization * ptr = (const cEnumAssociatedValues_guardedCommand_synchronization *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommand::method_boolean (GALGAS_bool & outAssociatedValue0,
                                            GALGAS_expressionAST & outAssociatedValue1,
                                            GALGAS_location & outAssociatedValue2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolean) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @guardedCommand boolean invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommand_boolean * ptr = (const cEnumAssociatedValues_guardedCommand_boolean *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommand::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                GALGAS_expressionAST & outAssociatedValue1,
                                                GALGAS_location & outAssociatedValue2,
                                                GALGAS_lstring & outAssociatedValue3,
                                                GALGAS_lstring & outAssociatedValue4,
                                                GALGAS_effectiveParameterListAST & outAssociatedValue5,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolAndSync) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    outAssociatedValue5.drop () ;
    C_String s ;
    s << "method @guardedCommand boolAndSync invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommand_boolAndSync * ptr = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardedCommand [4] = {
  "(not built)",
  "synchronization",
  "boolean",
  "boolAndSync"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommand::getter_isSynchronization (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_synchronization == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommand::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommand::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommand::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @guardedCommand: " << gEnumNameArrayFor_guardedCommand [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardedCommand::objectCompare (const GALGAS_guardedCommand & inOperand) const {
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
//                                                @guardedCommand type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardedCommand ("guardedCommand",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardedCommand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardedCommand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_guardedCommand::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommand result ;
  const GALGAS_guardedCommand * p = (const GALGAS_guardedCommand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardedCommand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveParameterPassingModeAST_input::cEnumAssociatedValues_effectiveParameterPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveParameterPassingModeAST_input::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveParameterPassingModeAST_input::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveParameterPassingModeAST_input * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveParameterPassingModeAST_input *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType::cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                                                            const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                            const GALGAS_lstring & inAssociatedValue2
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveParameterPassingModeAST_output::cEnumAssociatedValues_effectiveParameterPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                              const GALGAS_location & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveParameterPassingModeAST_output::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveParameterPassingModeAST_output::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *> (inOperand) ;
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

cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput::cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable::cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable::description (C_String & ioString,
                                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable * ptr = dynamic_cast<const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST::GALGAS_effectiveParameterPassingModeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterPassingModeAST::constructor_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_input ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveParameterPassingModeAST_input (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterPassingModeAST::constructor_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                                            const GALGAS_lstring & inAssociatedValue1,
                                                                                                            const GALGAS_lstring & inAssociatedValue2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_inputWithType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterPassingModeAST::constructor_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                     const GALGAS_location & inAssociatedValue1
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_output ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveParameterPassingModeAST_output (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterPassingModeAST::constructor_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInput ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterPassingModeAST::constructor_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInputSelfVariable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterPassingModeAST::method_input (GALGAS_lstring & outAssociatedValue0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_input) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @effectiveParameterPassingModeAST input invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveParameterPassingModeAST_input * ptr = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_input *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterPassingModeAST::method_inputWithType (GALGAS_bool & outAssociatedValue0,
                                                                    GALGAS_lstring & outAssociatedValue1,
                                                                    GALGAS_lstring & outAssociatedValue2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_inputWithType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @effectiveParameterPassingModeAST inputWithType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * ptr = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterPassingModeAST::method_output (GALGAS_expressionAST & outAssociatedValue0,
                                                             GALGAS_location & outAssociatedValue1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_output) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @effectiveParameterPassingModeAST output invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * ptr = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterPassingModeAST::method_outputInput (GALGAS_lstring & outAssociatedValue0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInput) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @effectiveParameterPassingModeAST outputInput invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput * ptr = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterPassingModeAST::method_outputInputSelfVariable (GALGAS_lstring & outAssociatedValue0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInputSelfVariable) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @effectiveParameterPassingModeAST outputInputSelfVariable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable * ptr = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_effectiveParameterPassingModeAST [6] = {
  "(not built)",
  "input",
  "inputWithType",
  "output",
  "outputInput",
  "outputInputSelfVariable"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveParameterPassingModeAST::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveParameterPassingModeAST::getter_isInputWithType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_inputWithType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveParameterPassingModeAST::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveParameterPassingModeAST::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_effectiveParameterPassingModeAST::getter_isOutputInputSelfVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInputSelfVariable == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterPassingModeAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<enum @effectiveParameterPassingModeAST: " << gEnumNameArrayFor_effectiveParameterPassingModeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_effectiveParameterPassingModeAST::objectCompare (const GALGAS_effectiveParameterPassingModeAST & inOperand) const {
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
//                                       @effectiveParameterPassingModeAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveParameterPassingModeAST ("effectiveParameterPassingModeAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveParameterPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveParameterPassingModeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveParameterPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveParameterPassingModeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterPassingModeAST result ;
  const GALGAS_effectiveParameterPassingModeAST * p = (const GALGAS_effectiveParameterPassingModeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveParameterPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveParameterPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_enumeration::cEnumAssociatedValues_typeKind_enumeration (const GALGAS_enumConstantMap & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_enumeration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_enumeration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumeration * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumeration *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_structure::cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyMap & inAssociatedValue0,
                                                                                    const GALGAS_propertyList & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_structure::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_structure * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_structure *> (inOperand) ;
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

cEnumAssociatedValues_typeKind_integer::cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint & inAssociatedValue0,
                                                                                const GALGAS_bigint & inAssociatedValue1,
                                                                                const GALGAS_bool & inAssociatedValue2,
                                                                                const GALGAS_uint & inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_integer::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_opaque::cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_opaque::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_opaque::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_opaque * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_opaque *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_arrayType::cEnumAssociatedValues_typeKind_arrayType (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                    const GALGAS_bigint & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_arrayType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_arrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_arrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_arrayType *> (inOperand) ;
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

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_boolean (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolean ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_boolset (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_enumeration (const GALGAS_enumConstantMap & inAssociatedValue0
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_structure (const GALGAS_propertyMap & inAssociatedValue0,
                                                        const GALGAS_propertyList & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_structure (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_staticInteger (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_staticInteger ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_arrayType (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                        const GALGAS_bigint & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_arrayType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_enumeration (GALGAS_enumConstantMap & outAssociatedValue0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_structure (GALGAS_propertyMap & outAssociatedValue0,
                                        GALGAS_propertyList & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_arrayType (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                        GALGAS_bigint & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind arrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_arrayType * ptr = (const cEnumAssociatedValues_typeKind_arrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_typeKind [10] = {
  "(not built)",
  "boolean",
  "boolset",
  "literalString",
  "enumeration",
  "structure",
  "integer",
  "staticInteger",
  "opaque",
  "arrayType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isBoolset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumeration == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integer == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isStaticInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticInteger == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_opaque == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typeKind type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_valueIR_literalInteger::cEnumAssociatedValues_valueIR_literalInteger (const GALGAS_bigint & inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_valueIR_literalInteger::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_valueIR_literalInteger::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valueIR_literalInteger * ptr = dynamic_cast<const cEnumAssociatedValues_valueIR_literalInteger *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_valueIR_llvmLocalObject::cEnumAssociatedValues_valueIR_llvmLocalObject (const GALGAS_string & inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_valueIR_llvmLocalObject::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_valueIR_llvmLocalObject::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valueIR_llvmLocalObject * ptr = dynamic_cast<const cEnumAssociatedValues_valueIR_llvmLocalObject *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_valueIR_llvmGlobalObject::cEnumAssociatedValues_valueIR_llvmGlobalObject (const GALGAS_string & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_valueIR_llvmGlobalObject::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_valueIR_llvmGlobalObject::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valueIR_llvmGlobalObject * ptr = dynamic_cast<const cEnumAssociatedValues_valueIR_llvmGlobalObject *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_valueIR_llvmStructureConstant::cEnumAssociatedValues_valueIR_llvmStructureConstant (const GALGAS_operandIRList & inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_valueIR_llvmStructureConstant::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_valueIR_llvmStructureConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valueIR_llvmStructureConstant * ptr = dynamic_cast<const cEnumAssociatedValues_valueIR_llvmStructureConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_valueIR_literalString::cEnumAssociatedValues_valueIR_literalString (const GALGAS_uint & inAssociatedValue0,
                                                                                          const GALGAS_uint & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_valueIR_literalString::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_valueIR_literalString::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valueIR_literalString * ptr = dynamic_cast<const cEnumAssociatedValues_valueIR_literalString *> (inOperand) ;
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

GALGAS_valueIR::GALGAS_valueIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_selfObject (UNUSED_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  result.mEnum = kEnum_selfObject ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_literalInteger (const GALGAS_bigint & inAssociatedValue0
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_literalInteger ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valueIR_literalInteger (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_llvmLocalObject (const GALGAS_string & inAssociatedValue0
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_llvmLocalObject ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valueIR_llvmLocalObject (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_llvmGlobalObject (const GALGAS_string & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_llvmGlobalObject ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valueIR_llvmGlobalObject (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_llvmStructureConstant (const GALGAS_operandIRList & inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_llvmStructureConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valueIR_llvmStructureConstant (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_literalString (const GALGAS_uint & inAssociatedValue0,
                                                          const GALGAS_uint & inAssociatedValue1
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalString ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valueIR_literalString (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::constructor_zero (UNUSED_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  result.mEnum = kEnum_zero ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valueIR::method_literalInteger (GALGAS_bigint & outAssociatedValue0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalInteger) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valueIR literalInteger invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valueIR_literalInteger * ptr = (const cEnumAssociatedValues_valueIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valueIR::method_llvmLocalObject (GALGAS_string & outAssociatedValue0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmLocalObject) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valueIR llvmLocalObject invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valueIR_llvmLocalObject * ptr = (const cEnumAssociatedValues_valueIR_llvmLocalObject *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valueIR::method_llvmGlobalObject (GALGAS_string & outAssociatedValue0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmGlobalObject) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valueIR llvmGlobalObject invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valueIR_llvmGlobalObject * ptr = (const cEnumAssociatedValues_valueIR_llvmGlobalObject *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valueIR::method_llvmStructureConstant (GALGAS_operandIRList & outAssociatedValue0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmStructureConstant) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valueIR llvmStructureConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valueIR_llvmStructureConstant * ptr = (const cEnumAssociatedValues_valueIR_llvmStructureConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valueIR::method_literalString (GALGAS_uint & outAssociatedValue0,
                                           GALGAS_uint & outAssociatedValue1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalString) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valueIR literalString invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valueIR_literalString * ptr = (const cEnumAssociatedValues_valueIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_valueIR [8] = {
  "(not built)",
  "selfObject",
  "literalInteger",
  "llvmLocalObject",
  "llvmGlobalObject",
  "llvmStructureConstant",
  "literalString",
  "zero"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isSelfObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfObject == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isLlvmLocalObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmLocalObject == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isLlvmGlobalObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmGlobalObject == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isLlvmStructureConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_valueIR::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<enum @valueIR: " << gEnumNameArrayFor_valueIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_valueIR::objectCompare (const GALGAS_valueIR & inOperand) const {
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
//                                                    @valueIR type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valueIR ("valueIR",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_valueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valueIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_valueIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valueIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_valueIR::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_valueIR result ;
  const GALGAS_valueIR * p = (const GALGAS_valueIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_valueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_interruptionPanicCode_panicCode::cEnumAssociatedValues_interruptionPanicCode_panicCode (const GALGAS_lbigint & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_interruptionPanicCode_panicCode::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_interruptionPanicCode_panicCode::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_interruptionPanicCode_panicCode * ptr = dynamic_cast<const cEnumAssociatedValues_interruptionPanicCode_panicCode *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode::GALGAS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_noPanicCode (UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = kEnum_noPanicCode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_panicCode (const GALGAS_lbigint & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_panicCode ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_interruptionPanicCode_panicCode (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::method_panicCode (GALGAS_lbigint & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_panicCode) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @interruptionPanicCode panicCode invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_interruptionPanicCode_panicCode * ptr = (const cEnumAssociatedValues_interruptionPanicCode_panicCode *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noPanicCode",
  "panicCode"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isNoPanicCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noPanicCode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isPanicCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_panicCode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @interruptionPanicCode: " << gEnumNameArrayFor_interruptionPanicCode [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptionPanicCode::objectCompare (const GALGAS_interruptionPanicCode & inOperand) const {
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
//                                             @interruptionPanicCode type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  const GALGAS_interruptionPanicCode * p = (const GALGAS_interruptionPanicCode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionPanicCode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardKind_convenienceGuard::cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_abstractCallInstructionAST & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardKind_convenienceGuard::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardKind_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKind_convenienceGuard *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind::GALGAS_guardKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::constructor_convenienceGuard (const GALGAS_abstractCallInstructionAST & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKind_convenienceGuard (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKind::method_convenienceGuard (GALGAS_abstractCallInstructionAST & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @guardKind convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKind_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardKind::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @guardKind: " << gEnumNameArrayFor_guardKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardKind::objectCompare (const GALGAS_guardKind & inOperand) const {
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
//                                                   @guardKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardKind GALGAS_guardKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  const GALGAS_guardKind * p = (const GALGAS_guardKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommandIR_synchronization::cEnumAssociatedValues_guardedCommandIR_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                                                                const GALGAS_string & inAssociatedValue1,
                                                                                                                const GALGAS_string & inAssociatedValue2,
                                                                                                                const GALGAS_instructionListIR & inAssociatedValue3,
                                                                                                                const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue4
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandIR_synchronization::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandIR_synchronization::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_synchronization * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_synchronization *> (inOperand) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommandIR_booleanGuard::cEnumAssociatedValues_guardedCommandIR_booleanGuard (const GALGAS_bool & inAssociatedValue0,
                                                                                                          const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                          const GALGAS_operandIR & inAssociatedValue2
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandIR_booleanGuard::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandIR_booleanGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_booleanGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_booleanGuard *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_guardedCommandIR_boolAndSync::cEnumAssociatedValues_guardedCommandIR_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                                                        const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                        const GALGAS_operandIR & inAssociatedValue2,
                                                                                                        const GALGAS_string & inAssociatedValue3,
                                                                                                        const GALGAS_string & inAssociatedValue4,
                                                                                                        const GALGAS_instructionListIR & inAssociatedValue5,
                                                                                                        const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue6
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5),
mAssociatedValue6 (inAssociatedValue6) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_guardedCommandIR_boolAndSync::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  mAssociatedValue5.description (ioString, inIndentation) ;
  mAssociatedValue6.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_guardedCommandIR_boolAndSync::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardedCommandIR_boolAndSync * ptr = dynamic_cast<const cEnumAssociatedValues_guardedCommandIR_boolAndSync *> (inOperand) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue5.objectCompare (ptr->mAssociatedValue5) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue6.objectCompare (ptr->mAssociatedValue6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR::GALGAS_guardedCommandIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::constructor_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                              const GALGAS_string & inAssociatedValue1,
                                                                              const GALGAS_string & inAssociatedValue2,
                                                                              const GALGAS_instructionListIR & inAssociatedValue3,
                                                                              const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue4
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid ()) {
    result.mEnum = kEnum_synchronization ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_synchronization (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::constructor_booleanGuard (const GALGAS_bool & inAssociatedValue0,
                                                                           const GALGAS_instructionListIR & inAssociatedValue1,
                                                                           const GALGAS_operandIR & inAssociatedValue2
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_booleanGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_booleanGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::constructor_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                                          const GALGAS_instructionListIR & inAssociatedValue1,
                                                                          const GALGAS_operandIR & inAssociatedValue2,
                                                                          const GALGAS_string & inAssociatedValue3,
                                                                          const GALGAS_string & inAssociatedValue4,
                                                                          const GALGAS_instructionListIR & inAssociatedValue5,
                                                                          const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue6
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid () && inAssociatedValue6.isValid ()) {
    result.mEnum = kEnum_boolAndSync ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardedCommandIR_boolAndSync (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5, inAssociatedValue6 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandIR::method_synchronization (GALGAS_bool & outAssociatedValue0,
                                                      GALGAS_string & outAssociatedValue1,
                                                      GALGAS_string & outAssociatedValue2,
                                                      GALGAS_instructionListIR & outAssociatedValue3,
                                                      GALGAS_procCallEffectiveParameterListIR & outAssociatedValue4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_synchronization) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    C_String s ;
    s << "method @guardedCommandIR synchronization invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandIR_synchronization * ptr = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandIR::method_booleanGuard (GALGAS_bool & outAssociatedValue0,
                                                   GALGAS_instructionListIR & outAssociatedValue1,
                                                   GALGAS_operandIR & outAssociatedValue2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_booleanGuard) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @guardedCommandIR booleanGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandIR_booleanGuard * ptr = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandIR::method_boolAndSync (GALGAS_bool & outAssociatedValue0,
                                                  GALGAS_instructionListIR & outAssociatedValue1,
                                                  GALGAS_operandIR & outAssociatedValue2,
                                                  GALGAS_string & outAssociatedValue3,
                                                  GALGAS_string & outAssociatedValue4,
                                                  GALGAS_instructionListIR & outAssociatedValue5,
                                                  GALGAS_procCallEffectiveParameterListIR & outAssociatedValue6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolAndSync) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    outAssociatedValue5.drop () ;
    outAssociatedValue6.drop () ;
    C_String s ;
    s << "method @guardedCommandIR boolAndSync invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardedCommandIR_boolAndSync * ptr = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
    outAssociatedValue6 = ptr->mAssociatedValue6 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_guardedCommandIR [4] = {
  "(not built)",
  "synchronization",
  "booleanGuard",
  "boolAndSync"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandIR::getter_isSynchronization (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_synchronization == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandIR::getter_isBooleanGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_booleanGuard == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardedCommandIR::getter_isBoolAndSync (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolAndSync == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardedCommandIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @guardedCommandIR: " << gEnumNameArrayFor_guardedCommandIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardedCommandIR::objectCompare (const GALGAS_guardedCommandIR & inOperand) const {
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
//                                               @guardedCommandIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardedCommandIR ("guardedCommandIR",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardedCommandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardedCommandIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardedCommandIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardedCommandIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_guardedCommandIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_guardedCommandIR result ;
  const GALGAS_guardedCommandIR * p = (const GALGAS_guardedCommandIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardedCommandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardedCommandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectInMemoryIR_register::cEnumAssociatedValues_objectInMemoryIR_register (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                                                  const GALGAS_bigint & inAssociatedValue2
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_register::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_register::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_register * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_register *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectInMemoryIR_globalVariable::cEnumAssociatedValues_objectInMemoryIR_globalVariable (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                              const GALGAS_string & inAssociatedValue1,
                                                                                                              const GALGAS_bool & inAssociatedValue2
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_globalVariable::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_globalVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_globalVariable * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_globalVariable *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectInMemoryIR_localValue::cEnumAssociatedValues_objectInMemoryIR_localValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                      const GALGAS_string & inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_localValue::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_localValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_localValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_localValue *> (inOperand) ;
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

cEnumAssociatedValues_objectInMemoryIR_globalConstant::cEnumAssociatedValues_objectInMemoryIR_globalConstant (const GALGAS_operandIR & inAssociatedValue0,
                                                                                                              const GALGAS_string & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_globalConstant::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_globalConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_globalConstant * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_globalConstant *> (inOperand) ;
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

GALGAS_objectInMemoryIR::GALGAS_objectInMemoryIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_register (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                       const GALGAS_lstring & inAssociatedValue1,
                                                                       const GALGAS_bigint & inAssociatedValue2
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_register ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_register (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_globalVariable (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                             const GALGAS_string & inAssociatedValue1,
                                                                             const GALGAS_bool & inAssociatedValue2
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_globalVariable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_globalVariable (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_localValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                         const GALGAS_string & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_localValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_localValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_globalConstant (const GALGAS_operandIR & inAssociatedValue0,
                                                                             const GALGAS_string & inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_globalConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_globalConstant (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_register (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                               GALGAS_lstring & outAssociatedValue1,
                                               GALGAS_bigint & outAssociatedValue2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_register) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR register invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_register * ptr = (const cEnumAssociatedValues_objectInMemoryIR_register *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_globalVariable (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                     GALGAS_string & outAssociatedValue1,
                                                     GALGAS_bool & outAssociatedValue2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalVariable) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR globalVariable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_globalVariable * ptr = (const cEnumAssociatedValues_objectInMemoryIR_globalVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_localValue (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                 GALGAS_string & outAssociatedValue1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR localValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_localValue * ptr = (const cEnumAssociatedValues_objectInMemoryIR_localValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_globalConstant (GALGAS_operandIR & outAssociatedValue0,
                                                     GALGAS_string & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR globalConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_globalConstant * ptr = (const cEnumAssociatedValues_objectInMemoryIR_globalConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_objectInMemoryIR [5] = {
  "(not built)",
  "register",
  "globalVariable",
  "localValue",
  "globalConstant"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_register == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isGlobalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalVariable == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isLocalValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @objectInMemoryIR: " << gEnumNameArrayFor_objectInMemoryIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectInMemoryIR::objectCompare (const GALGAS_objectInMemoryIR & inOperand) const {
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
//                                               @objectInMemoryIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectInMemoryIR ("objectInMemoryIR",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectInMemoryIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectInMemoryIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectInMemoryIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectInMemoryIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  const GALGAS_objectInMemoryIR * p = (const GALGAS_objectInMemoryIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectInMemoryIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectInMemoryIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_getElementPtrIndexKind_absolute::cEnumAssociatedValues_getElementPtrIndexKind_absolute (const GALGAS_uint & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_getElementPtrIndexKind_absolute::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_getElementPtrIndexKind_absolute::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_getElementPtrIndexKind_absolute * ptr = dynamic_cast<const cEnumAssociatedValues_getElementPtrIndexKind_absolute *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_getElementPtrIndexKind_indirect::cEnumAssociatedValues_getElementPtrIndexKind_indirect (const GALGAS_operandIR & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_getElementPtrIndexKind_indirect::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_getElementPtrIndexKind_indirect::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_getElementPtrIndexKind_indirect * ptr = dynamic_cast<const cEnumAssociatedValues_getElementPtrIndexKind_indirect *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIndexKind::GALGAS_getElementPtrIndexKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIndexKind GALGAS_getElementPtrIndexKind::constructor_absolute (const GALGAS_uint & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrIndexKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_absolute ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_getElementPtrIndexKind_absolute (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIndexKind GALGAS_getElementPtrIndexKind::constructor_indirect (const GALGAS_operandIR & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrIndexKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_indirect ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_getElementPtrIndexKind_indirect (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getElementPtrIndexKind::method_absolute (GALGAS_uint & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_absolute) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @getElementPtrIndexKind absolute invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_getElementPtrIndexKind_absolute * ptr = (const cEnumAssociatedValues_getElementPtrIndexKind_absolute *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getElementPtrIndexKind::method_indirect (GALGAS_operandIR & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_indirect) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @getElementPtrIndexKind indirect invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_getElementPtrIndexKind_indirect * ptr = (const cEnumAssociatedValues_getElementPtrIndexKind_indirect *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_getElementPtrIndexKind [3] = {
  "(not built)",
  "absolute",
  "indirect"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_getElementPtrIndexKind::getter_isAbsolute (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_absolute == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_getElementPtrIndexKind::getter_isIndirect (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_indirect == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getElementPtrIndexKind::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<enum @getElementPtrIndexKind: " << gEnumNameArrayFor_getElementPtrIndexKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_getElementPtrIndexKind::objectCompare (const GALGAS_getElementPtrIndexKind & inOperand) const {
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
//                                            @getElementPtrIndexKind type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getElementPtrIndexKind ("getElementPtrIndexKind",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getElementPtrIndexKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getElementPtrIndexKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getElementPtrIndexKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getElementPtrIndexKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIndexKind GALGAS_getElementPtrIndexKind::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrIndexKind result ;
  const GALGAS_getElementPtrIndexKind * p = (const GALGAS_getElementPtrIndexKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getElementPtrIndexKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getElementPtrIndexKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_plm_5F_options_doNotDetectRecursiveCalls ("plm_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedSampleFiles ("plm_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedTargets ("plm_options",
                                         "listEmbeddedTargets",
                                         76,
                                         "list-embedded-targets",
                                         "List embedded targets") ;

C_BoolCommandLineOption gOption_plm_5F_options_noPanicGeneration ("plm_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_31_ ("plm_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_32_ ("plm_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationS ("plm_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ ("plm_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ_33_ ("plm_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

C_BoolCommandLineOption gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination ("plm_options",
                                         "optimization_displayDeadCodeElimination",
                                         122,
                                         "display-deadcode-elimination",
                                         "Display dead code elimination") ;

C_BoolCommandLineOption gOption_plm_5F_options_performFlashing ("plm_options",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeControlRegisterHTMLDumpFile ("plm_options",
                                         "writeControlRegisterHTMLDumpFile",
                                         0,
                                         "control-register-map",
                                         "Write control register map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeDeclarationDependencyGraphFile ("plm_options",
                                         "writeDeclarationDependencyGraphFile",
                                         100,
                                         "declaration-dependency-graph",
                                         "Write declaration dependency graph file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeGlobalConstantHTMLDumpFile ("plm_options",
                                         "writeGlobalConstantHTMLDumpFile",
                                         0,
                                         "global-constant-map",
                                         "Write global constant map in an HTML file") ;

C_BoolCommandLineOption gOption_plm_5F_options_writeRoutineInvocationGraphFile ("plm_options",
                                         "writeRoutineInvocationGraphFile",
                                         105,
                                         "routine-invocation-graph",
                                         "Write routine invocation graph file") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedSampleFile ("plm_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedTargets ("plm_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

C_StringCommandLineOption gOption_plm_5F_options_useDirAsTargetDir ("plm_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_StringListCommandLineOption gOption_plm_5F_options_pathList ("plm_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 103)) ;
  GALGAS_lstring var_boolBoolOp = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.mAttribute_string, inArgument_inBooleanTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 104)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 108))  COMMA_SOURCE_FILE ("type-bool.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 113))  COMMA_SOURCE_FILE ("type-bool.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 110)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 118))  COMMA_SOURCE_FILE ("type-bool.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 115)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 123))  COMMA_SOURCE_FILE ("type-bool.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 128))  COMMA_SOURCE_FILE ("type-bool.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 125)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 133))  COMMA_SOURCE_FILE ("type-bool.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 130)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 138))  COMMA_SOURCE_FILE ("type-bool.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNotOperatorMap.setter_insertKey (inArgument_inBooleanTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 140)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterEnumerationOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationOperators (GALGAS_lstring inArgument_inEnumerationTypeName,
                                        GALGAS_semanticContext & ioArgument_ioContext,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key = function_combineTypeNamesForInfixOperator (inArgument_inEnumerationTypeName.mAttribute_string, inArgument_inEnumerationTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 155))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 160))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 165))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 162)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 170))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 175))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 180))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 177)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (GALGAS_prefixOperatorMap & ioArgument_ioInfixOperatorMap,
                                       const GALGAS_lstring constinArgument_inNewTypeName,
                                       const GALGAS_lstring constinArgument_inAliasedTypeName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.mAttribute_string COMMA_SOURCE_FILE ("type-alias.galgas", 371)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 372)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 376)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                      const GALGAS_lstring constinArgument_inNewNewInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedAliasedInfixKey,
                                      const GALGAS_lstring constinArgument_inNewLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerNewInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerAliasInfixKey,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inNewTypeProxy,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOldTypeProxy,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.mAttribute_string COMMA_SOURCE_FILE ("type-alias.galgas", 396)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
    GALGAS_infixOperatorDescription var_operation ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType, var_operation, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 397)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType, var_operation, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 405)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.mAttribute_string COMMA_SOURCE_FILE ("type-alias.galgas", 411)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
    GALGAS_infixOperatorDescription var_operation ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType, var_operation, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 412)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType, var_operation, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 420)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.mAttribute_string COMMA_SOURCE_FILE ("type-alias.galgas", 426)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
    GALGAS_infixOperatorDescription var_operation ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType, var_operation, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 427)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType, var_operation, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 435)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 134)) ;
  GALGAS_lstring var_intIntOp = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 136)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 140))  COMMA_SOURCE_FILE ("type-integer.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-integer.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 142)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 150)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 150)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 147)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 155)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 155)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 152)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 160)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 160)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 157)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 165)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 165)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 162)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 172))  COMMA_SOURCE_FILE ("type-integer.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 177))  COMMA_SOURCE_FILE ("type-integer.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 174)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-integer.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 179)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 184)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mAttribute_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 200)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 197)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 205))  COMMA_SOURCE_FILE ("type-integer.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 210)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 210)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 207)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 215))  COMMA_SOURCE_FILE ("type-integer.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 220)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 220)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 217)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 225))  COMMA_SOURCE_FILE ("type-integer.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 222)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 230)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 227)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 235)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 235)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 240)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 245)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 245)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 251))  COMMA_SOURCE_FILE ("type-integer.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 248)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 256)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 256)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 253)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 307)) ;
  GALGAS_lstring var_intLiteralOp = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 313))  COMMA_SOURCE_FILE ("type-integer.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 318))  COMMA_SOURCE_FILE ("type-integer.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 315)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 323)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 323)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 320)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 330)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 338)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 335)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 341)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 345))  COMMA_SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 350))  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 355))  COMMA_SOURCE_FILE ("type-integer.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 362)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 362)) ;
  }
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 359)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 367))  COMMA_SOURCE_FILE ("type-integer.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 372)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 372)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 377))  COMMA_SOURCE_FILE ("type-integer.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 382)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 387))  COMMA_SOURCE_FILE ("type-integer.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 392)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 392)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 389)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 394)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 402)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 402)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 399)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 407)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 407)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 413))  COMMA_SOURCE_FILE ("type-integer.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 410)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 418)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 418)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 415)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 508)) ;
  GALGAS_lstring var_intLiteralOp = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)), constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 514))  COMMA_SOURCE_FILE ("type-integer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 511)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 519))  COMMA_SOURCE_FILE ("type-integer.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 534)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 534)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 536)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 542)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 546))  COMMA_SOURCE_FILE ("type-integer.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 543)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 551))  COMMA_SOURCE_FILE ("type-integer.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 548)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 556))  COMMA_SOURCE_FILE ("type-integer.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 553)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 563)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 563)) ;
  }
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 560)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 568))  COMMA_SOURCE_FILE ("type-integer.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 565)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 573)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 573)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 570)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 578))  COMMA_SOURCE_FILE ("type-integer.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 575)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 580)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 588))  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 603)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 603)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 608)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 608)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 605)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 614))  COMMA_SOURCE_FILE ("type-integer.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 611)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 619)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 619)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 616)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                           GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_intIntOp = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)) ;
  ioArgument_ioContext.mAttribute_mLiteralIntegerType = var_selfTypeProxy ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 95))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 92)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 100))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 97)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 105))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 102)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 110))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 107)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 115))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 112)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 120))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 126))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 131))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 128)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 136))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 133)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 138)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 143)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 151))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 148)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 156))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 153)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 161))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 158)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 163)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 171))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 168)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 176))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 173)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 181))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 186))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 191))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 188)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 196))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 193)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 202))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 207))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 204)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const GALGAS_controlRegisterDeclarationListAST constinArgument_inRegisterDeclarationListAST,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterDeclarationListAST enumerator_5894 (constinArgument_inRegisterDeclarationListAST, kEnumeration_up) ;
  while (enumerator_5894.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_5894.current_mRegisterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 154)) ;
    GALGAS_uint var_registerBitCount ;
    switch (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 156)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_6124 = (const cEnumAssociatedValues_typeKind_integer *) (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 156)).unsafePointer ()) ;
        const GALGAS_uint extractedValue_bitCount = extractPtr_6124->mAssociatedValue3 ;
        var_registerBitCount = extractedValue_bitCount ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_0 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_0, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 160)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_1 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 162)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_2 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 164)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_3 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 166)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_4 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 168)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 170)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        GALGAS_location location_6 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 172)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        GALGAS_location location_7 (enumerator_5894.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 174)) ;
        var_registerBitCount.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_controlRegisterFieldMap var_registerFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 177)) ;
    GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap = GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 178)) ;
    GALGAS_controlRegisterFieldList var_controlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 179)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, enumerator_5894.current_mRegisterBitSliceList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 180)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterBitSliceList enumerator_7431 (enumerator_5894.current_mRegisterBitSliceList (HERE), kEnumeration_down) ;
      while (enumerator_7431.hasCurrentObject ()) {
        switch (enumerator_7431.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_7631 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_7431.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_count = extractPtr_7631->mAssociatedValue0 ;
            var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 185)) ;
            var_controlRegisterFieldList.addAssign_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 186)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_8619 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_7431.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_name = extractPtr_8619->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_count = extractPtr_8619->mAssociatedValue1 ;
            GALGAS_uint var_bitCount = extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 188)) ;
            var_controlRegisterFieldList.addAssign_operation (var_bitCount, extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 189)) ;
            {
            var_registerFieldMap.setter_insertKey (extractedValue_name, var_shiftCount, var_bitCount, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 190)) ;
            }
            GALGAS_controlRegisterBitSliceAccessMap var_registerSubMap = GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 195)) ;
            {
            var_registerSubMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shifted"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 197)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("declaration-control-register.galgas", 198)), var_shiftCount.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 199)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 200)), var_registerType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 196)) ;
            }
            {
            var_registerSubMap.setter_insertKey (GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 204)), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 204)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("declaration-control-register.galgas", 205)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 206)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 207)), ioArgument_ioContext.mAttribute_mBooleanType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 203)) ;
            }
            GALGAS_bigint var_mask = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)).left_shift_operation (var_shiftCount COMMA_SOURCE_FILE ("declaration-control-register.galgas", 210)) ;
            {
            var_registerBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 213)), var_mask, var_registerSubMap, var_registerType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
            }
            var_shiftCount = var_shiftCount.add_operation (var_bitCount, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
          }
          break ;
        }
        enumerator_7431.gotoNextObject () ;
      }
    }
    cEnumerator_controlRegisterNameList enumerator_8689 (enumerator_5894.current_mRegisterNameList (HERE), kEnumeration_up) ;
    while (enumerator_8689.hasCurrentObject ()) {
      GALGAS_bool var_isReadOnly = GALGAS_bool (false) ;
      GALGAS_bool var_isAccessibleInUserMode = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_8824 (enumerator_8689.current_mAttributeList (HERE), kEnumeration_up) ;
      while (enumerator_8824.hasCurrentObject ()) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_8824.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = var_isReadOnly.boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_location location_11 (enumerator_8824.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_11, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 230)) ;
          }else if (kBoolFalse == test_10) {
            var_isReadOnly = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_8824.current_mValue (HERE).mAttribute_string.objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 234)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            const enumGalgasBool test_13 = var_isAccessibleInUserMode.boolEnum () ;
            if (kBoolTrue == test_13) {
              GALGAS_location location_14 (enumerator_8824.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_14, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 236)) ;
            }else if (kBoolFalse == test_13) {
              var_isAccessibleInUserMode = GALGAS_bool (true) ;
            }
          }else if (kBoolFalse == test_12) {
            GALGAS_location location_15 (enumerator_8824.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_15, GALGAS_string ("only @ro attribute (read only) and @user (accessible un `user mode) are accepted here")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 241)) ;
          }
        }
        enumerator_8824.gotoNextObject () ;
      }
      {
      ioArgument_ioContext.mAttribute_mControlRegisterMap.setter_insertKey (enumerator_8689.current_mRegisterName (HERE), var_registerType, var_isReadOnly, var_isAccessibleInUserMode, var_registerBitSliceMap, var_registerFieldMap, enumerator_8689.current_mRegisterAddress (HERE).mAttribute_bigint, var_controlRegisterFieldList, var_registerBitCount, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 244)) ;
      }
      enumerator_8689.gotoNextObject () ;
    }
    enumerator_5894.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'controlRegistersSemanticAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_controlRegistersSemanticAnalysis (const GALGAS_controlRegisterDeclarationListAST constinArgument_inRegisterDeclarationListAST,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterDeclarationListAST enumerator_10351 (constinArgument_inRegisterDeclarationListAST, kEnumeration_up) ;
  while (enumerator_10351.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_10351.current_mRegisterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 270)) ;
    switch (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 271)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_0 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 272)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_1 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 273)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_11421 = (const cEnumAssociatedValues_typeKind_integer *) (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 271)).unsafePointer ()) ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_11421->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_size = extractPtr_11421->mAssociatedValue3 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_10351.current_mRegisterBitSliceList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 275)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = extractedValue_unsigned.operator_not (SOURCE_FILE ("declaration-control-register.galgas", 276)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the register type should be unsigned in order to define bit slices")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 277)) ;
          }
          GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_controlRegisterBitSliceList enumerator_10988 (enumerator_10351.current_mRegisterBitSliceList (HERE), kEnumeration_down) ;
          while (enumerator_10988.hasCurrentObject ()) {
            switch (enumerator_10988.current_mRegisterBitSlice (HERE).enumValue ()) {
            case GALGAS_controlRegisterBitSlice::kNotBuilt:
              break ;
            case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
              {
                const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_11129 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_10988.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
                const GALGAS_lbigint extractedValue_count = extractPtr_11129->mAssociatedValue0 ;
                var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)) ;
              }
              break ;
            case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
              {
                const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_11232 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_10988.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
                const GALGAS_lbigint extractedValue_count = extractPtr_11232->mAssociatedValue1 ;
                var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 285)) ;
              }
              break ;
            }
            enumerator_10988.gotoNextObject () ;
          }
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, extractedValue_size.objectCompare (var_shiftCount)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_location location_6 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_6, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_7 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 292)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_8 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_9 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 294)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_10 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("a literal integer type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 295)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        GALGAS_location location_11 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_11, GALGAS_string ("an opaque type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 296)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        GALGAS_location location_12 (enumerator_10351.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_12, GALGAS_string ("an array type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)) ;
      }
      break ;
    }
    GALGAS_bigint var_maxAddress = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 300)).left_shift_operation (constinArgument_inContext.mAttribute_mPointerSize COMMA_SOURCE_FILE ("declaration-control-register.galgas", 300)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 300)) ;
    cEnumerator_controlRegisterNameList enumerator_12146 (enumerator_10351.current_mRegisterNameList (HERE), kEnumeration_up) ;
    while (enumerator_12146.hasCurrentObject ()) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, enumerator_12146.current_mRegisterAddress (HERE).mAttribute_bigint.objectCompare (var_maxAddress)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_location location_14 (enumerator_12146.current_mRegisterAddress (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_14, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)) ;
      }
      {
      ioArgument_ioIntermediateCodeStruct.mAttribute_mControlRegisterMap.setter_insertKey (enumerator_12146.current_mRegisterName (HERE), enumerator_10351.current_mRegisterTypeName (HERE).mAttribute_string, enumerator_12146.current_mRegisterAddress (HERE).mAttribute_bigint, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 306)) ;
      }
      enumerator_12146.gotoNextObject () ;
    }
    enumerator_10351.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath = constinArgument_inSourceFile.mAttribute_string.add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    cEnumerator_controlRegisterMap enumerator_13309 (constinArgument_inControlRegisterMap, kEnumeration_up) ;
    while (enumerator_13309.hasCurrentObject ()) {
      var_firstLetterSet.addAssign_operation (enumerator_13309.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 328))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
      enumerator_13309.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_13498 (constinArgument_inControlRegisterMap, kEnumeration_up) ;
    while (enumerator_13498.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter.objectCompare (enumerator_13498.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 333)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter = enumerator_13498.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 334)) ;
        var_tableOfTypeString.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 335)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)).add_operation (var_currentFirstLetter.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)) ;
      }
      var_tableOfTypeString.plusAssign_operation(function_linkForControlRegister (enumerator_13498.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 337)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 337)) ;
      enumerator_13498.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mAttribute_string.getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 340)), constinArgument_inControlRegisterMap, var_firstLetterSet, var_tableOfTypeString COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339))) ;
    GALGAS_bool joker_14147 ; // Joker input parameter
    var_typeDumpString.method_writeToFileWhenDifferentContents (var_typeDumpFilePath, joker_14147, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 347)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_MAP.getter_count (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1211_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1211 (in_FIRST_5F_LETTER_5F_SET, kEnumeration_up) ;
    while (enumerator_1211.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1211.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_uint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).stringValue () ;
      result << "\">" ;
      result << enumerator_1211.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1211.hasNextObject ()) {
        result << " - " ;
      }
      index_1211_.increment () ;
      enumerator_1211.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1588_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_MAP.isValid ()) {
    cEnumerator_controlRegisterMap enumerator_1588 (in_CONTROL_5F_REGISTER_5F_MAP, kEnumeration_up) ;
    while (enumerator_1588.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
      result << "\">" ;
      result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
      result << "</a></td><td class=\"address\">$" ;
      result << enumerator_1588.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 81)).stringValue () ;
      result << "</td><td class=\"address\">" ;
      result << enumerator_1588.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 81)).stringValue () ;
      result << "</td><td>" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_1588.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 82)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "<table class=\"fields\"><tr>" ;
        result << function_fieldIndexColumns (enumerator_1588.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 84)).stringValue () ;
        result << "</tr><tr>" ;
        GALGAS_uint index_1959_ (0) ;
        if (enumerator_1588.current_mControlRegisterFieldList (HERE).isValid ()) {
          cEnumerator_controlRegisterFieldList enumerator_1959 (enumerator_1588.current_mControlRegisterFieldList (HERE), kEnumeration_down) ;
          while (enumerator_1959.hasCurrentObject ()) {
            result << "<td class=\"fields\" colspan=\"" ;
            result << enumerator_1959.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 87)).stringValue () ;
            result << "\">" ;
            result << enumerator_1959.current_mFieldName (HERE).stringValue () ;
            result << "</td>" ;
            index_1959_.increment () ;
            enumerator_1959.gotoNextObject () ;
          }
        }
        result << "</tr></table>" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "</td></tr>\n" ;
      index_1588_.increment () ;
      enumerator_1588.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForControlRegister (const GALGAS_string & constinArgument_inControlRegisterName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForControlRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForControlRegister (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForControlRegister (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForControlRegister ("linkForControlRegister",
                                                                        functionWithGenericHeader_linkForControlRegister,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_linkForControlRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_15198 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 373))), kEnumeration_down) ;
  while (enumerator_15198.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_15198.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 374)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 374)) ;
    enumerator_15198.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath = constinArgument_inSourceFile.mAttribute_string.add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 170)) ;
    cEnumerator_globalConstantMap enumerator_7381 (inArgument_inGlobalConstantMap, kEnumeration_up) ;
    while (enumerator_7381.hasCurrentObject ()) {
      var_firstLetterSet.addAssign_operation (enumerator_7381.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 172)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 172))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 172)) ;
      enumerator_7381.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7569 (inArgument_inGlobalConstantMap, kEnumeration_up) ;
    while (enumerator_7569.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter.objectCompare (enumerator_7569.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter = enumerator_7569.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 178)) ;
        var_tableOfTypeString.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 179)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)).add_operation (var_currentFirstLetter.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)) ;
      }
      var_tableOfTypeString.plusAssign_operation(function_linkForGlobalConstant (enumerator_7569.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)) ;
      enumerator_7569.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mAttribute_string.getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 184)), inArgument_inGlobalConstantMap, var_firstLetterSet, var_tableOfTypeString COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 183))) ;
    GALGAS_bool joker_8209 ; // Joker input parameter
    var_typeDumpString.method_writeToFileWhenDifferentContents (var_typeDumpFilePath, joker_8209, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 189)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 191)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Global Constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined global constants, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1005_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1005 (in_FIRST_5F_LETTER_5F_SET, kEnumeration_up) ;
    while (enumerator_1005.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1005.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1005.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1005.hasNextObject ()) {
        result << " - " ;
      }
      index_1005_.increment () ;
      enumerator_1005.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">V"
    "alue</td></tr>\n" ;
  GALGAS_uint index_1375_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1375 (in_GLOBAL_5F_CONSTANT_5F_MAP, kEnumeration_up) ;
    while (enumerator_1375.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1375.current_lkey (HERE).mAttribute_string.stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).mAttribute_string.stringValue () ;
      result << "</a></td><td>$" ;
      result << enumerator_1375.current_mValue (HERE).mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << enumerator_1375.current_mValue (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1375_.increment () ;
      enumerator_1375.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 210)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 210)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 210)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 210)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* §§ inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'panicModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("panic") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                   const GALGAS_lbigint constinArgument_inPriority,
                                   const GALGAS_stringset constinArgument_inModeSet,
                                   const GALGAS__32_lstringlist constinArgument_inRequiredByProcList,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 138)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 141)).operator_not (SOURCE_FILE ("declaration-init.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, var_routineNameForInvocationGraph, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 142)) ;
    }
  }
  cEnumerator__32_lstringlist enumerator_6031 (constinArgument_inRequiredByProcList, kEnumeration_up) ;
  while (enumerator_6031.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_6031.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 148)) ;
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (function_procNameForInvocationGraph (var_t, enumerator_6031.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 150)), var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("declaration-init.galgas", 149)) ;
    }
    enumerator_6031.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-init.galgas", 159)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 155)) ;
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 164)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 165)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 166)) ;
  extensionMethod_deinitTopLevelVariables (var_variableMap, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 181)) ;
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 182)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      const GALGAS_location constinArgument_inEndOfSourceFile,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredProcedureDeclarationListAST enumerator_1882 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_1882.hasCurrentObject ()) {
    GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 43)), enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 43)) ;
    const enumGalgasBool test_0 = constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.getter_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 44)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 44)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s = GALGAS_string ("the '").add_operation (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 45)).add_operation (GALGAS_string ("' should be defined as: proc"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 45)) ;
      cEnumerator_lstringlist enumerator_2227 (enumerator_1882.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_2227.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_2227.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 47)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 47)) ;
        enumerator_2227.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 49)) ;
      cEnumerator_procFormalArgumentList enumerator_2372 (enumerator_1882.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_2372.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 51)) ;
        switch (enumerator_2372.current (HERE).mAttribute_mFormalArgumentPassingMode.enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            var_s.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 53)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            var_s.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 54)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            var_s.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 55)) ;
          }
          break ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2372.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_s.plusAssign_operation(enumerator_2372.current (HERE).mAttribute_mSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 58)) ;
        }
        var_s.plusAssign_operation(enumerator_2372.current (HERE).mAttribute_mFormalArgumentTypeName.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 60)) ;
        enumerator_2372.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_modeMap var_procModes ;
      GALGAS_bool joker_2811 ; // Joker input parameter
      GALGAS_procedureSignature joker_2829_7 ; // Joker input parameter
      GALGAS_routineKind joker_2829_6 ; // Joker input parameter
      GALGAS_bool joker_2829_5 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_proxy joker_2829_4 ; // Joker input parameter
      GALGAS_bool joker_2829_3 ; // Joker input parameter
      GALGAS_bool joker_2829_2 ; // Joker input parameter
      GALGAS_bool joker_2829_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.method_searchKey (var_lkey, joker_2811, var_procModes, joker_2829_7, joker_2829_6, joker_2829_5, joker_2829_4, joker_2829_3, joker_2829_2, joker_2829_1, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      GALGAS_stringset var_actualProcModeSet = var_procModes.getter_keySet (SOURCE_FILE ("declaration-required-proc.galgas", 65)) ;
      GALGAS_stringset var_requiredProcModeSet = GALGAS_stringset::constructor_setWithLStringList (enumerator_1882.current (HERE).mAttribute_mProcedureModeList  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_actualProcModeSet.objectCompare (var_requiredProcModeSet)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("required modes:") ;
        cEnumerator_stringset enumerator_3108 (var_requiredProcModeSet, kEnumeration_up) ;
        while (enumerator_3108.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_3108.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 70)) ;
          enumerator_3108.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.getter_locationForKey (var_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 72)), var_s  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 72)) ;
      }
    }
    enumerator_1882.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateSectionDispatcher'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS__32_stringlist constinArgument_inSectionList,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_8376 (constinArgument_inSectionList, kEnumeration_up) ;
  GALGAS_uint index_8329 ((uint32_t) 0) ;
  while (enumerator_8376.hasCurrentObject ()) {
    GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 214)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_8376.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 215)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_8329.getter_string (SOURCE_FILE ("declaration-section.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 216)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 217)) ;
    enumerator_8376.gotoNextObject () ;
    index_8329.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 213)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 219)) ;
  cEnumerator__32_stringlist enumerator_8821 (constinArgument_inSectionList, kEnumeration_up) ;
  GALGAS_uint index_8781 ((uint32_t) 0) ;
  while (enumerator_8821.hasCurrentObject ()) {
    GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 221)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_8821.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 222)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_8781.getter_string (SOURCE_FILE ("declaration-section.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 223)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 224)) ;
    enumerator_8821.gotoNextObject () ;
    index_8781.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 220)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 226)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateServiceDispatcher'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS__32_stringlist constinArgument_inServiceList,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_8520 (constinArgument_inServiceList, kEnumeration_up) ;
  GALGAS_uint index_8490 ((uint32_t) 0) ;
  while (enumerator_8520.hasCurrentObject ()) {
    GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 211)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_8520.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 212)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_8490.getter_string (SOURCE_FILE ("declaration-service.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 213)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 214)) ;
    enumerator_8520.gotoNextObject () ;
    index_8490.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 210)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 216)) ;
  cEnumerator__32_stringlist enumerator_8965 (constinArgument_inServiceList, kEnumeration_up) ;
  GALGAS_uint index_8925 ((uint32_t) 0) ;
  while (enumerator_8965.hasCurrentObject ()) {
    GALGAS_string var_s = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 218)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_8965.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 219)) ;
    var_s = var_s.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_8925.getter_string (SOURCE_FILE ("declaration-service.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 220)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 221)) ;
    enumerator_8965.gotoNextObject () ;
    index_8925.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 217)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 223)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_procFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                    const GALGAS_guardKind constinArgument_inGuardKind,
                                    const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                    const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                    const GALGAS_bool constinArgument_inWarnIfUnused,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineNameForInvocationGraph = function_guardNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 166)) ;
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("declaration-guard.galgas", 167)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 167)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 168)) ;
    }
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_noAccess (SOURCE_FILE ("declaration-guard.galgas", 178)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 174)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 182)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR ;
  GALGAS_allocaList var_allocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 184)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 185)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 189)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 189)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 190)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 190)) ;
      var_allocaList.addAssign_operation (var_resultVarName.mAttribute_string, var_resultType  COMMA_SOURCE_FILE ("declaration-guard.galgas", 191)) ;
      {
      var_variableMap.setter_insertOutputFormalArgument (var_resultVarName, var_resultType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_resultType, var_resultVarName.mAttribute_string  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("declaration-guard.galgas", 198)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 203)) ;
      }
      var_convenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 209)) ;
      GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 217)) ;
      temp_1.addAssign_operation (function_guardModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 217))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 217)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph, constinArgument_inContext, temp_1, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_allocaList, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9961 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_abstractCallInstructionAST extractedValue_baseGuardInstruction = extractPtr_9961->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 227)) ;
      }
      GALGAS_instructionListIR var_baseGuardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 234)) ;
      GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 239)) ;
      temp_2.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 239))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 239)) ;
      callExtensionMethod_baseGuardAnalyze ((const cPtr_abstractCallInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_routineNameForInvocationGraph, constinArgument_inContext, temp_2, var_allocaList, var_instructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_convenienceGuardGenerationIR, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 235)) ;
      GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 254)) ;
      temp_3.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph, constinArgument_inContext, temp_3, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_allocaList, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    break ;
  }
  extensionMethod_deinitTopLevelVariables (var_variableMap, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 265)) ;
  GALGAS_lstring temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 268)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 269)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 269)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)) ;
  }
  GALGAS_lstring var_guardMangledName = temp_4 ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.setter_insertKey (var_guardMangledName, var_formalArguments, var_convenienceGuardGenerationIR, var_allocaList, var_instructionGenerationList, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'standaloneBaseGuardAnalyze'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_standaloneBaseGuardAnalyze (const GALGAS_lstring constinArgument_inRoutineName,
                                         const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                         GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineMangledName = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 310)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 310)) ;
  GALGAS_bool var_isPublic ;
  GALGAS_procedureSignature var_formalSignature ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (var_routineMangledName, var_isPublic, var_formalSignature, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 311)) ;
  const enumGalgasBool test_0 = var_isPublic.operator_not (SOURCE_FILE ("declaration-guard.galgas", 317)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_declarationFile = constinArgument_inContext.mAttribute_mGuardMapForContext.getter_locationForKey (var_routineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 318)).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 318)) ;
    GALGAS_string var_invocationFile = constinArgument_inRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 319)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_invocationFile.objectCompare (var_declarationFile)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (constinArgument_inRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 321)) ;
    }
  }
  GALGAS_lstring var_routineNameForInvocationGraph = function_guardNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 325)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("declaration-guard.galgas", 326)) ;
  }
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 328)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 329)) ;
  GALGAS_allocaList var_baseGuardAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 330)) ;
  {
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  temp_3.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, temp_3, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_effectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 331)) ;
  }
  outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_routineMangledName.mAttribute_string, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("declaration-guard.galgas", 350)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap function_getInfixOperatorMap (const GALGAS_infixOperator & constinArgument_inOp,
                                                      const GALGAS_semanticContext & constinArgument_inContext,
                                                      const GALGAS_stringset & constinArgument_inModeSet,
                                                      const GALGAS_location & constinArgument_inOperatorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result_outOperatorMap ; // Returned variable
  switch (constinArgument_inOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mBooleanXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 218)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 219)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 219))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 219)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_1) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_2 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 230)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 230))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 230)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_3) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_4 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 241)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 241))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 241)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_6 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 251)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 251)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 252)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 252))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 252)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_7) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_7) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_8 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 262)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 262)).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 263)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 263))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 263)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_9) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
    }
    break ;
  }
//---
  return result_outOperatorMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_getInfixOperatorMap [5] = {
  & kTypeDescriptor_GALGAS_infixOperator,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_stringset,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getInfixOperatorMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_infixOperator operand0 = GALGAS_infixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                             inCompiler
                                                                             COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_stringset operand2 = GALGAS_stringset::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                     inCompiler
                                                                     COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_getInfixOperatorMap (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getInfixOperatorMap ("getInfixOperatorMap",
                                                                     functionWithGenericHeader_getInfixOperatorMap,
                                                                     & kTypeDescriptor_GALGAS_infixOperatorMap,
                                                                     4,
                                                                     functionArgs_getInfixOperatorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'analyzeVariableAccess'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableAccess (const GALGAS_accessList constinArgument_inAccessList,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                    const GALGAS_bool constinArgument_inGuard,
                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    const GALGAS_stringset constinArgument_inModeSet,
                                    const GALGAS_bool constinArgument_inAllowPanic,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  GALGAS_accessList var_accessList = constinArgument_inAccessList ;
  GALGAS_lstring var_baseName ;
  GALGAS_arrayElementAccess var_baseElementArrayAccess ;
  {
  var_accessList.setter_popFirst (var_baseName, var_baseElementArrayAccess, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 93)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_objectInMemoryIR var_sourcePtr ;
  {
  GALGAS_bool joker_4374_1 ; // Joker input parameter
  GALGAS_bool joker_4432_4 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_4432_3 ; // Joker input parameter
  GALGAS_bool joker_4432_2 ; // Joker input parameter
  GALGAS_bool joker_4432_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (var_baseName, var_type, joker_4374_1, var_sourcePtr, joker_4432_4, joker_4432_3, joker_4432_2, joker_4432_1, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 95)) ;
  }
  GALGAS_elementPtrList var_elementPtrList = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-access.galgas", 103)) ;
  {
  routine_analyzeArrayElementAccess (var_baseElementArrayAccess, var_type, var_elementPtrList, var_baseName.mAttribute_location, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 104)) ;
  }
  GALGAS_bool var_publicIsRequired = GALGAS_bool (false) ;
  cEnumerator_accessList enumerator_5162 (var_accessList, kEnumeration_up) ;
  while (enumerator_5162.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 125)).getter_isStructure (SOURCE_FILE ("rule-access.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyMap var_propertyMap ;
      GALGAS_propertyList joker_5276 ; // Joker input parameter
      var_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 126)).method_structure (var_propertyMap, joker_5276, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 126)) ;
      GALGAS_bool var_public ;
      GALGAS_uint var_index ;
      var_propertyMap.method_searchKey (enumerator_5162.current_mName (HERE), var_public, var_type, var_index, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 127)) ;
      GALGAS_bool test_1 = var_publicIsRequired ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_public.operator_not (SOURCE_FILE ("rule-access.galgas", 128)) ;
      }
      const enumGalgasBool test_2 = test_1.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_5162.current_mName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("this field is not public")  COMMA_SOURCE_FILE ("rule-access.galgas", 129)) ;
      }
      GALGAS_elementPtrList temp_4 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-access.galgas", 131)) ;
      temp_4.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_index  COMMA_SOURCE_FILE ("rule-access.galgas", 131)), GALGAS_string (".").add_operation (enumerator_5162.current_mName (HERE).getter_string (SOURCE_FILE ("rule-access.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 131))  COMMA_SOURCE_FILE ("rule-access.galgas", 131)) ;
      var_elementPtrList.plusAssign_operation(temp_4, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 131)) ;
      var_publicIsRequired = GALGAS_bool (true) ;
      {
      routine_analyzeArrayElementAccess (enumerator_5162.current_mArrayAccess (HERE), var_type, var_elementPtrList, enumerator_5162.current_mName (HERE).mAttribute_location, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 133)) ;
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_5 (enumerator_5162.current_mName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the field type is not a structure")  COMMA_SOURCE_FILE ("rule-access.galgas", 152)) ;
      var_type.drop () ; // Release error dropped variable
    }
    enumerator_5162.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_elementPtrList.getter_length (SOURCE_FILE ("rule-access.galgas", 155)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    outArgument_outResultPtr = var_sourcePtr ;
  }else if (kBoolFalse == test_6) {
    {
    routine_getLocalNameOfNewTempObjectInMemory (var_type, ioArgument_ioTemporaries, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 158)) ;
    }
    {
    extensionSetter_appendGetElementPtr (ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, var_sourcePtr, var_elementPtrList, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 159)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeVariableWriteAccess'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableWriteAccess (const GALGAS_accessList constinArgument_inAccessList,
                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                         const GALGAS_bool constinArgument_inGuard,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_stringset constinArgument_inModeSet,
                                         const GALGAS_bool constinArgument_inAllowPanic,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  {
  routine_analyzeVariableAccess (constinArgument_inAccessList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 185)) ;
  }
  GALGAS_lstring var_baseName ;
  GALGAS_arrayElementAccess var_baseElementArrayAccess ;
  constinArgument_inAccessList.method_first (var_baseName, var_baseElementArrayAccess, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 202)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_bool var_isCopyable ;
  GALGAS_bool var_isConstant ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("rule-access.galgas", 207)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsEqual, var_baseElementArrayAccess.objectCompare (GALGAS_arrayElementAccess::constructor_noAccess (SOURCE_FILE ("rule-access.galgas", 207)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_8276_1 ; // Joker input parameter
    GALGAS_objectInMemoryIR joker_8327_1 ; // Joker input parameter
    GALGAS_controlRegisterBitSliceAccessMap joker_8364_2 ; // Joker input parameter
    GALGAS_bool joker_8364_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (var_baseName, joker_8276_1, var_accessIsAllowed, joker_8327_1, var_isCopyable, joker_8364_2, joker_8364_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 208)) ;
    }
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_8483_1 ; // Joker input parameter
    GALGAS_objectInMemoryIR joker_8534_1 ; // Joker input parameter
    GALGAS_controlRegisterBitSliceAccessMap joker_8571_2 ; // Joker input parameter
    GALGAS_bool joker_8571_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (var_baseName, joker_8483_1, var_accessIsAllowed, joker_8534_1, var_isCopyable, joker_8571_2, joker_8571_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 218)) ;
    }
  }
  const enumGalgasBool test_2 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (var_baseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("rule-access.galgas", 229)) ;
  }
  const enumGalgasBool test_4 = var_accessIsAllowed.operator_not (SOURCE_FILE ("rule-access.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (var_baseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("rule-access.galgas", 232)) ;
  }
  const enumGalgasBool test_6 = var_isCopyable.operator_not (SOURCE_FILE ("rule-access.galgas", 234)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (var_baseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("an $").add_operation (extensionGetter_type (outArgument_outResultPtr, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 235)).getter_key (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 235)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 235))  COMMA_SOURCE_FILE ("rule-access.galgas", 235)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeVariableReadWriteAccess'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableReadWriteAccess (const GALGAS_accessList constinArgument_inAccessList,
                                             const GALGAS_bool constinArgument_inRequiresCopy,
                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_stringset constinArgument_inModeSet,
                                             const GALGAS_bool constinArgument_inAllowPanic,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                             GALGAS_string & outArgument_outBaseGlobalVariableName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  outArgument_outBaseGlobalVariableName.drop () ; // Release 'out' argument
  {
  routine_analyzeVariableAccess (constinArgument_inAccessList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 259)) ;
  }
  GALGAS_lstring var_baseName ;
  GALGAS_arrayElementAccess joker_10525 ; // Joker input parameter
  constinArgument_inAccessList.method_first (var_baseName, joker_10525, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 276)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_variableKind ;
  GALGAS_bool var_isCopyable ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_10637_1 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_10770_2 ; // Joker input parameter
  GALGAS_bool joker_10770_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (var_baseName, joker_10637_1, var_accessIsAllowed, var_variableKind, var_isCopyable, joker_10770_2, joker_10770_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 278)) ;
  }
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_variableKind.getter_isGlobalVariable (SOURCE_FILE ("rule-access.galgas", 287)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = var_baseName.mAttribute_string ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  outArgument_outBaseGlobalVariableName = temp_0 ;
  const enumGalgasBool test_2 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (var_baseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("rule-access.galgas", 289)) ;
  }
  const enumGalgasBool test_4 = var_accessIsAllowed.operator_not (SOURCE_FILE ("rule-access.galgas", 291)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (var_baseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("rule-access.galgas", 292)) ;
  }
  GALGAS_bool test_6 = constinArgument_inRequiresCopy ;
  if (kBoolTrue == test_6.boolEnum ()) {
    test_6 = var_isCopyable.operator_not (SOURCE_FILE ("rule-access.galgas", 294)) ;
  }
  const enumGalgasBool test_7 = test_6.boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (var_baseName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_8, GALGAS_string ("an $").add_operation (extensionGetter_type (outArgument_outResultPtr, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 295)).getter_key (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 295)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 295))  COMMA_SOURCE_FILE ("rule-access.galgas", 295)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeSelfAccess'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSelfAccess (const GALGAS_fieldList constinArgument_inFieldList,
                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                const GALGAS_bool constinArgument_inGuard,
                                const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                const GALGAS_semanticContext constinArgument_inContext,
                                const GALGAS_stringset constinArgument_inModeSet,
                                const GALGAS_bool constinArgument_inAllowPanic,
                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_type = constinArgument_inSelfType ;
  GALGAS_elementPtrList var_elementPtrList = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 102)) ;
  GALGAS_bool var_publicIsRequired = GALGAS_bool (false) ;
  cEnumerator_fieldList enumerator_4535 (constinArgument_inFieldList, kEnumeration_up) ;
  while (enumerator_4535.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 105)).getter_isStructure (SOURCE_FILE ("rule-self-access.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyMap var_propertyMap ;
      GALGAS_propertyList joker_4649 ; // Joker input parameter
      var_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 106)).method_structure (var_propertyMap, joker_4649, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 106)) ;
      GALGAS_bool var_public ;
      GALGAS_uint var_index ;
      var_propertyMap.method_searchKey (enumerator_4535.current_mFieldName (HERE), var_public, var_type, var_index, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 107)) ;
      GALGAS_bool test_1 = var_publicIsRequired ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_public.operator_not (SOURCE_FILE ("rule-self-access.galgas", 108)) ;
      }
      const enumGalgasBool test_2 = test_1.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_4535.current_mFieldName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("this field is not public")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 109)) ;
      }
      GALGAS_elementPtrList temp_4 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 111)) ;
      temp_4.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_index  COMMA_SOURCE_FILE ("rule-self-access.galgas", 111)), GALGAS_string (".").add_operation (enumerator_4535.current_mFieldName (HERE).getter_string (SOURCE_FILE ("rule-self-access.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 111))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 111)) ;
      var_elementPtrList.plusAssign_operation(temp_4, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 111)) ;
      var_publicIsRequired = GALGAS_bool (true) ;
      {
      routine_analyzeArrayElementAccess (enumerator_4535.current_mArrayAccess (HERE), var_type, var_elementPtrList, enumerator_4535.current_mFieldName (HERE).mAttribute_location, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 113)) ;
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_5 (enumerator_4535.current_mFieldName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the field type is not a structure")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 132)) ;
      var_type.drop () ; // Release error dropped variable
    }
    enumerator_4535.gotoNextObject () ;
  }
  {
  routine_getLocalNameOfNewTempObjectInMemory (var_type, ioArgument_ioTemporaries, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 135)) ;
  }
  {
  extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, constinArgument_inSelfType, var_elementPtrList, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 136)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'analyzeArrayElementAccess'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeArrayElementAccess (const GALGAS_arrayElementAccess constinArgument_inArrayElementAccess,
                                        GALGAS_unifiedTypeMap_2D_proxy & ioArgument_ioType,
                                        GALGAS_elementPtrList & ioArgument_ioElementPtrList,
                                        const GALGAS_location constinArgument_inErrorLocation,
                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                        const GALGAS_bool constinArgument_inGuard,
                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                        const GALGAS_semanticContext constinArgument_inContext,
                                        const GALGAS_stringset constinArgument_inModeSet,
                                        const GALGAS_bool constinArgument_inAllowPanic,
                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inArrayElementAccess.enumValue ()) {
  case GALGAS_arrayElementAccess::kNotBuilt:
    break ;
  case GALGAS_arrayElementAccess::kEnum_noAccess:
    {
    }
    break ;
  case GALGAS_arrayElementAccess::kEnum_access:
    {
      const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_8672 = (const cEnumAssociatedValues_arrayElementAccess_access *) (constinArgument_inArrayElementAccess.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_8672->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfExp = extractPtr_8672->mAssociatedValue1 ;
      GALGAS_bigint var_arraySize ;
      const enumGalgasBool test_0 = ioArgument_ioType.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 167)).getter_isArrayType (SOURCE_FILE ("rule-self-access.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioType.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 168)).method_arrayType (ioArgument_ioType, var_arraySize, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 168)) ;
      }else if (kBoolFalse == test_0) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this variable should be an array")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 170)) ;
        var_arraySize.drop () ; // Release error dropped variable
      }
      GALGAS_operandIR var_indexResult ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("rule-self-access.galgas", 177)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 172)) ;
      const enumGalgasBool test_1 = var_indexResult.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("rule-self-access.galgas", 188)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_bigint var_indexValue ;
        var_indexResult.mAttribute_mValue.method_literalInteger (var_indexValue, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 189)) ;
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictInf, var_indexValue.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 190)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_indexValue.objectCompare (var_arraySize)) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize.getter_string (SOURCE_FILE ("rule-self-access.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 191))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 191)) ;
          ioArgument_ioElementPtrList.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          GALGAS_elementPtrList temp_4 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 193)) ;
          temp_4.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_indexValue.getter_uint (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 193))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 193)), GALGAS_string ("[").add_operation (var_indexValue.getter_string (SOURCE_FILE ("rule-self-access.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 193)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 193))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 193)) ;
          ioArgument_ioElementPtrList.plusAssign_operation(temp_4, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 193)) ;
        }
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_5 = var_indexResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 195)).getter_isInteger (SOURCE_FILE ("rule-self-access.galgas", 195)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("rule-self-access.galgas", 196)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_bool var_generatePanicInstruction ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult, extractedValue_endOfExp, var_arraySize, var_generatePanicInstruction, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 197)) ;
            }
            GALGAS_bool test_7 = var_generatePanicInstruction ;
            if (kBoolTrue == test_7.boolEnum ()) {
              test_7 = constinArgument_inAllowPanic.operator_not (SOURCE_FILE ("rule-self-access.galgas", 198)) ;
            }
            const enumGalgasBool test_8 = test_7.boolEnum () ;
            if (kBoolTrue == test_8) {
              inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("index computation can generated panic")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 199)) ;
              ioArgument_ioElementPtrList.drop () ; // Release error dropped variable
            }
          }
          GALGAS_string var_name = extensionGetter_name (var_indexResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 202)) ;
          GALGAS_elementPtrList temp_9 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 203)) ;
          temp_9.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_indirect (var_indexResult  COMMA_SOURCE_FILE ("rule-self-access.galgas", 203)), GALGAS_string ("[").add_operation (var_name, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 203)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 203))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 203)) ;
          ioArgument_ioElementPtrList.plusAssign_operation(temp_9, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 203)) ;
        }else if (kBoolFalse == test_5) {
          inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("index expression is not an integer")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 205)) ;
          ioArgument_ioElementPtrList.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeGuardCall (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                               const GALGAS_lstring constinArgument_inReceiverName,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_stringset constinArgument_inRequiredModeSet,
                               const GALGAS_bool constinArgument_inAllowPanic,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_variableMap & ioArgument_ioVariableMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 344)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectInMemoryIR var_variableKind ;
    {
    GALGAS_bool joker_14388_1 ; // Joker input parameter
    GALGAS_bool joker_14449_4 ; // Joker input parameter
    GALGAS_controlRegisterBitSliceAccessMap joker_14449_3 ; // Joker input parameter
    GALGAS_bool joker_14449_2 ; // Joker input parameter
    GALGAS_bool joker_14449_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadAccess (constinArgument_inReceiverName, var_receiverType, joker_14388_1, var_variableKind, joker_14449_4, joker_14449_3, joker_14449_2, joker_14449_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 347)) ;
    }
    outArgument_outGuardMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)).add_operation (constinArgument_inGuardName.getter_string (SOURCE_FILE ("instruction-sync.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)), constinArgument_inGuardName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 355)), extensionGetter_address (var_variableKind, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 355))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 355)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (constinArgument_inGuardName.getter_string (SOURCE_FILE ("instruction-sync.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 357)), constinArgument_inGuardName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-sync.galgas", 357)) ;
    var_receiverType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 358)) ;
  }
  GALGAS_bool var_isPublic ;
  GALGAS_procedureSignature var_formalSignature ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (outArgument_outGuardMangledName, var_isPublic, var_formalSignature, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 360)) ;
  const enumGalgasBool test_1 = var_isPublic.operator_not (SOURCE_FILE ("instruction-sync.galgas", 366)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile = constinArgument_inContext.mAttribute_mGuardMapForContext.getter_locationForKey (outArgument_outGuardMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 368)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 368)) ;
      GALGAS_string var_invocationFile = constinArgument_inGuardName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 369)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile.objectCompare (var_declarationFile)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (constinArgument_inGuardName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 371)) ;
      }
    }else if (kBoolFalse == test_2) {
      GALGAS_location location_5 (constinArgument_inGuardName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 374)) ;
    }
  }
  GALGAS_lstring var_routineNameForInvocationGraph = function_guardNameForInvocationGraph (var_receiverType, constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 378)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("instruction-sync.galgas", 379)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.mAttribute_location, var_routineNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 381)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeStandaloneRoutineCall'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeStandaloneRoutineCall (const GALGAS_lstring constinArgument_inRoutineName,
                                           const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           const GALGAS_stringset constinArgument_inRequiredModeSet,
                                           const GALGAS_bool constinArgument_inAllowPanic,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR ;
  GALGAS_routineKindIR var_routineKindIR ;
  GALGAS_lstring var_routineMangledName ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_bool var_appendFileAndLineArgumentForPanicLocation ;
  {
  routine_analyzeRoutineCall (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)), constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR, var_routineKindIR, var_routineMangledName, var_returnedType, var_appendFileAndLineArgumentForPanicLocation, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 190)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot be called in instruction: return value")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (GALGAS_string::makeEmptyString (), var_routineMangledName, var_routineKindIR, var_effectiveParameterListIR, var_appendFileAndLineArgumentForPanicLocation  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineCall'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineCall (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                 const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                 const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                 const GALGAS_lstring constinArgument_inReceiverName,
                                 const GALGAS_lstring constinArgument_inRoutineName,
                                 const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                 const GALGAS_semanticContext constinArgument_inContext,
                                 const GALGAS_stringset constinArgument_inRequiredModeSet,
                                 const GALGAS_bool constinArgument_inAllowPanic,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                 GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                 GALGAS_routineKindIR & outArgument_outRoutineKindIR,
                                 GALGAS_lstring & outArgument_outRoutineMangledName,
                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                 GALGAS_bool & outArgument_outAppendFileAndLineArgumentForPanicLocation,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outAppendFileAndLineArgumentForPanicLocation.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 358)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectInMemoryIR var_variableKind ;
    {
    GALGAS_bool joker_15099_1 ; // Joker input parameter
    GALGAS_bool joker_15160_4 ; // Joker input parameter
    GALGAS_controlRegisterBitSliceAccessMap joker_15160_3 ; // Joker input parameter
    GALGAS_bool joker_15160_2 ; // Joker input parameter
    GALGAS_bool joker_15160_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadAccess (constinArgument_inReceiverName, var_receiverType, joker_15099_1, var_variableKind, joker_15160_4, joker_15160_3, joker_15160_2, joker_15160_1, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 361)) ;
    }
    outArgument_outRoutineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 368)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 368)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 368)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 368)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 369)), extensionGetter_address (var_variableKind, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 369))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 369)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outRoutineMangledName = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 371)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 371)) ;
    var_receiverType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 372)) ;
  }
  GALGAS_bool var_isPublic ;
  GALGAS_modeMap var_modeMap ;
  GALGAS_procedureSignature var_formalSignature ;
  GALGAS_routineKind var_routineKind ;
  GALGAS_bool var_canMutateProperties ;
  GALGAS_bool var_canAccessPropertiesInUserMode ;
  GALGAS_bool joker_15697 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (outArgument_outRoutineMangledName, var_isPublic, var_modeMap, var_formalSignature, var_routineKind, joker_15697, outArgument_outReturnedType, outArgument_outAppendFileAndLineArgumentForPanicLocation, var_canMutateProperties, var_canAccessPropertiesInUserMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 374)) ;
  const enumGalgasBool test_1 = var_isPublic.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 387)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile = constinArgument_inContext.mAttribute_mRoutineMapForContext.getter_locationForKey (outArgument_outRoutineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 389)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 389)) ;
      GALGAS_string var_invocationFile = constinArgument_inRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 390)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile.objectCompare (var_declarationFile)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (constinArgument_inRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 392)) ;
      }
    }else if (kBoolFalse == test_2) {
      GALGAS_location location_5 (constinArgument_inRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 395)) ;
    }
  }
  GALGAS_lstring var_routineNameForInvocationGraph ;
  switch (var_routineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineNameForInvocationGraph = function_procNameForInvocationGraph (var_receiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 402)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineNameForInvocationGraph = function_sectionNameForInvocationGraph (var_receiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 404)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineNameForInvocationGraph = function_serviceNameForInvocationGraph (var_receiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 406)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineNameForInvocationGraph = function_primitiveNameForInvocationGraph (var_receiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 408)) ;
    }
    break ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 410)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap.getter_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 414)), var_routineKind, constinArgument_inRoutineName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 412)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 419)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                         const GALGAS_procedureSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_stringset constinArgument_inRequiredModeSet,
                                         const GALGAS_bool constinArgument_inAllowPanic,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 460)) ;
  cEnumerator_procedureSignature enumerator_19094 (constinArgument_inFormalSignature, kEnumeration_up) ;
  cEnumerator_effectiveParameterListAST enumerator_19137 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_19094.hasCurrentObject () && enumerator_19137.hasCurrentObject ()) {
    switch (enumerator_19137.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_20498 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_19137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_20498->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_20498->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_20498->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_19094.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 467)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type = temp_0 ;
        GALGAS_string var_varLLVMName = extractedValue_name.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 469)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 469)) ;
        ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 470)) ;
        GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_type, var_varLLVMName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 471)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_name, var_type, GALGAS_bool (true), var_targetVar, GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 479)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 473)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (extractedValue_name, var_type, GALGAS_bool (true), var_targetVar, GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 490)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 484)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName, var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 495)) ;
        var_parameterList.addAssign_operation (enumerator_19137.current_mEffectiveParameterKind (HERE), enumerator_19137.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 496)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 498)), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_llvmNameForLocalVariable (var_varLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 499))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 499))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 499))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 497)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_input * extractPtr_21483 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_input *) (enumerator_19137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_21483->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_objectInMemoryIR var_variableKind ;
        GALGAS_bool var_isCopyable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_controlRegisterBitSliceAccessMap joker_20804 ; // Joker input parameter
        GALGAS_bool joker_20891 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableKind, var_isCopyable, joker_20804, var_canBeUsedAsInputParameter, joker_20891, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 501)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 511)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 512)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 514)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 515)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 517)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_location location_8 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("an $").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 518)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 518))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 518)) ;
        }
        var_parameterList.addAssign_operation (enumerator_19137.current_mEffectiveParameterKind (HERE), enumerator_19137.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 520)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 522)), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_llvmNameForLocalVariable (extensionGetter_name (var_variableKind, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 523))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 523))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 523))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 521)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_22519 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_19137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_22519->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_22519->mAssociatedValue1 ;
        GALGAS_operandIR var_expressionResult ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_19094.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 525)) ;
        GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, enumerator_19094.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 541)) ;
        var_parameterList.addAssign_operation (enumerator_19137.current_mEffectiveParameterKind (HERE), enumerator_19137.current_mSelector (HERE), enumerator_19094.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 547)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 548)), var_result  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 548)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput * extractPtr_23331 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput *) (enumerator_19137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_23331->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_objectInMemoryIR var_variableKind ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_22743_2 ; // Joker input parameter
        GALGAS_controlRegisterBitSliceAccessMap joker_22743_1 ; // Joker input parameter
        GALGAS_bool joker_22831 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableKind, joker_22743_2, joker_22743_1, var_canBeUsedAsInputParameter, joker_22831, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 550)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 559)).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 560)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 562)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_location location_12 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_12, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 563)) ;
        }
        var_parameterList.addAssign_operation (enumerator_19137.current_mEffectiveParameterKind (HERE), enumerator_19137.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 565)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 567)), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_variableKind, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 568))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 568))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 568))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 566)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable * extractPtr_25652 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable *) (enumerator_19137.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_25652->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 570)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_location location_14 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_14, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 571)) ;
          var_parameterList.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 572)).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_location location_16 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_16, GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 573))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 573)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 574)).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_location location_18 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_18, GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 575))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 575)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 577)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  GALGAS_location location_19 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_19, GALGAS_string ("an opaque type does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 579)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  GALGAS_location location_20 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_20, GALGAS_string ("an array type does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 581)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  GALGAS_location location_21 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_21, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 583)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  GALGAS_location location_22 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_22, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 585)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolset:
                {
                  GALGAS_location location_23 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_23, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 587)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  GALGAS_location location_24 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_24, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 589)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  GALGAS_location location_25 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_25, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 591)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  GALGAS_location location_26 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
                  inCompiler->emitSemanticError (location_26, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 593)) ;
                  var_parameterList.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_25626 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 577)).unsafePointer ()) ;
                  const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_25626->mAssociatedValue0 ;
                  GALGAS_bool var_public ;
                  GALGAS_unifiedTypeMap_2D_proxy var_type ;
                  GALGAS_uint var_idx ;
                  extractedValue_propertyMap.method_searchKey (extractedValue_name, var_public, var_type, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 595)) ;
                  GALGAS_objectInMemoryIR var_fieldAddress ;
                  {
                  routine_getLocalNameOfNewTempObjectInMemory (var_type, ioArgument_ioTemporaries, var_fieldAddress, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 596)) ;
                  }
                  {
                  GALGAS_elementPtrList temp_27 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 600)) ;
                  temp_27.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_idx  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 600)), extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 600)) ;
                  extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, var_fieldAddress, constinArgument_inSelfType, temp_27, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 597)) ;
                  }
                  var_parameterList.addAssign_operation (enumerator_19137.current_mEffectiveParameterKind (HERE), enumerator_19137.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 602)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 604)), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_llvmNameForLocalVariable (extensionGetter_name (var_fieldAddress, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 605))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 605))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 605))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 603)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_19094.gotoNextObject () ;
    enumerator_19137.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 611)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 611)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 612)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 612)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 612)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 613)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 612)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 613))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 612)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_procedureSignature enumerator_25984 (constinArgument_inFormalSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_26013 (var_parameterList, kEnumeration_up) ;
    while (enumerator_25984.hasCurrentObject () && enumerator_26013.hasCurrentObject ()) {
      const enumGalgasBool test_29 = GALGAS_bool (kIsNotEqual, enumerator_25984.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 616)).objectCompare (enumerator_26013.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 616)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_26013.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_26013.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 617)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 617)).add_operation (enumerator_25984.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 618)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 618))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 617)) ;
      }
      GALGAS_string var_requiredPassingMode = extensionGetter_requiredActualPassingModeForSelector (enumerator_25984.current_mFormalArgumentPassingMode (HERE), enumerator_25984.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 620)) ;
      GALGAS_string var_testedPassingMode = extensionGetter_passingModeForActualSelector (enumerator_26013.current_mEffectiveParameterPassingMode (HERE), enumerator_26013.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 621)) ;
      const enumGalgasBool test_31 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_location location_32 (enumerator_26013.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_32, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 623)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 623))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 623)) ;
      }
      enumerator_25984.gotoNextObject () ;
      enumerator_26013.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'initialVariableMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap function_initialVariableMap (const GALGAS_string & constinArgument_inRoutineNameForInvocation,
                                                const GALGAS_semanticContext & constinArgument_inContext,
                                                const GALGAS_bool & constinArgument_inAcceptUserMode,
                                                const GALGAS_accessKind & constinArgument_inRegisterAccessKind,
                                                GALGAS_bool inArgument_inGlobalsAreConstant,
                                                const GALGAS_lstring & constinArgument_inReturnTypeName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableMap result_outVariableMap ; // Returned variable
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 16)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_resultVarName = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 19)), constinArgument_inReturnTypeName.mAttribute_location  COMMA_SOURCE_FILE ("variable-map.galgas", 19)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 20)) ;
    {
    result_outVariableMap.setter_insertOutputFormalArgument (var_resultVarName, var_resultType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_resultType, var_resultVarName.mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 25)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 27)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 21)) ;
    }
  }
  switch (constinArgument_inRegisterAccessKind.enumValue ()) {
  case GALGAS_accessKind::kNotBuilt:
    break ;
  case GALGAS_accessKind::kEnum_noAccess:
    {
      cEnumerator_controlRegisterMap enumerator_1802 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
      while (enumerator_1802.hasCurrentObject ()) {
        {
        result_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_1802.current_lkey (HERE), enumerator_1802.current_mType (HERE), GALGAS_bool (false), GALGAS_objectInMemoryIR::constructor_register (enumerator_1802.current_mType (HERE), enumerator_1802.current_lkey (HERE), enumerator_1802.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 40)), GALGAS_bool (false), enumerator_1802.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 36)) ;
        }
        enumerator_1802.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_accessKind::kEnum_readAccess:
    {
      cEnumerator_controlRegisterMap enumerator_2272 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
      while (enumerator_2272.hasCurrentObject ()) {
        GALGAS_bool test_1 = constinArgument_inAcceptUserMode ;
        if (kBoolTrue == test_1.boolEnum ()) {
          test_1 = enumerator_2272.current_mIsAccessibleInUserMode (HERE).operator_not (SOURCE_FILE ("variable-map.galgas", 49)) ;
        }
        const enumGalgasBool test_2 = test_1.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          result_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_2272.current_lkey (HERE), enumerator_2272.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_2272.current_mType (HERE), enumerator_2272.current_lkey (HERE), enumerator_2272.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 54)), GALGAS_bool (true), enumerator_2272.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 50)) ;
          }
        }else if (kBoolFalse == test_2) {
          GALGAS_bool test_3 = enumerator_2272.current_mIsReadOnly (HERE) ;
          if (kBoolTrue != test_3.boolEnum ()) {
            test_3 = inArgument_inGlobalsAreConstant ;
          }
          const enumGalgasBool test_4 = test_3.boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            result_outVariableMap.setter_insertUsedLocalConstant (enumerator_2272.current_lkey (HERE), enumerator_2272.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_2272.current_mType (HERE), enumerator_2272.current_lkey (HERE), enumerator_2272.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 65)), GALGAS_bool (true), enumerator_2272.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 61)) ;
            }
          }
        }
        enumerator_2272.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_accessKind::kEnum_readWriteAccess:
    {
      cEnumerator_controlRegisterMap enumerator_3293 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
      while (enumerator_3293.hasCurrentObject ()) {
        {
        result_outVariableMap.setter_insertDefinedLocalVariable (enumerator_3293.current_lkey (HERE), enumerator_3293.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_3293.current_mType (HERE), enumerator_3293.current_lkey (HERE), enumerator_3293.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 79)), GALGAS_bool (true), enumerator_3293.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 75)) ;
        }
        enumerator_3293.gotoNextObject () ;
      }
    }
    break ;
  }
  cEnumerator_globalConstantMap enumerator_3846 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_3846.hasCurrentObject ()) {
    {
    result_outVariableMap.setter_insertUsedLocalConstant (enumerator_3846.current_lkey (HERE), enumerator_3846.current_mValue (HERE).mAttribute_mType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_3846.current_mValue (HERE), enumerator_3846.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 93)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 95)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 89)) ;
    }
    enumerator_3846.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_4355 (constinArgument_inContext.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  while (enumerator_4355.hasCurrentObject ()) {
    GALGAS_bool var_writeAccess = enumerator_4355.current (HERE).mAttribute_allowedAccessToAll ;
    GALGAS_bool var_allowedAccess = var_writeAccess ;
    const enumGalgasBool test_5 = var_writeAccess.operator_not (SOURCE_FILE ("variable-map.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_allowedAccess = enumerator_4355.current (HERE).mAttribute_allowedRoutineMap.getter_hasKey (constinArgument_inRoutineNameForInvocation COMMA_SOURCE_FILE ("variable-map.galgas", 105)) ;
      const enumGalgasBool test_6 = var_allowedAccess.boolEnum () ;
      if (kBoolTrue == test_6) {
        var_writeAccess = enumerator_4355.current (HERE).mAttribute_allowedRoutineMap.getter_mHasWriteAccessForKey (constinArgument_inRoutineNameForInvocation, inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 107)) ;
      }else if (kBoolFalse == test_6) {
        var_allowedAccess = enumerator_4355.current (HERE).mAttribute_allowedISRMap.getter_hasKey (constinArgument_inRoutineNameForInvocation COMMA_SOURCE_FILE ("variable-map.galgas", 109)) ;
        const enumGalgasBool test_7 = var_allowedAccess.boolEnum () ;
        if (kBoolTrue == test_7) {
          var_writeAccess = enumerator_4355.current (HERE).mAttribute_allowedISRMap.getter_mHasWriteAccessForKey (constinArgument_inRoutineNameForInvocation, inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 111)) ;
        }
      }
    }
    GALGAS_bool test_8 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_8.boolEnum ()) {
      test_8 = var_writeAccess.operator_not (SOURCE_FILE ("variable-map.galgas", 115)) ;
    }
    const enumGalgasBool test_9 = test_8.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      result_outVariableMap.setter_insertUsedLocalConstant (enumerator_4355.current (HERE).mAttribute_lkey, enumerator_4355.current (HERE).mAttribute_type, var_allowedAccess, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_4355.current (HERE).mAttribute_type, enumerator_4355.current (HERE).mAttribute_lkey.mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_4355.current (HERE).mAttribute_executionModeSet.getter_count (SOURCE_FILE ("variable-map.galgas", 120)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map.galgas", 120)), enumerator_4355.current (HERE).mAttribute_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 121)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 122)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 116)) ;
      }
    }else if (kBoolFalse == test_9) {
      {
      result_outVariableMap.setter_insertGlobalVariable (enumerator_4355.current (HERE).mAttribute_lkey, enumerator_4355.current (HERE).mAttribute_type, var_allowedAccess, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_4355.current (HERE).mAttribute_type, enumerator_4355.current (HERE).mAttribute_lkey.mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_4355.current (HERE).mAttribute_executionModeSet.getter_count (SOURCE_FILE ("variable-map.galgas", 131)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map.galgas", 131)), enumerator_4355.current (HERE).mAttribute_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 132)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 133)), GALGAS_bool (false), enumerator_4355.current (HERE).mAttribute_isConstant, inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 127)) ;
      }
    }
    enumerator_4355.gotoNextObject () ;
  }
//---
  return result_outVariableMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initialVariableMap [7] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_accessKind,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initialVariableMap (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_accessKind operand3 = GALGAS_accessKind::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                       inCompiler
                                                                       COMMA_THERE) ;
  const GALGAS_bool operand4 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand5 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (5 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_initialVariableMap (operand0,
                                      operand1,
                                      operand2,
                                      operand3,
                                      operand4,
                                      operand5,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initialVariableMap ("initialVariableMap",
                                                                    functionWithGenericHeader_initialVariableMap,
                                                                    & kTypeDescriptor_GALGAS_variableMap,
                                                                    6,
                                                                    functionArgs_initialVariableMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'variableMapWithConstants'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap function_variableMapWithConstants (const GALGAS_semanticContext & constinArgument_inContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableMap result_outVariableMap ; // Returned variable
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 147)) ;
  cEnumerator_globalConstantMap enumerator_6222 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_6222.hasCurrentObject ()) {
    {
    result_outVariableMap.setter_insertUsedLocalConstant (enumerator_6222.current_lkey (HERE), enumerator_6222.current_mValue (HERE).mAttribute_mType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_6222.current_mValue (HERE), enumerator_6222.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 154)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 156)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 150)) ;
    }
    enumerator_6222.gotoNextObject () ;
  }
//---
  return result_outVariableMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_variableMapWithConstants [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_variableMapWithConstants (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* §§ inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_variableMapWithConstants (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_variableMapWithConstants ("variableMapWithConstants",
                                                                          functionWithGenericHeader_variableMapWithConstants,
                                                                          & kTypeDescriptor_GALGAS_variableMap,
                                                                          1,
                                                                          functionArgs_variableMapWithConstants) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_operandIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_operandIR::constructor_new (constinArgument_inType, GALGAS_valueIR::constructor_llvmLocalObject (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 170))  COMMA_SOURCE_FILE ("variable-map.galgas", 170))  COMMA_SOURCE_FILE ("variable-map.galgas", 170)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 171)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'getLocalNameOfNewTempObjectInMemory'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getLocalNameOfNewTempObjectInMemory (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_objectInMemoryIR & outArgument_outTempVariable,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inType, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 181))  COMMA_SOURCE_FILE ("variable-map.galgas", 181)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 182)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1683 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_1683.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1683.current_mDeclaration (HERE).ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1683.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mBootList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mInitList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mPanicClauses, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mProcedureListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mExternProcList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mSectionListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteServiceTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mServiceListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_notePrimitiveTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mPrimitiveListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGuardListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mTaskList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 43)) ;
  cEnumerator_stringlist enumerator_2759 (var_precedenceGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 45)), kEnumeration_up) ;
  while (enumerator_2759.hasCurrentObject ()) {
    GALGAS_stringlist var_split = enumerator_2759.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n = var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
        GALGAS_integerDeclaration var_declaration = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (false), var_n  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration.ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n = var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
          GALGAS_integerDeclaration var_declaration = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (true), var_n  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration.ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 55)) ;
        }
      }
    }
    enumerator_2759.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s = var_precedenceGraph.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
    GALGAS_string var_filePath = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 62)) ;
    GALGAS_bool joker_3738 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (var_filePath, joker_3738, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 67)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3960 (var_precedenceGraph.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 68)), kEnumeration_up) ;
    while (enumerator_3960.hasCurrentObject ()) {
      GALGAS_location location_7 (enumerator_3960.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, enumerator_3960.current_mValue (HERE).mAttribute_string.add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 69))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 69)) ;
      enumerator_3960.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST ;
    GALGAS_lstringlist joker_4107 ; // Joker input parameter
    GALGAS_lstringlist joker_4182 ; // Joker input parameter
    var_precedenceGraph.method_topologicalSort (outArgument_outDeclarationListAST, joker_4107, var_unsortedSemanticDeclarationListAST, joker_4182, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 80)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
      cEnumerator_declarationListAST enumerator_4476 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_4476.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4476.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
        enumerator_4476.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
      cEnumerator_declarationListAST enumerator_4648 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_4648.hasCurrentObject ()) {
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclaration *) enumerator_4648.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4648.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
        enumerator_4648.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR function_checkMode (const GALGAS_stringset & constinArgument_inRequiredModes,
                                         const GALGAS_stringset & constinArgument_inPossibleModes,
                                         GALGAS_routineKind inArgument_inRoutineKind,
                                         const GALGAS_location & constinArgument_inErrorLocation,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineKindIR result_outResult ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inPossibleModes.operator_and (constinArgument_inRequiredModes COMMA_SOURCE_FILE ("context.galgas", 104)).objectCompare (constinArgument_inRequiredModes)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_missingModes = constinArgument_inRequiredModes.substract_operation (constinArgument_inPossibleModes, inCompiler COMMA_SOURCE_FILE ("context.galgas", 105)) ;
    GALGAS_string var_s = GALGAS_string ("cannot be accessed in mode") ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_missingModes.getter_count (SOURCE_FILE ("context.galgas", 107)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    var_s.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 107)) ;
    var_s.plusAssign_operation(GALGAS_string (": "), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 108)) ;
    cEnumerator_stringset enumerator_4460 (var_missingModes, kEnumeration_up) ;
    while (enumerator_4460.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("`").add_operation (enumerator_4460.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 110)) ;
      if (enumerator_4460.hasNextObject ()) {
        var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 111)) ;
      }
      enumerator_4460.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, var_s  COMMA_SOURCE_FILE ("context.galgas", 113)) ;
  }
  GALGAS_string var_requiredModeListString = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringset enumerator_4610 (constinArgument_inRequiredModes, kEnumeration_up) ;
  while (enumerator_4610.hasCurrentObject ()) {
    var_requiredModeListString.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_4610.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 117)) ;
    enumerator_4610.gotoNextObject () ;
  }
  GALGAS_bool var_runInProcessorUserMode = constinArgument_inRequiredModes.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 119)) COMMA_SOURCE_FILE ("context.galgas", 119)) ;
  GALGAS_bool test_3 = constinArgument_inRequiredModes.getter_hasKey (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 120)) COMMA_SOURCE_FILE ("context.galgas", 120)) ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = constinArgument_inRequiredModes.getter_hasKey (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 120)) COMMA_SOURCE_FILE ("context.galgas", 120)) ;
  }
  GALGAS_bool var_runInProcessorPrivilegedMode = test_3 ;
  switch (inArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      result_outResult = GALGAS_routineKindIR::constructor_function (SOURCE_FILE ("context.galgas", 123)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      GALGAS_bool test_4 = var_runInProcessorUserMode ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_runInProcessorPrivilegedMode ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called in").add_operation (var_requiredModeListString, inCompiler COMMA_SOURCE_FILE ("context.galgas", 126)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 126))  COMMA_SOURCE_FILE ("context.galgas", 126)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = var_runInProcessorUserMode.boolEnum () ;
        if (kBoolTrue == test_6) {
          result_outResult = GALGAS_routineKindIR::constructor_sectionInProcessorUserMode (SOURCE_FILE ("context.galgas", 128)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = var_runInProcessorPrivilegedMode.boolEnum () ;
          if (kBoolTrue == test_7) {
            result_outResult = GALGAS_routineKindIR::constructor_sectionInProcessorPrivilegedMode (SOURCE_FILE ("context.galgas", 130)) ;
          }else if (kBoolFalse == test_7) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called in").add_operation (var_requiredModeListString, inCompiler COMMA_SOURCE_FILE ("context.galgas", 132)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 132))  COMMA_SOURCE_FILE ("context.galgas", 132)) ;
            result_outResult.drop () ; // Release error dropped variable
          }
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      GALGAS_bool test_8 = var_runInProcessorUserMode ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = var_runInProcessorPrivilegedMode ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called in").add_operation (var_requiredModeListString, inCompiler COMMA_SOURCE_FILE ("context.galgas", 136)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 136))  COMMA_SOURCE_FILE ("context.galgas", 136)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_10 = var_runInProcessorUserMode.boolEnum () ;
        if (kBoolTrue == test_10) {
          result_outResult = GALGAS_routineKindIR::constructor_serviceInProcessorUserMode (SOURCE_FILE ("context.galgas", 138)) ;
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_11 = var_runInProcessorPrivilegedMode.boolEnum () ;
          if (kBoolTrue == test_11) {
            result_outResult = GALGAS_routineKindIR::constructor_serviceInProcessorPrivilegedMode (SOURCE_FILE ("context.galgas", 140)) ;
          }else if (kBoolFalse == test_11) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called in").add_operation (var_requiredModeListString, inCompiler COMMA_SOURCE_FILE ("context.galgas", 142)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 142))  COMMA_SOURCE_FILE ("context.galgas", 142)) ;
            result_outResult.drop () ; // Release error dropped variable
          }
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      GALGAS_bool test_12 = var_runInProcessorUserMode ;
      if (kBoolTrue == test_12.boolEnum ()) {
        test_12 = var_runInProcessorPrivilegedMode ;
      }
      const enumGalgasBool test_13 = test_12.boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called in").add_operation (var_requiredModeListString, inCompiler COMMA_SOURCE_FILE ("context.galgas", 146)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 146))  COMMA_SOURCE_FILE ("context.galgas", 146)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_13) {
        const enumGalgasBool test_14 = var_runInProcessorUserMode.boolEnum () ;
        if (kBoolTrue == test_14) {
          result_outResult = GALGAS_routineKindIR::constructor_primitiveInProcessorUserMode (SOURCE_FILE ("context.galgas", 148)) ;
        }else if (kBoolFalse == test_14) {
          const enumGalgasBool test_15 = var_runInProcessorPrivilegedMode.boolEnum () ;
          if (kBoolTrue == test_15) {
            result_outResult = GALGAS_routineKindIR::constructor_primitiveInProcessorPrivilegedMode (SOURCE_FILE ("context.galgas", 150)) ;
          }else if (kBoolFalse == test_15) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called in").add_operation (var_requiredModeListString, inCompiler COMMA_SOURCE_FILE ("context.galgas", 152)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 152))  COMMA_SOURCE_FILE ("context.galgas", 152)) ;
            result_outResult.drop () ; // Release error dropped variable
          }
        }
      }
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkMode [5] = {
  & kTypeDescriptor_GALGAS_stringset,
  & kTypeDescriptor_GALGAS_stringset,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMode (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_stringset operand0 = GALGAS_stringset::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                     inCompiler
                                                                     COMMA_THERE) ;
  const GALGAS_stringset operand1 = GALGAS_stringset::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                     inCompiler
                                                                     COMMA_THERE) ;
  const GALGAS_routineKind operand2 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_checkMode (operand0,
                             operand1,
                             operand2,
                             operand3,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMode ("checkMode",
                                                           functionWithGenericHeader_checkMode,
                                                           & kTypeDescriptor_GALGAS_routineKindIR,
                                                           4,
                                                           functionArgs_checkMode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'allModeMap'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap function_allModeMap (C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modeMap result_outModeMap ; // Returned variable
  result_outModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 297)) ;
  {
  result_outModeMap.setter_insertKey (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)).getter_nowhere (SOURCE_FILE ("context.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_initModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 299)).getter_nowhere (SOURCE_FILE ("context.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 299)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 300)).getter_nowhere (SOURCE_FILE ("context.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 300)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 301)).getter_nowhere (SOURCE_FILE ("context.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 301)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 302)).getter_nowhere (SOURCE_FILE ("context.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 302)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 303)).getter_nowhere (SOURCE_FILE ("context.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 303)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 304)).getter_nowhere (SOURCE_FILE ("context.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 304)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_guardModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 305)).getter_nowhere (SOURCE_FILE ("context.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 305)) ;
  }
//---
  return result_outModeMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_allModeMap [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_allModeMap (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_allModeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_allModeMap ("allModeMap",
                                                            functionWithGenericHeader_allModeMap,
                                                            & kTypeDescriptor_GALGAS_modeMap,
                                                            0,
                                                            functionArgs_allModeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 318)) ;
  outArgument_outSemanticContext.mAttribute_mModeMap = function_allModeMap (inCompiler COMMA_SOURCE_FILE ("context.galgas", 320)) ;
  cEnumerator_initList enumerator_13102 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_13102.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_13102.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 323)) ;
    enumerator_13102.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_13241 (constinArgument_inAST.mAttribute_mPanicClauses, kEnumeration_up) ;
  while (enumerator_13241.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_13241.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 327)) ;
    enumerator_13241.gotoNextObject () ;
  }
  cEnumerator_declarationListAST enumerator_13362 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_13362.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_13362.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 331)) ;
    enumerator_13362.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.mAttribute_mGlobalConstantMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 338)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, outArgument_outSemanticContext, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 343)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.mAttribute_mControlRegisterMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 347)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mISRDeclarationListAST, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 352)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 353)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.mAttribute_mExternProcList, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 354)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mSectionListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 355)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mServiceListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 356)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mPrimitiveListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 357)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mGuardListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 358)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mTaskList, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 360)) ;
  cEnumerator_declarationListAST enumerator_14818 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_14818.hasCurrentObject ()) {
    callExtensionMethod_enterRoutinesInContext ((const cPtr_abstractDeclaration *) enumerator_14818.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 363)) ;
    enumerator_14818.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 370)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_requiredProcedureDeclarationListAST enumerator_15124 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
    while (enumerator_15124.hasCurrentObject ()) {
      cEnumerator_lstringlist enumerator_15179 (enumerator_15124.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_15179.hasCurrentObject ()) {
        outArgument_outSemanticContext.mAttribute_mModeMap.method_searchKey (enumerator_15179.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 373)) ;
        enumerator_15179.gotoNextObject () ;
      }
      enumerator_15124.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 378)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_globalVarDeclarationList enumerator_15379 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
    while (enumerator_15379.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_15379.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 380)) ;
      enumerator_15379.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'solveInferredType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy function_solveInferredType (const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inTargetType,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSourceType,
                                                           const GALGAS_location & constinArgument_inErrorLocation,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outType ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSourceType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("context.galgas", 396)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("context.galgas", 397)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("context.galgas", 398)) ;
      result_outType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      result_outType = constinArgument_inTargetType ;
    }
  }else if (kBoolFalse == test_0) {
    result_outType = constinArgument_inSourceType ;
  }
//---
  return result_outType ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_solveInferredType [4] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_solveInferredType (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_solveInferredType (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_solveInferredType ("solveInferredType",
                                                                   functionWithGenericHeader_solveInferredType,
                                                                   & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
                                                                   3,
                                                                   functionArgs_solveInferredType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 410)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 410)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 410)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 410)).getter_nowhere (SOURCE_FILE ("context.galgas", 410)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_combineTypeNamesForInfixOperator (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_combineTypeNamesForInfixOperator (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR function_checkAssignmentCompatibility (const GALGAS_operandIR & constinArgument_inSourceValue,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inTargetAnnotationType,
                                                        const GALGAS_location & constinArgument_inErrorLocation,
                                                        const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIR result_outResult ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inTargetAnnotationType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 14)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetAnnotationType.objectCompare (constinArgument_inSourceValue.mAttribute_mType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool test_2 = constinArgument_inSourceValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 17)).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 17)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 17)).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 17)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value ;
        constinArgument_inSourceValue.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
        GALGAS_bigint var_minTarget ;
        GALGAS_bigint var_maxTarget ;
        GALGAS_bool joker_1264 ; // Joker input parameter
        GALGAS_uint joker_1276 ; // Joker input parameter
        constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)).method_integer (var_minTarget, var_maxTarget, joker_1264, joker_1276, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (var_minTarget)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget.objectCompare (var_value)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large")  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
          result_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_outResult = GALGAS_operandIR::constructor_new (constinArgument_inTargetAnnotationType, constinArgument_inSourceValue.mAttribute_mValue  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
        }
      }else if (kBoolFalse == test_3) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inTargetAnnotationType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (constinArgument_inSourceValue.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      result_outResult = constinArgument_inSourceValue ;
    }
  }
  const enumGalgasBool test_6 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, result_outResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_operandIR,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* §§ inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_operandIR operand0 = GALGAS_operandIR::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                     inCompiler
                                                                     COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_operandIR,
                                                                              4,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
  outArgument_outIntermediateCodeStruct.mAttribute_mTargetParameters = constinArgument_inSemanticContext.mAttribute_mTargetParameters ;
  outArgument_outIntermediateCodeStruct.mAttribute_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mAttribute_mGlobalTaskVariableList = constinArgument_inSemanticContext.mAttribute_mGlobalTaskVariableList ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3537 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_3537.hasCurrentObject ()) {
    outArgument_outIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.addAssign_operation (GALGAS_string (".").add_operation (enumerator_3537.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 73))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 73)) ;
    enumerator_3537.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3725 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
  while (enumerator_3725.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_3725.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 77)) ;
    enumerator_3725.gotoNextObject () ;
  }
  {
  routine_controlRegistersSemanticAnalysis (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 83)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 89)) ;
  cEnumerator_declarationListAST enumerator_4150 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_4150.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_4150.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 91)) ;
    enumerator_4150.gotoNextObject () ;
  }
  extensionMethod_procedureSemanticAnalysis (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 98)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 97)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.mAttribute_mTaskList, constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 103)) ;
  extensionMethod_sectionSemanticAnalysis (constinArgument_inAST.mAttribute_mSectionListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 109)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 108)) ;
  extensionMethod_serviceSemanticAnalysis (constinArgument_inAST.mAttribute_mServiceListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 115)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 114)) ;
  extensionMethod_primitiveSemanticAnalysis (constinArgument_inAST.mAttribute_mPrimitiveListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 121)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 120)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.mAttribute_mGuardListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 127)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 126)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.mAttribute_mExternProcList, constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 132)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.mAttribute_mISRDeclarationListAST, constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 137)) ;
  cEnumerator_bootList enumerator_5754 (constinArgument_inAST.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_5754.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5754.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 143)) ;
    enumerator_5754.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5944 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_5944.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5944.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 150)) ;
    enumerator_5944.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_6167 (constinArgument_inAST.mAttribute_mPanicClauses, kEnumeration_up) ;
  while (enumerator_6167.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_6167.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
    enumerator_6167.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s = var_temporaries.mAttribute_mSubprogramInvocationGraph.getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 172)) ;
    GALGAS_string var_filePath = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 173)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 173)) ;
    GALGAS_bool joker_6827 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (var_filePath, joker_6827, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 174)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 177)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 177)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList = var_temporaries.mAttribute_mSubprogramInvocationGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 178)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_7218 (var_undefinedNodeKeyList, kEnumeration_up) ;
      while (enumerator_7218.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_7218.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 182)) ;
        enumerator_7218.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 184)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList ;
      GALGAS_lstringlist var_unsortedLKeyList ;
      var_temporaries.mAttribute_mSubprogramInvocationGraph.method_circularities (var_unsortedInformationList, var_unsortedLKeyList COMMA_SOURCE_FILE ("semantic-analysis.galgas", 186)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 190)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_s = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7615 (var_unsortedLKeyList, kEnumeration_up) ;
        while (enumerator_7615.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7615.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 193)) ;
          enumerator_7615.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 195)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_procFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                   GALGAS_procFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_procFormalArgumentList enumerator_1234 (constinArgument_inFormalArgumentPassingMode, kEnumeration_up) ;
  while (enumerator_1234.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_1234.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    switch (enumerator_1234.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 33)), var_typeProxy.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("semantic-routines.galgas", 35)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 29)) ;
        }
        ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 40)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 46)), var_typeProxy.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 47)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("semantic-routines.galgas", 48)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 42)) ;
        }
        ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_llvmNameForLocalVariable (enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 52))  COMMA_SOURCE_FILE ("semantic-routines.galgas", 52)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 58)), var_typeProxy.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 59)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("semantic-routines.galgas", 60)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 54)) ;
        }
        ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_llvmNameForLocalVariable (enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 64))  COMMA_SOURCE_FILE ("semantic-routines.galgas", 64)) ;
      }
      break ;
    }
    enumerator_1234.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                      const GALGAS_lstringlist constinArgument_inRoutineModeList,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_procFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_bool constinArgument_inWeakFunction,
                                      const GALGAS_accessKind constinArgument_inRegisterAccessKind,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_procedureModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semantic-routines.galgas", 99)) ;
  cEnumerator_lstringlist enumerator_4293 (constinArgument_inRoutineModeList, kEnumeration_up) ;
  while (enumerator_4293.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_4293.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 101)) ;
    var_procedureModeSet.addAssign_operation (enumerator_4293.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 102)) ;
    enumerator_4293.gotoNextObject () ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineNameForInvocationGraph = function_procNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineNameForInvocationGraph = function_sectionNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 108)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineNameForInvocationGraph = function_serviceNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 109)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineNameForInvocationGraph = function_primitiveNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
    }
    break ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (var_routineNameForInvocationGraph.mAttribute_string, constinArgument_inContext, var_procedureModeSet.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 115)) COMMA_SOURCE_FILE ("semantic-routines.galgas", 115)), constinArgument_inRegisterAccessKind, GALGAS_bool (false), constinArgument_inReturnTypeName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 121)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 122)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 129)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 130)) ;
    }
  }
  GALGAS_allocaList var_allocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 136)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 137)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineNameForInvocationGraph, constinArgument_inContext, var_procedureModeSet, var_procedureModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 145)) COMMA_SOURCE_FILE ("semantic-routines.galgas", 145)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 145)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_allocaList, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 138)) ;
  extensionMethod_deinitTopLevelVariables (var_variableMap, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 153)) ;
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 154)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 158)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 160)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType = temp_1 ;
  GALGAS_lstring temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 162)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("semantic-routines.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 163)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("semantic-routines.galgas", 163)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("semantic-routines.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("semantic-routines.galgas", 165)) ;
  }
  GALGAS_lstring var_routineMangledName = temp_3 ;
  const enumGalgasBool test_5 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 167)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bool var_weak = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_mWeakForKey (var_routineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 168)) ;
    GALGAS_bool test_6 = constinArgument_inWeakFunction ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = var_weak.operator_not (SOURCE_FILE ("semantic-routines.galgas", 169)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
    }else if (kBoolFalse == test_7) {
      GALGAS_bool test_8 = constinArgument_inWeakFunction ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = var_weak ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (var_routineMangledName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("semantic-routines.galgas", 172)) ;
      }else if (kBoolFalse == test_9) {
        GALGAS_bool test_11 = constinArgument_inWeakFunction.operator_not (SOURCE_FILE ("semantic-routines.galgas", 173)) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_weak ;
        }
        const enumGalgasBool test_12 = test_11.boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          GALGAS_procFormalArgumentListForGeneration joker_7482_10 ; // Joker input parameter
          GALGAS_allocaList joker_7482_9 ; // Joker input parameter
          GALGAS_instructionListIR joker_7482_8 ; // Joker input parameter
          GALGAS_bool joker_7482_7 ; // Joker input parameter
          GALGAS_bool joker_7482_6 ; // Joker input parameter
          GALGAS_bool joker_7482_5 ; // Joker input parameter
          GALGAS_bool joker_7482_4 ; // Joker input parameter
          GALGAS_routineKind joker_7482_3 ; // Joker input parameter
          GALGAS_unifiedTypeMap_2D_proxy joker_7482_2 ; // Joker input parameter
          GALGAS_bool joker_7482_1 ; // Joker input parameter
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_removeKey (var_routineMangledName, joker_7482_10, joker_7482_9, joker_7482_8, joker_7482_7, joker_7482_6, joker_7482_5, joker_7482_4, joker_7482_3, joker_7482_2, joker_7482_1, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)) ;
          }
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName, var_formalArguments, var_allocaList, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 180)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 175)) ;
          }
        }else if (kBoolFalse == test_12) {
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName, var_formalArguments, var_allocaList, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 194)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 189)) ;
          }
        }
      }
    }
  }else if (kBoolFalse == test_5) {
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName, var_formalArguments, var_allocaList, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 209)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 204)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedAdditionOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 3)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForSignedAdditionOverflow'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 5)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedSubtractOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForSignedSubtractOverflow'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Once function 'panicCodeForUnsignedMultiplicationOverflow'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (NULL,
                                                                                        releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Once function 'panicCodeForSignedMultiplicationOverflow'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (NULL,
                                                                                      releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                                         const GALGAS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForUnsignedDivisionByZero'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'panicCodeForSignedDivisionByZero'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (NULL,
                                                                              releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForUnsignedRemainderByZero'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (NULL,
                                                                                 releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'panicCodeForSignedRemainderByZero'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (NULL,
                                                                               releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'panicCodeForConvertOverflow'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForConvertOverflow (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForConvertOverflow (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Once function 'panicCodeForArrayOverflow'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForArrayOverflow (C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 29)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForArrayOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForArrayOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForArrayOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForArrayOverflow) {
    gOnceFunctionResult_panicCodeForArrayOverflow = onceFunction_panicCodeForArrayOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForArrayOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForArrayOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForArrayOverflow (void) {
  gOnceFunctionResult_panicCodeForArrayOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForArrayOverflow (NULL,
                                                                       releaseOnceFunctionResult_panicCodeForArrayOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForArrayOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForArrayOverflow (C_Compiler * inCompiler,
                                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  return function_panicCodeForArrayOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForArrayOverflow ("panicCodeForArrayOverflow",
                                                                           functionWithGenericHeader_panicCodeForArrayOverflow,
                                                                           & kTypeDescriptor_GALGAS_bigint,
                                                                           0,
                                                                           functionArgs_panicCodeForArrayOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'panicCodeForClosedSync'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForClosedSync (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("13", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 33)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (NULL,
                                                                    releaseOnceFunctionResult_panicCodeForClosedSync) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForClosedSync (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'panicCodeForNegativeArrayIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'panicCodeForTooLargeArrayIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 39)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'llvmAttributeFunction'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmAttributeFunction (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string (" nounwind ") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (NULL,
                                                                   releaseOnceFunctionResult_llvmAttributeFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'bootModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_bootModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("boot") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_bootModeName = false ;
static GALGAS_string gOnceFunctionResult_bootModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_bootModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bootModeName) {
    gOnceFunctionResult_bootModeName = onceFunction_bootModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bootModeName = true ;
  }
  return gOnceFunctionResult_bootModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_bootModeName (void) {
  gOnceFunctionResult_bootModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_bootModeName (NULL,
                                                          releaseOnceFunctionResult_bootModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_bootModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_bootModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_bootModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_bootModeName ("bootModeName",
                                                              functionWithGenericHeader_bootModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_bootModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'initModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_initModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("init") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_initModeName = false ;
static GALGAS_string gOnceFunctionResult_initModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_initModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_initModeName) {
    gOnceFunctionResult_initModeName = onceFunction_initModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_initModeName = true ;
  }
  return gOnceFunctionResult_initModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_initModeName (void) {
  gOnceFunctionResult_initModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_initModeName (NULL,
                                                          releaseOnceFunctionResult_initModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_initModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initModeName ("initModeName",
                                                              functionWithGenericHeader_initModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_initModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'sectionModeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_sectionModeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("section") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_sectionModeName = false ;
static GALGAS_string gOnceFunctionResult_sectionModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_sectionModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_sectionModeName) {
    gOnceFunctionResult_sectionModeName = onceFunction_sectionModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_sectionModeName = true ;
  }
  return gOnceFunctionResult_sectionModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_sectionModeName (void) {
  gOnceFunctionResult_sectionModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_sectionModeName (NULL,
                                                             releaseOnceFunctionResult_sectionModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_sectionModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_sectionModeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_sectionModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_sectionModeName ("sectionModeName",
                                                                 functionWithGenericHeader_sectionModeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_sectionModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'userModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("user") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userModeName = false ;
static GALGAS_string gOnceFunctionResult_userModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userModeName) {
    gOnceFunctionResult_userModeName = onceFunction_userModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userModeName = true ;
  }
  return gOnceFunctionResult_userModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userModeName (void) {
  gOnceFunctionResult_userModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userModeName (NULL,
                                                          releaseOnceFunctionResult_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_userModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userModeName ("userModeName",
                                                              functionWithGenericHeader_userModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'kernelModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_kernelModeName (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("kernel") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_kernelModeName = false ;
static GALGAS_string gOnceFunctionResult_kernelModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_kernelModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_kernelModeName) {
    gOnceFunctionResult_kernelModeName = onceFunction_kernelModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_kernelModeName = true ;
  }
  return gOnceFunctionResult_kernelModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_kernelModeName (void) {
  gOnceFunctionResult_kernelModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_kernelModeName (NULL,
                                                            releaseOnceFunctionResult_kernelModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_kernelModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_kernelModeName (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_kernelModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_kernelModeName ("kernelModeName",
                                                                functionWithGenericHeader_kernelModeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_kernelModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'serviceModeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_serviceModeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("service") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_serviceModeName = false ;
static GALGAS_string gOnceFunctionResult_serviceModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_serviceModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_serviceModeName) {
    gOnceFunctionResult_serviceModeName = onceFunction_serviceModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_serviceModeName = true ;
  }
  return gOnceFunctionResult_serviceModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_serviceModeName (void) {
  gOnceFunctionResult_serviceModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_serviceModeName (NULL,
                                                             releaseOnceFunctionResult_serviceModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_serviceModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_serviceModeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_serviceModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_serviceModeName ("serviceModeName",
                                                                 functionWithGenericHeader_serviceModeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_serviceModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'guardModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_guardModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("guard") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_guardModeName = false ;
static GALGAS_string gOnceFunctionResult_guardModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_guardModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_guardModeName) {
    gOnceFunctionResult_guardModeName = onceFunction_guardModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_guardModeName = true ;
  }
  return gOnceFunctionResult_guardModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_guardModeName (void) {
  gOnceFunctionResult_guardModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_guardModeName (NULL,
                                                           releaseOnceFunctionResult_guardModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_guardModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_guardModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_guardModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_guardModeName ("guardModeName",
                                                               functionWithGenericHeader_guardModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_guardModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'procNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_procNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                    GALGAS_lstring inArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("func") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 59)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 63)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_procNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_procNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_procNameForInvocationGraph (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_procNameForInvocationGraph ("procNameForInvocationGraph",
                                                                            functionWithGenericHeader_procNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            2,
                                                                            functionArgs_procNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'sectionNameForInvocationGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_sectionNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                       GALGAS_lstring inArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("section") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 70)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_sectionNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_sectionNameForInvocationGraph (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* §§ inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_sectionNameForInvocationGraph (operand0,
                                                 operand1,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_sectionNameForInvocationGraph ("sectionNameForInvocationGraph",
                                                                               functionWithGenericHeader_sectionNameForInvocationGraph,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               2,
                                                                               functionArgs_sectionNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'serviceNameForInvocationGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_serviceNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                       GALGAS_lstring inArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("service") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 81)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 82)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 84)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 85)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_serviceNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_serviceNameForInvocationGraph (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* §§ inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_serviceNameForInvocationGraph (operand0,
                                                 operand1,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_serviceNameForInvocationGraph ("serviceNameForInvocationGraph",
                                                                               functionWithGenericHeader_serviceNameForInvocationGraph,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               2,
                                                                               functionArgs_serviceNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'primitiveNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_primitiveNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                         GALGAS_lstring inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("primitive") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 93)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 95)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 96)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_primitiveNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_primitiveNameForInvocationGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* §§ inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_primitiveNameForInvocationGraph (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_primitiveNameForInvocationGraph ("primitiveNameForInvocationGraph",
                                                                                 functionWithGenericHeader_primitiveNameForInvocationGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 2,
                                                                                 functionArgs_primitiveNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'guardNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_guardNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                     GALGAS_lstring inArgument_inName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("guard") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 103)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 104)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 106)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 107)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_guardNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_guardNameForInvocationGraph (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_guardNameForInvocationGraph (operand0,
                                               operand1,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_guardNameForInvocationGraph ("guardNameForInvocationGraph",
                                                                             functionWithGenericHeader_guardNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_guardNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_initNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                    GALGAS_lbigint inArgument_inPriority,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("init") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 114)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 117)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inPriority.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_initNameForInvocationGraph (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initNameForInvocationGraph ("initNameForInvocationGraph",
                                                                            functionWithGenericHeader_initNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            2,
                                                                            functionArgs_initNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_panicNameForInvocationGraph (GALGAS_string inArgument_inName,
                                                     GALGAS_lbigint inArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("panic ").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 124)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 124)).add_operation (inArgument_inPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 124)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inPriority.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 125)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicNameForInvocationGraph (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_panicNameForInvocationGraph (operand0,
                                               operand1,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicNameForInvocationGraph ("panicNameForInvocationGraph",
                                                                             functionWithGenericHeader_panicNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_panicNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 133)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringName (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalStringName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 139)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalCharacterArrayName (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalCharacterArrayName (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticStringTypeName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("staticString") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("bool") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticIntegerTypeName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticIntegerTypeName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("staticInt") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticIntegerTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticIntegerTypeName) {
    gOnceFunctionResult_staticIntegerTypeName = onceFunction_staticIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticIntegerTypeName = true ;
  }
  return gOnceFunctionResult_staticIntegerTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticIntegerTypeName (void) {
  gOnceFunctionResult_staticIntegerTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticIntegerTypeName (NULL,
                                                                   releaseOnceFunctionResult_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticIntegerTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticIntegerTypeName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_staticIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticIntegerTypeName ("staticIntegerTypeName",
                                                                       functionWithGenericHeader_staticIntegerTypeName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'functionResultVariableName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_functionResultVariableName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("result") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (NULL,
                                                                        releaseOnceFunctionResult_functionResultVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_functionResultVariableName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForFunction (GALGAS_string inArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("func.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 169)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForFunction (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForFunction (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_interruptNameForInvocationGraph (GALGAS_lstring inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("interrupt ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 177)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 178)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_interruptNameForInvocationGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_interruptNameForInvocationGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* §§ inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_interruptNameForInvocationGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_interruptNameForInvocationGraph ("interruptNameForInvocationGraph",
                                                                                 functionWithGenericHeader_interruptNameForInvocationGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_interruptNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForInterrupt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForInterrupt (GALGAS_lstring inArgument_inName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  result_outName = GALGAS_lstring::constructor_new (GALGAS_string ("interrupt.").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 184)), inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 184)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForInterrupt (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForInterrupt (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForInterrupt ("llvmNameForInterrupt",
                                                                      functionWithGenericHeader_llvmNameForInterrupt,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      1,
                                                                      functionArgs_llvmNameForInterrupt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'llvmNameForISR'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForISR (GALGAS_string inArgument_inName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("isr.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 190)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForISR [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForISR (C_Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* §§ inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForISR (operand0,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForISR ("llvmNameForISR",
                                                                functionWithGenericHeader_llvmNameForISR,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_llvmNameForISR) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveCall (GALGAS_string inArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("primitive.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 198)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveCall (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* §§ inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveCall (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveCall ("llvmNameForPrimitiveCall",
                                                                          functionWithGenericHeader_llvmNameForPrimitiveCall,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForPrimitiveCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForPrimitiveImplementation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveImplementation (GALGAS_string inArgument_inName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("primitive.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 204)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveImplementation (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveImplementation (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveImplementation ("llvmNameForPrimitiveImplementation",
                                                                                    functionWithGenericHeader_llvmNameForPrimitiveImplementation,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    1,
                                                                                    functionArgs_llvmNameForPrimitiveImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceCall (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("service.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 212)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceCall (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceImplementation (GALGAS_string inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("service.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 218)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceImplementation (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionCall (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("section.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 226)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionCall (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForSectionImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionImplementation (GALGAS_string inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("section.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 232)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionImplementation (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'acceptVariableName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_acceptVariableName (C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("accept") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_acceptVariableName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariableName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_acceptVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableName) {
    gOnceFunctionResult_acceptVariableName = onceFunction_acceptVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableName = true ;
  }
  return gOnceFunctionResult_acceptVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_acceptVariableName (void) {
  gOnceFunctionResult_acceptVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptVariableName (NULL,
                                                                releaseOnceFunctionResult_acceptVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_acceptVariableName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_acceptVariableName (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_acceptVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_acceptVariableName ("acceptVariableName",
                                                                    functionWithGenericHeader_acceptVariableName,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    0,
                                                                    functionArgs_acceptVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForGuardCall'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardCall (GALGAS_string inArgument_inName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("guard.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 246)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGuardCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGuardCall (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGuardCall (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGuardCall ("llvmNameForGuardCall",
                                                                      functionWithGenericHeader_llvmNameForGuardCall,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_llvmNameForGuardCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForGuardImplementation'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardImplementation (GALGAS_string inArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("guard.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 252)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGuardImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGuardImplementation (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* §§ inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGuardImplementation (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGuardImplementation ("llvmNameForGuardImplementation",
                                                                                functionWithGenericHeader_llvmNameForGuardImplementation,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                1,
                                                                                functionArgs_llvmNameForGuardImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'waitForGuardChangeFunctionName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_waitForGuardChangeFunctionName (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("waitForGuardChange") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GALGAS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (NULL,
                                                                            releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_waitForGuardChangeFunctionName (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

