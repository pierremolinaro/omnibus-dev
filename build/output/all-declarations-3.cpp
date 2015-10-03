#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


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

GALGAS_typeKind GALGAS_unifiedTypeMap_2D_proxy::reader_kind (C_Compiler * inCompiler
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

GALGAS_typedConstantMap GALGAS_unifiedTypeMap_2D_proxy::reader_typedConstantMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_typedConstantMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "typedConstantMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_typedConstantMap;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_unifiedTypeMap_2D_proxy::reader_procedureMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_procedureMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "procedureMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_procedureMap;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::reader_copiable (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "copiable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_copiable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::reader_equatable (C_Compiler * inCompiler
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

GALGAS_bool GALGAS_unifiedTypeMap_2D_proxy::reader_comparable (C_Compiler * inCompiler
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

cEnumAssociatedValues_procedureKindAST_structureProc::cEnumAssociatedValues_procedureKindAST_structureProc (const GALGAS_lstring & inAssociatedValue0,
                                                                                                            const GALGAS_bool & inAssociatedValue1
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_procedureKindAST_structureProc::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_procedureKindAST_structureProc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_procedureKindAST_structureProc * ptr = dynamic_cast<const cEnumAssociatedValues_procedureKindAST_structureProc *> (inOperand) ;
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

GALGAS_procedureKindAST::GALGAS_procedureKindAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureKindAST GALGAS_procedureKindAST::constructor_standAloneProc (UNUSED_LOCATION_ARGS) {
  GALGAS_procedureKindAST result ;
  result.mEnum = kEnum_standAloneProc ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureKindAST GALGAS_procedureKindAST::constructor_structureProc (const GALGAS_lstring & inAssociatedValue0,
                                                                            const GALGAS_bool & inAssociatedValue1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procedureKindAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_structureProc ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_procedureKindAST_structureProc (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureKindAST::method_structureProc (GALGAS_lstring & outAssociatedValue0,
                                                    GALGAS_bool & outAssociatedValue1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structureProc) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @procedureKindAST structureProc invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_procedureKindAST_structureProc * ptr = (const cEnumAssociatedValues_procedureKindAST_structureProc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_procedureKindAST [3] = {
  "(not built)",
  "standAloneProc",
  "structureProc"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureKindAST::reader_isStandAloneProc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_standAloneProc == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureKindAST::reader_isStructureProc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structureProc == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureKindAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @procedureKindAST: " << gEnumNameArrayFor_procedureKindAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureKindAST::objectCompare (const GALGAS_procedureKindAST & inOperand) const {
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
//                                               @procedureKindAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureKindAST ("procedureKindAST",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureKindAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureKindAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureKindAST GALGAS_procedureKindAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procedureKindAST result ;
  const GALGAS_procedureKindAST * p = (const GALGAS_procedureKindAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_registerBitSlice_unusedBits::cEnumAssociatedValues_registerBitSlice_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_registerBitSlice_unusedBits::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_registerBitSlice_unusedBits::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerBitSlice_unusedBits * ptr = dynamic_cast<const cEnumAssociatedValues_registerBitSlice_unusedBits *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_registerBitSlice_namedBit::cEnumAssociatedValues_registerBitSlice_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                                  const GALGAS_lbigint & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_registerBitSlice_namedBit::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_registerBitSlice_namedBit::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerBitSlice_namedBit * ptr = dynamic_cast<const cEnumAssociatedValues_registerBitSlice_namedBit *> (inOperand) ;
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

GALGAS_registerBitSlice::GALGAS_registerBitSlice (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSlice GALGAS_registerBitSlice::constructor_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSlice result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_unusedBits ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerBitSlice_unusedBits (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSlice GALGAS_registerBitSlice::constructor_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                       const GALGAS_lbigint & inAssociatedValue1
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSlice result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_namedBit ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerBitSlice_namedBit (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSlice::method_unusedBits (GALGAS_lbigint & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_unusedBits) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerBitSlice unusedBits invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerBitSlice_unusedBits * ptr = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSlice::method_namedBit (GALGAS_lstring & outAssociatedValue0,
                                               GALGAS_lbigint & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedBit) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @registerBitSlice namedBit invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerBitSlice_namedBit * ptr = (const cEnumAssociatedValues_registerBitSlice_namedBit *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_registerBitSlice [3] = {
  "(not built)",
  "unusedBits",
  "namedBit"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_registerBitSlice::reader_isUnusedBits (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unusedBits == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_registerBitSlice::reader_isNamedBit (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedBit == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSlice::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @registerBitSlice: " << gEnumNameArrayFor_registerBitSlice [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerBitSlice::objectCompare (const GALGAS_registerBitSlice & inOperand) const {
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
//                                               @registerBitSlice type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerBitSlice ("registerBitSlice",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerBitSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerBitSlice ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerBitSlice::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerBitSlice (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSlice GALGAS_registerBitSlice::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSlice result ;
  const GALGAS_registerBitSlice * p = (const GALGAS_registerBitSlice *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerBitSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerBitSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_receiverType_receiver::cEnumAssociatedValues_receiverType_receiver (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                          const GALGAS_string & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_receiverType_receiver::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_receiverType_receiver::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_receiverType_receiver * ptr = dynamic_cast<const cEnumAssociatedValues_receiverType_receiver *> (inOperand) ;
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

cEnumAssociatedValues_receiverType_mutatingReceiver::cEnumAssociatedValues_receiverType_mutatingReceiver (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                          const GALGAS_string & inAssociatedValue1
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_receiverType_mutatingReceiver::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_receiverType_mutatingReceiver::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_receiverType_mutatingReceiver * ptr = dynamic_cast<const cEnumAssociatedValues_receiverType_mutatingReceiver *> (inOperand) ;
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

GALGAS_receiverType::GALGAS_receiverType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_receiverType GALGAS_receiverType::constructor_noReceiver (UNUSED_LOCATION_ARGS) {
  GALGAS_receiverType result ;
  result.mEnum = kEnum_noReceiver ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_receiverType GALGAS_receiverType::constructor_receiver (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                               const GALGAS_string & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_receiverType result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_receiver ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_receiverType_receiver (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_receiverType GALGAS_receiverType::constructor_mutatingReceiver (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                       const GALGAS_string & inAssociatedValue1
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_receiverType result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_mutatingReceiver ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_receiverType_mutatingReceiver (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_receiverType::method_receiver (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                           GALGAS_string & outAssociatedValue1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_receiver) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @receiverType receiver invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_receiverType_receiver * ptr = (const cEnumAssociatedValues_receiverType_receiver *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_receiverType::method_mutatingReceiver (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                   GALGAS_string & outAssociatedValue1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_mutatingReceiver) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @receiverType mutatingReceiver invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_receiverType_mutatingReceiver * ptr = (const cEnumAssociatedValues_receiverType_mutatingReceiver *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_receiverType [4] = {
  "(not built)",
  "noReceiver",
  "receiver",
  "mutatingReceiver"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_receiverType::reader_isNoReceiver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noReceiver == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_receiverType::reader_isReceiver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_receiver == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_receiverType::reader_isMutatingReceiver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mutatingReceiver == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_receiverType::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @receiverType: " << gEnumNameArrayFor_receiverType [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_receiverType::objectCompare (const GALGAS_receiverType & inOperand) const {
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
//                                                 @receiverType type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_receiverType ("receiverType",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_receiverType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_receiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_receiverType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_receiverType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_receiverType GALGAS_receiverType::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_receiverType result ;
  const GALGAS_receiverType * p = (const GALGAS_receiverType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_receiverType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("receiverType", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_valueIR::GALGAS_valueIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
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

static const char * gEnumNameArrayFor_valueIR [4] = {
  "(not built)",
  "literalInteger",
  "llvmLocalObject",
  "llvmStructureConstant"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::reader_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::reader_isLlvmLocalObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmLocalObject == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_valueIR::reader_isLlvmStructureConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureConstant == mEnum) ;
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

cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input::cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * ptr = dynamic_cast<const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output::cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                                      const GALGAS_location & inAssociatedValue1
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * ptr = dynamic_cast<const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *> (inOperand) ;
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

cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput::cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * ptr = dynamic_cast<const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST::GALGAS_procEffectiveParameterPassingModeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterPassingModeAST::constructor_input (const GALGAS_lstring & inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_input ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterPassingModeAST::constructor_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                             const GALGAS_location & inAssociatedValue1
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_output ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterPassingModeAST::constructor_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_outputInput ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterPassingModeAST::method_input (GALGAS_lstring & outAssociatedValue0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_input) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @procEffectiveParameterPassingModeAST input invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * ptr = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterPassingModeAST::method_output (GALGAS_expressionAST & outAssociatedValue0,
                                                                 GALGAS_location & outAssociatedValue1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_output) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @procEffectiveParameterPassingModeAST output invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * ptr = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterPassingModeAST::method_outputInput (GALGAS_lstring & outAssociatedValue0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outputInput) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @procEffectiveParameterPassingModeAST outputInput invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * ptr = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeAST [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeAST::reader_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeAST::reader_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeAST::reader_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterPassingModeAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<enum @procEffectiveParameterPassingModeAST: " << gEnumNameArrayFor_procEffectiveParameterPassingModeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterPassingModeAST::objectCompare (const GALGAS_procEffectiveParameterPassingModeAST & inOperand) const {
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
//                                     @procEffectiveParameterPassingModeAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeAST ("procEffectiveParameterPassingModeAST",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterPassingModeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeAST result ;
  const GALGAS_procEffectiveParameterPassingModeAST * p = (const GALGAS_procEffectiveParameterPassingModeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

cEnumAssociatedValues_objectInMemoryIR_globalConstant::cEnumAssociatedValues_objectInMemoryIR_globalConstant (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
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

cEnumAssociatedValues_objectInMemoryIR_localAccess::cEnumAssociatedValues_objectInMemoryIR_localAccess (const GALGAS_lstring & inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_localAccess::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_localAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_localAccess * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_localAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
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

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_globalConstant (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
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

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_localAccess (const GALGAS_lstring & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_localAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_localAccess (inAssociatedValue0 COMMA_THERE)) ;
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

void GALGAS_objectInMemoryIR::method_globalConstant (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
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

void GALGAS_objectInMemoryIR::method_localAccess (GALGAS_lstring & outAssociatedValue0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localAccess) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR localAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_localAccess * ptr = (const cEnumAssociatedValues_objectInMemoryIR_localAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_objectInMemoryIR [6] = {
  "(not built)",
  "register",
  "globalVariable",
  "localValue",
  "globalConstant",
  "localAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::reader_isRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_register == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::reader_isGlobalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalVariable == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::reader_isLocalValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::reader_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::reader_isLocalAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localAccess == mEnum) ;
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

cEnumAssociatedValues_generalizedTypeEnumAST_valueType::cEnumAssociatedValues_generalizedTypeEnumAST_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_generalizedTypeEnumAST_valueType::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_generalizedTypeEnumAST_valueType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_generalizedTypeEnumAST_valueType * ptr = dynamic_cast<const cEnumAssociatedValues_generalizedTypeEnumAST_valueType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_generalizedTypeEnumAST_procType::cEnumAssociatedValues_generalizedTypeEnumAST_procType (const GALGAS_lstringlist & inAssociatedValue0,
                                                                                                              const GALGAS_procFormalArgumentList & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_generalizedTypeEnumAST_procType::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_generalizedTypeEnumAST_procType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_generalizedTypeEnumAST_procType * ptr = dynamic_cast<const cEnumAssociatedValues_generalizedTypeEnumAST_procType *> (inOperand) ;
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

GALGAS_generalizedTypeEnumAST::GALGAS_generalizedTypeEnumAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generalizedTypeEnumAST GALGAS_generalizedTypeEnumAST::constructor_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_generalizedTypeEnumAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_valueType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_generalizedTypeEnumAST_valueType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generalizedTypeEnumAST GALGAS_generalizedTypeEnumAST::constructor_procType (const GALGAS_lstringlist & inAssociatedValue0,
                                                                                   const GALGAS_procFormalArgumentList & inAssociatedValue1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_generalizedTypeEnumAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_procType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_generalizedTypeEnumAST_procType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generalizedTypeEnumAST::method_valueType (GALGAS_lstring & outAssociatedValue0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_valueType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @generalizedTypeEnumAST valueType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_generalizedTypeEnumAST_valueType * ptr = (const cEnumAssociatedValues_generalizedTypeEnumAST_valueType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generalizedTypeEnumAST::method_procType (GALGAS_lstringlist & outAssociatedValue0,
                                                     GALGAS_procFormalArgumentList & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_procType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @generalizedTypeEnumAST procType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_generalizedTypeEnumAST_procType * ptr = (const cEnumAssociatedValues_generalizedTypeEnumAST_procType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_generalizedTypeEnumAST [3] = {
  "(not built)",
  "valueType",
  "procType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_generalizedTypeEnumAST::reader_isValueType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_valueType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_generalizedTypeEnumAST::reader_isProcType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_procType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generalizedTypeEnumAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<enum @generalizedTypeEnumAST: " << gEnumNameArrayFor_generalizedTypeEnumAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generalizedTypeEnumAST::objectCompare (const GALGAS_generalizedTypeEnumAST & inOperand) const {
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
//                                            @generalizedTypeEnumAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generalizedTypeEnumAST ("generalizedTypeEnumAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_generalizedTypeEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generalizedTypeEnumAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_generalizedTypeEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generalizedTypeEnumAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generalizedTypeEnumAST GALGAS_generalizedTypeEnumAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_generalizedTypeEnumAST result ;
  const GALGAS_generalizedTypeEnumAST * p = (const GALGAS_generalizedTypeEnumAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generalizedTypeEnumAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generalizedTypeEnumAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_plm_5F_options_compileOnly ("plm_options",
                                         "compileOnly",
                                         99,
                                         "no-c-compilation",
                                         "Do not compile generated LLVM code") ;

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

C_BoolCommandLineOption gOption_plm_5F_options_noExceptionGeneration ("plm_options",
                                         "noExceptionGeneration",
                                         0,
                                         "no-exception-generation",
                                         "Do not generate exception code") ;

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
//                                        Routine 'enterNodeInPrecedenceGraph'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNodeInPrecedenceGraph (GALGAS_lstring inArgument_inNodeName,
                                         GALGAS_abstractDeclaration inArgument_inInfo,
                                         GALGAS_generalizedTypeEnumAST inArgument_inType,
                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.modifier_addNode (inArgument_inNodeName, inArgument_inInfo, inCompiler COMMA_SOURCE_FILE ("generalized-type.galgas", 21)) ;
  }
  switch (inArgument_inType.enumValue ()) {
  case GALGAS_generalizedTypeEnumAST::kNotBuilt:
    break ;
  case GALGAS_generalizedTypeEnumAST::kEnum_valueType:
    {
      const cEnumAssociatedValues_generalizedTypeEnumAST_valueType * extractPtr_1218 = (const cEnumAssociatedValues_generalizedTypeEnumAST_valueType *) (inArgument_inType.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_1218->mAssociatedValue0 ;
      {
      ioArgument_ioGraph.modifier_addEdge (inArgument_inNodeName, extractedValue_typeName COMMA_SOURCE_FILE ("generalized-type.galgas", 24)) ;
      }
    }
    break ;
  case GALGAS_generalizedTypeEnumAST::kEnum_procType:
    {
      const cEnumAssociatedValues_generalizedTypeEnumAST_procType * extractPtr_1389 = (const cEnumAssociatedValues_generalizedTypeEnumAST_procType *) (inArgument_inType.unsafePointer ()) ;
      const GALGAS_procFormalArgumentList extractedValue_procFormalArgumentList = extractPtr_1389->mAssociatedValue1 ;
      cEnumerator_procFormalArgumentList enumerator_1306 (extractedValue_procFormalArgumentList, kEnumeration_up) ;
      while (enumerator_1306.hasCurrentObject ()) {
        {
        ioArgument_ioGraph.modifier_addEdge (inArgument_inNodeName, enumerator_1306.current (HERE).mAttribute_mFormalArgumentTypeName COMMA_SOURCE_FILE ("generalized-type.galgas", 27)) ;
        }
        enumerator_1306.gotoNextObject () ;
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, inArgument_inBooleanTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("bool-type.galgas", 80)) ;
  }
  GALGAS_lstring var_boolBoolOp = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.mAttribute_string, inArgument_inBooleanTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 81)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("bool-type.galgas", 85))  COMMA_SOURCE_FILE ("bool-type.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 82)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("bool-type.galgas", 90))  COMMA_SOURCE_FILE ("bool-type.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 87)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("bool-type.galgas", 95))  COMMA_SOURCE_FILE ("bool-type.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 92)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("bool-type.galgas", 100))  COMMA_SOURCE_FILE ("bool-type.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 97)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("bool-type.galgas", 105))  COMMA_SOURCE_FILE ("bool-type.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 102)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("bool-type.galgas", 110))  COMMA_SOURCE_FILE ("bool-type.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 107)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mBooleanXorOperatorMap.modifier_insertKey (var_boolBoolOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("bool-type.galgas", 115))  COMMA_SOURCE_FILE ("bool-type.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 112)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNotOperatorMap.modifier_insertKey (inArgument_inBooleanTypeName, var_selfTypeProxy, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 117)) ;
  }
}


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
  return function_bootModeName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_bootModeName ("bootModeName",
                                                              functionWithGenericHeader_bootModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_bootModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterEnumerationOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationOperators (GALGAS_lstring inArgument_inEnumerationTypeName,
                                        GALGAS_semanticContext & ioArgument_ioContext,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key = function_combineTypeNamesForInfixOperator (inArgument_inEnumerationTypeName.mAttribute_string, inArgument_inEnumerationTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 126)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("enumeration-declaration.galgas", 130))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("enumeration-declaration.galgas", 135))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 132)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("enumeration-declaration.galgas", 145))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("enumeration-declaration.galgas", 150))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (var_key, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("enumeration-declaration.galgas", 155))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 152)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'declareLLVMstructures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_declareLLVMstructures (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                    GALGAS_string & ioArgument_ioCode,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_unifiedTypeMap enumerator_9988 (constinArgument_inTypeMap, kEnumeration_up) ;
  while (enumerator_9988.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_9988.current_kind (HERE).reader_isStructure (SOURCE_FILE ("structure-declaration.galgas", 257)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_name ;
      GALGAS_propertyList var_propertyList ;
      GALGAS_propertyMap joker_10073 ; // Joker input parameter
      enumerator_9988.current_kind (HERE).method_structure (var_name, joker_10073, var_propertyList, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 258)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("%").add_operation (var_name, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 259)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 259))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 259)) ;
      cEnumerator_propertyList enumerator_10176 (var_propertyList, kEnumeration_up) ;
      while (enumerator_10176.hasCurrentObject ()) {
        ioArgument_ioCode.dotAssign_operation (categoryReader_llvmTypeName (enumerator_10176.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 261))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 261)) ;
        if (enumerator_10176.hasNextObject ()) {
          ioArgument_ioCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 262)) ;
        }
        enumerator_10176.gotoNextObject () ;
      }
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 264)) ;
    }
    enumerator_9988.gotoNextObject () ;
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
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 164)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 164)) ;
  }
  ioArgument_ioContext.mAttribute_mIncOperatorMap.modifier_insertKey (constinArgument_inIntegerTypeName, temp_0, GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 164)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 165)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 165)) ;
  }
  ioArgument_ioContext.mAttribute_mDecOperatorMap.modifier_insertKey (constinArgument_inIntegerTypeName, temp_2, GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 165)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("type-integer.galgas", 167)) ;
  }
  GALGAS_lstring var_intIntOp = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 173))  COMMA_SOURCE_FILE ("type-integer.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 170)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 178))  COMMA_SOURCE_FILE ("type-integer.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 183)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 183)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 180)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 188)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 188)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 185)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_8 ;
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 193)) ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 193)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_8  COMMA_SOURCE_FILE ("type-integer.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 190)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 198)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 198)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 195)) ;
  }
  const enumGalgasBool test_12 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 201)).boolEnum () ;
  if (kBoolTrue == test_12) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 205))  COMMA_SOURCE_FILE ("type-integer.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 210))  COMMA_SOURCE_FILE ("type-integer.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 207)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 215))  COMMA_SOURCE_FILE ("type-integer.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mUnsignedComplementOperatorMap.modifier_insertKey (constinArgument_inIntegerTypeName, var_selfTypeProxy, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 217)) ;
    }
  }
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    {
    ioArgument_ioContext.mAttribute_mUnaryMinusOperatorMap.modifier_insertKey (constinArgument_inIntegerTypeName, var_selfTypeProxy, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 224)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 233)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 233)) ;
  }
  ioArgument_ioContext.mAttribute_mAddOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 238))  COMMA_SOURCE_FILE ("type-integer.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 243)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 243)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 248))  COMMA_SOURCE_FILE ("type-integer.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 245)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 253)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 253)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 250)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 258))  COMMA_SOURCE_FILE ("type-integer.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 255)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 263)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 263)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 260)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 268)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 268)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 265)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 273)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 273)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 270)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_26 ;
  const enumGalgasBool test_27 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_27) {
    temp_26 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 278)) ;
  }else if (kBoolFalse == test_27) {
    temp_26 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_26  COMMA_SOURCE_FILE ("type-integer.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 275)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 284))  COMMA_SOURCE_FILE ("type-integer.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 281)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_28 ;
  const enumGalgasBool test_29 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_29) {
    temp_28 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 289)) ;
  }else if (kBoolFalse == test_29) {
    temp_28 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 289)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_28  COMMA_SOURCE_FILE ("type-integer.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 286)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("type-integer.galgas", 334)) ;
  }
  GALGAS_lstring var_intLiteralOp = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 336)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 340))  COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 345))  COMMA_SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 350)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 350)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 355)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 355)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 357)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 365)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 365)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 362)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 368)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 372))  COMMA_SOURCE_FILE ("type-integer.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 377))  COMMA_SOURCE_FILE ("type-integer.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 382))  COMMA_SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 389)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 389)) ;
  }
  ioArgument_ioContext.mAttribute_mAddOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 386)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 394))  COMMA_SOURCE_FILE ("type-integer.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 391)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 399)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 399)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 396)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 404))  COMMA_SOURCE_FILE ("type-integer.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 409)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 409)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 414))  COMMA_SOURCE_FILE ("type-integer.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 411)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 419)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 419)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 416)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 424)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 424)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 421)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 429)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 429)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 426)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 434)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 434)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 431)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 440))  COMMA_SOURCE_FILE ("type-integer.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 437)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 445)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 445)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 442)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("type-integer.galgas", 498)) ;
  }
  GALGAS_lstring var_intLiteralOp = function_combineTypeNamesForInfixOperator (function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 500)), constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 500)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 504))  COMMA_SOURCE_FILE ("type-integer.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 501)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 509))  COMMA_SOURCE_FILE ("type-integer.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 506)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 514)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 514)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 511)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 519)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 519)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (var_intLiteralOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 532)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 536))  COMMA_SOURCE_FILE ("type-integer.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 533)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 541))  COMMA_SOURCE_FILE ("type-integer.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 538)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 546))  COMMA_SOURCE_FILE ("type-integer.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 543)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 553)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 553)) ;
  }
  ioArgument_ioContext.mAttribute_mAddOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 550)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 558))  COMMA_SOURCE_FILE ("type-integer.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 555)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 563)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 563)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 560)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 568))  COMMA_SOURCE_FILE ("type-integer.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 565)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 573)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 573)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 570)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 578))  COMMA_SOURCE_FILE ("type-integer.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 575)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 580)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 588)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 588)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 604))  COMMA_SOURCE_FILE ("type-integer.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 601)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 609)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 609)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.modifier_insertKey (var_intLiteralOp, var_selfTypeProxy, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 606)) ;
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
  GALGAS_lstring var_intIntOp = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 66)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)) ;
  }
  ioArgument_ioContext.mAttribute_mLiteralIntegerType = var_selfTypeProxy ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_equal (SOURCE_FILE ("type-literal-integer.galgas", 73))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 70)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_nonEqual (SOURCE_FILE ("type-literal-integer.galgas", 78))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 75)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_strictInf (SOURCE_FILE ("type-literal-integer.galgas", 83))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 80)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_infEqual (SOURCE_FILE ("type-literal-integer.galgas", 88))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_strictSup (SOURCE_FILE ("type-literal-integer.galgas", 93))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 90)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (var_intIntOp, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_supEqual (SOURCE_FILE ("type-literal-integer.galgas", 98))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAndOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mOrOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mXorOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mUnsignedComplementOperatorMap.modifier_insertKey (constinArgument_inIntegerTypeName, var_selfTypeProxy, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 116)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mUnaryMinusOperatorMap.modifier_insertKey (constinArgument_inIntegerTypeName, var_selfTypeProxy, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 121)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_add (SOURCE_FILE ("type-literal-integer.galgas", 129))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 126)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_add (SOURCE_FILE ("type-literal-integer.galgas", 134))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 131)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_sub (SOURCE_FILE ("type-literal-integer.galgas", 139))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 136)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_sub (SOURCE_FILE ("type-literal-integer.galgas", 144))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 141)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_mul (SOURCE_FILE ("type-literal-integer.galgas", 149))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 146)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_mul (SOURCE_FILE ("type-literal-integer.galgas", 154))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 151)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mDivOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_div (SOURCE_FILE ("type-literal-integer.galgas", 159))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 156)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_div (SOURCE_FILE ("type-literal-integer.galgas", 164))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 161)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mModOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_rem (SOURCE_FILE ("type-literal-integer.galgas", 169))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 166)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_rem (SOURCE_FILE ("type-literal-integer.galgas", 174))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 171)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_leftShift (SOURCE_FILE ("type-literal-integer.galgas", 180))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 177)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.modifier_insertKey (var_intIntOp, var_selfTypeProxy, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_literalIntegerInfixOperator::constructor_rightShift (SOURCE_FILE ("type-literal-integer.galgas", 185))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 182)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterStaticStringOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterStaticStringOperators (GALGAS_lstring inArgument_inBooleanTypeName,
                                         GALGAS_semanticContext & ioArgument_ioContext,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, inArgument_inBooleanTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("type-static-string.galgas", 63)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.modifier_insertKey (GALGAS_lstring::constructor_new (inArgument_inBooleanTypeName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)).add_operation (inArgument_inBooleanTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 65)), inArgument_inBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 65)), var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-string.galgas", 67))  COMMA_SOURCE_FILE ("type-static-string.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.modifier_insertKey (GALGAS_lstring::constructor_new (inArgument_inBooleanTypeName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 70)).add_operation (inArgument_inBooleanTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 70)), inArgument_inBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 70)), var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-string.galgas", 72))  COMMA_SOURCE_FILE ("type-static-string.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 69)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.modifier_insertKey (GALGAS_lstring::constructor_new (inArgument_inBooleanTypeName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 75)).add_operation (inArgument_inBooleanTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 75)), inArgument_inBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 75)), var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-string.galgas", 77))  COMMA_SOURCE_FILE ("type-static-string.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 74)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.modifier_insertKey (GALGAS_lstring::constructor_new (inArgument_inBooleanTypeName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 80)).add_operation (inArgument_inBooleanTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 80)), inArgument_inBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 80)), var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-string.galgas", 82))  COMMA_SOURCE_FILE ("type-static-string.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 79)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.modifier_insertKey (GALGAS_lstring::constructor_new (inArgument_inBooleanTypeName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 85)).add_operation (inArgument_inBooleanTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 85)), inArgument_inBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 85)), var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-string.galgas", 87))  COMMA_SOURCE_FILE ("type-static-string.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 84)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.modifier_insertKey (GALGAS_lstring::constructor_new (inArgument_inBooleanTypeName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 90)).add_operation (inArgument_inBooleanTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 90)), inArgument_inBooleanTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 90)), var_selfTypeProxy, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-string.galgas", 92))  COMMA_SOURCE_FILE ("type-static-string.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 89)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'exceptionModeName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_exceptionModeName (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("exception") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_exceptionModeName = false ;
static GALGAS_string gOnceFunctionResult_exceptionModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_exceptionModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exceptionModeName) {
    gOnceFunctionResult_exceptionModeName = onceFunction_exceptionModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exceptionModeName = true ;
  }
  return gOnceFunctionResult_exceptionModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_exceptionModeName (void) {
  gOnceFunctionResult_exceptionModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_exceptionModeName (NULL,
                                                               releaseOnceFunctionResult_exceptionModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_exceptionModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_exceptionModeName (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_exceptionModeName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_exceptionModeName ("exceptionModeName",
                                                                   functionWithGenericHeader_exceptionModeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exceptionModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'functionGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_functionGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_functionGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_functionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_functionGenerationTemplate_0,
  0,
  gWrapperAllDirectories_functionGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'functionGenerationTemplate implementation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_functionGenerationTemplate_implementation (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                             const GALGAS_funcFormalArgumentListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                             const GALGAS_string & in_INSTRUCTION_5F_LLVM_5F_CODE,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy & in_RESULT_5F_TYPE,
                                                                             const GALGAS_string & in_RESULT_5F_VAR_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//" ;
  result << GALGAS_string ("func ").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 2)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 2)).stringValue () ;
  result << "*\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static " ;
  result << function_mangledNameForType (in_RESULT_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 5)), inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 5)).stringValue () ;
  result << " " ;
  result << function_mangledNameForFunction (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 5)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("function-implementation.galgasTemplate", 6)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void" ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint index_514_ (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_funcFormalArgumentListForGeneration enumerator_514 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_514.hasCurrentObject ()) {
        result << function_mangledNameForType (enumerator_514.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 11)), inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 11)).stringValue () ;
        result << " " ;
        result << enumerator_514.current_mFormalArgumentName (HERE).stringValue () ;
        if (enumerator_514.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_514_.increment () ;
        enumerator_514.gotoNextObject () ;
      }
    }
  }
  result << ") {\n"
    "  " ;
  result << function_mangledNameForType (in_RESULT_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 18)).stringValue () ;
  result << " " ;
  result << function_mangledNameForLocalVariable (in_RESULT_5F_VAR_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 18)).stringValue () ;
  result << " ;\n" ;
  result << in_INSTRUCTION_5F_LLVM_5F_CODE.stringValue () ;
  result << "  return " ;
  result << function_mangledNameForLocalVariable (in_RESULT_5F_VAR_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.galgasTemplate", 20)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'mangledName'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledName (const GALGAS_procedureKindAST & constinArgument_inProcedureKind,
                                    const GALGAS_string & constinArgument_inProcedureName,
                                    GALGAS_procFormalArgumentList inArgument_inProcFormalArgumentList,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outMangledName ; // Returned variable
  result_outMangledName = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inProcedureKind.enumValue ()) {
  case GALGAS_procedureKindAST::kNotBuilt:
    break ;
  case GALGAS_procedureKindAST::kEnum_standAloneProc:
    {
    }
    break ;
  case GALGAS_procedureKindAST::kEnum_structureProc:
    {
      const cEnumAssociatedValues_procedureKindAST_structureProc * extractPtr_7062 = (const cEnumAssociatedValues_procedureKindAST_structureProc *) (constinArgument_inProcedureKind.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_structureTypeName = extractPtr_7062->mAssociatedValue0 ;
      result_outMangledName.dotAssign_operation (extractedValue_structureTypeName.mAttribute_string.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 201))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 201)) ;
    }
    break ;
  }
  result_outMangledName.dotAssign_operation (constinArgument_inProcedureName  COMMA_SOURCE_FILE ("proc-declaration.galgas", 203)) ;
  cEnumerator_procFormalArgumentList enumerator_7168 (inArgument_inProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_7168.hasCurrentObject ()) {
    switch (enumerator_7168.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_outMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("proc-declaration.galgas", 206)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_outMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("proc-declaration.galgas", 207)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_outMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("proc-declaration.galgas", 208)) ;
      }
      break ;
    }
    result_outMangledName.dotAssign_operation (enumerator_7168.current_mSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 210))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 210)) ;
    enumerator_7168.gotoNextObject () ;
  }
//---
  return result_outMangledName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledName [4] = {
  & kTypeDescriptor_GALGAS_procedureKindAST,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_procFormalArgumentList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledName (C_Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_procedureKindAST operand0 = GALGAS_procedureKindAST::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_procFormalArgumentList operand2 = GALGAS_procFormalArgumentList::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  return function_mangledName (operand0,
                               operand1,
                               operand2,
                               inCompiler
                               COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledName ("mangledName",
                                                             functionWithGenericHeader_mangledName,
                                                             & kTypeDescriptor_GALGAS_string,
                                                             3,
                                                             functionArgs_mangledName) ;

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
  cEnumerator_requiredProcedureDeclarationListAST enumerator_1850 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_1850.hasCurrentObject ()) {
    GALGAS_string var_requiredProcMangledName = function_mangledName (GALGAS_procedureKindAST::constructor_standAloneProc (SOURCE_FILE ("required-proc-declaration.galgas", 43)), enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string, enumerator_1850.current (HERE).mAttribute_mProcFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 42)) ;
    const enumGalgasBool test_0 = constinArgument_inSemanticContext.mAttribute_mProcedureMap.reader_hasKey (var_requiredProcMangledName COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 47)).operator_not (SOURCE_FILE ("required-proc-declaration.galgas", 47)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s = GALGAS_string ("the '").add_operation (enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.reader_string (SOURCE_FILE ("required-proc-declaration.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 48)).add_operation (GALGAS_string ("' should be defined as: proc"), inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 48)) ;
      cEnumerator_lstringlist enumerator_2301 (enumerator_1850.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_2301.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string (" $").add_operation (enumerator_2301.current_mValue (HERE).reader_string (SOURCE_FILE ("required-proc-declaration.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 50))  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 50)) ;
        enumerator_2301.gotoNextObject () ;
      }
      var_s.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.reader_string (SOURCE_FILE ("required-proc-declaration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 52))  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 52)) ;
      cEnumerator_procFormalArgumentList enumerator_2446 (enumerator_1850.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_2446.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 54)) ;
        switch (enumerator_2446.current (HERE).mAttribute_mFormalArgumentPassingMode.enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            var_s.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 56)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            var_s.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 57)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            var_s.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 58)) ;
          }
          break ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2446.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_s.dotAssign_operation (enumerator_2446.current (HERE).mAttribute_mSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 61))  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 61)) ;
        }
        var_s.dotAssign_operation (enumerator_2446.current (HERE).mAttribute_mFormalArgumentTypeName.mAttribute_string  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 63)) ;
        enumerator_2446.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 65)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_modeMap var_procModes ;
      GALGAS_bool joker_2906 ; // Joker input parameter
      GALGAS_procedureSignature joker_2924_2 ; // Joker input parameter
      GALGAS_bool joker_2924_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mProcedureMap.method_searchKey (var_requiredProcMangledName.reader_nowhere (SOURCE_FILE ("required-proc-declaration.galgas", 67)), joker_2906, var_procModes, joker_2924_2, joker_2924_1, inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 67)) ;
      GALGAS_stringset var_actualProcModeSet = var_procModes.reader_keySet (SOURCE_FILE ("required-proc-declaration.galgas", 68)) ;
      GALGAS_stringset var_requiredProcModeSet = GALGAS_stringset::constructor_setWithLStringList (enumerator_1850.current (HERE).mAttribute_mProcedureModeList  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 69)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_actualProcModeSet.objectCompare (var_requiredProcModeSet)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("required modes:") ;
        cEnumerator_stringset enumerator_3203 (var_requiredProcModeSet, kEnumeration_up) ;
        while (enumerator_3203.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string (" $").add_operation (enumerator_3203.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 73))  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 73)) ;
          enumerator_3203.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inSemanticContext.mAttribute_mProcedureMap.reader_locationForKey (var_requiredProcMangledName, inCompiler COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 75)), var_s  COMMA_SOURCE_FILE ("required-proc-declaration.galgas", 75)) ;
      }
    }
    enumerator_1850.gotoNextObject () ;
  }
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
      const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 187)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 187)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 188)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 188))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 188)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
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
      const enumGalgasBool test_2 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 198)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 198)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 199)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 199))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 199)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_3) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_4 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 209)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 209)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 210)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 210))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 210)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
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
      const enumGalgasBool test_6 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 220)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 220)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 221)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 221))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 221)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
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
      const enumGalgasBool test_8 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 232)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 232))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 232)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
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
                                       COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getInfixOperatorMap ("getInfixOperatorMap",
                                                                     functionWithGenericHeader_getInfixOperatorMap,
                                                                     & kTypeDescriptor_GALGAS_infixOperatorMap,
                                                                     4,
                                                                     functionArgs_getInfixOperatorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'initialVariableMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap function_initialVariableMap (const GALGAS_string & constinArgument_inMangledName,
                                                const GALGAS_semanticContext & constinArgument_inContext,
                                                GALGAS_bool inArgument_inGlobalsAreConstant,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableMap result_outVariableMap ; // Returned variable
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 14)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("variable-map.galgas", 15)) ;
  cEnumerator_registerMap enumerator_945 (constinArgument_inContext.mAttribute_mRegisterMap, kEnumeration_up) ;
  while (enumerator_945.hasCurrentObject ()) {
    GALGAS_bool test_0 = enumerator_945.current_mIsReadOnly (HERE) ;
    if (kBoolTrue != test_0.boolEnum ()) {
      test_0 = inArgument_inGlobalsAreConstant ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      result_outVariableMap.modifier_insertUsedLocalConstant (enumerator_945.current_lkey (HERE), enumerator_945.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_945.current_mType (HERE), enumerator_945.current_lkey (HERE), enumerator_945.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 22)), GALGAS_bool (true), enumerator_945.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 18)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      result_outVariableMap.modifier_insertDefinedLocalVariable (enumerator_945.current_lkey (HERE), enumerator_945.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_945.current_mType (HERE), enumerator_945.current_lkey (HERE), enumerator_945.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 33)), GALGAS_bool (true), enumerator_945.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 29)) ;
      }
    }
    enumerator_945.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_1708 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_1708.hasCurrentObject ()) {
    {
    result_outVariableMap.modifier_insertUsedLocalConstant (enumerator_1708.current_lkey (HERE), enumerator_1708.current_mConstantType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_1708.current_mConstantType (HERE), enumerator_1708.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 47)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 49)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 43)) ;
    }
    enumerator_1708.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_2120 (constinArgument_inContext.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  while (enumerator_2120.hasCurrentObject ()) {
    GALGAS_bool var_allowedAccess = enumerator_2120.current_mAllowedProcedureMap (HERE).reader_hasKey (constinArgument_inMangledName COMMA_SOURCE_FILE ("variable-map.galgas", 56)) ;
    GALGAS_bool var_writeAccess = GALGAS_bool (false) ;
    const enumGalgasBool test_2 = var_allowedAccess.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_writeAccess = enumerator_2120.current_mAllowedProcedureMap (HERE).reader_mHasWriteAccessForKey (constinArgument_inMangledName, inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 59)) ;
    }
    GALGAS_bool test_3 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = var_writeAccess.operator_not (SOURCE_FILE ("variable-map.galgas", 61)) ;
    }
    const enumGalgasBool test_4 = test_3.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      result_outVariableMap.modifier_insertUsedLocalConstant (enumerator_2120.current_lkey (HERE), enumerator_2120.current_mVariableType (HERE), var_allowedAccess, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_2120.current_mVariableType (HERE), enumerator_2120.current_lkey (HERE).mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_2120.current_mExecutionModeSet (HERE).reader_count (SOURCE_FILE ("variable-map.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map.galgas", 66)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 68)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 62)) ;
      }
    }else if (kBoolFalse == test_4) {
      {
      result_outVariableMap.modifier_insertGlobalVariable (enumerator_2120.current_lkey (HERE), enumerator_2120.current_mVariableType (HERE), var_allowedAccess, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_2120.current_mVariableType (HERE), enumerator_2120.current_lkey (HERE).mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_2120.current_mExecutionModeSet (HERE).reader_count (SOURCE_FILE ("variable-map.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map.galgas", 77)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 79)), GALGAS_bool (false), enumerator_2120.current_mIsConstant (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 73)) ;
      }
    }
    enumerator_2120.gotoNextObject () ;
  }
//---
  return result_outVariableMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initialVariableMap [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_bool,
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
  return function_initialVariableMap (operand0,
                                      operand1,
                                      operand2,
                                      inCompiler
                                      COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initialVariableMap ("initialVariableMap",
                                                                    functionWithGenericHeader_initialVariableMap,
                                                                    & kTypeDescriptor_GALGAS_variableMap,
                                                                    3,
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
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 93)) ;
  cEnumerator_globalConstantMap enumerator_3428 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_3428.hasCurrentObject ()) {
    {
    result_outVariableMap.modifier_insertUsedLocalConstant (enumerator_3428.current_lkey (HERE), enumerator_3428.current_mConstantType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_3428.current_mConstantType (HERE), enumerator_3428.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 100)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 102)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 96)) ;
    }
    enumerator_3428.gotoNextObject () ;
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
                                            COMMA_THERE).reader_object (THERE) ;
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
  outArgument_outTempVariable = GALGAS_operandIR::constructor_new (constinArgument_inType, GALGAS_valueIR::constructor_llvmLocalObject (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.reader_string (SOURCE_FILE ("variable-map.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 116))  COMMA_SOURCE_FILE ("variable-map.galgas", 116))  COMMA_SOURCE_FILE ("variable-map.galgas", 116)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 117)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'getNewTempObjectInMemory'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempObjectInMemory (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_objectInMemoryIR & outArgument_outTempVariable,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inType, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.reader_string (SOURCE_FILE ("variable-map.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 127))  COMMA_SOURCE_FILE ("variable-map.galgas", 127)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 128)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (GALGAS_ast inArgument_inAST,
                                          GALGAS_location inArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 27)) ;
  cEnumerator_declarationListAST enumerator_1584 (inArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_1584.hasCurrentObject ()) {
    callCategoryMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1584.current_mDeclaration (HERE).ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 29)) ;
    enumerator_1584.gotoNextObject () ;
  }
  cEnumerator_procedureDeclarationListAST enumerator_1698 (inArgument_inAST.mAttribute_mProcedureListAST, kEnumeration_up) ;
  while (enumerator_1698.hasCurrentObject ()) {
    categoryMethod_enterInPrecedenceGraph (enumerator_1698.current (HERE), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
    enumerator_1698.gotoNextObject () ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_precedenceGraph.reader_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 36)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_lstringlist enumerator_1911 (var_precedenceGraph.reader_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 37)), kEnumeration_up) ;
    while (enumerator_1911.hasCurrentObject ()) {
      GALGAS_location location_1 (enumerator_1911.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_1911.current_mValue (HERE).reader_string (SOURCE_FILE ("ordered-declaration-list.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
      enumerator_1911.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST ;
    GALGAS_lstringlist joker_2067 ; // Joker input parameter
    GALGAS_lstringlist joker_2142 ; // Joker input parameter
    var_precedenceGraph.method_topologicalSort (outArgument_outDeclarationListAST, joker_2067, var_unsortedSemanticDeclarationListAST, joker_2142, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST.reader_length (SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST.reader_length (SOURCE_FILE ("ordered-declaration-list.galgas", 49)).reader_string (SOURCE_FILE ("ordered-declaration-list.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
      cEnumerator_declarationListAST enumerator_2436 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_2436.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "-  ").add_operation (callCategoryReader_keyRepresentation ((const cPtr_abstractDeclaration *) enumerator_2436.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
        enumerator_2436.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (inArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
      cEnumerator_declarationListAST enumerator_2591 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_2591.hasCurrentObject ()) {
        inCompiler->emitSemanticError (callCategoryReader_location ((const cPtr_abstractDeclaration *) enumerator_2591.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56)), GALGAS_string ("the ").add_operation (callCategoryReader_keyRepresentation ((const cPtr_abstractDeclaration *) enumerator_2591.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56)) ;
        enumerator_2591.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Routine 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMode (const GALGAS_stringset constinArgument_inRequiredModes,
                        const GALGAS_stringset constinArgument_inPossibleModes,
                        const GALGAS_location constinArgument_inErrorLocation,
                        C_Compiler * inCompiler
                        COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inPossibleModes.operator_and (constinArgument_inRequiredModes COMMA_SOURCE_FILE ("semantic-context.galgas", 86)).objectCompare (constinArgument_inRequiredModes)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_missingModes = constinArgument_inRequiredModes.substract_operation (constinArgument_inPossibleModes, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 87)) ;
    GALGAS_string var_s = GALGAS_string ("cannot be accessed in mode") ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_missingModes.reader_count (SOURCE_FILE ("semantic-context.galgas", 89)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    var_s.dotAssign_operation (temp_1  COMMA_SOURCE_FILE ("semantic-context.galgas", 89)) ;
    var_s.dotAssign_operation (GALGAS_string (": ")  COMMA_SOURCE_FILE ("semantic-context.galgas", 90)) ;
    cEnumerator_stringset enumerator_3799 (var_missingModes, kEnumeration_up) ;
    while (enumerator_3799.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("$").add_operation (enumerator_3799.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 92))  COMMA_SOURCE_FILE ("semantic-context.galgas", 92)) ;
      if (enumerator_3799.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semantic-context.galgas", 93)) ;
      }
      enumerator_3799.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, var_s  COMMA_SOURCE_FILE ("semantic-context.galgas", 95)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("semantic-context.galgas", 223)) ;
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.modifier_insertKey (GALGAS_string ("boot").reader_nowhere (SOURCE_FILE ("semantic-context.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 225)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.modifier_insertKey (GALGAS_string ("init").reader_nowhere (SOURCE_FILE ("semantic-context.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 226)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.modifier_insertKey (GALGAS_string ("exception").reader_nowhere (SOURCE_FILE ("semantic-context.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 227)) ;
  }
  cEnumerator_initList enumerator_9427 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_9427.hasCurrentObject ()) {
    categoryMethod_enterInContext (enumerator_9427.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 230)) ;
    enumerator_9427.gotoNextObject () ;
  }
  cEnumerator_exceptionClauseListAST enumerator_9589 (constinArgument_inAST.mAttribute_mExceptionClauses, kEnumeration_up) ;
  while (enumerator_9589.hasCurrentObject ()) {
    categoryMethod_enterInContext (enumerator_9589.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 236)) ;
    enumerator_9589.gotoNextObject () ;
  }
  cEnumerator_declarationListAST enumerator_9725 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_9725.hasCurrentObject ()) {
    callCategoryMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_9725.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 242)) ;
    enumerator_9725.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inAST.mAttribute_mExceptionTypes.reader_length (SOURCE_FILE ("semantic-context.galgas", 249)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semantic-context.galgas", 250)).reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("exactly one exception type declaration should be provided (found:").add_operation (constinArgument_inAST.mAttribute_mExceptionTypes.reader_length (SOURCE_FILE ("semantic-context.galgas", 251)).reader_string (SOURCE_FILE ("semantic-context.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 251)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 251))  COMMA_SOURCE_FILE ("semantic-context.galgas", 250)) ;
    cEnumerator_exceptionTypesAST enumerator_10157 (constinArgument_inAST.mAttribute_mExceptionTypes, kEnumeration_up) ;
    while (enumerator_10157.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_10157.current_mExceptionCodeTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("exception type declaration is here")  COMMA_SOURCE_FILE ("semantic-context.galgas", 253)) ;
      enumerator_10157.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_lstring var_exceptionCodeTypeName ;
    GALGAS_lstring var_exceptionLineTypeName ;
    constinArgument_inAST.mAttribute_mExceptionTypes.method_first (var_exceptionCodeTypeName, var_exceptionLineTypeName, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 256)) ;
    outArgument_outSemanticContext.mAttribute_mExceptionCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.mAttribute_mTypeMap, var_exceptionCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-context.galgas", 257)) ;
    outArgument_outSemanticContext.mAttribute_mExceptionLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.mAttribute_mTypeMap, var_exceptionLineTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-context.galgas", 261)) ;
  }
  cEnumerator_procedureDeclarationListAST enumerator_10703 (constinArgument_inAST.mAttribute_mProcedureListAST, kEnumeration_up) ;
  while (enumerator_10703.hasCurrentObject ()) {
    categoryMethod_enterInContext (enumerator_10703.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 268)) ;
    enumerator_10703.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_10819 (constinArgument_inAST.mAttribute_mFunctionListAST, kEnumeration_up) ;
  while (enumerator_10819.hasCurrentObject ()) {
    categoryMethod_enterInContext (enumerator_10819.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 272)) ;
    enumerator_10819.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-context.galgas", 275)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    cEnumerator_requiredProcedureDeclarationListAST enumerator_10999 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
    while (enumerator_10999.hasCurrentObject ()) {
      cEnumerator_lstringlist enumerator_11054 (enumerator_10999.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_11054.hasCurrentObject ()) {
        outArgument_outSemanticContext.mAttribute_mModeMap.method_searchKey (enumerator_11054.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 278)) ;
        enumerator_11054.gotoNextObject () ;
      }
      enumerator_10999.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-context.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    cEnumerator_declarationListAST enumerator_11244 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
    while (enumerator_11244.hasCurrentObject ()) {
      callCategoryMethod_initAnalysis ((const cPtr_abstractDeclaration *) enumerator_11244.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 285)) ;
      enumerator_11244.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-context.galgas", 291)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    cEnumerator_globalVarDeclarationList enumerator_11458 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
    while (enumerator_11458.hasCurrentObject ()) {
      categoryMethod_enterInContext (enumerator_11458.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 293)) ;
      enumerator_11458.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSourceType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-context.galgas", 309)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-context.galgas", 310)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("semantic-context.galgas", 311)) ;
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
                                     COMMA_THERE).reader_object (THERE) ;
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
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 323)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 323)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 323)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("semantic-context.galgas", 323)).reader_nowhere (SOURCE_FILE ("semantic-context.galgas", 323)) ;
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
                                                    COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'checkAssignmentCompatibility'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentCompatibility (const GALGAS_operandIR constinArgument_inSourceValue,
                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                           const GALGAS_location constinArgument_inErrorLocation,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 12)))).boolEnum () ;
  if (kBoolTrue == test_0) {
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceValue.mAttribute_mType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool test_2 = constinArgument_inSourceValue.mAttribute_mType.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 15)).reader_isLiteralInteger (SOURCE_FILE ("semantic-analysis.galgas", 15)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 15)).reader_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 15)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value ;
        constinArgument_inSourceValue.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 16)) ;
        GALGAS_bigint var_minTarget ;
        GALGAS_bigint var_maxTarget ;
        GALGAS_bool joker_1107 ; // Joker input parameter
        GALGAS_uint joker_1119 ; // Joker input parameter
        constinArgument_inTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 17)).method_integer (var_minTarget, var_maxTarget, joker_1107, joker_1119, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 17)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_minTarget.objectCompare (var_value)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget.objectCompare (var_value)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large")  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        }
      }else if (kBoolFalse == test_3) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type ").add_operation (constinArgument_inTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)).add_operation (GALGAS_string (" cannot be assigned from expression of type "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)).add_operation (constinArgument_inSourceValue.mAttribute_mType.reader_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_globalLiteralStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 55)) ;
  outArgument_outIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap = constinArgument_inGlobalLiteralStringMap ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2801 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_2801.hasCurrentObject ()) {
    outArgument_outIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.addAssign_operation (enumerator_2801.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 58)) ;
    enumerator_2801.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_2983 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
  while (enumerator_2983.hasCurrentObject ()) {
    categoryMethod_semanticAnalysis (enumerator_2983.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 62)) ;
    enumerator_2983.gotoNextObject () ;
  }
  cEnumerator_declarationListAST enumerator_3161 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_3161.hasCurrentObject ()) {
    callCategoryMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_3161.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
    enumerator_3161.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 73)) ;
  cEnumerator_procedureDeclarationListAST enumerator_3390 (constinArgument_inAST.mAttribute_mProcedureListAST, kEnumeration_up) ;
  while (enumerator_3390.hasCurrentObject ()) {
    categoryMethod_procedureSemanticAnalysis (enumerator_3390.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
    enumerator_3390.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_3601 (constinArgument_inAST.mAttribute_mFunctionListAST, kEnumeration_up) ;
  while (enumerator_3601.hasCurrentObject ()) {
    categoryMethod_functionSemanticAnalysis (enumerator_3601.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 82)) ;
    enumerator_3601.gotoNextObject () ;
  }
  cEnumerator_bootList enumerator_3799 (constinArgument_inAST.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_3799.hasCurrentObject ()) {
    categoryMethod_bootSemanticAnalysis (enumerator_3799.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 89)) ;
    enumerator_3799.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_3989 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_3989.hasCurrentObject ()) {
    categoryMethod_initSemanticAnalysis (enumerator_3989.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 96)) ;
    enumerator_3989.gotoNextObject () ;
  }
  cEnumerator_exceptionClauseListAST enumerator_4192 (constinArgument_inAST.mAttribute_mExceptionClauses, kEnumeration_up) ;
  while (enumerator_4192.hasCurrentObject ()) {
    categoryMethod_exceptionSemanticAnalysis (enumerator_4192.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 103)) ;
    enumerator_4192.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.reader_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s = var_temporaries.mAttribute_mSubprogramInvocationGraph.reader_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
    GALGAS_string var_filePath = constinArgument_inSourceFile.reader_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 118)).add_operation (GALGAS_string (".subprogramInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 118)) ;
    GALGAS_bool joker_4863 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (var_filePath, joker_4863, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 119)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 122)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.reader_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 122)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList = var_temporaries.mAttribute_mSubprogramInvocationGraph.reader_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 123)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList.reader_length (SOURCE_FILE ("semantic-analysis.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_5254 (var_undefinedNodeKeyList, kEnumeration_up) ;
      while (enumerator_5254.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          " - ").add_operation (enumerator_5254.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 127))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 127)) ;
        enumerator_5254.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 129)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList ;
      GALGAS_lstringlist var_unsortedLKeyList ;
      var_temporaries.mAttribute_mSubprogramInvocationGraph.method_circularities (var_unsortedInformationList, var_unsortedLKeyList COMMA_SOURCE_FILE ("semantic-analysis.galgas", 131)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList.reader_length (SOURCE_FILE ("semantic-analysis.galgas", 135)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_s = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_5651 (var_unsortedLKeyList, kEnumeration_up) ;
        while (enumerator_5651.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            " - ").add_operation (enumerator_5651.current_mValue (HERE).reader_string (SOURCE_FILE ("semantic-analysis.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 138))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 138)) ;
          enumerator_5651.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 140)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'mangledNameForProperty'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForProperty (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("property_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 6)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForProperty [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForProperty (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForProperty (operand0,
                                          inCompiler
                                          COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForProperty ("mangledNameForProperty",
                                                                        functionWithGenericHeader_mangledNameForProperty,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mangledNameForProperty) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'receiverName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_receiverName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("receiver") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_receiverName = false ;
static GALGAS_string gOnceFunctionResult_receiverName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_receiverName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_receiverName) {
    gOnceFunctionResult_receiverName = onceFunction_receiverName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_receiverName = true ;
  }
  return gOnceFunctionResult_receiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_receiverName (void) {
  gOnceFunctionResult_receiverName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_receiverName (NULL,
                                                          releaseOnceFunctionResult_receiverName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_receiverName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_receiverName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_receiverName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_receiverName ("receiverName",
                                                              functionWithGenericHeader_receiverName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_receiverName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'receiverPtrName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_receiverPtrName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("receiverPtr") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_receiverPtrName = false ;
static GALGAS_string gOnceFunctionResult_receiverPtrName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_receiverPtrName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_receiverPtrName) {
    gOnceFunctionResult_receiverPtrName = onceFunction_receiverPtrName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_receiverPtrName = true ;
  }
  return gOnceFunctionResult_receiverPtrName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_receiverPtrName (void) {
  gOnceFunctionResult_receiverPtrName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_receiverPtrName (NULL,
                                                             releaseOnceFunctionResult_receiverPtrName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_receiverPtrName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_receiverPtrName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_receiverPtrName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_receiverPtrName ("receiverPtrName",
                                                                 functionWithGenericHeader_receiverPtrName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_receiverPtrName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'mangledNameForType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForType (GALGAS_string inArgument_inName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outPrefix ; // Returned variable
  result_outPrefix = GALGAS_string ("type_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)) ;
//---
  return result_outPrefix ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForType (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForType (operand0,
                                      inCompiler
                                      COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForType ("mangledNameForType",
                                                                    functionWithGenericHeader_mangledNameForType,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_mangledNameForType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'literalStringPrefix'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_literalStringPrefix (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("str_") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_literalStringPrefix = false ;
static GALGAS_string gOnceFunctionResult_literalStringPrefix ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalStringPrefix (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringPrefix) {
    gOnceFunctionResult_literalStringPrefix = onceFunction_literalStringPrefix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringPrefix = true ;
  }
  return gOnceFunctionResult_literalStringPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_literalStringPrefix (void) {
  gOnceFunctionResult_literalStringPrefix.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_literalStringPrefix (NULL,
                                                                 releaseOnceFunctionResult_literalStringPrefix) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringPrefix [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringPrefix (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_literalStringPrefix (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringPrefix ("literalStringPrefix",
                                                                     functionWithGenericHeader_literalStringPrefix,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     0,
                                                                     functionArgs_literalStringPrefix) ;

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
  return function_staticStringTypeName (inCompiler COMMA_THERE).reader_object (THERE) ;
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
  return function_boolTypeName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'literalIntegerTypeName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_literalIntegerTypeName (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("literal integer") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_literalIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_literalIntegerTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalIntegerTypeName) {
    gOnceFunctionResult_literalIntegerTypeName = onceFunction_literalIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalIntegerTypeName = true ;
  }
  return gOnceFunctionResult_literalIntegerTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_literalIntegerTypeName (void) {
  gOnceFunctionResult_literalIntegerTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_literalIntegerTypeName (NULL,
                                                                    releaseOnceFunctionResult_literalIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalIntegerTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalIntegerTypeName (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_literalIntegerTypeName (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalIntegerTypeName ("literalIntegerTypeName",
                                                                        functionWithGenericHeader_literalIntegerTypeName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_literalIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'mangledNameForFunction'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForFunction (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("func_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 54)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForFunction (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForFunction (operand0,
                                          inCompiler
                                          COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForFunction ("mangledNameForFunction",
                                                                        functionWithGenericHeader_mangledNameForFunction,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mangledNameForFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'mangledNameForProcedure'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForProcedure (GALGAS_string inArgument_inName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("proc_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForProcedure [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForProcedure (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForProcedure (operand0,
                                           inCompiler
                                           COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForProcedure ("mangledNameForProcedure",
                                                                         functionWithGenericHeader_mangledNameForProcedure,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_mangledNameForProcedure) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'mangledNameForLocalVariable'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForLocalVariable (GALGAS_string inArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("var_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForLocalVariable (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForLocalVariable (operand0,
                                               inCompiler
                                               COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForLocalVariable ("mangledNameForLocalVariable",
                                                                             functionWithGenericHeader_mangledNameForLocalVariable,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_mangledNameForLocalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'mangledNameForGlobalVariable'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForGlobalVariable (GALGAS_string inArgument_inName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("gvar_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 72)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForGlobalVariable (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* §§ inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForGlobalVariable (operand0,
                                                inCompiler
                                                COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForGlobalVariable ("mangledNameForGlobalVariable",
                                                                              functionWithGenericHeader_mangledNameForGlobalVariable,
                                                                              & kTypeDescriptor_GALGAS_string,
                                                                              1,
                                                                              functionArgs_mangledNameForGlobalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'mangledNameForRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForRegister (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("register_").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForRegister (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForRegister (operand0,
                                          inCompiler
                                          COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForRegister ("mangledNameForRegister",
                                                                        functionWithGenericHeader_mangledNameForRegister,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mangledNameForRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'noWarningIfUnusedAttribute'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_noWarningIfUnusedAttribute (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("noWarningIfUnused") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_noWarningIfUnusedAttribute = false ;
static GALGAS_string gOnceFunctionResult_noWarningIfUnusedAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_noWarningIfUnusedAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noWarningIfUnusedAttribute) {
    gOnceFunctionResult_noWarningIfUnusedAttribute = onceFunction_noWarningIfUnusedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noWarningIfUnusedAttribute = true ;
  }
  return gOnceFunctionResult_noWarningIfUnusedAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_noWarningIfUnusedAttribute (void) {
  gOnceFunctionResult_noWarningIfUnusedAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_noWarningIfUnusedAttribute (NULL,
                                                                        releaseOnceFunctionResult_noWarningIfUnusedAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_noWarningIfUnusedAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_noWarningIfUnusedAttribute (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_noWarningIfUnusedAttribute (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_noWarningIfUnusedAttribute ("noWarningIfUnusedAttribute",
                                                                            functionWithGenericHeader_noWarningIfUnusedAttribute,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_noWarningIfUnusedAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'weakAttribute'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_weakAttribute (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("weak") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_weakAttribute = false ;
static GALGAS_string gOnceFunctionResult_weakAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_weakAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_weakAttribute) {
    gOnceFunctionResult_weakAttribute = onceFunction_weakAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_weakAttribute = true ;
  }
  return gOnceFunctionResult_weakAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_weakAttribute (void) {
  gOnceFunctionResult_weakAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_weakAttribute (NULL,
                                                           releaseOnceFunctionResult_weakAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_weakAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_weakAttribute (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_weakAttribute (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_weakAttribute ("weakAttribute",
                                                               functionWithGenericHeader_weakAttribute,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_weakAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMapIR var_initialProcedureMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR ;
  GALGAS_uint var_pass = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_optimizing = GALGAS_bool (true) ;
  if (ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 61)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 61)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 61)).isValid ()) {
    uint32_t variant_2869 = ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 61)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 61)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 61)).uintValue () ;
    bool loop_2869 = true ;
    while (loop_2869) {
      loop_2869 = var_optimizing.isValid () ;
      if (loop_2869) {
        loop_2869 = var_optimizing.boolValue () ;
      }
      if (loop_2869 && (0 == variant_2869)) {
        loop_2869 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 61)) ;
      }
      if (loop_2869) {
        variant_2869 -- ;
        var_optimizing = GALGAS_bool (false) ;
        var_pass.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 64)) ;
        const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination.reader_value ()).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_string var_s = GALGAS_string ("Optimisation pass ").add_operation (var_pass.reader_string (SOURCE_FILE ("code-optimisation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 67)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 67)) ;
          var_s.dotAssign_operation (GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap.reader_count (SOURCE_FILE ("code-optimisation.galgas", 68)).reader_string (SOURCE_FILE ("code-optimisation.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 68)).add_operation (GALGAS_string (" registers\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 68))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 68)) ;
          var_s.dotAssign_operation (GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap.reader_count (SOURCE_FILE ("code-optimisation.galgas", 69)).reader_string (SOURCE_FILE ("code-optimisation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 69)).add_operation (GALGAS_string (" static strings\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 69))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 69)) ;
          var_s.dotAssign_operation (GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.reader_count (SOURCE_FILE ("code-optimisation.galgas", 70)).reader_string (SOURCE_FILE ("code-optimisation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 70)).add_operation (GALGAS_string (" global constants\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 70))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 70)) ;
          var_s.dotAssign_operation (GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.reader_count (SOURCE_FILE ("code-optimisation.galgas", 71)).reader_string (SOURCE_FILE ("code-optimisation.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 71)).add_operation (GALGAS_string (" global variables\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 71))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 71)) ;
          var_s.dotAssign_operation (GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 72)).reader_string (SOURCE_FILE ("code-optimisation.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 72)).add_operation (GALGAS_string (" procedures\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 72))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 72)) ;
          var_s.dotAssign_operation (GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 73)).reader_string (SOURCE_FILE ("code-optimisation.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 73)).add_operation (GALGAS_string (" functions\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 73))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 73)) ;
          inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("code-optimisation.galgas", 74)) ;
        }
        GALGAS_accessibleEntities var_accessibleEntities ;
        {
        routine_suppressInaccessibleSubprograms (ioArgument_ioIntermediateCodeStruct, var_accessibleEntities, var_optimizing, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 77)) ;
        }
        GALGAS_registerMapIR var_usedRegisterMap = GALGAS_registerMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 83)) ;
        cEnumerator_registerMapIR enumerator_4151 (ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap, kEnumeration_up) ;
        while (enumerator_4151.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_accessibleEntities.mAttribute_mAccessibleRegisterSet.reader_hasKey (enumerator_4151.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 85)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_usedRegisterMap.modifier_insertKey (enumerator_4151.current_lkey (HERE), enumerator_4151.current_mRegisterTypeName (HERE), enumerator_4151.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 86)) ;
            }
          }else if (kBoolFalse == test_1) {
            var_optimizing = GALGAS_bool (true) ;
          }
          enumerator_4151.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap = var_usedRegisterMap ;
        GALGAS_globalConstantMapIR var_globalConstantMap = GALGAS_globalConstantMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 93)) ;
        cEnumerator_globalConstantMapIR enumerator_4570 (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
        while (enumerator_4570.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_accessibleEntities.mAttribute_mGlobalVariableSet.reader_hasKey (enumerator_4570.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 95)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_globalConstantMap.modifier_insertKey (enumerator_4570.current (HERE).mAttribute_lkey, enumerator_4570.current (HERE).mAttribute_mType, enumerator_4570.current (HERE).mAttribute_mSourceExpression, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 96)) ;
            }
          }else if (kBoolFalse == test_2) {
            var_optimizing = GALGAS_bool (true) ;
          }
          enumerator_4570.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap = var_globalConstantMap ;
        GALGAS_globalVariableMapIR var_globalVariableMap = GALGAS_globalVariableMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 115)) ;
        cEnumerator_globalVariableMapIR enumerator_5508 (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
        while (enumerator_5508.hasCurrentObject ()) {
          const enumGalgasBool test_3 = var_accessibleEntities.mAttribute_mGlobalVariableSet.reader_hasKey (enumerator_5508.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 117)).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            var_globalVariableMap.modifier_insertKey (enumerator_5508.current (HERE).mAttribute_lkey, enumerator_5508.current (HERE).mAttribute_mType, enumerator_5508.current (HERE).mAttribute_mGenerateVolatile, enumerator_5508.current (HERE).mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 118)) ;
            }
          }else if (kBoolFalse == test_3) {
            var_optimizing = GALGAS_bool (true) ;
          }
          enumerator_5508.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap = var_globalVariableMap ;
      }
    }
  }
  cEnumerator_procedureMapIR enumerator_5988 (var_initialProcedureMap, kEnumeration_up) ;
  while (enumerator_5988.hasCurrentObject ()) {
    GALGAS_bool test_4 = ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.reader_hasKey (enumerator_5988.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 132)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 132)) ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = enumerator_5988.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_5988.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_6, GALGAS_string ("unused procedure; use @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 133)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 133))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 133)) ;
    }
    enumerator_5988.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_suppressInaccessibleSubprograms (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              GALGAS_accessibleEntities & outArgument_outAccessibleEntities,
                                              GALGAS_bool & ioArgument_ioOptimizing,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAccessibleEntities.drop () ; // Release 'out' argument
  outArgument_outAccessibleEntities = GALGAS_accessibleEntities::constructor_default (SOURCE_FILE ("code-optimisation.galgas", 145)) ;
  GALGAS_procedureMapIR var_accessibleProcedureMap = GALGAS_procedureMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 146)) ;
  GALGAS_procedureMapIR var_nonExploredProcedureMap = GALGAS_procedureMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 147)) ;
  cEnumerator_procedureMapIR enumerator_6752 (ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR, kEnumeration_up) ;
  while (enumerator_6752.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_6752.current (HERE).mAttribute_mIsRequired.boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_accessibleProcedureMap.modifier_insertKey (enumerator_6752.current (HERE).mAttribute_lkey, enumerator_6752.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_6752.current (HERE).mAttribute_mInstructionGenerationList, enumerator_6752.current (HERE).mAttribute_mIsRequired, enumerator_6752.current (HERE).mAttribute_mWarnIfUnused, enumerator_6752.current (HERE).mAttribute_mWeak, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 151)) ;
      }
      categoryMethod_enterAccessibleEntities (enumerator_6752.current (HERE), outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 159)) ;
      outArgument_outAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (enumerator_6752.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 160)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_nonExploredProcedureMap.modifier_insertKey (enumerator_6752.current (HERE).mAttribute_lkey, enumerator_6752.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_6752.current (HERE).mAttribute_mInstructionGenerationList, enumerator_6752.current (HERE).mAttribute_mIsRequired, enumerator_6752.current (HERE).mAttribute_mWarnIfUnused, enumerator_6752.current (HERE).mAttribute_mWeak, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 162)) ;
      }
    }
    enumerator_6752.gotoNextObject () ;
  }
  cEnumerator_bootListIR enumerator_7567 (ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_7567.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_7567.current (HERE).mAttribute_mInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 174)) ;
    enumerator_7567.gotoNextObject () ;
  }
  cEnumerator_initListIR enumerator_7703 (ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_7703.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_7703.current (HERE).mAttribute_mInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 177)) ;
    enumerator_7703.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("code-optimisation.galgas", 180)).boolEnum () ;
  if (kBoolTrue == test_1) {
    categoryMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mExceptionSetupInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 181)) ;
    categoryMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mExceptionLoopInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 182)) ;
  }
  GALGAS_functionMapIR var_accessibleFunctionMap = GALGAS_functionMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 185)) ;
  GALGAS_functionMapIR var_nonExploredFunctionMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR ;
  GALGAS_bool var_exploreProceduresAndFunctions = GALGAS_bool (true) ;
  if (ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 188)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 188)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 188)).isValid ()) {
    uint32_t variant_8351 = ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 188)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.reader_count (SOURCE_FILE ("code-optimisation.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 188)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 188)).uintValue () ;
    bool loop_8351 = true ;
    while (loop_8351) {
      loop_8351 = var_exploreProceduresAndFunctions.isValid () ;
      if (loop_8351) {
        loop_8351 = var_exploreProceduresAndFunctions.boolValue () ;
      }
      if (loop_8351 && (0 == variant_8351)) {
        loop_8351 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 188)) ;
      }
      if (loop_8351) {
        variant_8351 -- ;
        var_exploreProceduresAndFunctions = GALGAS_bool (false) ;
        GALGAS_procedureMapIR var_exNonExploredProcedureMap = var_nonExploredProcedureMap ;
        var_nonExploredProcedureMap = GALGAS_procedureMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 192)) ;
        cEnumerator_procedureMapIR enumerator_8695 (var_exNonExploredProcedureMap, kEnumeration_up) ;
        while (enumerator_8695.hasCurrentObject ()) {
          const enumGalgasBool test_2 = outArgument_outAccessibleEntities.mAttribute_mProcedureSet.reader_hasKey (enumerator_8695.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 194)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_accessibleProcedureMap.modifier_insertKey (enumerator_8695.current (HERE).mAttribute_lkey, enumerator_8695.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_8695.current (HERE).mAttribute_mInstructionGenerationList, enumerator_8695.current (HERE).mAttribute_mIsRequired, enumerator_8695.current (HERE).mAttribute_mWarnIfUnused, enumerator_8695.current (HERE).mAttribute_mWeak, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 195)) ;
            }
            categoryMethod_enterAccessibleEntities (enumerator_8695.current (HERE), outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 203)) ;
            var_exploreProceduresAndFunctions = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_2) {
            {
            var_nonExploredProcedureMap.modifier_insertKey (enumerator_8695.current (HERE).mAttribute_lkey, enumerator_8695.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_8695.current (HERE).mAttribute_mInstructionGenerationList, enumerator_8695.current (HERE).mAttribute_mIsRequired, enumerator_8695.current (HERE).mAttribute_mWarnIfUnused, enumerator_8695.current (HERE).mAttribute_mWeak, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 206)) ;
            }
          }
          enumerator_8695.gotoNextObject () ;
        }
        GALGAS_functionMapIR var_exNonExploredFunctionMap = var_nonExploredFunctionMap ;
        var_nonExploredFunctionMap = GALGAS_functionMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 217)) ;
        cEnumerator_functionMapIR enumerator_9643 (var_exNonExploredFunctionMap, kEnumeration_up) ;
        while (enumerator_9643.hasCurrentObject ()) {
          const enumGalgasBool test_3 = outArgument_outAccessibleEntities.mAttribute_mFunctionSet.reader_hasKey (enumerator_9643.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 219)).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            var_accessibleFunctionMap.modifier_insertKey (enumerator_9643.current (HERE).mAttribute_lkey, enumerator_9643.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_9643.current (HERE).mAttribute_mInstructionGenerationList, enumerator_9643.current (HERE).mAttribute_mResultType, enumerator_9643.current (HERE).mAttribute_mResultVarName, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 220)) ;
            }
            categoryMethod_enterAccessibleEntities (enumerator_9643.current (HERE), outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 227)) ;
            var_exploreProceduresAndFunctions = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_3) {
            {
            var_nonExploredFunctionMap.modifier_insertKey (enumerator_9643.current (HERE).mAttribute_lkey, enumerator_9643.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_9643.current (HERE).mAttribute_mInstructionGenerationList, enumerator_9643.current (HERE).mAttribute_mResultType, enumerator_9643.current (HERE).mAttribute_mResultVarName, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 230)) ;
            }
          }
          enumerator_9643.gotoNextObject () ;
        }
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.objectCompare (var_accessibleProcedureMap)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR = var_accessibleProcedureMap ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.objectCompare (var_accessibleFunctionMap)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR = var_accessibleFunctionMap ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'llvmSeparatorLine'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmSeparatorLine (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string (";-------------------------------------------------------------------------") ;
  result_outResult.dotAssign_operation (GALGAS_string ("---------------------------------------------*\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 86)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_llvmSeparatorLine ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (NULL,
                                                               releaseOnceFunctionResult_llvmSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmSeparatorLine [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmSeparatorLine (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmTitleComment'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmTitleComment (GALGAS_string inArgument_inTitle,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 92)) ;
  result_outTitle.dotAssign_operation (GALGAS_string (";    ").add_operation (inArgument_inTitle.reader_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 93)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 93))  COMMA_SOURCE_FILE ("code-generation.galgas", 93)) ;
  result_outTitle.dotAssign_operation (function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 94)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 94))  COMMA_SOURCE_FILE ("code-generation.galgas", 94)) ;
//---
  return result_outTitle ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmTitleComment (C_Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmTitleComment (operand0,
                                    inCompiler
                                    COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmTitleComment ("llvmTitleComment",
                                                                  functionWithGenericHeader_llvmTitleComment,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_llvmTitleComment) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inSourceFileName,
                             const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                             const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                             const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionCodeType,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionLineType,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_homeDir = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 109)).add_operation (GALGAS_string ("/plm-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 109)) ;
  GALGAS_string var_productDirectory = var_homeDir.add_operation (constinArgument_inSourceFileName.reader_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 111)).reader_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 111)) ;
  GALGAS_string var_sourceDirectory = var_productDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 112)) ;
  var_sourceDirectory.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 113)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 115)) ;
  }
  {
  routine_generateLLVMfile (constinArgument_inCurrentDirectory, var_productDirectory, constinArgument_inEndOfSourceFileLocation, constinArgument_inIntermediateCodeStruct, constinArgument_inTypeMap, constinArgument_inTargetName, constinArgument_inExceptionCodeType, constinArgument_inExceptionLineType, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 121)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateLLVMfile'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateLLVMfile (const GALGAS_string constinArgument_inCurrentDirectory,
                               const GALGAS_string constinArgument_inProductDirectory,
                               const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                               const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                               const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                               const GALGAS_lstring constinArgument_inTargetName,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionCodeType,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionLineType,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext var_generationContext = GALGAS_generationContext::constructor_new (categoryReader_llvmTypeName (constinArgument_inExceptionCodeType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 153)), categoryReader_llvmTypeName (constinArgument_inExceptionLineType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 154))  COMMA_SOURCE_FILE ("code-generation.galgas", 152)) ;
  GALGAS_string var_sourceDirectory = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 156)) ;
  GALGAS_string var_code = GALGAS_string::makeEmptyString () ;
  var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 159))  COMMA_SOURCE_FILE ("code-generation.galgas", 159)) ;
  GALGAS_string var_targetSpecificFileContents = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 160)) ;
  var_code.dotAssign_operation (var_targetSpecificFileContents  COMMA_SOURCE_FILE ("code-generation.galgas", 164)) ;
  var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Static Strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 165))  COMMA_SOURCE_FILE ("code-generation.galgas", 165)) ;
  cEnumerator_globalLiteralStringMap enumerator_7189 (constinArgument_inIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, kEnumeration_up) ;
  while (enumerator_7189.hasCurrentObject ()) {
    var_code.dotAssign_operation (GALGAS_string ("static const char * ").add_operation (enumerator_7189.current_mLiteralStringCname (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 167)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 167)).add_operation (enumerator_7189.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("code-generation.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 167)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 167))  COMMA_SOURCE_FILE ("code-generation.galgas", 167)) ;
    enumerator_7189.gotoNextObject () ;
  }
  var_code.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 169)) ;
  var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Structure types"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 171))  COMMA_SOURCE_FILE ("code-generation.galgas", 171)) ;
  {
  routine_declareLLVMstructures (constinArgument_inTypeMap, var_code, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 172)) ;
  }
  var_code.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 173)) ;
  cEnumerator_globalConstantMapIR enumerator_7616 (constinArgument_inIntermediateCodeStruct.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_7616.hasCurrentObject () && bool_0) {
    var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Global constants"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 176))  COMMA_SOURCE_FILE ("code-generation.galgas", 176)) ;
    while (enumerator_7616.hasCurrentObject () && bool_0) {
      categoryMethod_generateLLVM (enumerator_7616.current (HERE), var_code, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
      enumerator_7616.gotoNextObject () ;
    }
    var_code.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 178)) ;
  }
  cEnumerator_globalVariableMapIR enumerator_7875 (constinArgument_inIntermediateCodeStruct.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  const bool bool_1 = true ;
  if (enumerator_7875.hasCurrentObject () && bool_1) {
    var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Global variables"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 182))  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
    while (enumerator_7875.hasCurrentObject () && bool_1) {
      categoryMethod_generateLLVM (enumerator_7875.current (HERE), var_code, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 183)) ;
      enumerator_7875.gotoNextObject () ;
    }
    var_code.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 184)) ;
  }
  GALGAS_generationAdds var_generationAdds = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 187)) ;
  var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 188))  COMMA_SOURCE_FILE ("code-generation.galgas", 188)) ;
  var_code.dotAssign_operation (GALGAS_string ("define internal void @boot () nounwind {\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
  cEnumerator_bootListIR enumerator_8239 (constinArgument_inIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_8239.hasCurrentObject ()) {
    categoryMethod_instructionListLLVMCode (enumerator_8239.current (HERE).mAttribute_mInstructionListIR, var_code, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 191)) ;
    enumerator_8239.gotoNextObject () ;
  }
  var_code.dotAssign_operation (GALGAS_string (";---\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 193)) ;
  var_code.dotAssign_operation (GALGAS_string ("  ret void\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 194)) ;
  var_code.dotAssign_operation (GALGAS_string ("}\n"
    "\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 195)) ;
  var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Init"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 197))  COMMA_SOURCE_FILE ("code-generation.galgas", 197)) ;
  var_code.dotAssign_operation (GALGAS_string ("define internal void @init () nounwind {\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 198)) ;
  cEnumerator_initListIR enumerator_8596 (constinArgument_inIntermediateCodeStruct.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_8596.hasCurrentObject ()) {
    categoryMethod_instructionListLLVMCode (enumerator_8596.current (HERE).mAttribute_mInstructionListIR, var_code, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 200)) ;
    enumerator_8596.gotoNextObject () ;
  }
  var_code.dotAssign_operation (GALGAS_string (";---\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 202)) ;
  var_code.dotAssign_operation (GALGAS_string ("  ret void\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 203)) ;
  var_code.dotAssign_operation (GALGAS_string ("}\n"
    "\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 204)) ;
  cEnumerator_procedureMapIR enumerator_8878 (constinArgument_inIntermediateCodeStruct.mAttribute_mProcedureMapIR, kEnumeration_up) ;
  while (enumerator_8878.hasCurrentObject ()) {
    categoryMethod_llvmCodeGeneration (enumerator_8878.current (HERE), var_code, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 207)) ;
    enumerator_8878.gotoNextObject () ;
  }
  cEnumerator_functionMapIR enumerator_9076 (constinArgument_inIntermediateCodeStruct.mAttribute_mFunctionMapIR, kEnumeration_up) ;
  while (enumerator_9076.hasCurrentObject ()) {
    categoryMethod_implementationCodeGeneration (enumerator_9076.current (HERE), var_code, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)) ;
    enumerator_9076.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 214)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_code.dotAssign_operation (function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target-exception.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 215))  COMMA_SOURCE_FILE ("code-generation.galgas", 215)) ;
    var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Raise Exception internal"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219))  COMMA_SOURCE_FILE ("code-generation.galgas", 219)) ;
    var_code.dotAssign_operation (GALGAS_string ("define internal void @raise_exception_internal (")  COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
    var_code.dotAssign_operation (var_generationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 221))  COMMA_SOURCE_FILE ("code-generation.galgas", 221)) ;
    var_code.dotAssign_operation (GALGAS_string ("i8* %in.FILE, ")  COMMA_SOURCE_FILE ("code-generation.galgas", 222)) ;
    var_code.dotAssign_operation (var_generationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" %in.LINE) nounwind noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 223))  COMMA_SOURCE_FILE ("code-generation.galgas", 223)) ;
    var_code.dotAssign_operation (GALGAS_string ("  %").add_operation (function_mangledNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)).add_operation (var_generationContext.mAttribute_mExceptionCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224))  COMMA_SOURCE_FILE ("code-generation.galgas", 224)) ;
    var_code.dotAssign_operation (GALGAS_string ("  store ").add_operation (var_generationContext.mAttribute_mExceptionCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 225)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 225)).add_operation (var_generationContext.mAttribute_mExceptionCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 225)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226)).add_operation (function_mangledNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226))  COMMA_SOURCE_FILE ("code-generation.galgas", 225)) ;
    var_code.dotAssign_operation (GALGAS_string ("  %").add_operation (function_mangledNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 227)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 227)).add_operation (var_generationContext.mAttribute_mExceptionLineLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 227))  COMMA_SOURCE_FILE ("code-generation.galgas", 227)) ;
    var_code.dotAssign_operation (GALGAS_string ("  store ").add_operation (var_generationContext.mAttribute_mExceptionLineLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)).add_operation (var_generationContext.mAttribute_mExceptionLineLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 229)).add_operation (function_mangledNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 229)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 229))  COMMA_SOURCE_FILE ("code-generation.galgas", 228)) ;
    categoryMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.mAttribute_mExceptionSetupInstructionListIR, var_code, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 230)) ;
    var_code.dotAssign_operation (GALGAS_string ("  br label %exception.loop\n"
      "\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 235)) ;
    var_code.dotAssign_operation (GALGAS_string ("exception.loop:\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 236)) ;
    categoryMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.mAttribute_mExceptionLoopInstructionListIR, var_code, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 237)) ;
    var_code.dotAssign_operation (GALGAS_string ("  br label %exception.loop\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 242)) ;
    var_code.dotAssign_operation (GALGAS_string ("}\n"
      "\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 243)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_generationAdds.mAttribute_mIntrinsicsDeclarationSet.reader_count (SOURCE_FILE ("code-generation.galgas", 246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("LLVM intrinsics"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 247))  COMMA_SOURCE_FILE ("code-generation.galgas", 247)) ;
    cEnumerator_stringset enumerator_11032 (var_generationAdds.mAttribute_mIntrinsicsDeclarationSet, kEnumeration_up) ;
    while (enumerator_11032.hasCurrentObject ()) {
      var_code.dotAssign_operation (enumerator_11032.current_key (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 249))  COMMA_SOURCE_FILE ("code-generation.galgas", 249)) ;
      enumerator_11032.gotoNextObject () ;
    }
    var_code.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 251)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_generationAdds.mAttribute_mStaticStringMap.reader_count (SOURCE_FILE ("code-generation.galgas", 254)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_code.dotAssign_operation (function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 255))  COMMA_SOURCE_FILE ("code-generation.galgas", 255)) ;
    cEnumerator_staticStringMap enumerator_11296 (var_generationAdds.mAttribute_mStaticStringMap, kEnumeration_up) ;
    while (enumerator_11296.hasCurrentObject ()) {
      GALGAS_string var_lgStr = enumerator_11296.current_lkey (HERE).mAttribute_string.reader_length (SOURCE_FILE ("code-generation.galgas", 257)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 257)).reader_string (SOURCE_FILE ("code-generation.galgas", 257)) ;
      var_code.dotAssign_operation (GALGAS_string ("@str.").add_operation (enumerator_11296.current_mIndex (HERE).reader_string (SOURCE_FILE ("code-generation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 258)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 258))  COMMA_SOURCE_FILE ("code-generation.galgas", 258)) ;
      var_code.dotAssign_operation (var_lgStr.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259))  COMMA_SOURCE_FILE ("code-generation.galgas", 259)) ;
      var_code.dotAssign_operation (enumerator_11296.current_lkey (HERE).mAttribute_string.reader_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("code-generation.galgas", 260))  COMMA_SOURCE_FILE ("code-generation.galgas", 260)) ;
      var_code.dotAssign_operation (GALGAS_string ("\\00\", align 1\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 261)) ;
      var_code.dotAssign_operation (GALGAS_string ("@string.").add_operation (enumerator_11296.current_mIndex (HERE).reader_string (SOURCE_FILE ("code-generation.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262))  COMMA_SOURCE_FILE ("code-generation.galgas", 262)) ;
      var_code.dotAssign_operation (var_lgStr.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 263)).add_operation (var_lgStr, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 263)).add_operation (GALGAS_string (" x i8]* @str."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 263)).add_operation (enumerator_11296.current_mIndex (HERE).reader_string (SOURCE_FILE ("code-generation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 263)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 263))  COMMA_SOURCE_FILE ("code-generation.galgas", 263)) ;
      enumerator_11296.gotoNextObject () ;
    }
    var_code.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("code-generation.galgas", 265)) ;
  }
  var_code.dotAssign_operation (function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 268))  COMMA_SOURCE_FILE ("code-generation.galgas", 268)) ;
  GALGAS_bool joker_11942 ; // Joker input parameter
  var_code.method_writeToFileWhenDifferentContents (var_sourceDirectory.add_operation (GALGAS_string ("/source-plm.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 269)), joker_11942, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 269)) ;
  GALGAS_bool test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 271)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_5.boolEnum ()) {
    test_5 = GALGAS_bool (gOption_plm_5F_options_compileOnly.reader_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 271)) ;
  }
  const enumGalgasBool test_6 = test_5.boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_performFlashing.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string ("run") ;
    }else if (kBoolFalse == test_8) {
      temp_7 = GALGAS_string ("build") ;
    }
    GALGAS_string var_script = temp_7 ;
    GALGAS_string var_fullScript = GALGAS_string ("python ").add_operation (constinArgument_inProductDirectory, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 273)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 273)).add_operation (var_script, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 273)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 273)) ;
    GALGAS_sint var_result = var_fullScript.reader_system (SOURCE_FILE ("code-generation.galgas", 274)) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_result.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing")  COMMA_SOURCE_FILE ("code-generation.galgas", 276)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- File '/make.py'

const char * gWrapperFileContent_0_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess, sys, os, copy\n"
  "import urllib, shutil\n"
  "import subprocess, re\n"
  "from time import time\n"
  "import platform\n"
  "import json\n"
  "import threading, operator\n"
  "\n"
  "if sys.version_info >= (2, 6) :\n"
  "  import multiprocessing\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   processorCount                                                                                                     *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def processorCount () :\n"
  "  if sys.version_info >= (2, 6) :\n"
  "    coreCount = multiprocessing.cpu_count ()\n"
  "  else:\n"
  "    coreCount = 1\n"
  "  return coreCount\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   FOR PRINTING IN COLOR                                                                                              *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLACK () :\n"
  "  return '\\033[90m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def RED () :\n"
  "  return '\\033[91m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def GREEN () :\n"
  "  return '\\033[92m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def YELLOW () :\n"
  "  return '\\033[93m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLUE () :\n"
  "  return '\\033[94m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def MAGENTA () :\n"
  "  return '\\033[95m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CYAN () :\n"
  "  return '\\033[96m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def WHITE () :\n"
  "  return '\\033[97m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def ENDC () :\n"
  "  return '\\033[0m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD () :\n"
  "  return '\\033[1m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def UNDERLINE () :\n"
  "  return '\\033[4m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLINK () :\n"
  "  return '\\033[5m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD_BLUE () :\n"
  "  return BOLD () + BLUE ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD_GREEN () :\n"
  "  return BOLD () + GREEN ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD_RED () :\n"
  "  return BOLD () + RED ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runHiddenCommand                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runHiddenCommand (cmd) :\n"
  "  result = \"\"\n"
  "  childProcess = subprocess.Popen (cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)\n"
  "  while True:\n"
  "    line = childProcess.stdout.readline ()\n"
  "    if line != \"\":\n"
  "      result += line\n"
  "    else:\n"
  "      childProcess.wait ()\n"
  "      if childProcess.returncode != 0 :\n"
  "        sys.exit (childProcess.returncode)\n"
  "      return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runSingleCommand                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runSingleCommand (cmd) :\n"
  "  cmdAsString = \"\"\n"
  "  for s in cmd:\n"
  "    if (s == \"\") or (s.find (\" \") >= 0):\n"
  "      cmdAsString += '\"' + s + '\" '\n"
  "    else:\n"
  "      cmdAsString += s + ' '\n"
  "  print cmdAsString\n"
  "  childProcess = subprocess.Popen (cmd)\n"
  "  childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    sys.exit (childProcess.returncode)\n"
  "  sys.stdout.flush()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runCommand                                                                                                         *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runCommand (cmd, title, showCommand) :\n"
  "  if title != \"\":\n"
  "    print BOLD_BLUE () + title + ENDC ()\n"
  "  if (title == \"\") or showCommand :\n"
  "    cmdAsString = \"\"\n"
  "    for s in cmd:\n"
  "      if (s == \"\") or (s.find (\" \") >= 0):\n"
  "        cmdAsString += '\"' + s + '\" '\n"
  "      else:\n"
  "        cmdAsString += s + ' '\n"
  "    print cmdAsString\n"
  "  childProcess = subprocess.Popen (cmd)\n"
  "  childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    sys.exit (childProcess.returncode)\n"
  "  sys.stdout.flush()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runInThread                                                                                                        *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runInThread (job, displayLock, terminationSemaphore):\n"
  "  childProcess = subprocess.Popen (job.mCommand, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)\n"
  "  while True:\n"
  "    line = childProcess.stdout.readline ()\n"
  "    if line != \"\":\n"
  "      displayLock.acquire ()\n"
  "      sys.stdout.write (line) # Print without newline\n"
  "      displayLock.release ()\n"
  "    else:\n"
  "      childProcess.wait ()\n"
  "      job.mReturnCode = childProcess.returncode\n"
  "      terminationSemaphore.release ()\n"
  "      break\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   modificationDateForFile                                                                                            *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def modificationDateForFile (dateCacheDictionary, file):\n"
  "  absFilePath = os.path.abspath (file)\n"
  "  if dateCacheDictionary.has_key (absFilePath) :\n"
  "    return dateCacheDictionary [absFilePath]\n"
  "  elif not os.path.exists (absFilePath):\n"
  "    date = sys.float_info.max # Very far in future\n"
  "    dateCacheDictionary [absFilePath] = date\n"
  "    return date\n"
  "  else:\n"
  "    date = os.path.getmtime (absFilePath)\n"
  "    dateCacheDictionary [absFilePath] = date\n"
  "    return date\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class PostCommand                                                                                                  *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class PostCommand:\n"
  "  mCommand = []\n"
  "  mTitle = \"\"\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def __init__ (self, title = \"\"):\n"
  "    self.mCommand = []\n"
  "    self.mTitle = title\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class Job                                                                                                          *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class Job:\n"
  "  mTarget = \"\"\n"
  "  mCommand = []\n"
  "  mTitle = \"\"\n"
  "  mRequiredFiles = []\n"
  "  mPostCommands = []\n"
  "  mReturnCode = None\n"
  "  mPriority = 0\n"
  "  mState = 0 # 0: waiting for execution\n"
  "  \n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def __init__ (self, target, requiredFiles, command, postCommands, priority, title):\n"
  "    self.mTarget = copy.deepcopy (target)\n"
  "    self.mCommand = copy.deepcopy (command)\n"
  "    self.mRequiredFiles = copy.deepcopy (requiredFiles)\n"
  "    self.mTitle = copy.deepcopy (title)\n"
  "    self.mPostCommands = copy.deepcopy (postCommands)\n"
  "    self.mPriority = priority\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def run (self, displayLock, terminationSemaphore, showCommand):\n"
  "    displayLock.acquire ()\n"
  "    if self.mTitle != \"\":\n"
  "      print BOLD_BLUE () + self.mTitle + ENDC ()\n"
  "    if (self.mTitle == \"\") or showCommand :\n"
  "      cmdAsString = \"\"\n"
  "      for s in self.mCommand:\n"
  "        if (s == \"\") or (s.find (\" \") >= 0):\n"
  "          cmdAsString += '\"' + s + '\" '\n"
  "        else:\n"
  "          cmdAsString += s + ' '\n"
  "      print cmdAsString\n"
  "    displayLock.release ()\n"
  "    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))\n"
  "    thread.start()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def runPostCommand (self, displayLock, terminationSemaphore, showCommand):\n"
  "    postCommand = self.mPostCommands [0]\n"
  "    self.mCommand = postCommand.mCommand\n"
  "    displayLock.acquire ()\n"
  "    print BOLD_BLUE () + postCommand.mTitle + ENDC ()\n"
  "    if showCommand:\n"
  "      cmdAsString = \"\"\n"
  "      for s in self.mCommand:\n"
  "        if (s == \"\") or (s.find (\" \") >= 0):\n"
  "          cmdAsString += '\"' + s + '\" '\n"
  "        else:\n"
  "          cmdAsString += s + ' '\n"
  "      print cmdAsString\n"
  "    displayLock.release ()\n"
  "    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))\n"
  "    thread.start()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class Rule                                                                                                         *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class Rule:\n"
  "  mTarget = \"\"\n"
  "  mDependences = []\n"
  "  mCommand = []\n"
  "  mSecondaryMostRecentModificationDate = 0.0 # Far in the past\n"
  "  mTitle = \"\"\n"
  "  mPostCommands = []\n"
  "  mPriority = 0\n"
  "  \n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def __init__ (self, target, title = \"\"):\n"
  "    self.mTarget = copy.deepcopy (target)\n"
  "    self.mDependences = []\n"
  "    self.mCommand = []\n"
  "    self.mSecondaryMostRecentModificationDate = 0.0\n"
  "    self.mPostCommands = []\n"
  "    self.mPriority = 0\n"
  "    if title == \"\":\n"
  "      self.mTitle = \"Building \" + target\n"
  "    else:\n"
  "      self.mTitle = copy.deepcopy (title)\n"
  "  \n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def enterSecondaryDependanceFile (self, secondaryDependanceFile):\n"
  "    if secondaryDependanceFile != \"\":\n"
  "      filePath = os.path.abspath (secondaryDependanceFile)\n"
  "      if os.path.exists (filePath):\n"
  "        f = open (filePath, \"r\")\n"
  "        s = f.read ().replace (\"\\\\ \", \"\\x01\") # Read and replace escaped spaces by \\0x01\n"
  "        f.close ()\n"
  "        s = s.replace (\"\\\\\\n\", \"\")\n"
  "        liste = s.split (\"\\n\\n\")\n"
  "        dateCacheDictionary = {}\n"
  "        for s in liste:\n"
  "          components = s.split (':')\n"
  "          target = components [0].replace (\"\\x01\", \" \")\n"
  "          #print \"------- Optional dependency rules for target '\" + target + \"'\"\n"
  "          #print \"Secondary target '\" + target + \"'\"\n"
  "          for src in components [1].split ():\n"
  "            secondarySource = src.replace (\"\\x01\", \" \")\n"
  "            #print \"  '\" + secondarySource + \"'\"\n"
  "            modifDate = modificationDateForFile (dateCacheDictionary, secondarySource)\n"
  "            if self.mSecondaryMostRecentModificationDate < modifDate :\n"
  "              self.mSecondaryMostRecentModificationDate = modifDate\n"
  "              #print BOLD_BLUE () + str (modifDate) + ENDC ()\n"
  "    \n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class Make                                                                                                         *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class Make:\n"
  "  mRuleList = []\n"
  "  mJobList = []\n"
  "  mErrorCount = 0\n"
  "  mModificationDateDictionary = {}\n"
  "  mGoals = {}\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def addRule (self, rule):\n"
  "    self.mRuleList.append (copy.deepcopy (rule))\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printRules (self):\n"
  "    print BOLD_BLUE () + \"--- Print the \" + str (len (self.mRuleList)) + \" rule\" + (\"s\" if len (self.mRuleList) > 1 else \"\") + \" ---\" + ENDC ()\n"
  "    for rule in self.mRuleList:\n"
  "      print BOLD_GREEN () + \"Target: '\" + rule.mTarget + \"'\" + ENDC ()\n"
  "      for dep in rule.mDependences:\n"
  "        print \"  Dependence: '\" + dep + \"'\"\n"
  "      s = \"  Command: \"\n"
  "      for cmd in rule.mCommand:\n"
  "        s += \" \\\"\" + cmd + \"\\\"\"\n"
  "      print s\n"
  "      print \"  Title: '\" + rule.mTitle + \"'\"\n"
  "      index = 0\n"
  "      for (command, title) in rule.mPostCommands:\n"
  "        index = index + 1\n"
  "        s = \"  Post command \" + str (index) + \": \"\n"
  "        for cmd in command:\n"
  "          s += \" \\\"\" + cmd + \"\\\"\"\n"
  "        print s\n"
  "        print \"  Its title: '\" + title + \"'\"\n"
  "        \n"
  "    print BOLD_BLUE () + \"--- End of print rule ---\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def writeRuleDependancesInDotFile (self, dotFileName):\n"
  "    s = \"digraph G {\\n\"\n"
  "    s += \"  node [fontname=courier]\\n\"\n"
  "    arrowSet = set ()\n"
  "    for rule in self.mRuleList:\n"
  "      s += '  \"' + rule.mTarget + '\" [shape=rectangle]\\n'\n"
  "      for dep in rule.mDependences:\n"
  "        arrowSet.add ('  \"' + rule.mTarget + '\" -> \"' + dep + '\"\\n')\n"
  "    for arrow in arrowSet:\n"
  "      s += arrow\n"
  "    s += \"}\\n\"\n"
  "    f = open (dotFileName, \"w\")\n"
  "    f.write (s)\n"
  "    f.close ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def checkRules (self):\n"
  "    if self.mErrorCount == 0:\n"
  "      ruleList = copy.deepcopy (self.mRuleList)\n"
  "      index = 0\n"
  "      looping = True\n"
  "    #--- loop on rules\n"
  "      while looping:\n"
  "        looping = False\n"
  "        while index < len (ruleList):\n"
  "          aRule = ruleList [index]\n"
  "          index = index + 1\n"
  "        #--- Check dependance files have rule for building, or does exist\n"
  "          depIdx = 0\n"
  "          while depIdx < len (aRule.mDependences):\n"
  "            dep = aRule.mDependences [depIdx]\n"
  "            depIdx = depIdx + 1\n"
  "            hasBuildRule = False\n"
  "            for r in ruleList:\n"
  "              if dep == r.mTarget:\n"
  "                hasBuildRule = True\n"
  "                break\n"
  "            if not hasBuildRule:\n"
  "              looping = True\n"
  "              if not os.path.exists (os.path.abspath (dep)):\n"
  "                self.mErrorCount = self.mErrorCount + 1\n"
  "                print BOLD_RED () + \"Check rules error: '\" + dep + \"' does not exist, and there is no rule for building it.\" + ENDC ()\n"
  "              depIdx = depIdx - 1\n"
  "              aRule.mDependences.pop (depIdx)\n"
  "        #--- Rule with no dependances\n"
  "          if len (aRule.mDependences) == 0 :\n"
  "            looping = True\n"
  "            index = index - 1\n"
  "            ruleList.pop (index)\n"
  "            idx = 0\n"
  "            while idx < len (ruleList):\n"
  "              r = ruleList [idx]\n"
  "              idx = idx + 1\n"
  "              while r.mDependences.count (aRule.mTarget) > 0 :\n"
  "                r.mDependences.remove (aRule.mTarget)\n"
  "    #--- Error if rules remain\n"
  "      if len (ruleList) > 0:\n"
  "        self.mErrorCount = self.mErrorCount + 1\n"
  "        print BOLD_RED () + \"Check rules error; circulary dependances between:\" + ENDC ()\n"
  "        for aRule in ruleList: \n"
  "          print BOLD_RED () + \"  - '\" + aRule.mTarget + \"', depends from:\" + ENDC ()\n"
  "          for dep in aRule.mDependences:\n"
  "            print BOLD_RED () + \"      '\" + dep + \"'\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def existsJobForTarget (self, target):\n"
  "    for job in self.mJobList:\n"
  "      if job.mTarget == target:\n"
  "        return True\n"
  "    return False\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def makeJob (self, target): # Return a bool indicating wheither the target should be built\n"
  "  #--- If there are errors, return immediatly\n"
  "    if self.mErrorCount != 0:\n"
  "      return False\n"
  "  #--- Target already in job list \?\n"
  "    if self.existsJobForTarget (target):\n"
  "      return True # yes, return target will be built\n"
  "  #--- Find a rule for making the target\n"
  "    absTarget = os.path.abspath (target)\n"
  "    rule = None\n"
  "    matchCount = 0\n"
  "    for r in self.mRuleList:\n"
  "      if target == r.mTarget:\n"
  "        matchCount = matchCount + 1\n"
  "        rule = r\n"
  "    if matchCount == 0:\n"
  "      absTarget = os.path.abspath (target)\n"
  "      if not os.path.exists (absTarget):\n"
  "        print BOLD_RED () + \"No rule for making '\" + target + \"'\" + ENDC ()\n"
  "        self.mErrorCount = self.mErrorCount + 1\n"
  "      return False # Error or target exists, and no rule for building it\n"
  "    elif matchCount > 1:\n"
  "      print BOLD_RED () + str (matchCount) + \" rules for making '\" + target + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "      return False # Error\n"
  "  #--- Target file does not exist, and 'rule' variable indicates how build it\n"
  "    appendToJobList = not os.path.exists (absTarget)\n"
  "  #--- Build primary dependences\n"
  "    jobDependenceFiles = []\n"
  "    for dependence in rule.mDependences:\n"
  "      willBeBuilt = self.makeJob (dependence)\n"
  "      if willBeBuilt:\n"
  "        jobDependenceFiles.append (dependence)\n"
  "        appendToJobList = True\n"
  "  #--- Check primary file modification dates\n"
  "    if not appendToJobList:\n"
  "      targetDateModification = os.path.getmtime (absTarget)\n"
  "      for source in rule.mDependences:\n"
  "        sourceDateModification = os.path.getmtime (source)\n"
  "        if targetDateModification < sourceDateModification:\n"
  "          appendToJobList = True\n"
  "          break\n"
  "  #--- Check for secondary dependancy files\n"
  "    if not appendToJobList:\n"
  "      targetDateModification = os.path.getmtime (absTarget)\n"
  "      if targetDateModification < rule.mSecondaryMostRecentModificationDate:\n"
  "        appendToJobList = True\n"
  "  #--- Append to job list\n"
  "    if appendToJobList:\n"
  "      self.mJobList.append (Job (target, jobDependenceFiles, rule.mCommand, rule.mPostCommands, rule.mPriority, rule.mTitle))\n"
  "  #--- Return\n"
  "    return appendToJobList\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "  #Job state\n"
  "  # 0: waiting\n"
  "  # 1:running\n"
  "  # 2: waiting for executing post command\n"
  "  # 3:executing for executing post command\n"
  "  # 4: completed\n"
  "\n"
  "  def runJobs (self, maxConcurrentJobs, showCommand):\n"
  "    if self.mErrorCount == 0:\n"
  "      if len (self.mJobList) == 0:\n"
  "        print BOLD_BLUE () + \"Nothing to make.\" + ENDC ()\n"
  "      else:\n"
  "      #--- Sort jobs following their priorities\n"
  "        self.mJobList = sorted (self.mJobList, key=operator.attrgetter(\"mPriority\"), reverse=True)\n"
  "      #--- Run\n"
  "        if maxConcurrentJobs <= 0:\n"
  "          maxConcurrentJobs = processorCount () - maxConcurrentJobs\n"
  "        jobCount = 0 ;\n"
  "        terminationSemaphore = threading.Semaphore (0)\n"
  "        displayLock = threading.Lock ()\n"
  "        loop = True\n"
  "        returnCode = 0\n"
  "        while loop:\n"
  "        #--- Launch jobs in parallel\n"
  "          for job in self.mJobList:\n"
  "            if (returnCode == 0) and (jobCount < maxConcurrentJobs):\n"
  "              if (job.mState == 0) and (len (job.mRequiredFiles) == 0):\n"
  "                #--- Create target directory if does not exist\n"
  "                absTargetDirectory = os.path.dirname (os.path.abspath (job.mTarget))\n"
  "                if not os.path.exists (absTargetDirectory):\n"
  "                  displayLock.acquire ()\n"
  "                  runHiddenCommand ([\"mkdir\", \"-p\", absTargetDirectory])\n"
  "                  # runCommand ([\"mkdir\", \"-p\", absTargetDirectory], \"Making \" + absTargetDirectory + \" directory\", showCommand)\n"
  "                  displayLock.release ()\n"
  "                #--- Run job\n"
  "                job.run (displayLock, terminationSemaphore, showCommand)\n"
  "                jobCount = jobCount + 1\n"
  "                job.mState = 1 # Means is running\n"
  "              elif job.mState == 2: # Waiting for executing post command\n"
  "                job.mReturnCode = None # Means post command not terminated\n"
  "                job.runPostCommand (displayLock, terminationSemaphore, showCommand)\n"
  "                jobCount = jobCount + 1\n"
  "                job.mState = 3 # Means post command is running\n"
  "        #--- Wait for a job termination\n"
  "          #print \"wait \" + str (jobCount) + \" \" + str (len (self.mJobList))\n"
  "          terminationSemaphore.acquire ()\n"
  "        #--- Checks for terminated jobs\n"
  "          index = 0\n"
  "          while index < len (self.mJobList):\n"
  "            job = self.mJobList [index]\n"
  "            index = index + 1\n"
  "            if (job.mState == 1) and (job.mReturnCode == 0) : # Terminated without error\n"
  "              jobCount = jobCount - 1\n"
  "              if len (job.mPostCommands) > 0:\n"
  "                job.mState = 2 # Ready to execute next post command\n"
  "              else:\n"
  "                job.mState = 4 # Completed\n"
  "                index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 1) and (job.mReturnCode > 0) : # terminated with error : exit\n"
  "              jobCount = jobCount - 1\n"
  "              job.mState = 4 # Means Terminated\n"
  "              index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 3) and (job.mReturnCode == 0): # post command is terminated without error\n"
  "              jobCount = jobCount - 1\n"
  "              job.mPostCommands.pop (0) # Remove completed post command\n"
  "              if len (job.mPostCommands) > 0:\n"
  "                job.mState = 2 # Ready to execute next post command\n"
  "              else:\n"
  "                job.mState = 4 # Completed\n"
  "                index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 3) and (job.mReturnCode > 0): # post command is terminated with error\n"
  "              jobCount = jobCount - 1\n"
  "              job.mState = 4 # Completed\n"
  "              index = index - 1 # For removing job from list\n"
  "            elif job.mState == 4: # Completed: delete job\n"
  "              index = index - 1\n"
  "              self.mJobList.pop (index) # Remove terminated job\n"
  "              #displayLock.acquire ()\n"
  "              #print \"Completed '\" + job.mTitle + \"'\"\n"
  "              #--- Remove dependences from this job\n"
  "              idx = 0\n"
  "              while idx < len (self.mJobList):\n"
  "                aJob = self.mJobList [idx]\n"
  "                idx = idx + 1\n"
  "                while aJob.mRequiredFiles.count (job.mTarget) > 0 :\n"
  "                  aJob.mRequiredFiles.remove (job.mTarget)\n"
  "                  #print \"  Removed from '\" + aJob.mTitle + \"': \" + str (len (aJob.mRequiredFiles))\n"
  "              #displayLock.release ()\n"
  "              #--- Signal error \?\n"
  "              if (job.mReturnCode > 0) and (returnCode == 0):\n"
  "                self.mErrorCount = self.mErrorCount + 1\n"
  "                print BOLD_RED () + \"Return code: \" + str (job.mReturnCode) + ENDC ()\n"
  "                if (returnCode == 0) and (jobCount > 0) :\n"
  "                  print \"Wait for job termination...\"\n"
  "                returnCode = job.mReturnCode\n"
  "          loop = (len (self.mJobList) > 0) if (returnCode == 0) else (jobCount > 0)\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def searchFileInDirectories (self, file, directoryList): # returns \"\" if not found, register error\n"
  "    matchCount = 0\n"
  "    result = \"\"\n"
  "    for sourceDir in directoryList:\n"
  "      sourcePath = sourceDir + \"/\" + file\n"
  "      if os.path.exists (os.path.abspath (sourcePath)):\n"
  "        matchCount = matchCount + 1\n"
  "        result = sourcePath\n"
  "    if matchCount == 0:\n"
  "      print BOLD_RED () + \"Cannot find '\" + file + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "    elif matchCount > 1:\n"
  "      print BOLD_RED () + str (matchCount) + \" source files for making '\" + file + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "      result = \"\"\n"
  "    return result\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def addGoal (self, goal, targetList, message):\n"
  "    self.mGoals [goal] = (targetList, message)\n"
  "    #print '%s' % ', '.join(map(str, self.mGoals))\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printGoals (self):\n"
  "    print BOLD_BLUE () + \"--- Print the \" + str (len (self.mGoals)) + \" goal\" + (\"s\" if len (self.mGoals) > 1 else \"\") + \" ---\" + ENDC ()\n"
  "    for goalKey in self.mGoals.keys ():\n"
  "      print BOLD_GREEN () + \"Goal: '\" + goalKey + \"'\" + ENDC ()\n"
  "      (targetList, message) = self.mGoals [goalKey]\n"
  "      for target in targetList:\n"
  "        print \"  Target: '\" + target + \"'\"\n"
  "      print \"  Message: '\" + message + \"'\"\n"
  "        \n"
  "    print BOLD_BLUE () + \"--- End of print goals ---\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def runGoal (self, goal, maxConcurrentJobs, showCommand):\n"
  "    if self.mGoals.has_key (goal) :\n"
  "      (targetList, message) = self.mGoals [goal]\n"
  "      for target in targetList:\n"
  "        self.makeJob (target)\n"
  "      self.runJobs (maxConcurrentJobs, showCommand)\n"
  "    else:\n"
  "      errorMessage = \"The '\" + goal + \"' goal is not defined; defined goals:\"\n"
  "      for key in self.mGoals:\n"
  "        (targetList, message) = self.mGoals [key]\n"
  "        errorMessage += \"\\n  '\" + key + \"': \" + message\n"
  "      print BOLD_RED () + errorMessage + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def enterError (self, message):\n"
  "    print BOLD_RED () + message + ENDC ()\n"
  "    self.mErrorCount = self.mErrorCount + 1\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printErrorCountAndExitOnError (self):\n"
  "    if self.mErrorCount == 1:\n"
  "      print BOLD_RED () + \"1 error.\" + ENDC ()\n"
  "      sys.exit (1)\n"
  "    elif self.mErrorCount > 1:\n"
  "      print BOLD_RED () + str (self.mErrorCount) + \" errors.\" + ENDC ()\n"
  "      sys.exit (1)\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printErrorCount (self):\n"
  "    if self.mErrorCount == 1:\n"
  "      print BOLD_RED () + \"1 error.\" + ENDC ()\n"
  "    elif self.mErrorCount > 1:\n"
  "      print BOLD_RED () + str (self.mErrorCount) + \" errors.\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def errorCount (self):\n"
  "    return self.mErrorCount\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_0_targetTemplates (
  "make.py",
  "py",
  true, // Text file
  27516, // Text length
  gWrapperFileContent_0_targetTemplates
) ;

//--- File '/plm.py'

const char * gWrapperFileContent_1_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import sys, os, subprocess, urllib\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import make\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   Run process and wait for termination                                                                               *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runProcess (command) :\n"
  "  childProcess = subprocess.Popen (command)\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print make.BOLD_RED () + \"Error \" + str (childProcess.returncode) + make.ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   Run process, get output and wait for termination                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runProcessAndGetOutput (command) :\n"
  "  result = \"\"\n"
  "  childProcess = subprocess.Popen (command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)\n"
  "  while True:\n"
  "    out = childProcess.stdout.read(1)\n"
  "    if out == '' and childProcess.poll() != None:\n"
  "      break\n"
  "    if out != '':\n"
  "      result += out\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print make.BOLD_RED () + \"Error \" + str (childProcess.returncode) + make.ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   ARCHIVE DOWNLOAD                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "downloadProgression = 0.0\n"
  "\n"
  "def downloadReportHook (a, b, fileSize) :\n"
  "  global downloadProgression\n"
  "  newProgression = min (100.0, float(a * b) / fileSize * 100.0)\n"
  "  if newProgression > downloadProgression :\n"
  "    downloadProgression = downloadProgression + 1.0\n"
  "    sys.stdout.write(\".\")\n"
  "    sys.stdout.flush()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def downloadArchive (archiveURL, archivePath):\n"
  "  global downloadProgression\n"
  "  downloadProgression = 0.0\n"
  "  make.runHiddenCommand ([\"rm\", \"-f\", archivePath + \".downloading\"])\n"
  "  make.runHiddenCommand ([\"rm\", \"-f\", archivePath + \".tar.bz2\"])\n"
  "  make.runHiddenCommand ([\"mkdir\", \"-p\", os.path.dirname (archivePath)])\n"
  "  #print \"URL: \"+ archiveURL\n"
  "  #print \"Downloading... \" + archivePath + \".downloading\"\n"
  "  try:\n"
  "    urllib.urlretrieve (archiveURL,  archivePath + \".downloading\", downloadReportHook)\n"
  "    print \"\"\n"
  "    fileSize = os.path.getsize (archivePath + \".downloading\")\n"
  "    ok = fileSize > 1000000\n"
  "    if ok:\n"
  "      make.runHiddenCommand ([\"mv\", archivePath + \".downloading\", archivePath + \".tar.bz2\"])\n"
  "    else:\n"
  "      print make.BOLD_RED () + \"Error: cannot download file\" + make.ENDC ()\n"
  "      sys.exit (1)\n"
  "  except:\n"
  "    print make.BOLD_RED () + \"Error: no network connection\" + make.ENDC ()\n"
  "    sys.exit (1)\n"
  "    \n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runMakefile (toolDirectory, archiveBaseURL, LLVMsourceList, \\\n"
  "                 objectDir, LLCcompiler, llvmOptimizerCompiler, \\\n"
  "                 asAssembler, \\\n"
  "                 productDir, linker, objcopy, \\\n"
  "                 dumpObjectCode, displayObjectSize, runExecutableOnTarget, \\\n"
  "                 currentFile) :\n"
  "  #--- Get max parallel jobs as first argument\n"
  "  goal = \"all\"\n"
  "  if len (sys.argv) > 1 :\n"
  "    goal = sys.argv [1]\n"
  "  #--- Get max parallel jobs as first argument\n"
  "  maxParallelJobs = 0 # 0 means use host processor count\n"
  "  if len (sys.argv) > 2 :\n"
  "    maxParallelJobs = int (sys.argv [2])\n"
  "  #--- Get script absolute path\n"
  "  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "  #--- Download compiler tool if needed\n"
  "  if not os.path.exists (toolDirectory):\n"
  "    print make.BOLD_GREEN () + \"Downloading compiler tool chain\" + make.ENDC ()\n"
  "    archiveName = os.path.basename (toolDirectory)\n"
  "    archiveURL = archiveBaseURL + archiveName + \".tar.bz2\"\n"
  "    downloadArchive (archiveURL, toolDirectory)\n"
  "    installDir = os.path.normpath (toolDirectory + \"/..\")\n"
  "    os.chdir (installDir)\n"
  "    make.runHiddenCommand ([\"bunzip2\", \"-k\", archiveName + \".tar.bz2\"])\n"
  "    make.runHiddenCommand ([\"rm\", archiveName + \".tar.bz2\"])\n"
  "    make.runHiddenCommand ([\"tar\", \"xf\", archiveName + \".tar\"])\n"
  "    make.runHiddenCommand ([\"rm\", archiveName + \".tar\"])\n"
  "  #---\n"
  "  os.chdir (scriptDir)\n"
  "  #print \"Product directory: \" + scriptDir\n"
  "  #--- Build python makefile\n"
  "  makefile = make.Make ()\n"
  "  #--- Add C files compile rule\n"
  "  objectList = []\n"
  "  for source in LLVMsourceList:\n"
  "  #--- Optimize LLVM source\n"
  "    optimizedSource = objectDir + \"/\" + source + \"-opt.ll\"\n"
  "    rule = make.Rule (optimizedSource, \"Optimizing \" + source)\n"
  "    rule.mDependences.append (\"sources/\" + source)\n"
  "    rule.mDependences.append (currentFile)\n"
  "    rule.mCommand += llvmOptimizerCompiler\n"
  "    rule.mCommand += [\"sources/\" + source]\n"
  "    rule.mCommand += [\"-o\", optimizedSource]\n"
  "    makefile.addRule (rule)\n"
  "  #--- Compile LLVM source\n"
  "    asSource = objectDir + \"/\" + source + \".s\"\n"
  "    rule = make.Rule (asSource, \"Compiling \" + optimizedSource)\n"
  "    rule.mDependences.append (optimizedSource)\n"
  "    rule.mCommand += LLCcompiler\n"
  "    rule.mCommand += [optimizedSource]\n"
  "    rule.mCommand += [\"-o\", asSource]\n"
  "    makefile.addRule (rule)\n"
  "  #--- Assembling\n"
  "    asObject = objectDir + \"/\" + source + \".s.o\"\n"
  "    rule = make.Rule (asObject, \"Assembling \" + asSource)\n"
  "    rule.mDependences.append (asSource)\n"
  "    rule.mCommand += asAssembler\n"
  "    rule.mCommand += [asSource]\n"
  "    rule.mCommand += [\"-o\", asObject]\n"
  "    makefile.addRule (rule)\n"
  "    objectList.append (asObject)\n"
  "  #--- Add linker rule\n"
  "  productELF = productDir + \"/product.elf\"\n"
  "  rule = make.Rule (productELF, \"Linking \" + productELF)\n"
  "  rule.mDependences += objectList\n"
  "  rule.mCommand += linker\n"
  "  rule.mCommand += objectList\n"
  "  rule.mCommand += [\"-o\", productELF]\n"
  "  rule.mCommand += [\"-Tsources/linker.ld\"]\n"
  "  rule.mCommand += [\"-Map=\" + productELF + \".map\"]\n"
  "  makefile.addRule (rule)\n"
  "  #--- Add objcopy rule\n"
  "  productHEX = productDir + \"/product.ihex\"\n"
  "  rule = make.Rule (productHEX, \"Hexing \" + productHEX)\n"
  "  rule.mDependences += [productELF]\n"
  "  rule.mCommand += objcopy\n"
  "  rule.mCommand += [\"-O\", \"ihex\"]\n"
  "  rule.mCommand += [productELF]\n"
  "  rule.mCommand += [productHEX]\n"
  "  makefile.addRule (rule)\n"
  "  #--- Add goals\n"
  "  makefile.addGoal (\"run\", [productHEX], \"Building all and run\")\n"
  "  makefile.addGoal (\"all\", [productHEX], \"Building all\")\n"
  "  makefile.addGoal (\"display-object-size\", [productHEX], \"Display Object Size\")\n"
  "  makefile.addGoal (\"object-dump\", [productHEX], \"Dump Object Code\")\n"
  "  #--- Build\n"
  "  #makefile.printRules ()\n"
  "  makefile.runGoal (goal, maxParallelJobs, maxParallelJobs == 1)\n"
  "  #--- Build Ok \?\n"
  "  makefile.printErrorCountAndExitOnError ()\n"
  "  #--- Run or all \? Display size\n"
  "  if (goal == \"run\") or (goal == \"all\") :\n"
  "    s = runProcessAndGetOutput (displayObjectSize + objectList)\n"
  "    secondLine = s.split('\\n')[1]\n"
  "    numbers = [int(s) for s in secondLine.split() if s.isdigit()]\n"
  "    print \"Code:   \" + str (numbers [0]) + \" bytes\"\n"
  "    print \"Data:   \" + str (numbers [1]) + \" bytes\"\n"
  "    print \"Global: \" + str (numbers [2]) + \" bytes\"\n"
  "  #--- Run \?\n"
  "  if goal == \"run\":\n"
  "    print make.BOLD_BLUE () + \"Loading Teensy...\" + make.ENDC ()\n"
  "    runProcess (runExecutableOnTarget + [productHEX])\n"
  "    print make.BOLD_GREEN () + \"Success\" + make.ENDC ()\n"
  "  elif goal == \"display-object-size\":\n"
  "    print make.BOLD_BLUE () + \"Display Object Sizes\" + make.ENDC ()\n"
  "    runProcess (displayObjectSize + objectList)\n"
  "    print make.BOLD_GREEN () + \"Success\" + make.ENDC ()\n"
  "  elif goal == \"object-dump\":\n"
  "    print make.BOLD_BLUE () + \"Dump Object Code\" + make.ENDC ()\n"
  "    runProcess (dumpObjectCode + [productELF])\n"
  "    print make.BOLD_GREEN () + \"Success\" + make.ENDC ()\n"
  "\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_1_targetTemplates (
  "plm.py",
  "py",
  true, // Text file
  8758, // Text length
  gWrapperFileContent_1_targetTemplates
) ;

//--- File '/teensy-3-1-interrupt.plm-target'

const char * gWrapperFileContent_2_targetTemplates = "newUnsignedRepresentation @unsigned8  : \"uint8_t\"   8\n"
  "newUnsignedRepresentation @unsigned16 : \"uint16_t\" 16\n"
  "newUnsignedRepresentation @unsigned32 : \"uint32_t\" 32\n"
  "newUnsignedRepresentation @unsigned64 : \"uint64_t\" 64\n"
  "\n"
  "newSignedRepresentation @signed8  : \"int8_t\"   8\n"
  "newSignedRepresentation @signed16 : \"int16_t\" 16\n"
  "newSignedRepresentation @signed32 : \"int32_t\" 32\n"
  "newSignedRepresentation @signed64 : \"int64_t\" 64\n"
  "\n"
  "newUnsignedRepresentation @size : \"uint32_t\" 32\n"
  "\n"
  "booleanType $bool : @unsigned8\n"
  "\n"
  "newIntegerType $uint8  : @unsigned8\n"
  "newIntegerType $uint16 : @unsigned16\n"
  "newIntegerType $uint32 : @unsigned32\n"
  "newIntegerType $uint64 : @unsigned64\n"
  "newIntegerType $int8  : @signed8\n"
  "newIntegerType $int16 : @signed16\n"
  "newIntegerType $int32 : @signed32\n"
  "newIntegerType $int64 : @signed64\n"
  "\n"
  "exception : $int32 $uint32\n"
  "\n"
  "mode `isr\n"
  "mode `user\n"
  "\n"
  "import \"files/mk20dx256.plm\"\n"
  "import \"files/lcd.plm\"\n"
  "import \"files/leds.plm\"\n"
  "import \"files/default-isr.plm\"\n"
  "\n"
  "required proc setup `user ()\n"
  "required proc loop `user ()\n"
  "\n"
  "boot 10 {\n"
  "//---------1- Inhiber le chien de garde\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ1\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ2\n"
  "  WDOG_STCTRLH = 0x0010\n"
  "//--- Enable clocks to always-used peripherals\n"
  "  SIM_SCGC3 = SIM_SCGC3_ADC1 | SIM_SCGC3_FTM2\n"
  "  SIM_SCGC5 = 0x00043F82    // clocks active to all GPIO\n"
  "  SIM_SCGC6 = SIM_SCGC6_RTC | SIM_SCGC6_FTM0 | SIM_SCGC6_FTM1 | SIM_SCGC6_ADC0 | SIM_SCGC6_FTFL\n"
  "//--- If the RTC oscillator isn't enabled, get it started early\n"
  "  if not RTC_CR.OSCE.bool then\n"
  "    RTC_SR = 0\n"
  "    RTC_CR = RTC_CR::SC16P | RTC_CR::SC4P | RTC_CR::OSCE\n"
  "  end\n"
  "//--- Release I/O pins hold, if we woke up from VLLS mode\n"
  "  if PMC_REGSC.ACKISO != 0 then\n"
  "    PMC_REGSC |= PMC_REGSC::ACKISO\n"
  "  end\n"
  "// TODO: do this while the PLL is waiting to lock....\n"
  "  VTOR = 0  // use vector table in flash\n"
  "//  // default all interrupts to medium priority level\n"
  "////  for (int32_t i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);\n"
  "//---------2- Initialisation de la PLL\n"
  "// start in FEI mode\n"
  "//--- Enable capacitors for crystal\n"
  "  OSC_CR = OSC_CR::SC8P | OSC_CR::SC2P\n"
  "//--- Enable osc, 8-32 MHz range, low power mode\n"
  "  MCG_C2 = MCG_C2::RANGE0(2) | MCG_C2::EREFS\n"
  "//--- Switch to crystal as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = MCG_C1::CLKS(2) | MCG_C1::FRDIV(4)\n"
  "//--- Wait for crystal oscillator to begin\n"
  "  while MCG_S.OSCINIT0 == 0 do\n"
  "  end\n"
  "//--- Wait for FLL to use oscillator\n"
  "  while MCG_S.IREFST != 0 do\n"
  "  end\n"
  "//--- Wait for MCGOUT to use oscillator\n"
  "  while MCG_S.CLKST != MCG_S::CLKST(2) do\n"
  "  end\n"
  "//--- Now we're in FBE mode\n"
  "//    Config PLL input for 16 MHz Crystal / 4 = 4 MHz\n"
  "  MCG_C5 = MCG_C5::PRDIV0(3)\n"
  "//--- Config PLL for 96 MHz output\n"
  "  MCG_C6 = MCG_C6::PLLS | MCG_C6::VDIV0(0)\n"
  "//--- Wait for PLL to start using xtal as its input\n"
  "  while MCG_S.PLLST == 0 do\n"
  "  end\n"
  "//--- Wait for PLL to lock\n"
  "  while MCG_S.LOCK0 == 0 do\n"
  "  end\n"
  "//--- Now we're in PBE mode\n"
  "//    Config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash\n"
  "  SIM_CLKDIV1 = SIM_CLKDIV1::OUTDIV1(0) | SIM_CLKDIV1::OUTDIV2(1) | SIM_CLKDIV1::OUTDIV4(3)\n"
  "//--- Switch to PLL as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = MCG_C1::CLKS(0) | MCG_C1::FRDIV(4)\n"
  "//--- Wait for PLL clock to be used\n"
  "  while MCG_S.CLKST != MCG_S::CLKST(3) do\n"
  "  end\n"
  "}\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_2_targetTemplates (
  "teensy-3-1-interrupt.plm-target",
  "plm-target",
  true, // Text file
  3208, // Text length
  gWrapperFileContent_2_targetTemplates
) ;

//--- File '/teensy-3-1-sequential-systick.plm-target'

const char * gWrapperFileContent_3_targetTemplates = "\n"
  "signedIntegerType 1 -> 128\n"
  "unsignedIntegerType 1 -> 128\n"
  "\n"
  "pointerSize 32\n"
  "\n"
  "exception : $int32 $uint32\n"
  "\n"
  "mode `isr\n"
  "mode `user\n"
  "\n"
  "import \"files/mk20dx256.plm\"\n"
  "import \"files/boot-teensy-3-1.plm\"\n"
  "\n"
  "required proc systickHandler `isr ()\n"
  "required proc setup `user ()\n"
  "required proc loop `user ()\n"
  "\n"
  "proc systickHandler `isr @weak () {\n"
  "}\n"
  "\n"
  "init 0 { // Configure Systick interrupt every ms\n"
  "  SYST_RVR = 96000 - 1 // Interrupt every 96000 core clocks, i.e. every ms\n"
  "  SYST_CVR = 0\n"
  "  SYST_CSR = SYST_CSR::CLKSOURCE | SYST_CSR::TICKINT | SYST_CSR::ENABLE\n"
  "}\n" ;

const cRegularFileWrapper gWrapperFile_3_targetTemplates (
  "teensy-3-1-sequential-systick.plm-target",
  "plm-target",
  true, // Text file
  536, // Text length
  gWrapperFileContent_3_targetTemplates
) ;

//--- File 'files/boot-teensy-3-1.plm'

const char * gWrapperFileContent_4_targetTemplates = "//-----------------------------------------------------------------------------*\n"
  "\n"
  "boot 0 {\n"
  "//---------1- Inhiber le chien de garde\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ1\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ2\n"
  "  WDOG_STCTRLH = 0x0010\n"
  "//--- Enable clocks to always-used peripherals\n"
  "  SIM_SCGC3 = SIM_SCGC3_ADC1 | SIM_SCGC3_FTM2\n"
  "  SIM_SCGC5 = 0x00043F82    // clocks active to all GPIO\n"
  "  SIM_SCGC6 = SIM_SCGC6_RTC | SIM_SCGC6_FTM0 | SIM_SCGC6_FTM1 | SIM_SCGC6_ADC0 | SIM_SCGC6_FTFL\n"
  "//--- If the RTC oscillator isn't enabled, get it started early\n"
  "  if not RTC_CR.OSCE.bool then\n"
  "    RTC_SR = 0\n"
  "    RTC_CR = RTC_CR::SC16P | RTC_CR::SC4P | RTC_CR::OSCE\n"
  "  end\n"
  "//--- Release I/O pins hold, if we woke up from VLLS mode\n"
  "  if PMC_REGSC.ACKISO != 0 then\n"
  "    PMC_REGSC |= PMC_REGSC::ACKISO\n"
  "  end\n"
  "// TODO: do this while the PLL is waiting to lock....\n"
  "  VTOR = 0  // use vector table in flash\n"
  "//  // default all interrupts to medium priority level\n"
  "////  for (int32_t i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);\n"
  "//---------2- Initialisation de la PLL\n"
  "// start in FEI mode\n"
  "//--- Enable capacitors for crystal\n"
  "  OSC_CR = OSC_CR::SC8P | OSC_CR::SC2P\n"
  "//--- Enable osc, 8-32 MHz range, low power mode\n"
  "  MCG_C2 = MCG_C2::RANGE0(2) | MCG_C2::EREFS\n"
  "//--- Switch to crystal as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = MCG_C1::CLKS(2) | MCG_C1::FRDIV(4)\n"
  "//--- Wait for crystal oscillator to begin\n"
  "  while MCG_S.OSCINIT0 == 0 do\n"
  "  end\n"
  "//--- Wait for FLL to use oscillator\n"
  "  while MCG_S.IREFST != 0 do\n"
  "  end\n"
  "//--- Wait for MCGOUT to use oscillator\n"
  "  while MCG_S.CLKST != MCG_S::CLKST(2) do\n"
  "  end\n"
  "//--- Now we're in FBE mode\n"
  "//    Config PLL input for 16 MHz Crystal / 4 = 4 MHz\n"
  "  MCG_C5 = MCG_C5::PRDIV0(3)\n"
  "//--- Config PLL for 96 MHz output\n"
  "  MCG_C6 = MCG_C6::PLLS | MCG_C6::VDIV0(0)\n"
  "//--- Wait for PLL to start using xtal as its input\n"
  "  while MCG_S.PLLST == 0 do\n"
  "  end\n"
  "//--- Wait for PLL to lock\n"
  "  while MCG_S.LOCK0 == 0 do\n"
  "  end\n"
  "//--- Now we're in PBE mode\n"
  "//    Config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash\n"
  "  SIM_CLKDIV1 = SIM_CLKDIV1::OUTDIV1(0) | SIM_CLKDIV1::OUTDIV2(1) | SIM_CLKDIV1::OUTDIV4(3)\n"
  "//--- Switch to PLL as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = MCG_C1::CLKS(0) | MCG_C1::FRDIV(4)\n"
  "//--- Wait for PLL clock to be used\n"
  "  while MCG_S.CLKST != MCG_S::CLKST(3) do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_4_targetTemplates (
  "boot-teensy-3-1.plm",
  "plm",
  true, // Text file
  2377, // Text length
  gWrapperFileContent_4_targetTemplates
) ;

//--- File 'files/default-isr.plm'

const char * gWrapperFileContent_5_targetTemplates = "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc NMIHandler `isr ()\n"
  "\n"
  "proc NMIHandler `isr @weak () {\n"
  "  throw 2\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc HardFaultHandler `isr ()\n"
  "\n"
  "proc HardFaultHandler `isr @weak () {\n"
  "  throw 3\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc MemManageHandler `isr ()\n"
  "\n"
  "proc MemManageHandler `isr @weak () {\n"
  "  throw 4\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc BusFaultHandler `isr ()\n"
  "\n"
  "proc BusFaultHandler `isr @weak () {\n"
  "  throw 5\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UsageFaultHandler `isr ()\n"
  "\n"
  "proc UsageFaultHandler `isr @weak () {\n"
  "  throw 6\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc svcHandler `isr ()\n"
  "\n"
  "proc svcHandler `isr @weak () {\n"
  "  throw 11\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DebugMonitorHandler `isr ()\n"
  "\n"
  "proc DebugMonitorHandler `isr @weak () {\n"
  "  throw 12\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PendSVHandler `isr ()\n"
  "\n"
  "proc PendSVHandler `isr @weak () {\n"
  "  throw 14\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 0 { // Configure Systick interrupt every ms\n"
  "  SYST_RVR = 96000 - 1 // Interrupt every 96000 core clocks, i.e. every ms\n"
  "  SYST_CVR = 0\n"
  "  SYST_CSR = SYST_CSR::CLKSOURCE | SYST_CSR::TICKINT | SYST_CSR::ENABLE\n"
  "}\n"
  "\n"
  "var gCompteur $uint32 = 0 {\n"
  "  @rw proc systickHandler ()\n"
  "  proc waitMS (\?inDuration $uint32)\n"
  "  proc busyWaitingDuringMS (\?inDuration $uint32)\n"
  "}\n"
  "\n"
  "required proc systickHandler `isr ()\n"
  "\n"
  "proc systickHandler `isr @weak () {\n"
  "  gCompteur &++\n"
  "  userSystickHandler ()\n"
  "}\n"
  "\n"
  "proc userSystickHandler `isr @weak () {\n"
  "}\n"
  "\n"
  "proc waitMS `user `init (\?inDuration $uint32) {\n"
  "  let deadline = gCompteur + inDuration\n"
  "  while gCompteur < deadline do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel0TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel0TranfertCompleteHandler `isr @weak () {\n"
  "  throw 16\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel1TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel1TranfertCompleteHandler `isr @weak () {\n"
  "  throw 17\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel2TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel2TranfertCompleteHandler `isr @weak () {\n"
  "  throw 18\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel3TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel3TranfertCompleteHandler `isr @weak () {\n"
  "  throw 19\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel4TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel4TranfertCompleteHandler `isr @weak () {\n"
  "  throw 20\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel5TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel5TranfertCompleteHandler `isr @weak () {\n"
  "  throw 21\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel6TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel6TranfertCompleteHandler `isr @weak () {\n"
  "  throw 22\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel7TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel7TranfertCompleteHandler `isr @weak () {\n"
  "  throw 23\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel8TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel8TranfertCompleteHandler `isr @weak () {\n"
  "  throw 24\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel9TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel9TranfertCompleteHandler `isr @weak () {\n"
  "  throw 25\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel10TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel10TranfertCompleteHandler `isr @weak () {\n"
  "  throw 26\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel11TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel11TranfertCompleteHandler `isr @weak () {\n"
  "  throw 27\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel12TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel12TranfertCompleteHandler `isr @weak () {\n"
  "  throw 28\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel13TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel13TranfertCompleteHandler `isr @weak () {\n"
  "  throw 29\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel14TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel14TranfertCompleteHandler `isr @weak () {\n"
  "  throw 30\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel15TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel15TranfertCompleteHandler `isr @weak () {\n"
  "  throw 31\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAErrorHandler `isr ()\n"
  "\n"
  "proc DMAErrorHandler `isr @weak () {\n"
  "  throw 32\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc flashMemoryCommandCompleteHandler `isr ()\n"
  "\n"
  "proc flashMemoryCommandCompleteHandler `isr @weak () {\n"
  "  throw 34\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc flashMemoryReadCollisionHandler `isr ()\n"
  "\n"
  "proc flashMemoryReadCollisionHandler `isr @weak () {\n"
  "  throw 35\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc modeControllerHandler `isr ()\n"
  "\n"
  "proc modeControllerHandler `isr @weak () {\n"
  "  throw 36\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc LLWUHandler `isr ()\n"
  "\n"
  "proc LLWUHandler `isr @weak () {\n"
  "  throw 37\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc WDOGEWMHandler `isr ()\n"
  "\n"
  "proc WDOGEWMHandler `isr @weak () {\n"
  "  throw 38\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2C0Handler `isr ()\n"
  "\n"
  "proc I2C0Handler `isr @weak () {\n"
  "  throw 40\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2C1Handler `isr ()\n"
  "\n"
  "proc I2C1Handler `isr @weak () {\n"
  "  throw 41\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc SPI0Handler `isr ()\n"
  "\n"
  "proc SPI0Handler `isr @weak () {\n"
  "  throw 42\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc SPI1Handler `isr ()\n"
  "\n"
  "proc SPI1Handler `isr @weak () {\n"
  "  throw 43\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0MessageBufferHandler `isr ()\n"
  "\n"
  "proc CAN0MessageBufferHandler `isr @weak () {\n"
  "  throw 45\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0BusOffHandler `isr ()\n"
  "\n"
  "proc CAN0BusOffHandler `isr @weak () {\n"
  "  throw 46\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0ErrorHandler `isr ()\n"
  "\n"
  "proc CAN0ErrorHandler `isr @weak () {\n"
  "  throw 47\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0TransmitWarningHandler `isr ()\n"
  "\n"
  "proc CAN0TransmitWarningHandler `isr @weak () {\n"
  "  throw 48\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0ReceiveWarningHandler `isr ()\n"
  "\n"
  "proc CAN0ReceiveWarningHandler `isr @weak () {\n"
  "  throw 49\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0WakeUpHandler `isr ()\n"
  "\n"
  "proc CAN0WakeUpHandler `isr @weak () {\n"
  "  throw 50\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2S0TransmitHandler `isr ()\n"
  "\n"
  "proc I2S0TransmitHandler `isr @weak () {\n"
  "  throw 51\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2S0ReceiveHandler `isr ()\n"
  "\n"
  "proc I2S0ReceiveHandler `isr @weak () {\n"
  "  throw 52\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART0LONHandler `isr ()\n"
  "\n"
  "proc UART0LONHandler `isr @weak () {\n"
  "  throw 60\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART0StatusHandler `isr ()\n"
  "\n"
  "proc UART0StatusHandler `isr @weak () {\n"
  "  throw 61\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART0ErrorHandler `isr ()\n"
  "\n"
  "proc UART0ErrorHandler `isr @weak () {\n"
  "  throw 62\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART1StatusHandler `isr ()\n"
  "\n"
  "proc UART1StatusHandler `isr @weak () {\n"
  "  throw 63\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART1ErrorHandler `isr ()\n"
  "\n"
  "proc UART1ErrorHandler `isr @weak () {\n"
  "  throw 64\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART2StatusHandler `isr ()\n"
  "\n"
  "proc UART2StatusHandler `isr @weak () {\n"
  "  throw 64\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART2ErrorHandler `isr ()\n"
  "\n"
  "proc UART2ErrorHandler `isr @weak () {\n"
  "  throw 65\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc ADC0Handler `isr ()\n"
  "\n"
  "proc ADC0Handler `isr @weak () {\n"
  "  throw 73\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc ADC1Handler `isr ()\n"
  "\n"
  "proc ADC1Handler `isr @weak () {\n"
  "  throw 74\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMP0Handler `isr ()\n"
  "\n"
  "proc CMP0Handler `isr @weak () {\n"
  "  throw 75\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMP1Handler `isr ()\n"
  "\n"
  "proc CMP1Handler `isr @weak () {\n"
  "  throw 76\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMP2Handler `isr ()\n"
  "\n"
  "proc CMP2Handler `isr @weak () {\n"
  "  throw 77\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc FMT0Handler `isr ()\n"
  "\n"
  "proc FMT0Handler `isr @weak () {\n"
  "  throw 78\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc FMT1Handler `isr ()\n"
  "\n"
  "proc FMT1Handler `isr @weak () {\n"
  "  throw 79\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc FMT2Handler `isr ()\n"
  "\n"
  "proc FMT2Handler `isr @weak () {\n"
  "  throw 80\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMTHandler `isr ()\n"
  "\n"
  "proc CMTHandler `isr @weak () {\n"
  "  throw 81\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc RTCAlarmHandler `isr ()\n"
  "\n"
  "proc RTCAlarmHandler `isr @weak () {\n"
  "  throw 82\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc RTCSecondHandler `isr ()\n"
  "\n"
  "proc RTCSecondHandler `isr @weak () {\n"
  "  throw 83\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel0Handler `isr ()\n"
  "\n"
  "proc PITChannel0Handler `isr @weak () {\n"
  "  throw 84\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel1Handler `isr ()\n"
  "\n"
  "proc PITChannel1Handler `isr @weak () {\n"
  "  throw 85\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel2Handler `isr ()\n"
  "\n"
  "proc PITChannel2Handler `isr @weak () {\n"
  "  throw 86\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel3Handler `isr ()\n"
  "\n"
  "proc PITChannel3Handler `isr @weak () {\n"
  "  throw 87\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PDBHandler `isr ()\n"
  "\n"
  "proc PDBHandler `isr @weak () {\n"
  "  throw 88\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc USBOTGHandler `isr ()\n"
  "\n"
  "proc USBOTGHandler `isr @weak () {\n"
  "  throw 89\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc USBChargerDetectHandler `isr ()\n"
  "\n"
  "proc USBChargerDetectHandler `isr @weak () {\n"
  "  throw 90\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DAC0Handler `isr ()\n"
  "\n"
  "proc DAC0Handler `isr @weak () {\n"
  "  throw 97\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc TSIHandler `isr ()\n"
  "\n"
  "proc TSIHandler `isr @weak () {\n"
  "  throw 99\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc MCGHandler `isr ()\n"
  "\n"
  "proc MCGHandler `isr @weak () {\n"
  "  throw 100\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc lowPowerTimerHandler `isr ()\n"
  "\n"
  "proc lowPowerTimerHandler `isr @weak () {\n"
  "  throw 101\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortAHandler `isr ()\n"
  "\n"
  "proc pinDetectPortAHandler `isr @weak () {\n"
  "  throw 103\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortBHandler `isr ()\n"
  "\n"
  "proc pinDetectPortBHandler `isr @weak () {\n"
  "  throw 104\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortCHandler `isr ()\n"
  "\n"
  "proc pinDetectPortCHandler `isr @weak () {\n"
  "  throw 105\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortDHandler `isr ()\n"
  "\n"
  "proc pinDetectPortDHandler `isr @weak () {\n"
  "  throw 106\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortEHandler `isr ()\n"
  "\n"
  "proc pinDetectPortEHandler `isr @weak () {\n"
  "  throw 107\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc softwareInterruptHandler `isr ()\n"
  "\n"
  "proc softwareInterruptHandler `isr @weak () {\n"
  "  throw 110\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_5_targetTemplates (
  "default-isr.plm",
  "plm",
  true, // Text file
  14836, // Text length
  gWrapperFileContent_5_targetTemplates
) ;

//--- File 'files/lcd.plm'

const char * gWrapperFileContent_6_targetTemplates = "\n"
  "// http://esd.cs.ucr.edu/labs/interface/interface.html\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   PORT CONFIGURATION                                                        *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//   D4 : PTB0\n"
  "//   D5 : PTC0\n"
  "//   D6 : PTD1\n"
  "//   D7 : PTB2\n"
  "//   RS : PTB3\n"
  "//   E  : PTB1\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc configurePorts `init () {\n"
  "//--- D4 (PTB0) is a GPIO (input by default)\n"
  "  PORTB_PCR0 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 0) ; // Program D4 as output (PTB0)\n"
  "//--- D5 (PTC0) is a GPIO (input by default)\n"
  "  PORTC_PCR0 = (1 << 8) ;\n"
  "  GPIOC_PDDR |= (1 << 0) ; // Program D5 as output (PTC0)\n"
  "//--- D6 (PTD1) is a GPIO (input by default)\n"
  "  PORTD_PCR1 = (1 << 8) ;\n"
  "  GPIOD_PDDR |= (1 << 1) ; // Program D6 as output (PTD1)\n"
  "//--- D7 (PTB2) is a GPIO (input by default)\n"
  "  PORTB_PCR2 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 2) ; // Program D7 as output (PTB2)\n"
  "//--- RS (PTB3) is an output\n"
  "  PORTB_PCR3 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 3) ;\n"
  "//--- E (PTB1) is an output\n"
  "  PORTB_PCR1 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 1) ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc driveHighE `init `exception `user () {\n"
  "  GPIOB_PSOR = 1 << 1 ; // E is PTB1\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "proc driveLowE `init `exception `user () {\n"
  "  GPIOB_PCOR = 1 << 1 ; // E is PTB1\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "proc driveHighRS `init `exception `user () {\n"
  "  GPIOB_PSOR = 1 << 3 ; // RS is PTB3\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "proc driveLowRS `init `exception `user () {\n"
  "  GPIOB_PCOR = 1 << 3 ; // RS is PTB3\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD4 `init `exception `user (\?inValue $bool) { // PTB0\n"
  "  if inValue then\n"
  "    GPIOB_PSOR = 1 << 0 ;\n"
  "  else\n"
  "    GPIOB_PCOR = 1 << 0 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD5 `init `exception `user (\?inValue $bool) { // PTC0\n"
  "  if inValue then\n"
  "    GPIOC_PSOR = 1 << 0 ;\n"
  "  else\n"
  "    GPIOC_PCOR = 1 << 0 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD6 `init `exception `user (\?inValue $bool) { // PTD1\n"
  "  if inValue then\n"
  "    GPIOD_PSOR = 1 << 1 ;\n"
  "  else\n"
  "    GPIOD_PCOR = 1 << 1 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD7 `init `exception `user (\?inValue $bool) { // PTB2\n"
  "  if inValue then\n"
  "    GPIOB_PSOR = 1 << 2 ;\n"
  "  else\n"
  "    GPIOB_PCOR = 1 << 2 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   UTILITY ROUTINES                                                          *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc busyWaitingDuringMS `init (\?inDuration $uint32) {\n"
  "  let deadline = gCompteur + inDuration\n"
  "  while gCompteur < deadline do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc programLcd4BitDataBusOutput `init (\?inValue $uint8) {\n"
  "  setD4 (!(inValue & 0x01) != 0)\n"
  "  setD5 (!(inValue & 0x02) != 0)\n"
  "  setD6 (!(inValue & 0x04) != 0)\n"
  "  setD7 (!(inValue & 0x08) != 0)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write4BitCommand `init (\?inValue $uint8) {\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput (!inValue) ;\n"
  "  driveHighE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write8bitCommand `init (\?inCommand $uint8) {\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput (!inCommand >> 4) ;\n"
  "  driveHighE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  programLcd4BitDataBusOutput (!inCommand) ;\n"
  "  driveHighE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   LCD INIT                                                                  *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 10 {\n"
  "  configurePorts () ;\n"
  "//--- \xC3""\x89""tape 1 : attendre 15 ms\n"
  "  busyWaitingDuringMS (!15) ;\n"
  "//--- \xC3""\x89""tape 2 : \xC3""\xA9""crire la commande 0x30\n"
  "  write4BitCommand (!0x3) ;\n"
  "//--- \xC3""\x89""tape 3 : attendre 4,1 ms (en fait 5 ms)\n"
  "  busyWaitingDuringMS (!5) ;\n"
  "//--- \xC3""\x89""tape 4 : \xC3""\xA9""crire la commande 0x30 une 2e fois\n"
  "  write4BitCommand (!0x3) ;\n"
  "//--- \xC3""\x89""tape 5 : attendre 100 \xC2""\xB5""s\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "//--- \xC3""\x89""tape 6 : \xC3""\xA9""crire la commande 0x30 une 3e fois\n"
  "  write4BitCommand (!0x3) ;\n"
  "//--- \xC3""\x89""tape 7 : \xC3""\xA9""crire la commande 0x20 pour passer en 4 bits\n"
  "  write4BitCommand (!0x2) ;\n"
  "//--- \xC3""\x89""tape 8 : \xC3""\xA9""crire la commande 'Set Interface Length' : 0 0 1 DL N F * *\n"
  "//    DL : Data interface length : 0 (4 bits)\n"
  "//    N : Number of Display lines : 1 (2 lignes)\n"
  "//    F : Character Font : 0 (5x7)\n"
  "  write8bitCommand (!0x28) ;\n"
  "//--- \xC3""\x89""tape 9 : \xC3""\xA9""crire la commande 'Display Off'\n"
  "  write8bitCommand (!0x08) ;\n"
  "//--- \xC3""\x89""tape 10 : \xC3""\xA9""crire la commande 'Clear Display'\n"
  "  write8bitCommand (!0x01) ;\n"
  "//--- \xC3""\x89""tape 11 : \xC3""\xA9""crire la commande 'Set Cursor Move Direction' : 0 0 0 0 0 1 ID S\n"
  "//    ID : Increment Cursor after Each Byte Written to Display : 1 (oui)\n"
  "//    S : Shift Display When Byte Written : 0 (non)\n"
  "  write8bitCommand (!0x06) ;\n"
  "//--- \xC3""\x89""tape 12 : \xC3""\xA9""crire la commande 'Move Cursor / Shift Display' : 0 0 0 1 SC RL * *\n"
  "//    SC : Display Shift On : 1 (oui)\n"
  "//    RL : Direction of Shift : 1 (vers la droite)\n"
  "  write8bitCommand (!0x1C) ;\n"
  "//--- \xC3""\x89""tape 13 : \xC3""\xA9""crire la commande 'Return Cursor and LCD to Home Position'\n"
  "  write8bitCommand (!0x02) ;\n"
  "//--- \xC3""\x89""tape 14 : \xC3""\xA9""crire la commande 'Enable Display / Cursor' : 0 0 0 0 1 D C B\n"
  "//    D : Turn Display On : 1 (oui)\n"
  "//    C : Turn Cursor On : 0 (non)\n"
  "//    B : Cursor Blink On : 0 (non)\n"
  "  write8bitCommand (!0x0C) ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   PRINT ROUTINES IN USER MODE                                               *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc programLcd4BitDataBusOutput_inUserMode `user @noWarningIfUnused (\?inValue $uint8) {\n"
  "  setD4 (!(inValue & 0x01) != 0)\n"
  "  setD5 (!(inValue & 0x02) != 0)\n"
  "  setD6 (!(inValue & 0x04) != 0)\n"
  "  setD7 (!(inValue & 0x08) != 0)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write8bitCommand_inUserMode `user @noWarningIfUnused (\?inCommand $uint8) {\n"
  "  waitMS (!1) ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inCommand >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitMS (!1) ;\n"
  "  driveLowE () ;\n"
  "  waitMS (!1) ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inCommand) ;\n"
  "  driveHighE () ;\n"
  "  waitMS (!1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc writeData_inUserMode `user @noWarningIfUnused (\?inData $uint8) {\n"
  "  waitMS (!1) ;\n"
  "  driveHighRS () ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inData >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitMS (!1) ;\n"
  "  driveLowE () ;\n"
  "  waitMS (!1) ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inData) ;\n"
  "  driveHighE () ;\n"
  "  waitMS (!1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "// Line 0 : 00 -> 19\n"
  "// Line 1 : 64 -> 83\n"
  "// Line 2 : 20 -> 39\n"
  "// Line 3 : 84 -> 103\n"
  "\n"
  "proc goto `user @noWarningIfUnused (\?line:inLine $uint32 \?column:inColumn $uint8) {\n"
  "  if inColumn < 20 then\n"
  "    if inLine == 0 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 0 + inColumn) ;\n"
  "    elsif inLine == 1 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 64 + inColumn) ;\n"
  "    elsif inLine == 2 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 20 + inColumn) ;\n"
  "    elsif inLine == 3 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 84 + inColumn) ;\n"
  "    end\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printString (const char * inString) {\n"
  "//  if (NULL != inString) {\n"
  "//    while ('\\0' != *inString) {\n"
  "//      writeData (*inString) ;\n"
  "//      inString ++ ;\n"
  "//    }\n"
  "//  }\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printChar (const char inChar) {\n"
  "//  writeData (inChar) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc clearScreen `user @noWarningIfUnused () {\n"
  "  write8bitCommand_inUserMode (!0x01)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printSpaces `user @noWarningIfUnused (\?inCount $uint32) {\n"
  "  var count = inCount\n"
  "  while (count > 0) do\n"
  "    writeData_inUserMode (!0x20)\n"
  "    count -- ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printUnsigned `user @noWarningIfUnused (\?inValue $uint32) {\n"
  "  var divisor $uint32 = 1_000_000_000\n"
  "  var value = inValue\n"
  "  var isPrinting = false\n"
  "  while divisor > 0 do\n"
  "    if isPrinting or (value >= divisor) then\n"
  "      writeData_inUserMode (!0x30 + ((value / divisor) \\ $uint8))\n"
  "      value = value % divisor\n"
  "      isPrinting = true\n"
  "    end\n"
  "    divisor = divisor / 10\n"
  "  end\n"
  "  if not isPrinting then\n"
  "    writeData_inUserMode (!0x30)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printSigned `user @noWarningIfUnused (\?inValue : Int32) {\n"
  "  if inValue >= 0 then\n"
  "    printUnsigned (!inValue &\\ $uint32)\n"
  "  else\n"
  "    writeData_inUserMode (!0x2D) // Signe -\n"
  "    printUnsigned (!(- inValue) &\\ $uint32)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printSigned (const int32_t inValue) {\n"
  "//  if (inValue < 0) {\n"
  "//    printChar ('-') ;\n"
  "//    printUnsigned (($uint32_t) -inValue) ;\n"
  "//  }else{\n"
  "//    printUnsigned (($uint32_t) inValue) ;\n"
  "//  }\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex1 (const $uint32_t inValue) {\n"
  "//  const $uint32_t v = inValue & 0xF ;\n"
  "//  if (v < 10) {\n"
  "//    printChar ('0' + v) ;\n"
  "//  }else{\n"
  "//    printChar ('A' + v - 10) ;\n"
  "//  }  \n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex2 (const $uint32_t inValue) {\n"
  "//  printHex1 (inValue >> 4) ;\n"
  "//  printHex1 (inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex4 (const $uint32_t inValue) {\n"
  "//  printHex2 (inValue >> 8) ;\n"
  "//  printHex2 (inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "//void printHex8 (const $uint32_t inValue) {\n"
  "//  printHex4 (inValue >> 16) ;\n"
  "//  printHex4 (inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex16 (const $uint64_t inValue) {\n"
  "//  printHex8 (($uint32_t) (inValue >> 32)) ;\n"
  "//  printHex8 (($uint32_t) inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   EXCEPTION                                                                 *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc programLcd4BitDataBusOutput_inExceptionMode `exception @noWarningIfUnused (\?inValue $uint8) {\n"
  "  setD4 (!(inValue & 0x01) != 0)\n"
  "  setD5 (!(inValue & 0x02) != 0)\n"
  "  setD6 (!(inValue & 0x04) != 0)\n"
  "  setD7 (!(inValue & 0x08) != 0)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc waitOneMillisecondInExceptionMode `exception @noWarningIfUnused () {\n"
  "  while not SYST_CSR.COUNTFLAG.bool do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc waitMSInExceptionMode `exception @noWarningIfUnused (\?duration: inDuration $uint32) {\n"
  "  var duration = inDuration\n"
  "  while duration > 0 do\n"
  "    waitOneMillisecondInExceptionMode ()\n"
  "    duration &--\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc writeDataInExceptionMode `exception @noWarningIfUnused (\?inData $uint8) {\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveHighRS () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inData >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inData) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printUnsignedInExceptionMode `exception @noWarningIfUnused (\?inValue $uint32) {\n"
  "  var divisor $uint32 = 1_000_000_000\n"
  "  var value = inValue\n"
  "  var isPrinting = false\n"
  "  while divisor > 0 do\n"
  "    if isPrinting or (value >= divisor) then\n"
  "      writeDataInExceptionMode (!0x30 &+ ((value &/ divisor) &\\ $uint8))\n"
  "      value = value &% divisor\n"
  "      isPrinting = true\n"
  "    end\n"
  "    divisor = divisor &/ 10\n"
  "  end\n"
  "  if not isPrinting then\n"
  "    writeDataInExceptionMode (!0x30)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printSignedInExceptionMode `exception @noWarningIfUnused (\?inValue : Int32) {\n"
  "  if inValue >= 0 then\n"
  "    printUnsignedInExceptionMode (!inValue &\\ $uint32)\n"
  "  else\n"
  "    writeDataInExceptionMode (!0x2D) // Signe -\n"
  "    printUnsignedInExceptionMode (!(&- inValue) &\\ $uint32)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write8bitCommand_inExceptionMode `exception @noWarningIfUnused (\?inCommand $uint8) {\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inCommand >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inCommand) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc gotoInExceptionMode `exception @noWarningIfUnused (\?line:inLine $uint32 \?column:inColumn $uint8) {\n"
  "  if inColumn < 20 then\n"
  "    if inLine == 0 then\n"
  "      write8bitCommand_inExceptionMode (!0x80 &+ 0 &+ inColumn) ;\n"
  "    elsif inLine == 1 then\n"
  "      write8bitCommand_inExceptionMode (!0x80 &+ 64 &+ inColumn) ;\n"
  "    elsif inLine == 2 then\n"
  "      write8bitCommand_inExceptionMode (!0x80 &+ 20 &+ inColumn) ;\n"
  "    elsif inLine == 3 then\n"
  "      write8bitCommand_inExceptionMode (!0x80 &+ 84 &+ inColumn) ;\n"
  "    end\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc clearScreenInExceptionMode `exception @noWarningIfUnused () {\n"
  "  write8bitCommand_inExceptionMode (!0x01)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "exception setup 0 {\n"
  "  clearScreenInExceptionMode ()\n"
  "  waitMSInExceptionMode (!duration:4)\n"
  "  gotoInExceptionMode (!line:0 !column:0)\n"
  "  printSignedInExceptionMode (!CODE)\n"
  "  gotoInExceptionMode (!line:1 !column:0)\n"
  "  printUnsignedInExceptionMode (!LINE)\n"
  "}\n"
  "\n"
  "exception loop 0 {\n"
  "  waitMSInExceptionMode (!duration:50)\n"
  "  ledOn (!LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4 | LED_TEENSY)\n"
  "  waitMSInExceptionMode (!duration:50)\n"
  "  ledOff (!LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4 | LED_TEENSY)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_6_targetTemplates (
  "lcd.plm",
  "plm",
  true, // Text file
  15511, // Text length
  gWrapperFileContent_6_targetTemplates
) ;

//--- File 'files/leds.plm'

const char * gWrapperFileContent_7_targetTemplates = "//-----------------------------------------------------------------------------*\n"
  "//   Led L0 : PTA12\n"
  "//   Led L1 : PTA13\n"
  "//   Led L2 : PTD7\n"
  "//   Led L3 : PTD4\n"
  "//   Led L4 : PTD2\n"
  "//   Led sur carte Teensy : PTC5\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "//--- Led L0 : PTA12\n"
  "  PORTA_PCR12 = (1 << 8)\n"
  "  GPIOA_PDDR |= (1 << 12)\n"
  "//--- Led L1 : PTA13\n"
  "  PORTA_PCR13 = (1 << 8)\n"
  "  GPIOA_PDDR |= (1 << 13)\n"
  "//--- Led L2 : PTD13\n"
  "  PORTD_PCR7 = (1 << 8)\n"
  "  GPIOD_PDDR |= (1 << 7)\n"
  "//--- Led L3 : PTD4\n"
  "  PORTD_PCR4 = (1 << 8)\n"
  "  GPIOD_PDDR |= (1 << 4)\n"
  "//--- Led L4 : PTD2\n"
  "  PORTD_PCR2 = (1 << 8)\n"
  "  GPIOD_PDDR |= (1 << 2)\n"
  "//--- Led Teensy\n"
  "  PORTC_PCR5 = (1 << 8)\n"
  "  GPIOC_PDDR |= (1 << 5)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L0 $uint32 = (1 << 0)\n"
  "let LED_L1 $uint32 = (1 << 1)\n"
  "let LED_L2 $uint32 = (1 << 2)\n"
  "let LED_L3 $uint32 = (1 << 3)\n"
  "let LED_L4 $uint32 = (1 << 4)\n"
  "let LED_TEENSY $uint32 = (1 << 5)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc ledOn `user `exception `isr (\?inLeds $uint32) {\n"
  "//--- Led L0\n"
  "  if ((inLeds & LED_L0) != 0) then\n"
  "    GPIOA_PSOR = 1 << 12 ;\n"
  "  end\n"
  "//--- Led L1\n"
  "  if ((inLeds & LED_L1) != 0) then\n"
  "    GPIOA_PSOR = 1 << 13 ;\n"
  "  end\n"
  "//--- Led L2\n"
  "  if ((inLeds & LED_L2) != 0) then\n"
  "    GPIOD_PSOR = 1 << 7 ;\n"
  "  end\n"
  "//--- Led L3\n"
  "  if ((inLeds & LED_L3) != 0) then\n"
  "    GPIOD_PSOR = 1 << 4 ;\n"
  "  end\n"
  "//--- Led L4\n"
  "  if ((inLeds & LED_L4) != 0) then\n"
  "    GPIOD_PSOR = 1 << 2 ;\n"
  "  end\n"
  "//--- Led Teensy\n"
  "  if ((inLeds & LED_TEENSY) != 0) then\n"
  "    GPIOC_PSOR = 1 << 5 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc ledOff `user `exception `isr (\?inLeds $uint32) {\n"
  "//--- Led L0\n"
  "  if ((inLeds & LED_L0) != 0) then\n"
  "    GPIOA_PCOR = 1 << 12 ;\n"
  "  end\n"
  "//--- Led L1\n"
  "  if ((inLeds & LED_L1) != 0) then\n"
  "    GPIOA_PCOR = 1 << 13 ;\n"
  "  end\n"
  "//--- Led L2\n"
  "  if ((inLeds & LED_L2) != 0) then\n"
  "    GPIOD_PCOR = 1 << 7 ;\n"
  "  end\n"
  "//--- Led L3\n"
  "  if ((inLeds & LED_L3) != 0) then\n"
  "    GPIOD_PCOR = 1 << 4 ;\n"
  "  end\n"
  "//--- Led L4\n"
  "  if ((inLeds & LED_L4) != 0) then\n"
  "    GPIOD_PCOR = 1 << 2 ;\n"
  "  end\n"
  "//--- Led Teensy\n"
  "  if ((inLeds & LED_TEENSY) != 0) then\n"
  "    GPIOC_PCOR = 1 << 5 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_targetTemplates (
  "leds.plm",
  "plm",
  true, // Text file
  2330, // Text length
  gWrapperFileContent_7_targetTemplates
) ;

//--- File 'files/mk20dx256.plm'

const char * gWrapperFileContent_8_targetTemplates = "// Teensyduino Core Library\n"
  "// http://www.pjrc.com/teensy/\n"
  "// Copyright (c) 2013 PJRC.COM, LLC.\n"
  "//\n"
  "// Permission is hereby granted, free of charge, to any person obtaining\n"
  "// a copy of this software and associated documentation files (the\n"
  "// \"Software\"), to deal in the Software without restriction, including\n"
  "// without limitation the rights to use, copy, modify, merge, publish,\n"
  "// distribute, sublicense, and/or sell copies of the Software, and to\n"
  "// permit persons to whom the Software is furnished to do so, subject to\n"
  "// the following conditions:\n"
  "//\n"
  "// 1. The above copyright notice and this permission notice shall be \n"
  "// included in all copies or substantial portions of the Software.\n"
  "//\n"
  "// 2. If the Software is incorporated into a build system thallows \n"
  "// selection among a list of target devices, then similar target\n"
  "// devices manufactured by PJRC.COM must be included in the list of\n"
  "// target devices and selectable in the same manner.\n"
  "//\n"
  "// THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND,\n"
  "// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF\n"
  "// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND\n"
  "// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS\n"
  "// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN\n"
  "// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN\n"
  "// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
  "// SOFTWARE.\n"
  "\n"
  "let f_cpu $uint32 = 96_000_000\n"
  "\n"
  "let f_bus $uint32 = 48_000_000\n"
  "let f_mem  $uint32= 24_000_000\n"
  "\n"
  "// chapter 11: Port control and interrupts (PORT)\n"
  " // Pin Control Register n\n"
  "register\n"
  "  PORTA_PCR0   at 0x40049000\n"
  "  PORTA_PCR1   at 0x40049004\n"
  "  PORTA_PCR2   at 0x40049008\n"
  "  PORTA_PCR3   at 0x4004900C\n"
  "  PORTA_PCR4   at 0x40049010\n"
  "  PORTA_PCR5   at 0x40049014\n"
  "  PORTA_PCR6   at 0x40049018\n"
  "  PORTA_PCR7   at 0x4004901C\n"
  "  PORTA_PCR8   at 0x40049020\n"
  "  PORTA_PCR9   at 0x40049024\n"
  "  PORTA_PCR10  at 0x40049028\n"
  "  PORTA_PCR11  at 0x4004902C\n"
  "  PORTA_PCR12  at 0x40049030\n"
  "  PORTA_PCR13  at 0x40049034\n"
  "  PORTA_PCR14  at 0x40049038\n"
  "  PORTA_PCR15  at 0x4004903C\n"
  "  PORTA_PCR16  at 0x40049040\n"
  "  PORTA_PCR17  at 0x40049044\n"
  "  PORTA_PCR18  at 0x40049048\n"
  "  PORTA_PCR19  at 0x4004904C\n"
  "  PORTA_PCR20  at 0x40049050\n"
  "  PORTA_PCR21  at 0x40049054\n"
  "  PORTA_PCR22  at 0x40049058\n"
  "  PORTA_PCR23  at 0x4004905C\n"
  "  PORTA_PCR24  at 0x40049060\n"
  "  PORTA_PCR25  at 0x40049064\n"
  "  PORTA_PCR26  at 0x40049068\n"
  "  PORTA_PCR27  at 0x4004906C\n"
  "  PORTA_PCR28  at 0x40049070\n"
  "  PORTA_PCR29  at 0x40049074\n"
  "  PORTA_PCR30  at 0x40049078\n"
  "  PORTA_PCR31  at 0x4004907C\n"
  "  PORTB_PCR0   at 0x4004A000\n"
  "  PORTB_PCR1   at 0x4004A004\n"
  "  PORTB_PCR2   at 0x4004A008\n"
  "  PORTB_PCR3   at 0x4004A00C\n"
  "  PORTB_PCR4   at 0x4004A010\n"
  "  PORTB_PCR5   at 0x4004A014\n"
  "  PORTB_PCR6   at 0x4004A018\n"
  "  PORTB_PCR7   at 0x4004A01C\n"
  "  PORTB_PCR8   at 0x4004A020\n"
  "  PORTB_PCR9   at 0x4004A024\n"
  "  PORTB_PCR10  at 0x4004A028\n"
  "  PORTB_PCR11  at 0x4004A02C\n"
  "  PORTB_PCR12  at 0x4004A030\n"
  "  PORTB_PCR13  at 0x4004A034\n"
  "  PORTB_PCR14  at 0x4004A038\n"
  "  PORTB_PCR15  at 0x4004A03C\n"
  "  PORTB_PCR16  at 0x4004A040\n"
  "  PORTB_PCR17  at 0x4004A044\n"
  "  PORTB_PCR18  at 0x4004A048\n"
  "  PORTB_PCR19  at 0x4004A04C\n"
  "  PORTB_PCR20  at 0x4004A050\n"
  "  PORTB_PCR21  at 0x4004A054\n"
  "  PORTB_PCR22  at 0x4004A058\n"
  "  PORTB_PCR23  at 0x4004A05C\n"
  "  PORTB_PCR24  at 0x4004A060\n"
  "  PORTB_PCR25  at 0x4004A064\n"
  "  PORTB_PCR26  at 0x4004A068\n"
  "  PORTB_PCR27  at 0x4004A06C\n"
  "  PORTB_PCR28  at 0x4004A070\n"
  "  PORTB_PCR29  at 0x4004A074\n"
  "  PORTB_PCR30  at 0x4004A078\n"
  "  PORTB_PCR31  at 0x4004A07C\n"
  "  PORTC_PCR0   at 0x4004B000\n"
  "  PORTC_PCR1   at 0x4004B004\n"
  "  PORTC_PCR2   at 0x4004B008\n"
  "  PORTC_PCR3   at 0x4004B00C\n"
  "  PORTC_PCR4   at 0x4004B010\n"
  "  PORTC_PCR5   at 0x4004B014\n"
  "  PORTC_PCR6   at 0x4004B018\n"
  "  PORTC_PCR7   at 0x4004B01C\n"
  "  PORTC_PCR8   at 0x4004B020\n"
  "  PORTC_PCR9   at 0x4004B024\n"
  "  PORTC_PCR10  at 0x4004B028\n"
  "  PORTC_PCR11  at 0x4004B02C\n"
  "  PORTC_PCR12  at 0x4004B030\n"
  "  PORTC_PCR13  at 0x4004B034\n"
  "  PORTC_PCR14  at 0x4004B038\n"
  "  PORTC_PCR15  at 0x4004B03C\n"
  "  PORTC_PCR16  at 0x4004B040\n"
  "  PORTC_PCR17  at 0x4004B044\n"
  "  PORTC_PCR18  at 0x4004B048\n"
  "  PORTC_PCR19  at 0x4004B04C\n"
  "  PORTC_PCR20  at 0x4004B050\n"
  "  PORTC_PCR21  at 0x4004B054\n"
  "  PORTC_PCR22  at 0x4004B058\n"
  "  PORTC_PCR23  at 0x4004B05C\n"
  "  PORTC_PCR24  at 0x4004B060\n"
  "  PORTC_PCR25  at 0x4004B064\n"
  "  PORTC_PCR26  at 0x4004B068\n"
  "  PORTC_PCR27  at 0x4004B06C\n"
  "  PORTC_PCR28  at 0x4004B070\n"
  "  PORTC_PCR29  at 0x4004B074\n"
  "  PORTC_PCR30  at 0x4004B078\n"
  "  PORTC_PCR31  at 0x4004B07C\n"
  "  PORTD_PCR0   at 0x4004C000\n"
  "  PORTD_PCR1   at 0x4004C004\n"
  "  PORTD_PCR2   at 0x4004C008\n"
  "  PORTD_PCR3   at 0x4004C00C\n"
  "  PORTD_PCR4   at 0x4004C010\n"
  "  PORTD_PCR5   at 0x4004C014\n"
  "  PORTD_PCR6   at 0x4004C018\n"
  "  PORTD_PCR7   at 0x4004C01C\n"
  "  PORTD_PCR8   at 0x4004C020\n"
  "  PORTD_PCR9   at 0x4004C024\n"
  "  PORTD_PCR10  at 0x4004C028\n"
  "  PORTD_PCR11  at 0x4004C02C\n"
  "  PORTD_PCR12  at 0x4004C030\n"
  "  PORTD_PCR13  at 0x4004C034\n"
  "  PORTD_PCR14  at 0x4004C038\n"
  "  PORTD_PCR15  at 0x4004C03C\n"
  "  PORTD_PCR16  at 0x4004C040\n"
  "  PORTD_PCR17  at 0x4004C044\n"
  "  PORTD_PCR18  at 0x4004C048\n"
  "  PORTD_PCR19  at 0x4004C04C\n"
  "  PORTD_PCR20  at 0x4004C050\n"
  "  PORTD_PCR21  at 0x4004C054\n"
  "  PORTD_PCR22  at 0x4004C058\n"
  "  PORTD_PCR23  at 0x4004C05C\n"
  "  PORTD_PCR24  at 0x4004C060\n"
  "  PORTD_PCR25  at 0x4004C064\n"
  "  PORTD_PCR26  at 0x4004C068\n"
  "  PORTD_PCR27  at 0x4004C06C\n"
  "  PORTD_PCR28  at 0x4004C070\n"
  "  PORTD_PCR29  at 0x4004C074\n"
  "  PORTD_PCR30  at 0x4004C078\n"
  "  PORTD_PCR31  at 0x4004C07C\n"
  "  PORTE_PCR0   at 0x4004D000\n"
  "  PORTE_PCR1   at 0x4004D004\n"
  "  PORTE_PCR2   at 0x4004D008\n"
  "  PORTE_PCR3   at 0x4004D00C\n"
  "  PORTE_PCR4   at 0x4004D010\n"
  "  PORTE_PCR5   at 0x4004D014\n"
  "  PORTE_PCR6   at 0x4004D018\n"
  "  PORTE_PCR7   at 0x4004D01C\n"
  "  PORTE_PCR8   at 0x4004D020\n"
  "  PORTE_PCR9   at 0x4004D024\n"
  "  PORTE_PCR10  at 0x4004D028\n"
  "  PORTE_PCR11  at 0x4004D02C\n"
  "  PORTE_PCR12  at 0x4004D030\n"
  "  PORTE_PCR13  at 0x4004D034\n"
  "  PORTE_PCR14  at 0x4004D038\n"
  "  PORTE_PCR15  at 0x4004D03C\n"
  "  PORTE_PCR16  at 0x4004D040\n"
  "  PORTE_PCR17  at 0x4004D044\n"
  "  PORTE_PCR18  at 0x4004D048\n"
  "  PORTE_PCR19  at 0x4004D04C\n"
  "  PORTE_PCR20  at 0x4004D050\n"
  "  PORTE_PCR21  at 0x4004D054\n"
  "  PORTE_PCR22  at 0x4004D058\n"
  "  PORTE_PCR23  at 0x4004D05C\n"
  "  PORTE_PCR24  at 0x4004D060\n"
  "  PORTE_PCR25  at 0x4004D064\n"
  "  PORTE_PCR26  at 0x4004D068\n"
  "  PORTE_PCR27  at 0x4004D06C\n"
  "  PORTE_PCR28  at 0x4004D070\n"
  "  PORTE_PCR29  at 0x4004D074\n"
  "  PORTE_PCR30  at 0x4004D078\n"
  "  PORTE_PCR31  at 0x4004D07C\n"
  "$uint32 {\n"
  "  7, isf, 4, irqc[4], lk, 4, mux[3], 1, dse, ode, pfe, 1, sre, pe, ps\n"
  "}\n"
  "\n"
  "let PORT_PCR_ISF  $uint32  = 0x01000000  // Interrupt Status Flag\n"
  "//register $uint32 PORT_PCR_IRQC(n)   (((n) & 15) << 16) // Interrupt Configuration\n"
  "let PORT_PCR_IRQC_MASK  $uint32 = 0x000F0000\n"
  "let PORT_PCR_LK   $uint32 = 0x00008000  // Lock Register\n"
  "//register $uint32 PORT_PCR_MUX(n)    (((n) & 7) << 8) // Pin Mux Control\n"
  "let PORT_PCR_MUX_MASK $uint32 = 0x00000700\n"
  "let PORT_PCR_DSE      $uint32 = 0x00000040  // Drive Strength Enable\n"
  "let PORT_PCR_ODE      $uint32 = 0x00000020  // Open Drain Enable\n"
  "let PORT_PCR_PFE      $uint32 = 0x00000010  // Passive Filter Enable\n"
  "let PORT_PCR_SRE      $uint32 = 0x00000004  // Slew Rate Enable\n"
  "let PORT_PCR_PE       $uint32 = 0x00000002  // Pull Enable\n"
  "let PORT_PCR_PS       $uint32 = 0x00000001  // Pull Select\n"
  "\n"
  "register PORTA_GPCLR  at 0x40049080 $uint32 // Global Pin Control Low Register\n"
  "register PORTA_GPCHR  at 0x40049084 $uint32 // Global Pin Control High Register\n"
  "register PORTA_ISFR   at 0x400490A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTB_GPCLR  at 0x4004A080 $uint32 // Global Pin Control Low Register\n"
  "register PORTB_GPCHR  at 0x4004A084 $uint32 // Global Pin Control High Register\n"
  "register PORTB_ISFR   at 0x4004A0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTC_GPCLR  at 0x4004B080 $uint32 // Global Pin Control Low Register\n"
  "register PORTC_GPCHR  at 0x4004B084 $uint32 // Global Pin Control High Register\n"
  "register PORTC_ISFR   at 0x4004B0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTD_GPCLR  at 0x4004C080 $uint32 // Global Pin Control Low Register\n"
  "register PORTD_GPCHR  at 0x4004C084 $uint32 // Global Pin Control High Register\n"
  "register PORTD_ISFR   at 0x4004C0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "register PORTE_GPCLR  at 0x4004D080 $uint32 // Global Pin Control Low Register\n"
  "register PORTE_GPCHR  at 0x4004D084 $uint32 // Global Pin Control High Register\n"
  "register PORTE_ISFR   at 0x4004D0A0 $uint32 // Interrupt Status Flag Register\n"
  "\n"
  "// Chapter 12: System Integration Module (SIM)\n"
  "register SIM_SOPT1    at 0x40047000 $uint32 // System Options Register 1\n"
  "register SIM_SOPT1CFG at 0x40047004 $uint32 // SOPT1 Configuration Register\n"
  "register SIM_SOPT2    at 0x40048004 $uint32 // System Options Register 2\n"
  "register SIM_SOPT2_USBSRC at 0x00040000  $uint32 // 0=USB_CLKIN, 1=FFL/PLL \n"
  "register SIM_SOPT2_PLLFLLSEL at 0x00010000  $uint32 // 0=FLL, 1=PLL\n"
  "register SIM_SOPT2_TRACECLKSEL at 0x00001000  $uint32 // 0=MCGOUTCLK, 1=CPU\n"
  "register SIM_SOPT2_PTD7PAD at 0x00000800  $uint32 // 0=normal, 1=double drive PTD7\n"
  "//register $uint32 SIM_SOPT2_CLKOUTSEL(n)   (((n) & 7) << 5) // Selects the clock to output on the CLKOUT pin.\n"
  "let SIM_SOPT2_RTCCLKOUTSEL $uint32 = 0x00000010  // RTC clock out select\n"
  "register SIM_SOPT4   at 0x4004800C $uint32 // System Options Register 4\n"
  "register SIM_SOPT5   at 0x40048010 $uint32 // System Options Register 5\n"
  "register SIM_SOPT7   at 0x40048018 $uint32 // System Options Register 7\n"
  "register SIM_SDID @ro at 0x40048024 $uint32 // System Device Identification Register\n"
  "register SIM_SCGC2  at 0x4004802C $uint32 // System Clock Gating Control Register 2\n"
  "let SIM_SCGC2_DAC0  $uint32 =  0x00001000 // DAC0 Clock Gate Control\n"
  "register SIM_SCGC3  at 0x40048030 $uint32 // System Clock Gating Control Register 3\n"
  "let SIM_SCGC3_ADC1 $uint32 =  0x08000000 // ADC1 Clock Gate Control\n"
  "let SIM_SCGC3_FTM2 $uint32 =  0x01000000 // FTM2 Clock Gate Control\n"
  "register SIM_SCGC4 at 0x40048034 $uint32 // System Clock Gating Control Register 4\n"
  "let SIM_SCGC4_VREF  $uint32 =  0x00100000  // VREF Clock Gate Control\n"
  "let SIM_SCGC4_CMP   $uint32 = 0x00080000  // Comparator Clock Gate Control\n"
  "let SIM_SCGC4_USBOTG  $uint32 = 0x00040000  // USB Clock Gate Control\n"
  "let SIM_SCGC4_UART2  $uint32 =  0x00001000  // UART2 Clock Gate Control\n"
  "let SIM_SCGC4_UART1  $uint32 =  0x00000800  // UART1 Clock Gate Control\n"
  "let SIM_SCGC4_UART0  $uint32 =  0x00000400  // UART0 Clock Gate Control\n"
  "let SIM_SCGC4_I2C1  $uint32 =  0x00000080  // I2C1 Clock Gate Control\n"
  "let SIM_SCGC4_I2C0  $uint32 =  0x00000040  // I2C0 Clock Gate Control\n"
  "let SIM_SCGC4_CMT  $uint32 =  0x00000004  // CMT Clock Gate Control\n"
  "let SIM_SCGC4_EWM  $uint32 =  0x00000002  // EWM Clock Gate Control\n"
  "register SIM_SCGC5 at 0x40048038 $uint32 // System Clock Gating Control Register 5\n"
  "let SIM_SCGC5_PORTE  $uint32 =  0x00002000  // Port E Clock Gate Control\n"
  "let SIM_SCGC5_PORTD  $uint32 =  0x00001000  // Port D Clock Gate Control\n"
  "let SIM_SCGC5_PORTC  $uint32 =  0x00000800  // Port C Clock Gate Control\n"
  "let SIM_SCGC5_PORTB  $uint32 =  0x00000400  // Port B Clock Gate Control\n"
  "let SIM_SCGC5_PORTA  $uint32 =  0x00000200  // Port A Clock Gate Control\n"
  "let SIM_SCGC5_TSI  $uint32 =  0x00000020  // Touch Sense Input TSI Clock Gate Control\n"
  "let SIM_SCGC5_LPTIMER  $uint32 =  0x00000001  // Low Power Timer Access Control\n"
  "register SIM_SCGC6 at 0x4004803C $uint32 // System Clock Gating Control Register 6\n"
  "let SIM_SCGC6_RTC   $uint32 = 0x20000000  // RTC Access\n"
  "let SIM_SCGC6_ADC0  $uint32 =   0x08000000  // ADC0 Clock Gate Control\n"
  "let SIM_SCGC6_FTM1  $uint32 =   0x02000000  // FTM1 Clock Gate Control\n"
  "let SIM_SCGC6_FTM0  $uint32 =   0x01000000  // FTM0 Clock Gate Control\n"
  "let SIM_SCGC6_PIT  $uint32 =  0x00800000  // PIT Clock Gate Control\n"
  "let SIM_SCGC6_PDB  $uint32 =  0x00400000  // PDB Clock Gate Control\n"
  "let SIM_SCGC6_USBDCD  $uint32=  0x00200000  // USB DCD Clock Gate Control\n"
  "let SIM_SCGC6_CRC  $uint32 =  0x00040000  // CRC Clock Gate Control\n"
  "let SIM_SCGC6_I2S  $uint32 =  0x00008000  // I2S Clock Gate Control\n"
  "let SIM_SCGC6_SPI1  $uint32=   0x00002000  // SPI1 Clock Gate Control\n"
  "let SIM_SCGC6_SPI0  $uint32=   0x00001000  // SPI0 Clock Gate Control\n"
  "let SIM_SCGC6_FLEXCAN0  $uint32 =  0x00000010  // FlexCAN0 Clock Gate Control\n"
  "let SIM_SCGC6_DMAMUX $uint32 =  0x00000002  // DMA Mux Clock Gate Control\n"
  "let SIM_SCGC6_FTFL  $uint32 =  0x00000001  // Flash Memory Clock Gate Control\n"
  "\n"
  "register SIM_SCGC7 at 0x40048040 $uint32 // System Clock Gating Control Register 7\n"
  "let SIM_SCGC7_DMA  $uint32 =  0x00000002  // DMA Clock Gate Control\n"
  "\n"
  "register SIM_CLKDIV1 at 0x4004_8044 $uint32 {// System Clock Divider Register 1\n"
  "  OUTDIV1[4], // Divide value for the core/system clock\n"
  "  OUTDIV2[4], // Divide value for the peripheral clock\n"
  "  4,\n"
  "  OUTDIV4[4], // Divide value for the flash clock\n"
  "  16\n"
  "}\n"
  "\n"
  "register SIM_CLKDIV2 at 0x40048048 $uint32 // System Clock Divider Register 2\n"
  "//register $uint32 SIM_CLKDIV2_USBDIV(n)   (((n) & 0x07) << 1)\n"
  "let SIM_CLKDIV2_USBFRAC  $uint32 =  0x01\n"
  "register SIM_FCFG1 @ro at 0x4004804C $uint32 // Flash Configuration Register 1\n"
  "register SIM_FCFG2 @ro at 0x40048050 $uint32 // Flash Configuration Register 2\n"
  "register SIM_UIDH  @ro at 0x40048054 $uint32 // Unique Identification Register High\n"
  "register SIM_UIDMH @ro at 0x40048058 $uint32 // Unique Identification Register Mid-High\n"
  "register SIM_UIDML @ro at 0x4004805C $uint32 // Unique Identification Register Mid Low\n"
  "register SIM_UIDL  @ro at 0x40048060 $uint32 // Unique Identification Register Low\n"
  "\n"
  "// Chapter 13: Reset Control Module (RCM)\n"
  "register RCM_SRS0 at 0x4007F000 $uint8 // System Reset Status Register 0\n"
  "register RCM_SRS1 at 0x4007F001 $uint8 // System Reset Status Register 1\n"
  "register RCM_RPFC at 0x4007F004 $uint8 // Reset Pin Filter Control Register\n"
  "register RCM_RPFW at 0x4007F005 $uint8 // Reset Pin Filter Width Register\n"
  "register RCM_MR   at 0x4007F007 $uint8 // Mode Register\n"
  "\n"
  "// Chapter 14: System Mode Controller\n"
  "register SMC_PMPROT  at 0x4007E000 $uint8 // Power Mode Protection Register\n"
  "let SMC_PMPROT_AVLP  $uint8 = 0x20   // Allow very low power modes\n"
  "let SMC_PMPROT_ALLS $uint8  = 0x08   // Allow low leakage stop mode\n"
  "let SMC_PMPROT_AVLLS $uint8 = 0x02   // Allow very low leakage stop mode\n"
  "\n"
  "register SMC_PMCTRL  at 0x4007E001 $uint8 // Power Mode Control Register\n"
  "let SMC_PMCTRL_LPWUI $uint8  = 0x80   // Low Power Wake Up on Interrupt\n"
  "//register $uint8 SMC_PMCTRL_RUNM(n)  ($uint8_t)(((n) & 0x03) << 5) // Run Mode Control\n"
  "let SMC_PMCTRL_STOPA $uint8  = 0x08   // Stop Aborted\n"
  "//register $uint8 SMC_PMCTRL_STOPM(n)  ($uint8_t)((n) & 0x07)  // Stop Mode Control\n"
  "\n"
  "register SMC_VLLSCTRL at 0x4007E002 $uint8 // VLLS Control Register\n"
  "let SMC_VLLSCTRL_PORPO $uint8 = 0x20   // POR Power Option\n"
  "//let $uint8 SMC_VLLSCTRL_VLLSM(n)  ($uint8_t)((n) & 0x07)  // VLLS Mode Control\n"
  "\n"
  "register SMC_PMST at 0x4007E003 $uint8 // Power Mode Status Register\n"
  "let SMC_PMSTAT_RUN  $uint8 = 0x01   // Current power mode is RUN\n"
  "let SMC_PMSTAT_STOP $uint8 = 0x02   // Current power mode is STOP\n"
  "let SMC_PMSTAT_VLPR $uint8 = 0x04   // Current power mode is VLPR\n"
  "let SMC_PMSTAT_VLPW $uint8 = 0x08   // Current power mode is VLPW\n"
  "let SMC_PMSTAT_VLPS $uint8 = 0x10   // Current power mode is VLPS\n"
  "let SMC_PMSTAT_LLS  $uint8 = 0x20   // Current power mode is LLS\n"
  "let SMC_PMSTAT_VLLS $uint8 = 0x40   // Current power mode is VLLS\n"
  "\n"
  "// Chapter 15: Power Management Controller\n"
  "register PMC_LVDSC1 at 0x4007D000 $uint8 // Low Voltage Detect Status And Control 1 register\n"
  "let PMC_LVDSC1_LVDF $uint8 = 0x80   // Low-Voltage Detect Flag\n"
  "let PMC_LVDSC1_LVDACK $uint8 = 0x40   // Low-Voltage Detect Acknowledge\n"
  "let PMC_LVDSC1_LVDIE $uint8 = 0x20   // Low-Voltage Detect Interrupt Enable\n"
  "let PMC_LVDSC1_LVDRE $uint8 = 0x10   // Low-Voltage Detect Reset Enable\n"
  "//let $uint8 PMC_LVDSC1_LVDV(n)  ($uint8_t)((n) & 0x03)  // Low-Voltage Detect Voltage Select\n"
  "register PMC_LVDSC2 at 0x4007D001 $uint8 // Low Voltage Detect Status And Control 2 register\n"
  "let PMC_LVDSC2_LVWF $uint8  = 0x80   // Low-Voltage Warning Flag\n"
  "let PMC_LVDSC2_LVWACK $uint8 = 0x40   // Low-Voltage Warning Acknowledge\n"
  "let PMC_LVDSC2_LVWIE $uint8 = 0x20   // Low-Voltage Warning Interrupt Enable\n"
  "//let $uint8 PMC_LVDSC2_LVWV(n)  ($uint8_t)((n) & 0x03)  // Low-Voltage Warning Voltage Select\n"
  "\n"
  "register PMC_REGSC at 0x4007D002 $uint8 { // Regulator Status And Control register\n"
  "  3, BGEN, ACKISO, REGONS, BGBE, 1\n"
  "}\n"
  "\n"
  "// Chapter 16: Low-Leakage Wakeup Unit (LLWU)\n"
  "register LLWU_PE1  at 0x4007C000 $uint8 // LLWU Pin Enable 1 register\n"
  "register LLWU_PE2  at 0x4007C001 $uint8 // LLWU Pin Enable 2 register\n"
  "register LLWU_PE3  at 0x4007C002 $uint8 // LLWU Pin Enable 3 register\n"
  "register LLWU_PE4  at 0x4007C003 $uint8 // LLWU Pin Enable 4 register\n"
  "register LLWU_ME   at 0x4007C004 $uint8 // LLWU Module Enable register\n"
  "register LLWU_F1   at 0x4007C005 $uint8 // LLWU Flag 1 register\n"
  "register LLWU_F2   at 0x4007C006 $uint8 // LLWU Flag 2 register\n"
  "register LLWU_F3   at 0x4007C007 $uint8 // LLWU Flag 3 register\n"
  "register LLWU_FILT1 at 0x4007C008 $uint8 // LLWU Pin Filter 1 register\n"
  "register LLWU_FILT2 at 0x4007C009 $uint8 // LLWU Pin Filter 2 register\n"
  "register LLWU_RST  at 0x4007C00A $uint8 // LLWU Reset Enable register\n"
  "\n"
  "// Chapter 17: Miscellaneous Control Module (MCM)\n"
  "register MCM_PLASC at 0xE0080008 $uint16 // Crossbar Switch (AXBS) Slave Configuration\n"
  "\n"
  "register MCM_PLAMC at 0xE008000A $uint16 // Crossbar Switch (AXBS) Master Configuration\n"
  "\n"
  "register MCM_PLACR at 0xE008000C $uint32 // Crossbar Switch (AXBS) Control Register (MK20DX128)\n"
  "let MCM_PLACR_ARG   $uint32 = 0x00000200  // Arbitration select, 0=fixed, 1=round-robin\n"
  "\n"
  "register MCM_CR at 0xE008000C $uint32 // RAM arbitration control register (MK20DX256)\n"
  "let MCM_CR_SRAMLWP  $uint32 =  0x4000_0000  // SRAM_L write protect\n"
  "//let $uint32 MCM_CR_SRAMLAP(n)   (((n) & 0x03) << 28) // SRAM_L priority, 0=RR, 1=favor DMA, 2=CPU, 3=DMA\n"
  "let MCM_CR_SRAMUWP  $uint32 =  0x0400_0000  // SRAM_U write protect\n"
  "//let $uint32 MCM_CR_SRAMUAP(n)   (((n) & 0x03) << 24) // SRAM_U priority, 0=RR, 1=favor DMA, 2=CPU, 3=DMA\n"
  "\n"
  "// Crossbar Switch (AXBS) - only programmable on MK20DX256\n"
  "register AXBS_PRS0   at 0x40004000 $uint32 // Priority Registers Slave 0\n"
  "register AXBS_CRS0   at 0x40004010 $uint32 // Control Register 0\n"
  "register AXBS_PRS1   at 0x40004100 $uint32 // Priority Registers Slave 1\n"
  "register AXBS_CRS1   at 0x40004110 $uint32 // Control Register 1\n"
  "register AXBS_PRS2   at 0x40004200 $uint32 // Priority Registers Slave 2\n"
  "register AXBS_CRS2   at 0x40004210 $uint32 // Control Register 2\n"
  "register AXBS_PRS3   at 0x40004300 $uint32 // Priority Registers Slave 3\n"
  "register AXBS_CRS3   at 0x40004310 $uint32 // Control Register 3\n"
  "register AXBS_PRS4   at 0x40004400 $uint32 // Priority Registers Slave 4\n"
  "register AXBS_CRS4   at 0x40004410 $uint32 // Control Register 4\n"
  "register AXBS_PRS5   at 0x40004500 $uint32 // Priority Registers Slave 5\n"
  "register AXBS_CRS5   at 0x40004510 $uint32 // Control Register 5\n"
  "register AXBS_PRS6   at 0x40004600 $uint32 // Priority Registers Slave 6\n"
  "register AXBS_CRS6   at 0x40004610 $uint32 // Control Register 6\n"
  "register AXBS_PRS7   at 0x40004700 $uint32 // Priority Registers Slave 7\n"
  "register AXBS_CRS7   at 0x40004710 $uint32 // Control Register 7\n"
  "register AXBS_MGPCR0 at 0x40004800 $uint32 // Master 0 General Purpose Control Register\n"
  "register AXBS_MGPCR1 at 0x40004900 $uint32 // Master 1 General Purpose Control Register\n"
  "register AXBS_MGPCR2 at 0x40004A00 $uint32 // Master 2 General Purpose Control Register\n"
  "register AXBS_MGPCR3 at 0x40004B00 $uint32 // Master 3 General Purpose Control Register\n"
  "register AXBS_MGPCR4 at 0x40004C00 $uint32 // Master 4 General Purpose Control Register\n"
  "register AXBS_MGPCR5 at 0x40004D00 $uint32 // Master 5 General Purpose Control Register\n"
  "register AXBS_MGPCR6 at 0x40004E00 $uint32 // Master 6 General Purpose Control Register\n"
  "register AXBS_MGPCR7 at 0x40004F00 $uint32 // Master 7 General Purpose Control Register\n"
  "let AXBS_CRS_READONLY  $uint32=  0x80000000\n"
  "let AXBS_CRS_HALTLOWPRIORITY  $uint32 = 0x40000000\n"
  "let AXBS_CRS_ARB_FIXED  $uint32 = 0x00000000\n"
  "let AXBS_CRS_ARB_ROUNDROBIN  $uint32 = 0x00010000\n"
  "let AXBS_CRS_PARK_FIXED  $uint32 =  0x00000000\n"
  "let AXBS_CRS_PARK_PREVIOUS  $uint32 =  0x00000010\n"
  "let AXBS_CRS_PARK_NONE  $uint32 =  0x00000020\n"
  "//let $uint32 AXBS_CRS_PARK(n)   (((n) & 7) << 0)\n"
  "\n"
  "\n"
  "\n"
  "// Chapter 20: Direct Memory Access Multiplexer (DMAMUX)\n"
  "register DMAMUX0_CHCFG0  at 0x40021000 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG1  at 0x40021001 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG2  at 0x40021002 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG3  at 0x40021003 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG4  at 0x40021004 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG5  at 0x40021005 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG6  at 0x40021006 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG7  at 0x40021007 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG8  at 0x40021008 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG9  at 0x40021009 $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG10 at 0x4002100A $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG11 at 0x4002100B $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG12 at 0x4002100C $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG13 at 0x4002100D $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG14 at 0x4002100E $uint8 // Channel Configuration register\n"
  "register DMAMUX0_CHCFG15 at 0x4002100F $uint8 // Channel Configuration register\n"
  "let DMAMUX_DISABLE $uint8 =  0\n"
  "let DMAMUX_TRIG  $uint8 = 64\n"
  "let DMAMUX_ENABLE $uint8 =  128\n"
  "let DMAMUX_SOURCE_UART0_RX $uint8 = 2\n"
  "let DMAMUX_SOURCE_UART0_TX $uint8 = 3\n"
  "let DMAMUX_SOURCE_UART1_RX $uint8 = 4\n"
  "let DMAMUX_SOURCE_UART1_TX $uint8 = 5\n"
  "let DMAMUX_SOURCE_UART2_RX $uint8 = 6\n"
  "let DMAMUX_SOURCE_UART2_TX $uint8 = 7\n"
  "let DMAMUX_SOURCE_I2S0_RX  $uint8 =14\n"
  "let DMAMUX_SOURCE_I2S0_TX  $uint8 =15\n"
  "let DMAMUX_SOURCE_SPI0_RX  $uint8 =16\n"
  "let DMAMUX_SOURCE_SPI0_TX  $uint8 =17\n"
  "let DMAMUX_SOURCE_I2C0  $uint8 =22\n"
  "let DMAMUX_SOURCE_I2C1  $uint8 =23\n"
  "let DMAMUX_SOURCE_FTM0_CH0 $uint8 = 24\n"
  "let DMAMUX_SOURCE_FTM0_CH1 $uint8 = 25\n"
  "let DMAMUX_SOURCE_FTM0_CH2 $uint8 = 26\n"
  "let DMAMUX_SOURCE_FTM0_CH3 $uint8 = 27\n"
  "let DMAMUX_SOURCE_FTM0_CH4 $uint8 = 28\n"
  "let DMAMUX_SOURCE_FTM0_CH5 $uint8 = 29\n"
  "let DMAMUX_SOURCE_FTM0_CH6 $uint8 = 30\n"
  "let DMAMUX_SOURCE_FTM0_CH7 $uint8 = 31\n"
  "let DMAMUX_SOURCE_FTM1_CH0 $uint8 = 32\n"
  "let DMAMUX_SOURCE_FTM1_CH1 $uint8 = 33\n"
  "let DMAMUX_SOURCE_FTM2_CH0 $uint8 = 34\n"
  "let DMAMUX_SOURCE_FTM2_CH1 $uint8 = 35\n"
  "let DMAMUX_SOURCE_ADC0 $uint8 = 40\n"
  "let DMAMUX_SOURCE_ADC1 $uint8 = 41\n"
  "let DMAMUX_SOURCE_CMP0 $uint8 = 42\n"
  "let DMAMUX_SOURCE_CMP1 $uint8 = 43\n"
  "let DMAMUX_SOURCE_CMP2 $uint8 = 44\n"
  "let DMAMUX_SOURCE_DAC0 $uint8 = 45\n"
  "let DMAMUX_SOURCE_CMT  $uint8 = 47\n"
  "let DMAMUX_SOURCE_PDB  $uint8 = 48\n"
  "let DMAMUX_SOURCE_PORTA $uint8 = 49\n"
  "let DMAMUX_SOURCE_PORTB $uint8 = 50\n"
  "let DMAMUX_SOURCE_PORTC $uint8 = 51\n"
  "let DMAMUX_SOURCE_PORTD $uint8 = 52\n"
  "let DMAMUX_SOURCE_PORTE $uint8 = 53\n"
  "let DMAMUX_SOURCE_ALWAYS0 $uint8 = 54\n"
  "let DMAMUX_SOURCE_ALWAYS1 $uint8 = 55\n"
  "let DMAMUX_SOURCE_ALWAYS2 $uint8 = 56\n"
  "let DMAMUX_SOURCE_ALWAYS3 $uint8 = 57\n"
  "let DMAMUX_SOURCE_ALWAYS4 $uint8 = 58\n"
  "let DMAMUX_SOURCE_ALWAYS5 $uint8 = 59\n"
  "let DMAMUX_SOURCE_ALWAYS6 $uint8 = 60\n"
  "let DMAMUX_SOURCE_ALWAYS7 $uint8 = 61\n"
  "let DMAMUX_SOURCE_ALWAYS8 $uint8 = 62\n"
  "let DMAMUX_SOURCE_ALWAYS9 $uint8 = 63\n"
  "\n"
  "// Chapter 21: Direct Memory Access Controller (eDMA)\n"
  "register DMA_CR at 0x40008000 $uint32 // Control Register\n"
  "let DMA_CR_CX   $uint32  = 0x2_0000 // Cancel Transfer\n"
  "let DMA_CR_ECX   $uint32 = 0x1_0000 // Error Cancel Transfer\n"
  "let DMA_CR_EMLM   $uint32= 0x80 // Enable Minor Loop Mapping\n"
  "let DMA_CR_CLM   $uint32 = 0x40 // Continuous Link Mode\n"
  "let DMA_CR_HALT  $uint32 = 0x20 // Halt DMA Operations\n"
  "let DMA_CR_HOE   $uint32 = 0x10 // Halt On Error\n"
  "let DMA_CR_ERCA  $uint32 = 0x04 // Enable Round Robin Channel Arbitration\n"
  "let DMA_CR_EDBG   $uint32= 0x02 // Enable Debug\n"
  "register DMA_ES  at 0x40008004 $uint32 // Error Status Register\n"
  "register DMA_ERQ at 0x4000800C $uint32 // Enable Request Register\n"
  "let DMA_ERQ_ERQ0   $uint32 = 1 // Enable DMA Request 0\n"
  "let DMA_ERQ_ERQ1   $uint32 = 2 // Enable DMA Request 1\n"
  "let DMA_ERQ_ERQ2   $uint32 = 4 // Enable DMA Request 2\n"
  "let DMA_ERQ_ERQ3   $uint32 = 8 // Enable DMA Request 3\n"
  "register DMA_EEI at 0x40008014 $uint8 // Enable Error Interrupt Register\n"
  "let DMA_EEI_EEI0   $uint32 = 1 // Enable Error Interrupt 0\n"
  "let DMA_EEI_EEI1   $uint32 = 2 // Enable Error Interrupt 1\n"
  "let DMA_EEI_EEI2   $uint32 = 4 // Enable Error Interrupt 2\n"
  "let DMA_EEI_EEI3   $uint32 = 8 // Enable Error Interrupt 3\n"
  "//register $uint8 DMA_CEEI  *(volatile $uint8_t  *)0x40008018 // Clear Enable Error Interrupt Register\n"
  "//register $uint32 DMA_CEEI_CEEI(n)  (($uint8_t)(n & 3)<<0) // Clear Enable Error Interrupt\n"
  "//register $uint32 DMA_CEEI_CAEE   (($uint8_t)1<<6)  // Clear All Enable Error Interrupts\n"
  "//register $uint32 DMA_CEEI_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_SEEI  *(volatile $uint8_t  *)0x40008019 // Set Enable Error Interrupt Register\n"
  "//register $uint32 DMA_SEEI_SEEI(n)  (($uint8_t)(n & 3)<<0) // Set Enable Error Interrupt\n"
  "//register $uint32 DMA_SEEI_SAEE   (($uint8_t)1<<6)  // Set All Enable Error Interrupts\n"
  "//register $uint32 DMA_SEEI_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CERQ  *(volatile $uint8_t  *)0x4000801A // Clear Enable Request Register\n"
  "//register $uint32 DMA_CERQ_CERQ(n)  (($uint8_t)(n & 3)<<0) // Clear Enable Request\n"
  "//register $uint32 DMA_CERQ_CAER   (($uint8_t)1<<6)  // Clear All Enable Requests\n"
  "//register $uint32 DMA_CERQ_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_SERQ  *(volatile $uint8_t  *)0x4000801B // Set Enable Request Register\n"
  "//register $uint32 DMA_SERQ_SERQ(n)  (($uint8_t)(n & 3)<<0) // Set Enable Request\n"
  "//register $uint32 DMA_SERQ_SAER   (($uint8_t)1<<6)  // Set All Enable Requests\n"
  "//register $uint32 DMA_SERQ_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CDNE  *(volatile $uint8_t  *)0x4000801C // Clear DONE Status Bit Register\n"
  "//register $uint32 DMA_CDNE_CDNE(n)  (($uint8_t)(n & 3)<<0) // Clear Done Bit\n"
  "//register $uint32 DMA_CDNE_CADN   (($uint8_t)1<<6)  // Clear All Done Bits\n"
  "//register $uint32 DMA_CDNE_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_SSRT  *(volatile $uint8_t  *)0x4000801D // Set START Bit Register\n"
  "//register $uint32 DMA_SSRT_SSRT(n)  (($uint8_t)(n & 3)<<0) // Set Start Bit\n"
  "//register $uint32 DMA_SSRT_SAST   (($uint8_t)1<<6)  // Set All Start Bits\n"
  "//register $uint32 DMA_SSRT_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CERR  *(volatile $uint8_t  *)0x4000801E // Clear Error Register\n"
  "//register $uint32 DMA_CERR_CERR(n)  (($uint8_t)(n & 3)<<0) // Clear Error Indicator\n"
  "//register $uint32 DMA_CERR_CAEI   (($uint8_t)1<<6)  // Clear All Error Indicators\n"
  "//register $uint32 DMA_CERR_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_CINT  *(volatile $uint8_t  *)0x4000801F // Clear Interrupt Request Register\n"
  "//register $uint32 DMA_CINT_CINT(n)  (($uint8_t)(n & 3)<<0) // Clear Interrupt Request\n"
  "//register $uint32 DMA_CINT_CAIR   (($uint8_t)1<<6)  // Clear All Interrupt Requests\n"
  "//register $uint32 DMA_CINT_NOP   (($uint8_t)1<<7)  // NOP\n"
  "//register $uint32 DMA_INT    0x40008024 // Interrupt Request Register\n"
  "//register $uint32 DMA_INT_INT0   ( 1<<0) // Interrupt Request 0\n"
  "//register $uint32 DMA_INT_INT1   ( 1<<1) // Interrupt Request 1\n"
  "//register $uint32 DMA_INT_INT2   ( 1<<2) // Interrupt Request 2\n"
  "//register $uint32 DMA_INT_INT3   ( 1<<3) // Interrupt Request 3\n"
  "//register $uint32 DMA_ERR    0x4000802C // Error Register\n"
  "//register $uint32 DMA_ERR_ERR0   ( 1<<0) // Error in Channel 0\n"
  "//register $uint32 DMA_ERR_ERR1   ( 1<<1) // Error in Channel 1\n"
  "//register $uint32 DMA_ERR_ERR2   ( 1<<2) // Error in Channel 2\n"
  "//register $uint32 DMA_ERR_ERR3   ( 1<<3) // Error in Channel 3\n"
  "//register $uint32 DMA_HRS    0x40008034 // Hardware Request Status Register\n"
  "//register $uint32 DMA_HRS_HRS0   ( 1<<0) // Hardware Request Status Channel 0\n"
  "//register $uint32 DMA_HRS_HRS1   ( 1<<1) // Hardware Request Status Channel 1\n"
  "//register $uint32 DMA_HRS_HRS2   ( 1<<2) // Hardware Request Status Channel 2\n"
  "//register $uint32 DMA_HRS_HRS3   ( 1<<3) // Hardware Request Status Channel 3\n"
  "//register $uint32 DMA_DCHPRI3  *(volatile $uint8_t  *)0x40008100 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI2  *(volatile $uint8_t  *)0x40008101 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI1  *(volatile $uint8_t  *)0x40008102 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI0  *(volatile $uint8_t  *)0x40008103 // Channel n Priority Register\n"
  "//register $uint32 DMA_DCHPRI_CHPRI(n)  (($uint8_t)(n & 3)<<0) // Channel Arbitration Priority\n"
  "//register $uint32 DMA_DCHPRI_DPA   (($uint8_t)1<<6)  // Disable PreEmpt Ability\n"
  "//register $uint32 DMA_DCHPRI_ECP   (($uint8_t)1<<7)  // Enable PreEmption\n"
  "//\n"
  "//\n"
  "//register DMA_TCD_ATTR_SMOD(n)  (((n) & 0x1F) << 11)\n"
  "//register DMA_TCD_ATTR_SSIZE(n)  (((n) & 0x7) << 8)\n"
  "//register DMA_TCD_ATTR_DMOD(n)  (((n) & 0x1F) << 3)\n"
  "//register DMA_TCD_ATTR_DSIZE(n)  (((n) & 0x7) << 0)\n"
  "//register DMA_TCD_ATTR_SIZE_8BIT  0\n"
  "//register DMA_TCD_ATTR_SIZE_16BIT  1\n"
  "//register DMA_TCD_ATTR_SIZE_32BIT  2\n"
  "//register DMA_TCD_ATTR_SIZE_16BYTE 4\n"
  "//register DMA_TCD_ATTR_SIZE_32BYTE 5\n"
  "//register DMA_TCD_CSR_BWC(n)  (((n) & 0x3) << 14)\n"
  "//register DMA_TCD_CSR_MAJORLINKCH(n) (((n) & 0x3) << 8)\n"
  "//register DMA_TCD_CSR_DONE  0x0080\n"
  "//register DMA_TCD_CSR_ACTIVE  0x0040\n"
  "//register DMA_TCD_CSR_MAJORELINK  0x0020\n"
  "//register DMA_TCD_CSR_ESG   0x0010\n"
  "//register DMA_TCD_CSR_DREQ  0x0008\n"
  "//register DMA_TCD_CSR_INTHALF  0x0004\n"
  "//register DMA_TCD_CSR_INTMAJOR  0x0002\n"
  "//register DMA_TCD_CSR_START  0x0001\n"
  "//register DMA_TCD_CITER_MASK      (($uint16_t)0x7FFF)    // Loop count mask\n"
  "//register DMA_TCD_CITER_ELINK      (($uint16_t)1<<15)    // Enable channel linking on minor-loop complete\n"
  "//register DMA_TCD_BITER_MASK      (($uint16_t)0x7FFF)    // Loop count mask\n"
  "//register DMA_TCD_BITER_ELINK      (($uint16_t)1<<15)    // Enable channel linking on minor-loop complete\n"
  "//register DMA_TCD_NBYTES_SMLOE      ( 1<<31)      // Source Minor Loop Offset Enable\n"
  "//register DMA_TCD_NBYTES_DMLOE      ( 1<<30)      // Destination Minor Loop Offset Enable\n"
  "//register DMA_TCD_NBYTES_MLOFFNO_NBYTES(n)    ( (n))      // NBytes transfer count when minor loop disabled\n"
  "//register DMA_TCD_NBYTES_MLOFFYES_NBYTES(n)   ( (n & 0x1F))     // NBytes transfer count when minor loop enabled\n"
  "//register DMA_TCD_NBYTES_MLOFFYES_MLOFF(n)    ( (n & 0xFFFFF)<<10)   // Offset \n"
  "//\n"
  "//register DMA_TCD0_SADDR  *(volatile const void * volatile *)0x40009000 // TCD Source Address\n"
  "//register DMA_TCD0_SOFF  *(volatile int16_t *)0x40009004  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD0_ATTR  *(volatile $uint16_t *)0x40009006 // TCD Transfer Attributes\n"
  "//register DMA_TCD0_NBYTES_MLNO  0x40009008 // TCD Minor Byte Count (Minor Loop Disabled)\n"
  "//register DMA_TCD0_NBYTES_MLOFFNO  0x40009008 // TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)\n"
  "//register DMA_TCD0_NBYTES_MLOFFYES  0x40009008 // TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)\n"
  "//register DMA_TCD0_SLAST  *(volatile int32_t *)0x4000900C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD0_DADDR  *(volatile void * volatile *)0x40009010 // TCD Destination Address\n"
  "//register DMA_TCD0_DOFF  *(volatile int16_t *)0x40009014  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD0_CITER_ELINKYES *(volatile $uint16_t *)0x40009016 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD0_CITER_ELINKNO *(volatile $uint16_t *)0x40009016 // \?\?\n"
  "//register DMA_TCD0_DLASTSGA *(volatile int32_t *)0x40009018  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD0_CSR  *(volatile $uint16_t *)0x4000901C // TCD Control and Status\n"
  "//register DMA_TCD0_BITER_ELINKYES *(volatile $uint16_t *)0x4000901E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD0_BITER_ELINKNO *(volatile $uint16_t *)0x4000901E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD1_SADDR  *(volatile const void * volatile *)0x40009020 // TCD Source Address\n"
  "//register DMA_TCD1_SOFF  *(volatile int16_t *)0x40009024  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD1_ATTR  *(volatile $uint16_t *)0x40009026 // TCD Transfer Attributes\n"
  "//register DMA_TCD1_NBYTES_MLNO  0x40009028 // TCD Minor Byte Count, Minor Loop Disabled\n"
  "//register DMA_TCD1_NBYTES_MLOFFNO  0x40009028 // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled\n"
  "//register DMA_TCD1_NBYTES_MLOFFYES  0x40009028 // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled\n"
  "//register DMA_TCD1_SLAST  *(volatile int32_t *)0x4000902C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD1_DADDR  *(volatile void * volatile *)0x40009030 // TCD Destination Address\n"
  "//register DMA_TCD1_DOFF  *(volatile int16_t *)0x40009034  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD1_CITER_ELINKYES *(volatile $uint16_t *)0x40009036 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD1_CITER_ELINKNO *(volatile $uint16_t *)0x40009036 // \?\?\n"
  "//register DMA_TCD1_DLASTSGA *(volatile int32_t *)0x40009038  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD1_CSR  *(volatile $uint16_t *)0x4000903C // TCD Control and Status\n"
  "//register DMA_TCD1_BITER_ELINKYES *(volatile $uint16_t *)0x4000903E // TCD Beginning Minor Loop Link, Major Loop Count Channel Linking Enabled\n"
  "//register DMA_TCD1_BITER_ELINKNO *(volatile $uint16_t *)0x4000903E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD2_SADDR  *(volatile const void * volatile *)0x40009040 // TCD Source Address\n"
  "//register DMA_TCD2_SOFF  *(volatile int16_t *)0x40009044  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD2_ATTR  *(volatile $uint16_t *)0x40009046 // TCD Transfer Attributes\n"
  "//register DMA_TCD2_NBYTES_MLNO  0x40009048 // TCD Minor Byte Count, Minor Loop Disabled\n"
  "//register DMA_TCD2_NBYTES_MLOFFNO  0x40009048 // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled\n"
  "//register DMA_TCD2_NBYTES_MLOFFYES  0x40009048 // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled\n"
  "//register DMA_TCD2_SLAST  *(volatile int32_t *)0x4000904C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD2_DADDR  *(volatile void * volatile *)0x40009050 // TCD Destination Address\n"
  "//register DMA_TCD2_DOFF  *(volatile int16_t *)0x40009054  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD2_CITER_ELINKYES *(volatile $uint16_t *)0x40009056 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD2_CITER_ELINKNO *(volatile $uint16_t *)0x40009056 // \?\?\n"
  "//register DMA_TCD2_DLASTSGA *(volatile int32_t *)0x40009058  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD2_CSR  *(volatile $uint16_t *)0x4000905C // TCD Control and Status\n"
  "//register DMA_TCD2_BITER_ELINKYES *(volatile $uint16_t *)0x4000905E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD2_BITER_ELINKNO *(volatile $uint16_t *)0x4000905E // TCD Beginning Minor Loop Link, Major Loop Count, Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD3_SADDR  *(volatile const void * volatile *)0x40009060 // TCD Source Address\n"
  "//register DMA_TCD3_SOFF  *(volatile int16_t *)0x40009064  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD3_ATTR  *(volatile $uint16_t *)0x40009066 // TCD Transfer Attributes\n"
  "//register DMA_TCD3_NBYTES_MLNO  0x40009068 // TCD Minor Byte Count, Minor Loop Disabled\n"
  "//register DMA_TCD3_NBYTES_MLOFFNO  0x40009068 // TCD Signed Minor Loop Offset, Minor Loop Enabled and Offset Disabled\n"
  "//register DMA_TCD3_NBYTES_MLOFFYES  0x40009068 // TCD Signed Minor Loop Offset, Minor Loop and Offset Enabled\n"
  "//register DMA_TCD3_SLAST  *(volatile int32_t *)0x4000906C  // TCD Last Source Address Adjustment\n"
  "//register DMA_TCD3_DADDR  *(volatile void * volatile *)0x40009070 // TCD Destination Address\n"
  "//register DMA_TCD3_DOFF  *(volatile int16_t *)0x40009074  // TCD Signed Destination Address Offset\n"
  "//register DMA_TCD3_CITER_ELINKYES *(volatile $uint16_t *)0x40009076 // TCD Current Minor Loop Link, Major Loop Count, Channel Linking Enabled\n"
  "//register DMA_TCD3_CITER_ELINKNO *(volatile $uint16_t *)0x40009076 // \?\?\n"
  "//register DMA_TCD3_DLASTSGA *(volatile int32_t *)0x40009078  // TCD Last Destination Address Adjustment/Scatter Gather Address\n"
  "//register DMA_TCD3_CSR  *(volatile $uint16_t *)0x4000907C // TCD Control and Status\n"
  "//register DMA_TCD3_BITER_ELINKYES *(volatile $uint16_t *)0x4000907E // TCD Beginning Minor Loop Link, Major Loop Count ,Channel Linking Enabled\n"
  "//register DMA_TCD3_BITER_ELINKNO *(volatile $uint16_t *)0x4000907E // TCD Beginning Minor Loop Link, Major Loop Count ,Channel Linking Disabled\n"
  "//\n"
  "//register DMA_TCD4_SADDR  *(volatile const void * volatile *)0x40009080 // TCD Source Addr\n"
  "//register DMA_TCD4_SOFF  *(volatile int16_t *)0x40009084  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD4_ATTR  *(volatile $uint16_t *)0x40009086 // TCD Transfer Attributes\n"
  "//register DMA_TCD4_NBYTES_MLNO  0x40009088 // TCD Minor Byte Count\n"
  "//register DMA_TCD4_NBYTES_MLOFFNO  0x40009088 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD4_NBYTES_MLOFFYES  0x40009088 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD4_SLAST  *(volatile int32_t *)0x4000908C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD4_DADDR  *(volatile void * volatile *)0x40009090 // TCD Destination Address\n"
  "//register DMA_TCD4_DOFF  *(volatile int16_t *)0x40009094  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD4_CITER_ELINKYES *(volatile $uint16_t *)0x40009096 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD4_CITER_ELINKNO *(volatile $uint16_t *)0x40009096 // \?\?\n"
  "//register DMA_TCD4_DLASTSGA *(volatile int32_t *)0x40009098  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD4_CSR  *(volatile $uint16_t *)0x4000909C // TCD Control and Status\n"
  "//register DMA_TCD4_BITER_ELINKYES *(volatile $uint16_t *)0x4000909E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD4_BITER_ELINKNO *(volatile $uint16_t *)0x4000909E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD5_SADDR  *(volatile const void * volatile *)0x400090A0 // TCD Source Addr\n"
  "//register DMA_TCD5_SOFF  *(volatile int16_t *)0x400090A4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD5_ATTR  *(volatile $uint16_t *)0x400090A6 // TCD Transfer Attributes\n"
  "//register DMA_TCD5_NBYTES_MLNO  0x400090A8 // TCD Minor Byte Count\n"
  "//register DMA_TCD5_NBYTES_MLOFFNO  0x400090A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD5_NBYTES_MLOFFYES  0x400090A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD5_SLAST  *(volatile int32_t *)0x400090AC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD5_DADDR  *(volatile void * volatile *)0x400090B0 // TCD Destination Address\n"
  "//register DMA_TCD5_DOFF  *(volatile int16_t *)0x400090B4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD5_CITER_ELINKYES *(volatile $uint16_t *)0x400090B6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD5_CITER_ELINKNO *(volatile $uint16_t *)0x400090B6 // \?\?\n"
  "//register DMA_TCD5_DLASTSGA *(volatile int32_t *)0x400090B8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD5_CSR  *(volatile $uint16_t *)0x400090BC // TCD Control and Status\n"
  "//register DMA_TCD5_BITER_ELINKYES *(volatile $uint16_t *)0x400090BE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD5_BITER_ELINKNO *(volatile $uint16_t *)0x400090BE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD6_SADDR  *(volatile const void * volatile *)0x400090C0 // TCD Source Addr\n"
  "//register DMA_TCD6_SOFF  *(volatile int16_t *)0x400090C4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD6_ATTR  *(volatile $uint16_t *)0x400090C6 // TCD Transfer Attributes\n"
  "//register DMA_TCD6_NBYTES_MLNO  0x400090C8 // TCD Minor Byte Count\n"
  "//register DMA_TCD6_NBYTES_MLOFFNO  0x400090C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD6_NBYTES_MLOFFYES  0x400090C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD6_SLAST  *(volatile int32_t *)0x400090CC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD6_DADDR  *(volatile void * volatile *)0x400090D0 // TCD Destination Address\n"
  "//register DMA_TCD6_DOFF  *(volatile int16_t *)0x400090D4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD6_CITER_ELINKYES *(volatile $uint16_t *)0x400090D6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD6_CITER_ELINKNO *(volatile $uint16_t *)0x400090D6 // \?\?\n"
  "//register DMA_TCD6_DLASTSGA *(volatile int32_t *)0x400090D8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD6_CSR  *(volatile $uint16_t *)0x400090DC // TCD Control and Status\n"
  "//register DMA_TCD6_BITER_ELINKYES *(volatile $uint16_t *)0x400090DE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD6_BITER_ELINKNO *(volatile $uint16_t *)0x400090DE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD7_SADDR  *(volatile const void * volatile *)0x400090E0 // TCD Source Addr\n"
  "//register DMA_TCD7_SOFF  *(volatile int16_t *)0x400090E4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD7_ATTR  *(volatile $uint16_t *)0x400090E6 // TCD Transfer Attributes\n"
  "//register DMA_TCD7_NBYTES_MLNO  0x400090E8 // TCD Minor Byte Count\n"
  "//register DMA_TCD7_NBYTES_MLOFFNO  0x400090E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD7_NBYTES_MLOFFYES  0x400090E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD7_SLAST  *(volatile int32_t *)0x400090EC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD7_DADDR  *(volatile void * volatile *)0x400090F0 // TCD Destination Address\n"
  "//register DMA_TCD7_DOFF  *(volatile int16_t *)0x400090F4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD7_CITER_ELINKYES *(volatile $uint16_t *)0x400090F6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD7_CITER_ELINKNO *(volatile $uint16_t *)0x400090F6 // \?\?\n"
  "//register DMA_TCD7_DLASTSGA *(volatile int32_t *)0x400090F8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD7_CSR  *(volatile $uint16_t *)0x400090FC // TCD Control and Status\n"
  "//register DMA_TCD7_BITER_ELINKYES *(volatile $uint16_t *)0x400090FE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD7_BITER_ELINKNO *(volatile $uint16_t *)0x400090FE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD8_SADDR  *(volatile const void * volatile *)0x40009100 // TCD Source Addr\n"
  "//register DMA_TCD8_SOFF  *(volatile int16_t *)0x40009104  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD8_ATTR  *(volatile $uint16_t *)0x40009106 // TCD Transfer Attributes\n"
  "//register DMA_TCD8_NBYTES_MLNO  0x40009108 // TCD Minor Byte Count\n"
  "//register DMA_TCD8_NBYTES_MLOFFNO  0x40009108 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD8_NBYTES_MLOFFYES  0x40009108 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD8_SLAST  *(volatile int32_t *)0x4000910C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD8_DADDR  *(volatile void * volatile *)0x40009110 // TCD Destination Address\n"
  "//register DMA_TCD8_DOFF  *(volatile int16_t *)0x40009114  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD8_CITER_ELINKYES *(volatile $uint16_t *)0x40009116 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD8_CITER_ELINKNO *(volatile $uint16_t *)0x40009116 // \?\?\n"
  "//register DMA_TCD8_DLASTSGA *(volatile int32_t *)0x40009118  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD8_CSR  *(volatile $uint16_t *)0x4000911C // TCD Control and Status\n"
  "//register DMA_TCD8_BITER_ELINKYES *(volatile $uint16_t *)0x4000911E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD8_BITER_ELINKNO *(volatile $uint16_t *)0x4000911E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD9_SADDR  *(volatile const void * volatile *)0x40009120 // TCD Source Addr\n"
  "//register DMA_TCD9_SOFF  *(volatile int16_t *)0x40009124  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD9_ATTR  *(volatile $uint16_t *)0x40009126 // TCD Transfer Attributes\n"
  "//register DMA_TCD9_NBYTES_MLNO  0x40009128 // TCD Minor Byte Count\n"
  "//register DMA_TCD9_NBYTES_MLOFFNO  0x40009128 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD9_NBYTES_MLOFFYES  0x40009128 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD9_SLAST  *(volatile int32_t *)0x4000912C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD9_DADDR  *(volatile void * volatile *)0x40009130 // TCD Destination Address\n"
  "//register DMA_TCD9_DOFF  *(volatile int16_t *)0x40009134  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD9_CITER_ELINKYES *(volatile $uint16_t *)0x40009136 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD9_CITER_ELINKNO *(volatile $uint16_t *)0x40009136 // \?\?\n"
  "//register DMA_TCD9_DLASTSGA *(volatile int32_t *)0x40009138  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD9_CSR  *(volatile $uint16_t *)0x4000913C // TCD Control and Status\n"
  "//register DMA_TCD9_BITER_ELINKYES *(volatile $uint16_t *)0x4000913E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD9_BITER_ELINKNO *(volatile $uint16_t *)0x4000913E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD10_SADDR  *(volatile const void * volatile *)0x40009140 // TCD Source Addr\n"
  "//register DMA_TCD10_SOFF  *(volatile int16_t *)0x40009144  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD10_ATTR  *(volatile $uint16_t *)0x40009146 // TCD Transfer Attributes\n"
  "//register DMA_TCD10_NBYTES_MLNO  0x40009148 // TCD Minor Byte Count\n"
  "//register DMA_TCD10_NBYTES_MLOFFNO  0x40009148 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD10_NBYTES_MLOFFYES  0x40009148 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD10_SLAST  *(volatile int32_t *)0x4000914C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD10_DADDR  *(volatile void * volatile *)0x40009150 // TCD Destination Address\n"
  "//register DMA_TCD10_DOFF  *(volatile int16_t *)0x40009154  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD10_CITER_ELINKYES *(volatile $uint16_t *)0x40009156 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD10_CITER_ELINKNO *(volatile $uint16_t *)0x40009156 // \?\?\n"
  "//register DMA_TCD10_DLASTSGA *(volatile int32_t *)0x40009158  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD10_CSR  *(volatile $uint16_t *)0x4000915C // TCD Control and Status\n"
  "//register DMA_TCD10_BITER_ELINKYES *(volatile $uint16_t *)0x4000915E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD10_BITER_ELINKNO *(volatile $uint16_t *)0x4000915E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD11_SADDR  *(volatile const void * volatile *)0x40009160 // TCD Source Addr\n"
  "//register DMA_TCD11_SOFF  *(volatile int16_t *)0x40009164  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD11_ATTR  *(volatile $uint16_t *)0x40009166 // TCD Transfer Attributes\n"
  "//register DMA_TCD11_NBYTES_MLNO  0x40009168 // TCD Minor Byte Count\n"
  "//register DMA_TCD11_NBYTES_MLOFFNO  0x40009168 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD11_NBYTES_MLOFFYES  0x40009168 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD11_SLAST  *(volatile int32_t *)0x4000916C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD11_DADDR  *(volatile void * volatile *)0x40009170 // TCD Destination Address\n"
  "//register DMA_TCD11_DOFF  *(volatile int16_t *)0x40009174  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD11_CITER_ELINKYES *(volatile $uint16_t *)0x40009176 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD11_CITER_ELINKNO *(volatile $uint16_t *)0x40009176 // \?\?\n"
  "//register DMA_TCD11_DLASTSGA *(volatile int32_t *)0x40009178  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD11_CSR  *(volatile $uint16_t *)0x4000917C // TCD Control and Status\n"
  "//register DMA_TCD11_BITER_ELINKYES *(volatile $uint16_t *)0x4000917E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD11_BITER_ELINKNO *(volatile $uint16_t *)0x4000917E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD12_SADDR  *(volatile const void * volatile *)0x40009180 // TCD Source Addr\n"
  "//register DMA_TCD12_SOFF  *(volatile int16_t *)0x40009184  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD12_ATTR  *(volatile $uint16_t *)0x40009186 // TCD Transfer Attributes\n"
  "//register DMA_TCD12_NBYTES_MLNO  0x40009188 // TCD Minor Byte Count\n"
  "//register DMA_TCD12_NBYTES_MLOFFNO  0x40009188 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD12_NBYTES_MLOFFYES  0x40009188 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD12_SLAST  *(volatile int32_t *)0x4000918C  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD12_DADDR  *(volatile void * volatile *)0x40009190 // TCD Destination Address\n"
  "//register DMA_TCD12_DOFF  *(volatile int16_t *)0x40009194  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD12_CITER_ELINKYES *(volatile $uint16_t *)0x40009196 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD12_CITER_ELINKNO *(volatile $uint16_t *)0x40009196 // \?\?\n"
  "//register DMA_TCD12_DLASTSGA *(volatile int32_t *)0x40009198  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD12_CSR  *(volatile $uint16_t *)0x4000919C // TCD Control and Status\n"
  "//register DMA_TCD12_BITER_ELINKYES *(volatile $uint16_t *)0x4000919E // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD12_BITER_ELINKNO *(volatile $uint16_t *)0x4000919E // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD13_SADDR  *(volatile const void * volatile *)0x400091A0 // TCD Source Addr\n"
  "//register DMA_TCD13_SOFF  *(volatile int16_t *)0x400091A4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD13_ATTR  *(volatile $uint16_t *)0x400091A6 // TCD Transfer Attributes\n"
  "//register DMA_TCD13_NBYTES_MLNO  0x400091A8 // TCD Minor Byte Count\n"
  "//register DMA_TCD13_NBYTES_MLOFFNO  0x400091A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD13_NBYTES_MLOFFYES  0x400091A8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD13_SLAST  *(volatile int32_t *)0x400091AC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD13_DADDR  *(volatile void * volatile *)0x400091B0 // TCD Destination Address\n"
  "//register DMA_TCD13_DOFF  *(volatile int16_t *)0x400091B4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD13_CITER_ELINKYES *(volatile $uint16_t *)0x400091B6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD13_CITER_ELINKNO *(volatile $uint16_t *)0x400091B6 // \?\?\n"
  "//register DMA_TCD13_DLASTSGA *(volatile int32_t *)0x400091B8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD13_CSR  *(volatile $uint16_t *)0x400091BC // TCD Control and Status\n"
  "//register DMA_TCD13_BITER_ELINKYES *(volatile $uint16_t *)0x400091BE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD13_BITER_ELINKNO *(volatile $uint16_t *)0x400091BE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD14_SADDR  *(volatile const void * volatile *)0x400091C0 // TCD Source Addr\n"
  "//register DMA_TCD14_SOFF  *(volatile int16_t *)0x400091C4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD14_ATTR  *(volatile $uint16_t *)0x400091C6 // TCD Transfer Attributes\n"
  "//register DMA_TCD14_NBYTES_MLNO  0x400091C8 // TCD Minor Byte Count\n"
  "//register DMA_TCD14_NBYTES_MLOFFNO  0x400091C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD14_NBYTES_MLOFFYES  0x400091C8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD14_SLAST  *(volatile int32_t *)0x400091CC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD14_DADDR  *(volatile void * volatile *)0x400091D0 // TCD Destination Address\n"
  "//register DMA_TCD14_DOFF  *(volatile int16_t *)0x400091D4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD14_CITER_ELINKYES *(volatile $uint16_t *)0x400091D6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD14_CITER_ELINKNO *(volatile $uint16_t *)0x400091D6 // \?\?\n"
  "//register DMA_TCD14_DLASTSGA *(volatile int32_t *)0x400091D8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD14_CSR  *(volatile $uint16_t *)0x400091DC // TCD Control and Status\n"
  "//register DMA_TCD14_BITER_ELINKYES *(volatile $uint16_t *)0x400091DE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD14_BITER_ELINKNO *(volatile $uint16_t *)0x400091DE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//register DMA_TCD15_SADDR  *(volatile const void * volatile *)0x400091E0 // TCD Source Addr\n"
  "//register DMA_TCD15_SOFF  *(volatile int16_t *)0x400091E4  // TCD Signed Source Address Offset\n"
  "//register DMA_TCD15_ATTR  *(volatile $uint16_t *)0x400091E6 // TCD Transfer Attributes\n"
  "//register DMA_TCD15_NBYTES_MLNO  0x400091E8 // TCD Minor Byte Count\n"
  "//register DMA_TCD15_NBYTES_MLOFFNO  0x400091E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD15_NBYTES_MLOFFYES  0x400091E8 // TCD Signed Minor Loop Offset\n"
  "//register DMA_TCD15_SLAST  *(volatile int32_t *)0x400091EC  // TCD Last Source Addr Adj.\n"
  "//register DMA_TCD15_DADDR  *(volatile void * volatile *)0x400091F0 // TCD Destination Address\n"
  "//register DMA_TCD15_DOFF  *(volatile int16_t *)0x400091F4  // TCD Signed Dest Address Offset\n"
  "//register DMA_TCD15_CITER_ELINKYES *(volatile $uint16_t *)0x400091F6 // TCD Current Minor Loop Link\n"
  "//register DMA_TCD15_CITER_ELINKNO *(volatile $uint16_t *)0x400091F6 // \?\?\n"
  "//register DMA_TCD15_DLASTSGA *(volatile int32_t *)0x400091F8  // TCD Last Destination Addr Adj\n"
  "//register DMA_TCD15_CSR  *(volatile $uint16_t *)0x400091FC // TCD Control and Status\n"
  "//register DMA_TCD15_BITER_ELINKYES *(volatile $uint16_t *)0x400091FE // TCD Beginning Minor Loop Link\n"
  "//register DMA_TCD15_BITER_ELINKNO *(volatile $uint16_t *)0x400091FE // TCD Beginning Minor Loop Link\n"
  "//\n"
  "//\n"
  "//// Chapter 22: External Watchdog Monitor (EWM)\n"
  "//register EWM_CTRL  *(volatile $uint8_t  *)0x40061000 // Control Register\n"
  "//register EWM_SERV  *(volatile $uint8_t  *)0x40061001 // Service Register\n"
  "//register EWM_CMPL  *(volatile $uint8_t  *)0x40061002 // Compare Low Register\n"
  "//register EWM_CMPH  *(volatile $uint8_t  *)0x40061003 // Compare High Register\n"
  "//\n"
  "//// Chapter 23: Watchdog Timer (WDOG)\n"
  "register WDOG_STCTRLH at 0x40052000 $uint16 // Watchdog Status and Control Register High\n"
  "let WDOG_STCTRLH_DISTESTWDOG $uint16 = 0x4000  // Allows the WDOG's functional test mode to be disabled permanently.\n"
  "//register WDOG_STCTRLH_BYTESEL(n)  ($uint16_t)(((n) & 3) << 12) // selects the byte to be tested when the watchdog is in the byte test mode.\n"
  "let WDOG_STCTRLH_TESTSEL  $uint16 = 0x0800\n"
  "let WDOG_STCTRLH_TESTWDOG $uint16 = 0x0400\n"
  "let WDOG_STCTRLH_WAITEN $uint16 = 0x0080\n"
  "let WDOG_STCTRLH_STOPEN $uint16 = 0x0040\n"
  "let WDOG_STCTRLH_DBGEN  $uint16 = 0x0020\n"
  "let WDOG_STCTRLH_ALLOWUPDATE $uint16 = 0x0010\n"
  "let WDOG_STCTRLH_WINEN $uint16 = 0x0008\n"
  "let WDOG_STCTRLH_IRQRSTEN $uint16 = 0x0004\n"
  "let WDOG_STCTRLH_CLKSRC $uint16 = 0x0002\n"
  "let WDOG_STCTRLH_WDOGEN $uint16 = 0x0001\n"
  "register WDOG_STCTRLL  at 0x40052002 $uint16 // Watchdog Status and Control Register Low\n"
  "register WDOG_TOVALH   at 0x40052004 $uint16 // Watchdog Time-out Value Register High\n"
  "register WDOG_TOVALL   at 0x40052006 $uint16 // Watchdog Time-out Value Register Low\n"
  "register WDOG_WINH     at 0x40052008 $uint16 // Watchdog Window Register High\n"
  "register WDOG_WINL     at 0x4005200A $uint16 // Watchdog Window Register Low\n"
  "register WDOG_REFRESH  at 0x4005200C $uint16 // Watchdog Refresh register\n"
  "register WDOG_UNLOCK   at 0x4005200E $uint16 // Watchdog Unlock register\n"
  "let WDOG_UNLOCK_SEQ1 $uint16   = 0xC520\n"
  "let WDOG_UNLOCK_SEQ2 $uint16   = 0xD928\n"
  "register WDOG_TMROUTH  at 0x40052010 $uint16 // Watchdog Timer Output Register High\n"
  "register WDOG_TMROUTL  at 0x40052012 $uint16 // Watchdog Timer Output Register Low\n"
  "register WDOG_RSTCNT   at 0x40052014 $uint16 // Watchdog Reset Count register\n"
  "register WDOG_PRESC    at 0x40052016 $uint16 // Watchdog Prescaler register\n"
  "\n"
  "// Chapter 24: Multipurpose Clock Generator (MCG)\n"
  "register MCG_C1 at 0x40064000 $uint8 { // MCG Control 1 Register\n"
  "  CLKS [2], // Clock Source Select, Selects the clock source for MCGOUTCLK\n"
  "  FRDIV [3], // FLL External Reference Divider, Selects the amount to divide down the external reference clock for the FLL\n"
  "  IREFS, // Internal Reference Select, Selects the reference clock source for the FLL\n"
  "  IRCLKEN, // Internal Reference Clock Enable, Enables the internal reference clock for use as MCGIRCLK\n"
  "  IREFSTEN // Internal Reference Stop Enable, Controls whether or not the internal reference clock remains enabled when the MCG enters Stop mode\n"
  "}\n"
  "\n"
  "register MCG_C2 at 0x4006_4001 $uint8 { // MCG Control 2 Register\n"
  "  LOCRE0, // Loss of Clock Reset Enable, Determines whether an interrupt \n"
  "          // or a reset request is made following a loss of OSC0\n"
  "  1,\n"
  "  RANGE0[2], // Frequency Range Select, Selects the frequency range\n"
  "             // for the crystal oscillator\n"
  "  HGO0, // High Gain Oscillator Select, Controls the crystal oscillator mode of operation  \n"
  "  EREFS, // External Reference Select, selects the source for the external reference clock\n"
  "  LP, // Low Power Select, Controls whether the FLL or PLL is disabled in BLPI and BLPE modes.\n"
  "  IRCS // Internal Reference Clock Select, Selects between the fast or slow internal reference clock source.\n"
  "}\n"
  "\n"
  "register MCG_C3 at 0x4006_4002 $uint8 // MCG Control 3 Register\n"
  "//register MCG_C3_SCTRIM(n)  ($uint8_t)(n)   // Slow Internal Reference Clock Trim Setting\n"
  "register MCG_C4 at 0x40064003 $uint8 // MCG Control 4 Register\n"
  "let MCG_C4_SCFTRIM $uint8 = 0x01   // Slow Internal Reference Clock Fine Trim\n"
  "//register MCG_C4_FCTRIM(n)  ($uint8_t)(((n) & 0x0F) << 1) // Fast Internal Reference Clock Trim Setting\n"
  "//register MCG_C4_DRST_DRS(n)  ($uint8_t)(((n) & 0x03) << 5) // DCO Range Select\n"
  "let MCG_C4_DMX32 $uint8 = 0x80   // DCO Maximum Frequency with 32.768 kHz Reference, controls whether the DCO frequency range is narrowed\n"
  "\n"
  "\n"
  "register MCG_C5 at 0x4006_4004 $uint8 { // MCG Control 5 Register\n"
  " 1,\n"
  " PLLCLKEN0, // PLL Clock Enable\n"
  " PLLSTEN0,  // PLL Stop Enable\n"
  " PRDIV0 [5] // PLL External Reference Divider\n"
  "}\n"
  "\n"
  "register MCG_C6 at 0x4006_4005 $uint8 { // MCG Control 6 Register\n"
  " LOLIE0, // Loss of Lock Interrrupt Enable\n"
  " PLLS, // PLL Select, Controls whether the PLL or FLL output is selected as the MCG source when CLKS[1:0]=00\n"
  " CME0,   // Clock Monitor Enable\n"
  " VDIV0[5] // VCO 0 Divider\n"
  "}\n"
  "\n"
  "register MCG_S @ro at 0x40064006 $uint8 { // MCG Status Register\n"
  " LOLS0, // Loss of Lock Status\n"
  " LOCK0, // Lock Status, 0=PLL Unlocked, 1=PLL Locked\n"
  " PLLST, // PLL Select Status\n"
  " IREFST, // Internal Reference Status\n"
  " CLKST [2], // Clock Mode Status, 0=FLL is selected, 1= Internal ref, 2=External ref, 3=PLL\n"
  " OSCINIT0, // OSC Initialization, resets to 0, is set to 1 after the initialization cycles of the crystal oscillator\n"
  " IRCST   // Internal Reference Clock Status\n"
  "}\n"
  "\n"
  "register MCG_SC at 0x40064008 $uint8 // MCG Status and Control Register\n"
  "let MCG_SC_LOCS0 $uint8 = 0x01   // OSC0 Loss of Clock Status\n"
  "//register MCG_SC_FCRDIV(n)  ($uint8_t)(((n) & 0x07) << 1) // Fast Clock Internal Reference Divider\n"
  "let MCG_SC_FLTPRSRV $uint8 = 0x10   // FLL Filter Preserve Enable\n"
  "let MCG_SC_ATMF $uint8 = 0x20   // Automatic Trim Machine Fail Flag\n"
  "let MCG_SC_ATMS $uint8 = 0x40   // Automatic Trim Machine Select\n"
  "let MCG_SC_ATME $uint8 = 0x80   // Automatic Trim Machine Enable\n"
  "\n"
  "register MCG_ATCVH at 0x4006400A $uint8 // MCG Auto Trim Compare Value High Register\n"
  "register MCG_ATCVL at 0x4006400B $uint8 // MCG Auto Trim Compare Value Low Register\n"
  "register MCG_C7    at 0x4006400C $uint8 // MCG Control 7 Register\n"
  "register MCG_C8    at 0x4006400D $uint8 // MCG Control 8 Register\n"
  "//\n"
  "//// Chapter 25: Oscillator (OSC)\n"
  "register OSC_CR at 0x40065000 $uint8 {// OSC Control Register\n"
  "  ERCLKEN, // External Reference Enable, Enables external reference clock (OSCERCLK)\n"
  "  1,\n"
  "  EREFSTEN, // External Reference Stop Enable, Controls whether or not \n"
  "            // the external reference clock (OSCERCLK) remains enabled when\n"
  "            // MCU enters Stop mode.\n"
  "  1,\n"
  "  SC2P, // Oscillator 2 pF Capacitor Load Configure\n"
  "  SC4P, // Oscillator 4 pF Capacitor Load Configure\n"
  "  SC8P, // Oscillator 8 pF Capacitor Load Configure\n"
  "  SC16P // Oscillator 16 pF Capacitor Load Configure\n"
  "}\n"
  "let OSC_SC16P  $uint8 = 0x01   \n"
  "\n"
  "//// Chapter 27: Flash Memory Controller (FMC)\n"
  "register FMC_PFAPR     at 0x4001F000 $uint32 // Flash Access Protection\n"
  "register FMC_PFB0CR    at 0x4001F004 $uint32 // Flash Control\n"
  "register FMC_TAGVDW0S0 at 0x4001F100 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW0S1 at 0x4001F104 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW1S0 at 0x4001F108 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW1S1 at 0x4001F10C $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW2S0 at 0x4001F110 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW2S1 at 0x4001F114 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW3S0 at 0x4001F118 $uint32 // Cache Tag Storage\n"
  "register FMC_TAGVDW3S1 at 0x4001F11C $uint32 // Cache Tag Storage\n"
  "register FMC_DATAW0S0  at 0x4001F200 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW0S1  at 0x4001F204 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW1S0  at 0x4001F208 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW1S1  at 0x4001F20C $uint32 // Cache Data Storage\n"
  "register FMC_DATAW2S0  at 0x4001F210 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW2S1  at 0x4001F214 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW3S0  at 0x4001F218 $uint32 // Cache Data Storage\n"
  "register FMC_DATAW3S1  at 0x4001F21C $uint32 // Cache Data Storage\n"
  "//\n"
  "//// Chapter 28: Flash Memory Module (FTFL)\n"
  "//register FTFL_FST *(volatile $uint8_t  *)0x40020000      // Flash Status Register\n"
  "//register FTFL_FSTAT_CCIF   ($uint8_t)0x80   // Command Complete Interrupt Flag\n"
  "//register FTFL_FSTAT_RDCOLERR  ($uint8_t)0x40   // Flash Read Collision Error Flag\n"
  "//register FTFL_FSTAT_ACCERR  ($uint8_t)0x20   // Flash Access Error Flag\n"
  "//register FTFL_FSTAT_FPVIOL  ($uint8_t)0x10   // Flash Protection Violation Flag\n"
  "//register FTFL_FSTAT_MGSTAT0  ($uint8_t)0x01   // Memory Controller Command Completion Status Flag\n"
  "//register FTFL_FCNFG  *(volatile $uint8_t  *)0x40020001      // Flash Configuration Register\n"
  "//register FTFL_FCNFG_CCIE   ($uint8_t)0x80   // Command Complete Interrupt Enable\n"
  "//register FTFL_FCNFG_RDCOLLIE  ($uint8_t)0x40   // Read Collision Error Interrupt Enable\n"
  "//register FTFL_FCNFG_ERSAREQ  ($uint8_t)0x20   // Erase All Request\n"
  "//register FTFL_FCNFG_ERSSUSP  ($uint8_t)0x10   // Erase Suspend\n"
  "//register FTFL_FCNFG_PFLSH  ($uint8_t)0x04   // Flash memory configuration\n"
  "//register FTFL_FCNFG_RAMRDY  ($uint8_t)0x02   // RAM Ready\n"
  "//register FTFL_FCNFG_EEERDY  ($uint8_t)0x01   // EEPROM Ready\n"
  "//register FTFL_FSEC  *(const    $uint8_t  *)0x40020002      // Flash Security Register\n"
  "//register FTFL_FOPT  *(const    $uint8_t  *)0x40020003      // Flash Option Register\n"
  "//register FTFL_FCCOB3  *(volatile $uint8_t  *)0x40020004      // Flash Common Command Object Registers\n"
  "//register FTFL_FCCOB2  *(volatile $uint8_t  *)0x40020005\n"
  "//register FTFL_FCCOB1  *(volatile $uint8_t  *)0x40020006\n"
  "//register FTFL_FCCOB0  *(volatile $uint8_t  *)0x40020007\n"
  "//register FTFL_FCCOB7  *(volatile $uint8_t  *)0x40020008\n"
  "//register FTFL_FCCOB6  *(volatile $uint8_t  *)0x40020009\n"
  "//register FTFL_FCCOB5  *(volatile $uint8_t  *)0x4002000A\n"
  "//register FTFL_FCCOB4  *(volatile $uint8_t  *)0x4002000B\n"
  "//register FTFL_FCCOBB  *(volatile $uint8_t  *)0x4002000C\n"
  "//register FTFL_FCCOBA  *(volatile $uint8_t  *)0x4002000D\n"
  "//register FTFL_FCCOB9  *(volatile $uint8_t  *)0x4002000E\n"
  "//register FTFL_FCCOB8  *(volatile $uint8_t  *)0x4002000F\n"
  "//register FTFL_FPROT3  *(volatile $uint8_t  *)0x40020010      // Program Flash Protection Registers\n"
  "//register FTFL_FPROT2  *(volatile $uint8_t  *)0x40020011      // Program Flash Protection Registers\n"
  "//register FTFL_FPROT1  *(volatile $uint8_t  *)0x40020012      // Program Flash Protection Registers\n"
  "//register FTFL_FPROT0  *(volatile $uint8_t  *)0x40020013      // Program Flash Protection Registers\n"
  "//register FTFL_FEPROT  *(volatile $uint8_t  *)0x40020016      // EEPROM Protection Register\n"
  "//register FTFL_FDPROT  *(volatile $uint8_t  *)0x40020017      // Data Flash Protection Register\n"
  "\n"
  "// Chapter 30: Cyclic Redundancy Check (CRC)\n"
  "register CRC_CRC   at 0x40032000 $uint32 // CRC Data register\n"
  "register CRC_GPOLY at 0x40032004 $uint32 // CRC Polynomial register\n"
  "register CRC_CTRL  at 0x40032008 $uint32 // CRC Control register\n"
  "\n"
  "// Chapter 31: Analog-to-Digital Converter (ADC)\n"
  "register ADC0_SC1A   at 0x4003B000 $uint32 // ADC status and control registers 1\n"
  "register ADC0_SC1B   at 0x4003B004 $uint32 // ADC status and control registers 1\n"
  "let ADC_SC1_COCO  $uint32 = 0x80   // Conversion complete flag\n"
  "let ADC_SC1_AIEN  $uint32 = 0x40   // Interrupt enable\n"
  "let ADC_SC1_DIFF  $uint32 = 0x20   // Differential mode enable\n"
  "//register ADC_SC1_ADCH(n)    ((n) & 0x1F)  // Input channel select\n"
  "register ADC0_CFG1   at 0x4003B008 $uint32 // ADC configuration register 1\n"
  "let ADC_CFG1_ADLPC  $uint32 = 0x80   // Low-power configuration\n"
  "//register ADC_CFG1_ADIV(n)   (((n) & 3) << 5) // Clock divide select, 0=direct, 1=div2, 2=div4, 3=div8\n"
  "let ADC_CFG1_ADLSMP  $uint32 = 0x10   // Sample time configuration, 0=Short, 1=Long\n"
  "//register ADC_CFG1_MODE(n)   (((n) & 3) << 2) // Conversion mode, 0=8 bit, 1=12 bit, 2=10 bit, 3=16 bit\n"
  "//register ADC_CFG1_ADICLK(n)   (((n) & 3) << 0) // Input clock, 0=bus, 1=bus/2, 2=OSCERCLK, 3=async\n"
  "register ADC0_CFG2  at 0x4003B00C $uint32 // Configuration register 2\n"
  "let ADC_CFG2_MUXSEL  $uint32 = 0x10   // 0=a channels, 1=b channels\n"
  "let ADC_CFG2_ADACKEN  $uint32 = 0x08   // async clock enable\n"
  "let ADC_CFG2_ADHSC   $uint32 = 0x04   // High speed configuration\n"
  "//register ADC_CFG2_ADLSTS(n)   (((n) & 3) << 0) // Sample time, 0=24 cycles, 1=12 cycles, 2=6 cycles, 3=2 cycles\n"
  "register ADC0_RA    at 0x4003B010 $uint32 // ADC data result register\n"
  "register ADC0_RB    at 0x4003B014 $uint32 // ADC data result register\n"
  "register ADC0_CV1   at 0x4003B018 $uint32 // Compare value registers\n"
  "register ADC0_CV2   at 0x4003B01C $uint32 // Compare value registers\n"
  "register ADC0_SC2   at 0x4003B020 $uint32 // Status and control register 2\n"
  "let ADC_SC2_ADACT  $uint32 = 0x80   // Conversion active\n"
  "let ADC_SC2_ADTRG  $uint32 = 0x40   // Conversion trigger select, 0=software, 1=hardware\n"
  "let ADC_SC2_ACFE   $uint32 = 0x20   // Compare function enable\n"
  "let ADC_SC2_ACFGT  $uint32 = 0x10   // Compare function greater than enable\n"
  "let ADC_SC2_ACREN  $uint32 = 0x08   // Compare function range enable\n"
  "let ADC_SC2_DMAEN  $uint32= 0x04   // DMA enable\n"
  "//register ADC_SC2_REFSEL(n)   (((n) & 3) << 0) // Voltage reference, 0=vcc/external, 1=1.2 volts\n"
  "register ADC0_SC3   at 0x4003B024 $uint32 // Status and control register 3\n"
  "let ADC_SC3_CAL  $uint32 = 0x80   // Calibration, 1=begin, stays set while cal in progress\n"
  "let ADC_SC3_CALF  $uint32= 0x40   // Calibration failed flag\n"
  "let ADC_SC3_ADCO  $uint32= 0x08   // Continuous conversion enable\n"
  "let ADC_SC3_AVGE  $uint32= 0x04   // Hardware average enable\n"
  "//register ADC_SC3_AVGS(n)    (((n) & 3) << 0) // avg select, 0=4 samples, 1=8 samples, 2=16 samples, 3=32 samples\n"
  "register ADC0_OFS   at 0x4003B028 $uint32 // ADC offset correction register\n"
  "register ADC0_PG    at 0x4003B02C $uint32 // ADC plus-side gain register\n"
  "register ADC0_MG    at 0x4003B030 $uint32 // ADC minus-side gain register\n"
  "register ADC0_CLPD  at 0x4003B034 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLPS  at 0x4003B038 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP4  at 0x4003B03C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP3  at 0x4003B040 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP2  at 0x4003B044 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP1  at 0x4003B048 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_CLP0  at 0x4003B04C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC0_PGA   at 0x4003B050 $uint32 // ADC Programmable Gain Amplifier\n"
  "let ADC0_PGA_PGAEN  $uint32 = 0x00800000  // Enable\n"
  "let ADC0_PGA_PGALPB  $uint32 = 0x00100000  // Low-Power Mode Control, 0=low power, 1=normal\n"
  "//register ADC0_PGA_PGAG(n)   (((n) & 15) << 16) // Gain, 0=1X, 1=2X, 2=4X, 3=8X, 4=16X, 5=32X, 6=64X\n"
  "register ADC0_CLMD   at 0x4003B054 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLMS   at 0x4003B058 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM4   at 0x4003B05C $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM3   at 0x4003B060 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM2   at 0x4003B064 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM1   at 0x4003B068 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC0_CLM0   at 0x4003B06C $uint32 // ADC minus-side general calibration value register\n"
  "\n"
  "register ADC1_SC1A   at 0x400BB000 $uint32 // ADC status and control registers 1\n"
  "register ADC1_SC1B   at 0x400BB004 $uint32 // ADC status and control registers 1\n"
  "register ADC1_CFG1   at 0x400BB008 $uint32 // ADC configuration register 1\n"
  "register ADC1_CFG2   at 0x400BB00C $uint32 // Configuration register 2\n"
  "register ADC1_RA     at 0x400BB010 $uint32 // ADC data result register\n"
  "register ADC1_RB     at 0x400BB014 $uint32 // ADC data result register\n"
  "register ADC1_CV1    at 0x400BB018 $uint32 // Compare value registers\n"
  "register ADC1_CV2    at 0x400BB01C $uint32 // Compare value registers\n"
  "register ADC1_SC2    at 0x400BB020 $uint32 // Status and control register 2\n"
  "register ADC1_SC3    at 0x400BB024 $uint32 // Status and control register 3\n"
  "register ADC1_OFS    at 0x400BB028 $uint32 // ADC offset correction register\n"
  "register ADC1_PG     at 0x400BB02C $uint32 // ADC plus-side gain register\n"
  "register ADC1_MG     at 0x400BB030 $uint32 // ADC minus-side gain register\n"
  "register ADC1_CLPD   at 0x400BB034 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLPS   at 0x400BB038 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP4   at 0x400BB03C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP3   at 0x400BB040 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP2   at 0x400BB044 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP1   at 0x400BB048 $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_CLP0   at 0x400BB04C $uint32 // ADC plus-side general calibration value register\n"
  "register ADC1_PGA    at 0x400BB050 $uint32 // ADC Programmable Gain Amplifier\n"
  "register ADC1_CLMD   at 0x400BB054 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLMS   at 0x400BB058 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM4   at 0x400BB05C $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM3   at 0x400BB060 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM2   at 0x400BB064 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM1   at 0x400BB068 $uint32 // ADC minus-side general calibration value register\n"
  "register ADC1_CLM0   at 0x400BB06C $uint32 // ADC minus-side general calibration value register\n"
  "\n"
  "register DAC0_DAT0L at 0x400CC000 $uint8 // DAC Data Low Register \n"
  "register DAC0_DATH  at 0x400CC001 $uint8 // DAC Data High Register \n"
  "register DAC0_DAT1L at 0x400CC002 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT2L at 0x400CC004 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT3L at 0x400CC006 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT4L at 0x400CC008 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT5L at 0x400CC00A $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT6L at 0x400CC00C $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT7L at 0x400CC00E $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT8L at 0x400CC010 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT9L at 0x400CC012 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT10L at 0x400CC014 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT11L at 0x400CC016 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT12L at 0x400CC018 $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT13L at 0x400CC01A $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT14L at 0x400CC01C $uint8 // DAC Data Low Register \n"
  "register DAC0_DAT15L at 0x400CC01E $uint8 // DAC Data Low Register \n"
  "register DAC0_SR     at 0x400CC020 $uint8 // DAC Status Register \n"
  "register DAC0_C0     at 0x400CC021 $uint8 // DAC Control Register \n"
  "let DAC_C0_DACEN  $uint8 = 0x80    // DAC Enable\n"
  "let DAC_C0_DACRFS $uint8 = 0x40    // DAC Reference Select\n"
  "let DAC_C0_DACTRGSEL $uint8 = 0x20    // DAC Trigger Select\n"
  "let DAC_C0_DACSWTRG  $uint8 = 0x10    // DAC Software Trigger\n"
  "let DAC_C0_LPEN  $uint8 = 0x08    // DAC Low Power Control\n"
  "let DAC_C0_DACBWIEN  $uint8 = 0x04    // DAC Buffer Watermark Interrupt Enable\n"
  "let DAC_C0_DACBTIEN $uint8 = 0x02    // DAC Buffer Read Pointer Top Flag Interrupt Enable\n"
  "let DAC_C0_DACBBIEN $uint8 = 0x01    // DAC Buffer Read Pointer Bottom Flag Interrupt Enable\n"
  "\n"
  "register DAC0_C1  at 0x400CC022 $uint8 // DAC Control Register 1 \n"
  "let DAC_C1_DMAEN $uint8 = 0x80    // DMA Enable Select\n"
  "//register DAC_C1_DACBFWM(n)  (((n) & 3) << 3)  // DAC Buffer Watermark Select\n"
  "//register DAC_C1_DACBFMD(n)  (((n) & 3) << 0)  // DAC Buffer Work Mode Select\n"
  "let DAC_C1_DACBFEN $uint8 = 0x00    // DAC Buffer Enable\n"
  "//\n"
  "register DAC0_C2  at 0x400CC023 $uint8 // DAC Control Register 2 \n"
  "//register DAC_C2_DACBFRP(n)  (((n) & 15) << 4)  // DAC Buffer Read Pointer\n"
  "//register DAC_C2_DACBFUP(n)  (((n) & 15) << 0)  // DAC Buffer Upper Limit\n"
  "//\n"
  "//\n"
  "////register MCG_C2_RANGE0(n)  ($uint8_t)(((n) & 0x03) << 4) // Frequency Range Select, Selects the frequency range for the crystal oscillator\n"
  "////register MCG_C2_LOCRE0   ($uint8_t)0x80   // Loss of Clock Reset Enable, Determines whether an interrupt or a reset request is made following a lo"
  "ss of OSC0 \n"
  "//\n"
  "//// Chapter 32: Comparator (CMP)\n"
  "register CMP0_CR0   at 0x40073000 $uint8 // CMP Control Register 0\n"
  "register CMP0_CR1   at 0x40073001 $uint8 // CMP Control Register 1\n"
  "register CMP0_FPR   at 0x40073002 $uint8 // CMP Filter Period Register\n"
  "register CMP0_SCR   at 0x40073003 $uint8 // CMP Status and Control Register\n"
  "register CMP0_DACCR at 0x40073004 $uint8 // DAC Control Register\n"
  "register CMP0_MUXCR at 0x40073005 $uint8 // MUX Control Register\n"
  "register CMP1_CR0   at 0x40073008 $uint8 // CMP Control Register 0\n"
  "register CMP1_CR1   at 0x40073009 $uint8 // CMP Control Register 1\n"
  "register CMP1_FPR   at 0x4007300A $uint8 // CMP Filter Period Register\n"
  "register CMP1_SCR   at 0x4007300B $uint8 // CMP Status and Control Register\n"
  "register CMP1_DACCR at 0x4007300C $uint8 // DAC Control Register\n"
  "register CMP1_MUXCR at 0x4007300D $uint8 // MUX Control Register\n"
  "//\n"
  "//// Chapter 33: Voltage Reference (VREFV1)\n"
  "register VREF_TRM  at 0x40074000 $uint8 // VREF Trim Register\n"
  "register VREF_SC   at 0x40074001 $uint8 // VREF Status and Control Register\n"
  "\n"
  "// Chapter 34: Programmable Delay Block (PDB)\n"
  "//register PDB0_SC    0x40036000 // Status and Control Register\n"
  "//register PDB_SC_LDMOD(n)   (((n) & 3) << 18) // Load Mode Select\n"
  "//register PDB_SC_PDBEIE   0x00020000  // Sequence Error Interrupt Enable\n"
  "//register PDB_SC_SWTRIG   0x00010000  // Software Trigger\n"
  "//register PDB_SC_DMAEN   0x00008000  // DMA Enable\n"
  "//register PDB_SC_PRESCALER(n)  (((n) & 7) << 12) // Prescaler Divider Select\n"
  "//register PDB_SC_TRGSEL(n)  (((n) & 15) << 8) // Trigger Input Source Select\n"
  "//register PDB_SC_PDBEN   0x00000080  // PDB Enable\n"
  "//register PDB_SC_PDBIF   0x00000040  // PDB Interrupt Flag\n"
  "//register PDB_SC_PDBIE   0x00000020  // PDB Interrupt Enable.\n"
  "//register PDB_SC_MULT(n)   (((n) & 3) << 2) // Multiplication Factor\n"
  "//register PDB_SC_CONT   0x00000002  // Continuous Mode Enable\n"
  "//register PDB_SC_LDOK   0x00000001  // Load OK\n"
  "//register PDB0_MOD   0x40036004 // Modulus Register\n"
  "//register PDB0_CNT   0x40036008 // Counter Register\n"
  "//register PDB0_IDLY   0x4003600C // Interrupt Delay Register\n"
  "//register PDB0_CH0C1   0x40036010 // Channel n Control Register 1\n"
  "//register PDB0_CH0S   0x40036014 // Channel n Status Register\n"
  "//register PDB0_CH0DLY0   0x40036018 // Channel n Delay 0 Register\n"
  "//register PDB0_CH0DLY1   0x4003601C // Channel n Delay 1 Register\n"
  "//register PDB0_POEN   0x40036190 // Pulse-Out n Enable Register\n"
  "//register PDB0_PO0DLY   0x40036194 // Pulse-Out n Delay Register\n"
  "//register PDB0_PO1DLY   0x40036198 // Pulse-Out n Delay Register\n"
  "//\n"
  "//// Chapter 35: FlexTimer Module (FTM)\n"
  "//register FTM0_SC    0x40038000 // Status And Control\n"
  "//register FTM_SC_TOF   0x80    // Timer Overflow Flag\n"
  "//register FTM_SC_TOIE   0x40    // Timer Overflow Interrupt Enable\n"
  "//register FTM_SC_CPWMS   0x20    // Center-Aligned PWM Select\n"
  "//register FTM_SC_CLKS(n)   (((n) & 3) << 3)  // Clock Source Selection\n"
  "//register FTM_SC_PS(n)   (((n) & 7) << 0)  // Prescale Factor Selection\n"
  "//register FTM0_CNT   0x40038004 // Counter\n"
  "//register FTM0_MOD   0x40038008 // Modulo\n"
  "//register FTM0_C0SC   0x4003800C // Channel 0 Status And Control\n"
  "//register FTM0_C0V   0x40038010 // Channel 0 Value\n"
  "//register FTM0_C1SC   0x40038014 // Channel 1 Status And Control\n"
  "//register FTM0_C1V   0x40038018 // Channel 1 Value\n"
  "//register FTM0_C2SC   0x4003801C // Channel 2 Status And Control\n"
  "//register FTM0_C2V   0x40038020 // Channel 2 Value\n"
  "//register FTM0_C3SC   0x40038024 // Channel 3 Status And Control\n"
  "//register FTM0_C3V   0x40038028 // Channel 3 Value\n"
  "//register FTM0_C4SC   0x4003802C // Channel 4 Status And Control\n"
  "//register FTM0_C4V   0x40038030 // Channel 4 Value\n"
  "//register FTM0_C5SC   0x40038034 // Channel 5 Status And Control\n"
  "//register FTM0_C5V   0x40038038 // Channel 5 Value\n"
  "//register FTM0_C6SC   0x4003803C // Channel 6 Status And Control\n"
  "//register FTM0_C6V   0x40038040 // Channel 6 Value\n"
  "//register FTM0_C7SC   0x40038044 // Channel 7 Status And Control\n"
  "//register FTM0_C7V   0x40038048 // Channel 7 Value\n"
  "//register FTM0_CNTIN   0x4003804C // Counter Initial Value\n"
  "//register FTM0_STATUS   0x40038050 // Capture And Compare Status\n"
  "//register FTM0_MODE   0x40038054 // Features Mode Selection\n"
  "//register FTM_MODE_FAULTIE  0x80    // Fault Interrupt Enable\n"
  "//register FTM_MODE_FAULTM(n)  (((n) & 3) << 5)  // Fault Control Mode\n"
  "//register FTM_MODE_CAPTEST  0x10    // Capture Test Mode Enable\n"
  "//register FTM_MODE_PWMSYNC  0x08    // PWM Synchronization Mode\n"
  "//register FTM_MODE_WPDIS   0x04    // Write Protection Disable\n"
  "//register FTM_MODE_INIT   0x02    // Initialize The Channels Output\n"
  "//register FTM_MODE_FTMEN   0x01    // FTM Enable\n"
  "//register FTM0_SYNC   0x40038058 // Synchronization\n"
  "//register FTM_SYNC_SWSYNC   0x80    // \n"
  "//register FTM_SYNC_TRIG2   0x40    // \n"
  "//register FTM_SYNC_TRIG1   0x20    // \n"
  "//register FTM_SYNC_TRIG0   0x10    // \n"
  "//register FTM_SYNC_SYNCHOM  0x08    // \n"
  "//register FTM_SYNC_REINIT   0x04    // \n"
  "//register FTM_SYNC_CNTMAX   0x02    // \n"
  "//register FTM_SYNC_CNTMIN   0x01    // \n"
  "//register FTM0_OUTINIT   0x4003805C // Initial State For Channels Output\n"
  "//register FTM0_OUTMASK   0x40038060 // Output Mask\n"
  "//register FTM0_COMBINE   0x40038064 // Function For Linked Channels\n"
  "//register FTM0_DEADTIME   0x40038068 // Deadtime Insertion Control\n"
  "//register FTM0_EXTTRIG   0x4003806C // FTM External Trigger\n"
  "//register FTM0_POL   0x40038070 // Channels Polarity\n"
  "//register FTM0_FMS   0x40038074 // Fault Mode Status\n"
  "//register FTM0_FILTER   0x40038078 // Input Capture Filter Control\n"
  "//register FTM0_FLTCTRL   0x4003807C // Fault Control\n"
  "//register FTM0_QDCTRL   0x40038080 // Quadrature Decoder Control And Status\n"
  "//register FTM0_CONF   0x40038084 // Configuration\n"
  "//register FTM0_FLTPOL   0x40038088 // FTM Fault Input Polarity\n"
  "//register FTM0_SYNCONF   0x4003808C // Synchronization Configuration\n"
  "//register FTM0_INVCTRL   0x40038090 // FTM Inverting Control\n"
  "//register FTM0_SWOCTRL   0x40038094 // FTM Software Output Control\n"
  "//register FTM0_PWMLOAD   0x40038098 // FTM PWM Load\n"
  "//register FTM1_SC    0x40039000 // Status And Control\n"
  "//register FTM1_CNT   0x40039004 // Counter\n"
  "//register FTM1_MOD   0x40039008 // Modulo\n"
  "//register FTM1_C0SC   0x4003900C // Channel 0 Status And Control\n"
  "//register FTM1_C0V   0x40039010 // Channel 0 Value\n"
  "//register FTM1_C1SC   0x40039014 // Channel 1 Status And Control\n"
  "//register FTM1_C1V   0x40039018 // Channel 1 Value\n"
  "//register FTM1_CNTIN   0x4003904C // Counter Initial Value\n"
  "//register FTM1_STATUS   0x40039050 // Capture And Compare Status\n"
  "//register FTM1_MODE   0x40039054 // Features Mode Selection\n"
  "//register FTM1_SYNC   0x40039058 // Synchronization\n"
  "//register FTM1_OUTINIT   0x4003905C // Initial State For Channels Output\n"
  "//register FTM1_OUTMASK   0x40039060 // Output Mask\n"
  "//register FTM1_COMBINE   0x40039064 // Function For Linked Channels\n"
  "//register FTM1_DEADTIME   0x40039068 // Deadtime Insertion Control\n"
  "//register FTM1_EXTTRIG   0x4003906C // FTM External Trigger\n"
  "//register FTM1_POL   0x40039070 // Channels Polarity\n"
  "//register FTM1_FMS   0x40039074 // Fault Mode Status\n"
  "//register FTM1_FILTER   0x40039078 // Input Capture Filter Control\n"
  "//register FTM1_FLTCTRL   0x4003907C // Fault Control\n"
  "//register FTM1_QDCTRL   0x40039080 // Quadrature Decoder Control And Status\n"
  "//register FTM1_CONF   0x40039084 // Configuration\n"
  "//register FTM1_FLTPOL   0x40039088 // FTM Fault Input Polarity\n"
  "//register FTM1_SYNCONF   0x4003908C // Synchronization Configuration\n"
  "//register FTM1_INVCTRL   0x40039090 // FTM Inverting Control\n"
  "//register FTM1_SWOCTRL   0x40039094 // FTM Software Output Control\n"
  "//register FTM1_PWMLOAD   0x40039098 // FTM PWM Load\n"
  "//register FTM2_SC    0x400B8000 // Status And Control\n"
  "//register FTM2_CNT   0x400B8004 // Counter\n"
  "//register FTM2_MOD   0x400B8008 // Modulo\n"
  "//register FTM2_C0SC   0x400B800C // Channel 0 Status And Control\n"
  "//register FTM2_C0V   0x400B8010 // Channel 0 Value\n"
  "//register FTM2_C1SC   0x400B8014 // Channel 1 Status And Control\n"
  "//register FTM2_C1V   0x400B8018 // Channel 1 Value\n"
  "//register FTM2_CNTIN   0x400B804C // Counter Initial Value\n"
  "//register FTM2_STATUS   0x400B8050 // Capture And Compare Status\n"
  "//register FTM2_MODE   0x400B8054 // Features Mode Selection\n"
  "//register FTM2_SYNC   0x400B8058 // Synchronization\n"
  "//register FTM2_OUTINIT   0x400B805C // Initial State For Channels Output\n"
  "//register FTM2_OUTMASK   0x400B8060 // Output Mask\n"
  "//register FTM2_COMBINE   0x400B8064 // Function For Linked Channels\n"
  "//register FTM2_DEADTIME   0x400B8068 // Deadtime Insertion Control\n"
  "//register FTM2_EXTTRIG   0x400B806C // FTM External Trigger\n"
  "//register FTM2_POL   0x400B8070 // Channels Polarity\n"
  "//register FTM2_FMS   0x400B8074 // Fault Mode Status\n"
  "//register FTM2_FILTER   0x400B8078 // Input Capture Filter Control\n"
  "//register FTM2_FLTCTRL   0x400B807C // Fault Control\n"
  "//register FTM2_QDCTRL   0x400B8080 // Quadrature Decoder Control And Status\n"
  "//register FTM2_CONF   0x400B8084 // Configuration\n"
  "//register FTM2_FLTPOL   0x400B8088 // FTM Fault Input Polarity\n"
  "//register FTM2_SYNCONF   0x400B808C // Synchronization Configuration\n"
  "//register FTM2_INVCTRL   0x400B8090 // FTM Inverting Control\n"
  "//register FTM2_SWOCTRL   0x400B8094 // FTM Software Output Control\n"
  "//register FTM2_PWMLOAD   0x400B8098 // FTM PWM Load\n"
  "//\n"
  "//// Chapter 36: Periodic Interrupt Timer (PIT)\n"
  "//register PIT_MCR    0x40037000 // PIT Module Control Register\n"
  "//register PIT_LDVAL0   0x40037100 // Timer Load Value Register\n"
  "//register PIT_CVAL0   0x40037104 // Current Timer Value Register\n"
  "//register PIT_TCTRL0   0x40037108 // Timer Control Register\n"
  "//register PIT_TFLG0   0x4003710C // Timer Flag Register\n"
  "//register PIT_LDVAL1   0x40037110 // Timer Load Value Register\n"
  "//register PIT_CVAL1   0x40037114 // Current Timer Value Register\n"
  "//register PIT_TCTRL1   0x40037118 // Timer Control Register\n"
  "//register PIT_TFLG1   0x4003711C // Timer Flag Register\n"
  "//register PIT_LDVAL2   0x40037120 // Timer Load Value Register\n"
  "//register PIT_CVAL2   0x40037124 // Current Timer Value Register\n"
  "//register PIT_TCTRL2   0x40037128 // Timer Control Register\n"
  "//register PIT_TFLG2   0x4003712C // Timer Flag Register\n"
  "//register PIT_LDVAL3   0x40037130 // Timer Load Value Register\n"
  "//register PIT_CVAL3   0x40037134 // Current Timer Value Register\n"
  "//register PIT_TCTRL3   0x40037138 // Timer Control Register\n"
  "//register PIT_TFLG3   0x4003713C // Timer Flag Register\n"
  "//\n"
  "//// Chapter 37: Low-Power Timer (LPTMR)\n"
  "//register LPTMR0_CSR   0x40040000 // Low Power Timer Control Status Register\n"
  "//register LPTMR0_PSR   0x40040004 // Low Power Timer Prescale Register\n"
  "//register LPTMR0_CMR   0x40040008 // Low Power Timer Compare Register\n"
  "//register LPTMR0_CNR   0x4004000C // Low Power Timer Counter Register\n"
  "//\n"
  "//// Chapter 38: Carrier Modulator Transmitter (CMT)\n"
  "//register CMT_CGH1  *(volatile $uint8_t  *)0x40062000 // CMT Carrier Generator High Data Register 1\n"
  "//register CMT_CGL1  *(volatile $uint8_t  *)0x40062001 // CMT Carrier Generator Low Data Register 1\n"
  "//register CMT_CGH2  *(volatile $uint8_t  *)0x40062002 // CMT Carrier Generator High Data Register 2\n"
  "//register CMT_CGL2  *(volatile $uint8_t  *)0x40062003 // CMT Carrier Generator Low Data Register 2\n"
  "//register CMT_OC   *(volatile $uint8_t  *)0x40062004 // CMT Output Control Register\n"
  "//register CMT_MSC   *(volatile $uint8_t  *)0x40062005 // CMT Modulator Status and Control Register\n"
  "//register CMT_CMD1  *(volatile $uint8_t  *)0x40062006 // CMT Modulator Data Register Mark High\n"
  "//register CMT_CMD2  *(volatile $uint8_t  *)0x40062007 // CMT Modulator Data Register Mark Low\n"
  "//register CMT_CMD3  *(volatile $uint8_t  *)0x40062008 // CMT Modulator Data Register Space High\n"
  "//register CMT_CMD4  *(volatile $uint8_t  *)0x40062009 // CMT Modulator Data Register Space Low\n"
  "//register CMT_PPS   *(volatile $uint8_t  *)0x4006200A // CMT Primary Prescaler Register\n"
  "//register CMT_DMA   *(volatile $uint8_t  *)0x4006200B // CMT Direct Memory Access Register\n"
  "//\n"
  "//// Chapter 39: Real Time Clock (RTC)\n"
  "register RTC_TSR at  0x4003D000 $uint32 // RTC Time Seconds Register\n"
  "register RTC_TPR at  0x4003D004 $uint32 // RTC Time Prescaler Register\n"
  "register RTC_TAR at  0x4003D008 $uint32 // RTC Time Alarm Register\n"
  "register RTC_TCR at  0x4003D00C $uint32 // RTC Time Compensation Register\n"
  "//register RTC_TCR_CIC(n)   (((n) & 255) << 24)  // Compensation Interval Counter\n"
  "//register RTC_TCR_TCV(n)   (((n) & 255) << 16)  // Time Compensation Value\n"
  "//register RTC_TCR_CIR(n)   (((n) & 255) << 8)  // Compensation Interval Register\n"
  "//register RTC_TCR_TCR(n)   (((n) & 255) << 0)  // Time Compensation Register\n"
  "register RTC_CR at  0x4003D010 $uint32 {// RTC Control Register\n"
  "  18, SC2P, SC4P, SC8P, SC16P,CKLO, OSCE, 4, UM, SUP, WPE, SWR\n"
  "}\n"
  " \n"
  "register RTC_SR at  0x4003D014 $uint32 // RTC Status Register\n"
  "let RTC_SR_TCE $uint32 = 0x00000010  \n"
  "let RTC_SR_TAF $uint32 = 0x00000004  // \n"
  "let RTC_SR_TOF $uint32 = 0x00000002  // \n"
  "let RTC_SR_TIF $uint32 = 0x00000001  // \n"
  "\n"
  "register RTC_LR  at 0x4003D018 $uint32 // RTC Lock Register\n"
  "register RTC_IER at 0x4003D01C $uint32 // RTC Interrupt Enable Register\n"
  "register RTC_WAR at 0x4003D800 $uint32 // RTC Write Access Register\n"
  "register RTC_RAR at 0x4003D804 $uint32 // RTC Read Access Register\n"
  "\n"
  "//// Chapter 40: Universal Serial Bus OTG Controller (USBOTG)\n"
  "//register USB0_PERID  *(const    $uint8_t  *)0x40072000 // Peripheral ID register\n"
  "//register USB0_IDCOMP  *(const    $uint8_t  *)0x40072004 // Peripheral ID Complement register\n"
  "//register USB0_REV  *(const    $uint8_t  *)0x40072008 // Peripheral Revision register\n"
  "//register USB0_ADDINFO  *(volatile $uint8_t  *)0x4007200C // Peripheral Additional Info register\n"
  "//register USB0_OTGIST *(volatile $uint8_t  *)0x40072010 // OTG Interrupt Status register\n"
  "//register USB_OTGISTAT_IDCHG  ($uint8_t)0x80   //\n"
  "//register USB_OTGISTAT_ONEMSEC  ($uint8_t)0x40   //\n"
  "//register USB_OTGISTAT_LINE_STATE_CHG ($uint8_t)0x20   //\n"
  "//register USB_OTGISTAT_SESSVLDCHG  ($uint8_t)0x08   //\n"
  "//register USB_OTGISTAT_B_SESS_CHG  ($uint8_t)0x04   //\n"
  "//register USB_OTGISTAT_AVBUSCHG  ($uint8_t)0x01   //\n"
  "//register USB0_OTGICR  *(volatile $uint8_t  *)0x40072014 // OTG Interrupt Control Register\n"
  "//register USB_OTGICR_IDEN   ($uint8_t)0x80   // \n"
  "//register USB_OTGICR_ONEMSECEN  ($uint8_t)0x40   // \n"
  "//register USB_OTGICR_LINESTATEEN  ($uint8_t)0x20   // \n"
  "//register USB_OTGICR_SESSVLDEN  ($uint8_t)0x08   // \n"
  "//register USB_OTGICR_BSESSEN  ($uint8_t)0x04   // \n"
  "//register USB_OTGICR_AVBUSEN  ($uint8_t)0x01   // \n"
  "//register USB0_OTGST *(volatile $uint8_t  *)0x40072018 // OTG Status register\n"
  "//register USB_OTGSTAT_ID   ($uint8_t)0x80   // \n"
  "//register USB_OTGSTAT_ONEMSECEN  ($uint8_t)0x40   // \n"
  "//register USB_OTGSTAT_LINESTATESTABLE ($uint8_t)0x20   // \n"
  "//register USB_OTGSTAT_SESS_VLD  ($uint8_t)0x08   // \n"
  "//register USB_OTGSTAT_BSESSEND  ($uint8_t)0x04   // \n"
  "//register USB_OTGSTAT_AVBUSVLD  ($uint8_t)0x01   // \n"
  "//register USB0_OTGCTL  *(volatile $uint8_t  *)0x4007201C // OTG Control Register\n"
  "//register USB_OTGCTL_DPHIGH  ($uint8_t)0x80   // \n"
  "//register USB_OTGCTL_DPLOW  ($uint8_t)0x20   // \n"
  "//register USB_OTGCTL_DMLOW  ($uint8_t)0x10   // \n"
  "//register USB_OTGCTL_OTGEN  ($uint8_t)0x04   // \n"
  "//register USB0_IST *(volatile $uint8_t  *)0x40072080 // Interrupt Status Register\n"
  "//register USB_ISTAT_STALL   ($uint8_t)0x80   // \n"
  "//register USB_ISTAT_ATTACH  ($uint8_t)0x40   // \n"
  "//register USB_ISTAT_RESUME  ($uint8_t)0x20   // \n"
  "//register USB_ISTAT_SLEEP   ($uint8_t)0x10   // \n"
  "//register USB_ISTAT_TOKDNE  ($uint8_t)0x08   // \n"
  "//register USB_ISTAT_SOFTOK  ($uint8_t)0x04   // \n"
  "//register USB_ISTAT_ERROR   ($uint8_t)0x02   // \n"
  "//register USB_ISTAT_USBRST  ($uint8_t)0x01   // \n"
  "//register USB0_INTEN  *(volatile $uint8_t  *)0x40072084 // Interrupt Enable Register\n"
  "//register USB_INTEN_STALLEN  ($uint8_t)0x80   // \n"
  "//register USB_INTEN_ATTACHEN  ($uint8_t)0x40   // \n"
  "//register USB_INTEN_RESUMEEN  ($uint8_t)0x20   // \n"
  "//register USB_INTEN_SLEEPEN  ($uint8_t)0x10   // \n"
  "//register USB_INTEN_TOKDNEEN  ($uint8_t)0x08   // \n"
  "//register USB_INTEN_SOFTOKEN  ($uint8_t)0x04   // \n"
  "//register USB_INTEN_ERROREN  ($uint8_t)0x02   // \n"
  "//register USB_INTEN_USBRSTEN  ($uint8_t)0x01   // \n"
  "//register USB0_ERRST *(volatile $uint8_t  *)0x40072088 // Error Interrupt Status Register\n"
  "//register USB_ERRSTAT_BTSERR  ($uint8_t)0x80   // \n"
  "//register USB_ERRSTAT_DMAERR  ($uint8_t)0x20   // \n"
  "//register USB_ERRSTAT_BTOERR  ($uint8_t)0x10   // \n"
  "//register USB_ERRSTAT_DFN8  ($uint8_t)0x08   // \n"
  "//register USB_ERRSTAT_CRC16  ($uint8_t)0x04   // \n"
  "//register USB_ERRSTAT_CRC5EOF  ($uint8_t)0x02   // \n"
  "//register USB_ERRSTAT_PIDERR  ($uint8_t)0x01   // \n"
  "//register USB0_ERREN  *(volatile $uint8_t  *)0x4007208C // Error Interrupt Enable Register\n"
  "//register USB_ERREN_BTSERREN  ($uint8_t)0x80   // \n"
  "//register USB_ERREN_DMAERREN  ($uint8_t)0x20   // \n"
  "//register USB_ERREN_BTOERREN  ($uint8_t)0x10   // \n"
  "//register USB_ERREN_DFN8EN  ($uint8_t)0x08   // \n"
  "//register USB_ERREN_CRC16EN  ($uint8_t)0x04   // \n"
  "//register USB_ERREN_CRC5EOFEN  ($uint8_t)0x02   // \n"
  "//register USB_ERREN_PIDERREN  ($uint8_t)0x01   // \n"
  "//register USB0_ST *(volatile $uint8_t  *)0x40072090 // Status Register\n"
  "//register USB_STAT_TX   ($uint8_t)0x08   // \n"
  "//register USB_STAT_ODD   ($uint8_t)0x04   // \n"
  "//register USB_STAT_ENDP(n)  ($uint8_t)((n) >> 4)  // \n"
  "//register USB0_CTL  *(volatile $uint8_t  *)0x40072094 // Control Register\n"
  "//register USB_CTL_JSTATE   ($uint8_t)0x80   // \n"
  "//register USB_CTL_SE0   ($uint8_t)0x40   // \n"
  "//register USB_CTL_TXSUSPENDTOKENBUSY ($uint8_t)0x20   // \n"
  "//register USB_CTL_RESET   ($uint8_t)0x10   // \n"
  "//register USB_CTL_HOSTMODEEN  ($uint8_t)0x08   // \n"
  "//register USB_CTL_RESUME   ($uint8_t)0x04   // \n"
  "//register USB_CTL_ODDRST   ($uint8_t)0x02   // \n"
  "//register USB_CTL_USBENSOFEN  ($uint8_t)0x01   // \n"
  "//register USB0_ADDR  *(volatile $uint8_t  *)0x40072098 // Address Register\n"
  "//register USB0_BDTPAGE1  *(volatile $uint8_t  *)0x4007209C // BDT Page Register 1\n"
  "//register USB0_FRMNUML  *(volatile $uint8_t  *)0x400720A0 // Frame Number Register Low\n"
  "//register USB0_FRMNUMH  *(volatile $uint8_t  *)0x400720A4 // Frame Number Register High\n"
  "//register USB0_TOKEN  *(volatile $uint8_t  *)0x400720A8 // Token Register\n"
  "//register USB0_SOFTHLD  *(volatile $uint8_t  *)0x400720AC // SOF Threshold Register\n"
  "//register USB0_BDTPAGE2  *(volatile $uint8_t  *)0x400720B0 // BDT Page Register 2\n"
  "//register USB0_BDTPAGE3  *(volatile $uint8_t  *)0x400720B4 // BDT Page Register 3\n"
  "//register USB0_ENDPT0  *(volatile $uint8_t  *)0x400720C0 // Endpoint Control Register\n"
  "//register USB_ENDPT_HOSTWOHUB  ($uint8_t)0x80   // host only, enable low speed\n"
  "//register USB_ENDPT_RETRYDIS  ($uint8_t)0x40   // host only, set to disable NAK retry\n"
  "//register USB_ENDPT_EPCTLDIS  ($uint8_t)0x10   // 0=control, 1=bulk, interrupt, isync\n"
  "//register USB_ENDPT_EPRXEN  ($uint8_t)0x08   // enables the endpoint for RX transfers.\n"
  "//register USB_ENDPT_EPTXEN  ($uint8_t)0x04   // enables the endpoint for TX transfers.\n"
  "//register USB_ENDPT_EPSTALL  ($uint8_t)0x02   // set to stall endpoint\n"
  "//register USB_ENDPT_EPHSHK  ($uint8_t)0x01   // enable handshaking during a transaction, generally set unless Isochronous\n"
  "//register USB0_ENDPT1  *(volatile $uint8_t  *)0x400720C4 // Endpoint Control Register\n"
  "//register USB0_ENDPT2  *(volatile $uint8_t  *)0x400720C8 // Endpoint Control Register\n"
  "//register USB0_ENDPT3  *(volatile $uint8_t  *)0x400720CC // Endpoint Control Register\n"
  "//register USB0_ENDPT4  *(volatile $uint8_t  *)0x400720D0 // Endpoint Control Register\n"
  "//register USB0_ENDPT5  *(volatile $uint8_t  *)0x400720D4 // Endpoint Control Register\n"
  "//register USB0_ENDPT6  *(volatile $uint8_t  *)0x400720D8 // Endpoint Control Register\n"
  "//register USB0_ENDPT7  *(volatile $uint8_t  *)0x400720DC // Endpoint Control Register\n"
  "//register USB0_ENDPT8  *(volatile $uint8_t  *)0x400720E0 // Endpoint Control Register\n"
  "//register USB0_ENDPT9  *(volatile $uint8_t  *)0x400720E4 // Endpoint Control Register\n"
  "//register USB0_ENDPT10  *(volatile $uint8_t  *)0x400720E8 // Endpoint Control Register\n"
  "//register USB0_ENDPT11  *(volatile $uint8_t  *)0x400720EC // Endpoint Control Register\n"
  "//register USB0_ENDPT12  *(volatile $uint8_t  *)0x400720F0 // Endpoint Control Register\n"
  "//register USB0_ENDPT13  *(volatile $uint8_t  *)0x400720F4 // Endpoint Control Register\n"
  "//register USB0_ENDPT14  *(volatile $uint8_t  *)0x400720F8 // Endpoint Control Register\n"
  "//register USB0_ENDPT15  *(volatile $uint8_t  *)0x400720FC // Endpoint Control Register\n"
  "//register USB0_USBCTRL  *(volatile $uint8_t  *)0x40072100 // USB Control Register\n"
  "//register USB_USBCTRL_SUSP  ($uint8_t)0x80   // Places the USB transceiver into the suspend state.\n"
  "//register USB_USBCTRL_PDE   ($uint8_t)0x40   // Enables the weak pulldowns on the USB transceiver.\n"
  "//register USB0_OBSERVE  *(volatile $uint8_t  *)0x40072104 // USB OTG Observe Register\n"
  "//register USB_OBSERVE_DPPU  ($uint8_t)0x80   // \n"
  "//register USB_OBSERVE_DPPD  ($uint8_t)0x40   // \n"
  "//register USB_OBSERVE_DMPD  ($uint8_t)0x10   // \n"
  "//register USB0_CONTROL  *(volatile $uint8_t  *)0x40072108 // USB OTG Control Register\n"
  "//register USB_CONTROL_DPPULLUPNONOTG ($uint8_t)0x10   //  Provides control of the DP PULLUP in the USB OTG module, if USB is configured in non-OTG de"
  "vice mode.\n"
  "//register USB0_USBTRC0  *(volatile $uint8_t  *)0x4007210C // USB Transceiver Control Register 0\n"
  "//register USB_USBTRC_USBRESET  ($uint8_t)0x80   //\n"
  "//register USB_USBTRC_USBRESMEN  ($uint8_t)0x20   //\n"
  "//register USB_USBTRC_SYNC_DET  ($uint8_t)0x02   //\n"
  "//register USB_USBTRC_USB_RESUME_INT ($uint8_t)0x01   //\n"
  "//register USB0_USBFRMADJUST *(volatile $uint8_t  *)0x40072114 // Frame Adjust Register\n"
  "//\n"
  "//// Chapter 41: USB Device Charger Detection Module (USBDCD)\n"
  "//register USBDCD_CONTROL   0x40035000 // Control register\n"
  "//register USBDCD_CLOCK   0x40035004 // Clock register\n"
  "//register USBDCD_STATUS   0x40035008 // Status register\n"
  "//register USBDCD_TIMER0   0x40035010 // TIMER0 register\n"
  "//register USBDCD_TIMER1   0x40035014 // TIMER1 register\n"
  "//register USBDCD_TIMER2   0x40035018 // TIMER2 register\n"
  "//\n"
  "//// Chapter 43: SPI (DSPI)\n"
  "//register SPI0_MCR   0x4002C000 // DSPI Module Configuration Register\n"
  "//register SPI_MCR_MSTR    0x80000000  // Master/Slave Mode Select\n"
  "//register SPI_MCR_CONT_SCKE   0x40000000  // \n"
  "//register SPI_MCR_DCONF(n)  (((n) & 3) << 28)  // \n"
  "//register SPI_MCR_FRZ    0x08000000  // \n"
  "//register SPI_MCR_MTFE    0x04000000  // \n"
  "//register SPI_MCR_ROOE    0x01000000  // \n"
  "//register SPI_MCR_PCSIS(n)  (((n) & 0x1F) << 16)  //\n"
  "//register SPI_MCR_DOZE    0x00008000  // \n"
  "//register SPI_MCR_MDIS    0x00004000  // \n"
  "//register SPI_MCR_DIS_TXF    0x00002000  // \n"
  "//register SPI_MCR_DIS_RXF    0x00001000  // \n"
  "//register SPI_MCR_CLR_TXF    0x00000800  // \n"
  "//register SPI_MCR_CLR_RXF    0x00000400  // \n"
  "//register SPI_MCR_SMPL_PT(n)  (((n) & 3) << 8)  //\n"
  "//register SPI_MCR_HALT    0x00000001  // \n"
  "//register SPI0_TCR   0x4002C008 // DSPI Transfer Count Register\n"
  "//register SPI0_CTAR0   0x4002C00C // DSPI Clock and Transfer Attributes Register, In Master Mode\n"
  "//register SPI_CTAR_DBR    0x80000000  // Double Baud Rate\n"
  "//register SPI_CTAR_FMSZ(n)  (((n) & 15) << 27)  // Frame Size (+1)\n"
  "//register SPI_CTAR_CPOL    0x04000000  // Clock Polarity\n"
  "//register SPI_CTAR_CPHA    0x02000000  // Clock Phase\n"
  "//register SPI_CTAR_LSBFE    0x01000000  // LSB First\n"
  "//register SPI_CTAR_PCSSCK(n)  (((n) & 3) << 22)  // PCS to SCK Delay Prescaler\n"
  "//register SPI_CTAR_PASC(n)  (((n) & 3) << 20)  // After SCK Delay Prescaler\n"
  "//register SPI_CTAR_PDT(n)   (((n) & 3) << 18)  // Delay after Transfer Prescaler\n"
  "//register SPI_CTAR_PBR(n)   (((n) & 3) << 16)  // Baud Rate Prescaler\n"
  "//register SPI_CTAR_CSSCK(n)  (((n) & 15) << 12)  // PCS to SCK Delay Scaler\n"
  "//register SPI_CTAR_ASC(n)   (((n) & 15) << 8)  // After SCK Delay Scaler\n"
  "//register SPI_CTAR_DT(n)   (((n) & 15) << 4)  // Delay After Transfer Scaler\n"
  "//register SPI_CTAR_BR(n)   (((n) & 15) << 0)  // Baud Rate Scaler\n"
  "//register SPI0_CTAR0_SLAVE  0x4002C00C // DSPI Clock and Transfer Attributes Register, In Slave Mode\n"
  "//register SPI0_CTAR1   0x4002C010 // DSPI Clock and Transfer Attributes Register, In Master Mode\n"
  "//register SPI0_SR    0x4002C02C // DSPI Status Register\n"
  "//register SPI_SR_TCF    0x80000000  // Transfer Complete Flag\n"
  "//register SPI_SR_TXRXS    0x40000000  // TX and RX Status\n"
  "//register SPI_SR_EOQF    0x10000000  // End of Queue Flag\n"
  "//register SPI_SR_TFUF    0x08000000  // Transmit FIFO Underflow Flag\n"
  "//register SPI_SR_TFFF    0x02000000  // Transmit FIFO Fill Flag\n"
  "//register SPI_SR_RFOF    0x00080000  // Receive FIFO Overflow Flag\n"
  "//register SPI_SR_RFDF    0x00020000  // Receive FIFO Drain Flag\n"
  "//register SPI0_RSER   0x4002C030 // DSPI DMA/Interrupt Request Select and Enable Register\n"
  "//register SPI_RSER_TCF_RE    0x80000000  // Transmission Complete Request Enable\n"
  "//register SPI_RSER_EOQF_RE   0x10000000  // DSPI Finished Request Request Enable\n"
  "//register SPI_RSER_TFUF_RE   0x08000000  // Transmit FIFO Underflow Request Enable\n"
  "//register SPI_RSER_TFFF_RE   0x02000000  // Transmit FIFO Fill Request Enable\n"
  "//register SPI_RSER_TFFF_DIRS   0x01000000  // Transmit FIFO FIll Dma or Interrupt Request Select\n"
  "//register SPI_RSER_RFOF_RE   0x00080000  // Receive FIFO Overflow Request Enable\n"
  "//register SPI_RSER_RFDF_RE   0x00020000  // Receive FIFO Drain Request Enable\n"
  "//register SPI_RSER_RFDF_DIRS   0x00010000  // Receive FIFO Drain DMA or Interrupt Request Select\n"
  "//register SPI0_PUSHR   0x4002C034 // DSPI PUSH TX FIFO Register In Master Mode\n"
  "//register SPI_PUSHR_CONT    0x80000000  // \n"
  "//register SPI_PUSHR_CTAS(n)  (((n) & 7) << 28)  // \n"
  "//register SPI_PUSHR_EOQ    0x08000000  // \n"
  "//register SPI_PUSHR_CTCNT    0x04000000  // \n"
  "//register SPI_PUSHR_PCS(n)  (((n) & 31) << 16)  //\n"
  "//register SPI0_PUSHR_SLAVE  0x4002C034 // DSPI PUSH TX FIFO Register In Slave Mode\n"
  "//register SPI0_POPR   0x4002C038 // DSPI POP RX FIFO Register\n"
  "//register SPI0_TXFR0   0x4002C03C // DSPI Transmit FIFO Registers\n"
  "//register SPI0_TXFR1   0x4002C040 // DSPI Transmit FIFO Registers\n"
  "//register SPI0_TXFR2   0x4002C044 // DSPI Transmit FIFO Registers\n"
  "//register SPI0_TXFR3   0x4002C048 // DSPI Transmit FIFO Registers\n"
  "//register SPI0_RXFR0   0x4002C07C // DSPI Receive FIFO Registers\n"
  "//register SPI0_RXFR1   0x4002C080 // DSPI Receive FIFO Registers\n"
  "//register SPI0_RXFR2   0x4002C084 // DSPI Receive FIFO Registers\n"
  "//register SPI0_RXFR3   0x4002C088 // DSPI Receive FIFO Registers\n"
  "//typedef struct {\n"
  "// volatile $uint32_t MCR; // 0\n"
  "// volatile $uint32_t unused1;// 4\n"
  "// volatile $uint32_t TCR; // 8\n"
  "// volatile $uint32_t CTAR0; // c\n"
  "// volatile $uint32_t CTAR1; // 10\n"
  "// volatile $uint32_t CTAR2; // 14\n"
  "// volatile $uint32_t CTAR3; // 18\n"
  "// volatile $uint32_t CTAR4; // 1c\n"
  "// volatile $uint32_t CTAR5; // 20\n"
  "// volatile $uint32_t CTAR6; // 24\n"
  "// volatile $uint32_t CTAR7; // 28\n"
  "// volatile $uint32_t SR; // 2c\n"
  "// volatile $uint32_t RSER; // 30\n"
  "// volatile $uint32_t PUSHR; // 34\n"
  "// volatile $uint32_t POPR; // 38\n"
  "// volatile $uint32_t TXFR[16]; // 3c\n"
  "// volatile $uint32_t RXFR[16]; // 7c\n"
  "//} SPI_t;\n"
  "//register SPI0  (*(SPI_t *)0x4002C000)\n"
  "//\n"
  "//// Chapter 44: Inter-Integrated Circuit (I2C)\n"
  "//register I2C0_A1   *(volatile $uint8_t  *)0x40066000 // I2C Address Register 1\n"
  "//register I2C0_F   *(volatile $uint8_t  *)0x40066001 // I2C Frequency Divider register\n"
  "//register I2C0_C1   *(volatile $uint8_t  *)0x40066002 // I2C Control Register 1\n"
  "//register I2C_C1_IICEN   ($uint8_t)0x80   // I2C Enable\n"
  "//register I2C_C1_IICIE   ($uint8_t)0x40   // I2C Interrupt Enable\n"
  "//register I2C_C1_MST   ($uint8_t)0x20   // Master Mode Select\n"
  "//register I2C_C1_TX   ($uint8_t)0x10   // Transmit Mode Select\n"
  "//register I2C_C1_TXAK   ($uint8_t)0x08   // Transmit Acknowledge Enable\n"
  "//register I2C_C1_RSTA   ($uint8_t)0x04   // RepeSTART\n"
  "//register I2C_C1_WUEN   ($uint8_t)0x02   // Wakeup Enable\n"
  "//register I2C_C1_DMAEN   ($uint8_t)0x01   // DMA Enable\n"
  "//register I2C0_S   *(volatile $uint8_t  *)0x40066003 // I2C Status register\n"
  "//register I2C_S_TCF   ($uint8_t)0x80   // Transfer Complete Flag\n"
  "//register I2C_S_IAAS   ($uint8_t)0x40   // Addressed As A Slave\n"
  "//register I2C_S_BUSY   ($uint8_t)0x20   // Bus Busy\n"
  "//register I2C_S_ARBL   ($uint8_t)0x10   // Arbitration Lost\n"
  "//register I2C_S_RAM   ($uint8_t)0x08   // Range Address Match\n"
  "//register I2C_S_SRW   ($uint8_t)0x04   // Slave Read/Write\n"
  "//register I2C_S_IICIF   ($uint8_t)0x02   // Interrupt Flag\n"
  "//register I2C_S_RXAK   ($uint8_t)0x01   // Receive Acknowledge\n"
  "//register I2C0_D   *(volatile $uint8_t  *)0x40066004 // I2C Data I/O register\n"
  "//register I2C0_C2   *(volatile $uint8_t  *)0x40066005 // I2C Control Register 2\n"
  "//register I2C_C2_GCAEN   ($uint8_t)0x80   // General Call Address Enable\n"
  "//register I2C_C2_ADEXT   ($uint8_t)0x40   // Address Extension\n"
  "//register I2C_C2_HDRS   ($uint8_t)0x20   // High Drive Select\n"
  "//register I2C_C2_SBRC   ($uint8_t)0x10   // Slave Baud Rate Control\n"
  "//register I2C_C2_RMEN   ($uint8_t)0x08   // Range Address Matching Enable\n"
  "//register I2C_C2_AD(n)   ((n) & 7)   // Slave Address, upper 3 bits\n"
  "//register I2C0_FLT  *(volatile $uint8_t  *)0x40066006 // I2C Programmable Input Glitch Filter register\n"
  "//register I2C0_RA   *(volatile $uint8_t  *)0x40066007 // I2C Range Address register\n"
  "//register I2C0_SMB  *(volatile $uint8_t  *)0x40066008 // I2C SMBus Control and Status register\n"
  "//register I2C0_A2   *(volatile $uint8_t  *)0x40066009 // I2C Address Register 2\n"
  "//register I2C0_SLTH  *(volatile $uint8_t  *)0x4006600A // I2C SCL Low Timeout Register High\n"
  "//register I2C0_SLTL  *(volatile $uint8_t  *)0x4006600B // I2C SCL Low Timeout Register Low\n"
  "//\n"
  "//register I2C1_A1   *(volatile $uint8_t  *)0x40067000 // I2C Address Register 1\n"
  "//register I2C1_F   *(volatile $uint8_t  *)0x40067001 // I2C Frequency Divider register\n"
  "//register I2C1_C1   *(volatile $uint8_t  *)0x40067002 // I2C Control Register 1\n"
  "//register I2C1_S   *(volatile $uint8_t  *)0x40067003 // I2C Status register\n"
  "//register I2C1_D   *(volatile $uint8_t  *)0x40067004 // I2C Data I/O register\n"
  "//register I2C1_C2   *(volatile $uint8_t  *)0x40067005 // I2C Control Register 2\n"
  "//register I2C1_FLT  *(volatile $uint8_t  *)0x40067006 // I2C Programmable Input Glitch Filter register\n"
  "//register I2C1_RA   *(volatile $uint8_t  *)0x40067007 // I2C Range Address register\n"
  "//register I2C1_SMB  *(volatile $uint8_t  *)0x40067008 // I2C SMBus Control and Status register\n"
  "//register I2C1_A2   *(volatile $uint8_t  *)0x40067009 // I2C Address Register 2\n"
  "//register I2C1_SLTH  *(volatile $uint8_t  *)0x4006700A // I2C SCL Low Timeout Register High\n"
  "//register I2C1_SLTL  *(volatile $uint8_t  *)0x4006700B // I2C SCL Low Timeout Register Low\n"
  "//\n"
  "//// Chapter 45: Universal Asynchronous Receiver/Transmitter (UART)\n"
  "//register UART0_BDH  *(volatile $uint8_t  *)0x4006A000 // UART Baud Rate Registers: High\n"
  "//register UART0_BDL  *(volatile $uint8_t  *)0x4006A001 // UART Baud Rate Registers: Low\n"
  "//register UART0_C1  *(volatile $uint8_t  *)0x4006A002 // UART Control Register 1\n"
  "//register UART_C1_LOOPS   ($uint8_t)0x80   // When LOOPS is set, the RxD pin is disconnected from the UART and the transmitter output is internally c"
  "onnected to the receiver input\n"
  "//register UART_C1_UARTSWAI  ($uint8_t)0x40   // UART Stops in Wait Mode\n"
  "//register UART_C1_RSRC   ($uint8_t)0x20   // When LOOPS is set, the RSRC field determines the source for the receiver shift register input\n"
  "//register UART_C1_M   ($uint8_t)0x10   // 9-bit or 8-bit Mode Select\n"
  "//register UART_C1_WAKE   ($uint8_t)0x08   // Determines which condition wakes the UART\n"
  "//register UART_C1_ILT   ($uint8_t)0x04   // Idle Line Type Select\n"
  "//register UART_C1_PE   ($uint8_t)0x02   // Parity Enable\n"
  "//register UART_C1_PT   ($uint8_t)0x01   // Parity Type, 0=even, 1=odd\n"
  "//register UART0_C2  *(volatile $uint8_t  *)0x4006A003 // UART Control Register 2\n"
  "//register UART_C2_TIE   ($uint8_t)0x80   // Transmitter Interrupt or DMA Transfer Enable.\n"
  "//register UART_C2_TCIE   ($uint8_t)0x40   // Transmission Complete Interrupt Enable\n"
  "//register UART_C2_RIE   ($uint8_t)0x20   // Receiver Full Interrupt or DMA Transfer Enable\n"
  "//register UART_C2_ILIE   ($uint8_t)0x10   // Idle Line Interrupt Enable\n"
  "//register UART_C2_TE   ($uint8_t)0x08   // Transmitter Enable\n"
  "//register UART_C2_RE   ($uint8_t)0x04   // Receiver Enable\n"
  "//register UART_C2_RWU   ($uint8_t)0x02   // Receiver Wakeup Control\n"
  "//register UART_C2_SBK   ($uint8_t)0x01   // Send Break\n"
  "//register UART0_S1  *(volatile $uint8_t  *)0x4006A004 // UART Status Register 1\n"
  "//register UART_S1_TDRE   ($uint8_t)0x80   // Transmit Data Register Empty Flag\n"
  "//register UART_S1_TC   ($uint8_t)0x40   // Transmit Complete Flag\n"
  "//register UART_S1_RDRF   ($uint8_t)0x20   // Receive Data Register Full Flag\n"
  "//register UART_S1_IDLE   ($uint8_t)0x10   // Idle Line Flag\n"
  "//register UART_S1_OR   ($uint8_t)0x08   // Receiver Overrun Flag\n"
  "//register UART_S1_NF   ($uint8_t)0x04   // Noise Flag\n"
  "//register UART_S1_FE   ($uint8_t)0x02   // Framing Error Flag\n"
  "//register UART_S1_PF   ($uint8_t)0x01   // Parity Error Flag\n"
  "//register UART0_S2  *(volatile $uint8_t  *)0x4006A005 // UART Status Register 2\n"
  "//register UART0_C3  *(volatile $uint8_t  *)0x4006A006 // UART Control Register 3\n"
  "//register UART0_D   *(volatile $uint8_t  *)0x4006A007 // UART Data Register\n"
  "//register UART0_MA1  *(volatile $uint8_t  *)0x4006A008 // UART Match Address Registers 1\n"
  "//register UART0_MA2  *(volatile $uint8_t  *)0x4006A009 // UART Match Address Registers 2\n"
  "//register UART0_C4  *(volatile $uint8_t  *)0x4006A00A // UART Control Register 4\n"
  "//register UART0_C5  *(volatile $uint8_t  *)0x4006A00B // UART Control Register 5\n"
  "//register UART0_ED  *(volatile $uint8_t  *)0x4006A00C // UART Extended Data Register\n"
  "//register UART0_MODEM  *(volatile $uint8_t  *)0x4006A00D // UART Modem Register\n"
  "//register UART0_IR  *(volatile $uint8_t  *)0x4006A00E // UART Infrared Register\n"
  "//register UART0_PFIFO  *(volatile $uint8_t  *)0x4006A010 // UART FIFO Parameters\n"
  "//register UART_PFIFO_TXFE   ($uint8_t)0x80\n"
  "//register UART_PFIFO_RXFE   ($uint8_t)0x08\n"
  "//register UART0_CFIFO  *(volatile $uint8_t  *)0x4006A011 // UART FIFO Control Register\n"
  "//register UART_CFIFO_TXFLUSH  ($uint8_t)0x80   // \n"
  "//register UART_CFIFO_RXFLUSH  ($uint8_t)0x40   // \n"
  "//register UART_CFIFO_RXOFE  ($uint8_t)0x04   // \n"
  "//register UART_CFIFO_TXOFE  ($uint8_t)0x02   // \n"
  "//register UART_CFIFO_RXUFE  ($uint8_t)0x01   // \n"
  "//register UART0_SFIFO  *(volatile $uint8_t  *)0x4006A012 // UART FIFO Status Register\n"
  "//register UART_SFIFO_TXEMPT  ($uint8_t)0x80\n"
  "//register UART_SFIFO_RXEMPT  ($uint8_t)0x40\n"
  "//register UART_SFIFO_RXOF   ($uint8_t)0x04\n"
  "//register UART_SFIFO_TXOF   ($uint8_t)0x02\n"
  "//register UART_SFIFO_RXUF   ($uint8_t)0x01\n"
  "//register UART0_TWFIFO  *(volatile $uint8_t  *)0x4006A013 // UART FIFO Transmit Watermark\n"
  "//register UART0_TCFIFO  *(volatile $uint8_t  *)0x4006A014 // UART FIFO Transmit Count\n"
  "//register UART0_RWFIFO  *(volatile $uint8_t  *)0x4006A015 // UART FIFO Receive Watermark\n"
  "//register UART0_RCFIFO  *(volatile $uint8_t  *)0x4006A016 // UART FIFO Receive Count\n"
  "//register UART0_C7816  *(volatile $uint8_t  *)0x4006A018 // UART 7816 Control Register\n"
  "//register UART0_IE7816  *(volatile $uint8_t  *)0x4006A019 // UART 7816 Interrupt Enable Register\n"
  "//register UART0_IS7816  *(volatile $uint8_t  *)0x4006A01A // UART 7816 Interrupt Status Register\n"
  "//register UART0_WP7816T0  *(volatile $uint8_t  *)0x4006A01B // UART 7816 Wait Parameter Register\n"
  "//register UART0_WP7816T1  *(volatile $uint8_t  *)0x4006A01B // UART 7816 Wait Parameter Register\n"
  "//register UART0_WN7816  *(volatile $uint8_t  *)0x4006A01C // UART 7816 Wait N Register\n"
  "//register UART0_WF7816  *(volatile $uint8_t  *)0x4006A01D // UART 7816 Wait FD Register\n"
  "//register UART0_ET7816  *(volatile $uint8_t  *)0x4006A01E // UART 7816 Error Threshold Register\n"
  "//register UART0_TL7816  *(volatile $uint8_t  *)0x4006A01F // UART 7816 Transmit Length Register\n"
  "//register UART0_C6  *(volatile $uint8_t  *)0x4006A021 // UART CEA709.1-B Control Register 6\n"
  "//register UART0_PCTH  *(volatile $uint8_t  *)0x4006A022 // UART CEA709.1-B Packet Cycle Time Counter High\n"
  "//register UART0_PCTL  *(volatile $uint8_t  *)0x4006A023 // UART CEA709.1-B Packet Cycle Time Counter Low\n"
  "//register UART0_B1T  *(volatile $uint8_t  *)0x4006A024 // UART CEA709.1-B Beta1 Timer\n"
  "//register UART0_SDTH  *(volatile $uint8_t  *)0x4006A025 // UART CEA709.1-B Secondary Delay Timer High\n"
  "//register UART0_SDTL  *(volatile $uint8_t  *)0x4006A026 // UART CEA709.1-B Secondary Delay Timer Low\n"
  "//register UART0_PRE  *(volatile $uint8_t  *)0x4006A027 // UART CEA709.1-B Preamble\n"
  "//register UART0_TPL  *(volatile $uint8_t  *)0x4006A028 // UART CEA709.1-B Transmit Packet Length\n"
  "//register UART0_IE  *(volatile $uint8_t  *)0x4006A029 // UART CEA709.1-B Interrupt Enable Register\n"
  "//register UART0_WB  *(volatile $uint8_t  *)0x4006A02A // UART CEA709.1-B WBASE\n"
  "//register UART0_S3  *(volatile $uint8_t  *)0x4006A02B // UART CEA709.1-B Status Register\n"
  "//register UART0_S4  *(volatile $uint8_t  *)0x4006A02C // UART CEA709.1-B Status Register\n"
  "//register UART0_RPL  *(volatile $uint8_t  *)0x4006A02D // UART CEA709.1-B Received Packet Length\n"
  "//register UART0_RPREL  *(volatile $uint8_t  *)0x4006A02E // UART CEA709.1-B Received Preamble Length\n"
  "//register UART0_CPW  *(volatile $uint8_t  *)0x4006A02F // UART CEA709.1-B Collision Pulse Width\n"
  "//register UART0_RIDT  *(volatile $uint8_t  *)0x4006A030 // UART CEA709.1-B Receive Indeterminate Time\n"
  "//register UART0_TIDT  *(volatile $uint8_t  *)0x4006A031 // UART CEA709.1-B Transmit Indeterminate Time\n"
  "//register UART1_BDH  *(volatile $uint8_t  *)0x4006B000 // UART Baud Rate Registers: High\n"
  "//register UART1_BDL  *(volatile $uint8_t  *)0x4006B001 // UART Baud Rate Registers: Low\n"
  "//register UART1_C1  *(volatile $uint8_t  *)0x4006B002 // UART Control Register 1\n"
  "//register UART1_C2  *(volatile $uint8_t  *)0x4006B003 // UART Control Register 2\n"
  "//register UART1_S1  *(volatile $uint8_t  *)0x4006B004 // UART Status Register 1\n"
  "//register UART1_S2  *(volatile $uint8_t  *)0x4006B005 // UART Status Register 2\n"
  "//register UART1_C3  *(volatile $uint8_t  *)0x4006B006 // UART Control Register 3\n"
  "//register UART1_D   *(volatile $uint8_t  *)0x4006B007 // UART Data Register\n"
  "//register UART1_MA1  *(volatile $uint8_t  *)0x4006B008 // UART Match Address Registers 1\n"
  "//register UART1_MA2  *(volatile $uint8_t  *)0x4006B009 // UART Match Address Registers 2\n"
  "//register UART1_C4  *(volatile $uint8_t  *)0x4006B00A // UART Control Register 4\n"
  "//register UART1_C5  *(volatile $uint8_t  *)0x4006B00B // UART Control Register 5\n"
  "//register UART1_ED  *(volatile $uint8_t  *)0x4006B00C // UART Extended Data Register\n"
  "//register UART1_MODEM  *(volatile $uint8_t  *)0x4006B00D // UART Modem Register\n"
  "//register UART1_IR  *(volatile $uint8_t  *)0x4006B00E // UART Infrared Register\n"
  "//register UART1_PFIFO  *(volatile $uint8_t  *)0x4006B010 // UART FIFO Parameters\n"
  "//register UART1_CFIFO  *(volatile $uint8_t  *)0x4006B011 // UART FIFO Control Register\n"
  "//register UART1_SFIFO  *(volatile $uint8_t  *)0x4006B012 // UART FIFO Status Register\n"
  "//register UART1_TWFIFO  *(volatile $uint8_t  *)0x4006B013 // UART FIFO Transmit Watermark\n"
  "//register UART1_TCFIFO  *(volatile $uint8_t  *)0x4006B014 // UART FIFO Transmit Count\n"
  "//register UART1_RWFIFO  *(volatile $uint8_t  *)0x4006B015 // UART FIFO Receive Watermark\n"
  "//register UART1_RCFIFO  *(volatile $uint8_t  *)0x4006B016 // UART FIFO Receive Count\n"
  "//register UART1_C7816  *(volatile $uint8_t  *)0x4006B018 // UART 7816 Control Register\n"
  "//register UART1_IE7816  *(volatile $uint8_t  *)0x4006B019 // UART 7816 Interrupt Enable Register\n"
  "//register UART1_IS7816  *(volatile $uint8_t  *)0x4006B01A // UART 7816 Interrupt Status Register\n"
  "//register UART1_WP7816T0  *(volatile $uint8_t  *)0x4006B01B // UART 7816 Wait Parameter Register\n"
  "//register UART1_WP7816T1  *(volatile $uint8_t  *)0x4006B01B // UART 7816 Wait Parameter Register\n"
  "//register UART1_WN7816  *(volatile $uint8_t  *)0x4006B01C // UART 7816 Wait N Register\n"
  "//register UART1_WF7816  *(volatile $uint8_t  *)0x4006B01D // UART 7816 Wait FD Register\n"
  "//register UART1_ET7816  *(volatile $uint8_t  *)0x4006B01E // UART 7816 Error Threshold Register\n"
  "//register UART1_TL7816  *(volatile $uint8_t  *)0x4006B01F // UART 7816 Transmit Length Register\n"
  "//register UART1_C6  *(volatile $uint8_t  *)0x4006B021 // UART CEA709.1-B Control Register 6\n"
  "//register UART1_PCTH  *(volatile $uint8_t  *)0x4006B022 // UART CEA709.1-B Packet Cycle Time Counter High\n"
  "//register UART1_PCTL  *(volatile $uint8_t  *)0x4006B023 // UART CEA709.1-B Packet Cycle Time Counter Low\n"
  "//register UART1_B1T  *(volatile $uint8_t  *)0x4006B024 // UART CEA709.1-B Beta1 Timer\n"
  "//register UART1_SDTH  *(volatile $uint8_t  *)0x4006B025 // UART CEA709.1-B Secondary Delay Timer High\n"
  "//register UART1_SDTL  *(volatile $uint8_t  *)0x4006B026 // UART CEA709.1-B Secondary Delay Timer Low\n"
  "//register UART1_PRE  *(volatile $uint8_t  *)0x4006B027 // UART CEA709.1-B Preamble\n"
  "//register UART1_TPL  *(volatile $uint8_t  *)0x4006B028 // UART CEA709.1-B Transmit Packet Length\n"
  "//register UART1_IE  *(volatile $uint8_t  *)0x4006B029 // UART CEA709.1-B Interrupt Enable Register\n"
  "//register UART1_WB  *(volatile $uint8_t  *)0x4006B02A // UART CEA709.1-B WBASE\n"
  "//register UART1_S3  *(volatile $uint8_t  *)0x4006B02B // UART CEA709.1-B Status Register\n"
  "//register UART1_S4  *(volatile $uint8_t  *)0x4006B02C // UART CEA709.1-B Status Register\n"
  "//register UART1_RPL  *(volatile $uint8_t  *)0x4006B02D // UART CEA709.1-B Received Packet Length\n"
  "//register UART1_RPREL  *(volatile $uint8_t  *)0x4006B02E // UART CEA709.1-B Received Preamble Length\n"
  "//register UART1_CPW  *(volatile $uint8_t  *)0x4006B02F // UART CEA709.1-B Collision Pulse Width\n"
  "//register UART1_RIDT  *(volatile $uint8_t  *)0x4006B030 // UART CEA709.1-B Receive Indeterminate Time\n"
  "//register UART1_TIDT  *(volatile $uint8_t  *)0x4006B031 // UART CEA709.1-B Transmit Indeterminate Time\n"
  "//register UART2_BDH  *(volatile $uint8_t  *)0x4006C000 // UART Baud Rate Registers: High\n"
  "//register UART2_BDL  *(volatile $uint8_t  *)0x4006C001 // UART Baud Rate Registers: Low\n"
  "//register UART2_C1  *(volatile $uint8_t  *)0x4006C002 // UART Control Register 1\n"
  "//register UART2_C2  *(volatile $uint8_t  *)0x4006C003 // UART Control Register 2\n"
  "//register UART2_S1  *(volatile $uint8_t  *)0x4006C004 // UART Status Register 1\n"
  "//register UART2_S2  *(volatile $uint8_t  *)0x4006C005 // UART Status Register 2\n"
  "//register UART2_C3  *(volatile $uint8_t  *)0x4006C006 // UART Control Register 3\n"
  "//register UART2_D   *(volatile $uint8_t  *)0x4006C007 // UART Data Register\n"
  "//register UART2_MA1  *(volatile $uint8_t  *)0x4006C008 // UART Match Address Registers 1\n"
  "//register UART2_MA2  *(volatile $uint8_t  *)0x4006C009 // UART Match Address Registers 2\n"
  "//register UART2_C4  *(volatile $uint8_t  *)0x4006C00A // UART Control Register 4\n"
  "//register UART2_C5  *(volatile $uint8_t  *)0x4006C00B // UART Control Register 5\n"
  "//register UART2_ED  *(volatile $uint8_t  *)0x4006C00C // UART Extended Data Register\n"
  "//register UART2_MODEM  *(volatile $uint8_t  *)0x4006C00D // UART Modem Register\n"
  "//register UART2_IR  *(volatile $uint8_t  *)0x4006C00E // UART Infrared Register\n"
  "//register UART2_PFIFO  *(volatile $uint8_t  *)0x4006C010 // UART FIFO Parameters\n"
  "//register UART2_CFIFO  *(volatile $uint8_t  *)0x4006C011 // UART FIFO Control Register\n"
  "//register UART2_SFIFO  *(volatile $uint8_t  *)0x4006C012 // UART FIFO Status Register\n"
  "//register UART2_TWFIFO  *(volatile $uint8_t  *)0x4006C013 // UART FIFO Transmit Watermark\n"
  "//register UART2_TCFIFO  *(volatile $uint8_t  *)0x4006C014 // UART FIFO Transmit Count\n"
  "//register UART2_RWFIFO  *(volatile $uint8_t  *)0x4006C015 // UART FIFO Receive Watermark\n"
  "//register UART2_RCFIFO  *(volatile $uint8_t  *)0x4006C016 // UART FIFO Receive Count\n"
  "//register UART2_C7816  *(volatile $uint8_t  *)0x4006C018 // UART 7816 Control Register\n"
  "//register UART2_IE7816  *(volatile $uint8_t  *)0x4006C019 // UART 7816 Interrupt Enable Register\n"
  "//register UART2_IS7816  *(volatile $uint8_t  *)0x4006C01A // UART 7816 Interrupt Status Register\n"
  "//register UART2_WP7816T0  *(volatile $uint8_t  *)0x4006C01B // UART 7816 Wait Parameter Register\n"
  "//register UART2_WP7816T1  *(volatile $uint8_t  *)0x4006C01B // UART 7816 Wait Parameter Register\n"
  "//register UART2_WN7816  *(volatile $uint8_t  *)0x4006C01C // UART 7816 Wait N Register\n"
  "//register UART2_WF7816  *(volatile $uint8_t  *)0x4006C01D // UART 7816 Wait FD Register\n"
  "//register UART2_ET7816  *(volatile $uint8_t  *)0x4006C01E // UART 7816 Error Threshold Register\n"
  "//register UART2_TL7816  *(volatile $uint8_t  *)0x4006C01F // UART 7816 Transmit Length Register\n"
  "//register UART2_C6  *(volatile $uint8_t  *)0x4006C021 // UART CEA709.1-B Control Register 6\n"
  "//register UART2_PCTH  *(volatile $uint8_t  *)0x4006C022 // UART CEA709.1-B Packet Cycle Time Counter High\n"
  "//register UART2_PCTL  *(volatile $uint8_t  *)0x4006C023 // UART CEA709.1-B Packet Cycle Time Counter Low\n"
  "//register UART2_B1T  *(volatile $uint8_t  *)0x4006C024 // UART CEA709.1-B Beta1 Timer\n"
  "//register UART2_SDTH  *(volatile $uint8_t  *)0x4006C025 // UART CEA709.1-B Secondary Delay Timer High\n"
  "//register UART2_SDTL  *(volatile $uint8_t  *)0x4006C026 // UART CEA709.1-B Secondary Delay Timer Low\n"
  "//register UART2_PRE  *(volatile $uint8_t  *)0x4006C027 // UART CEA709.1-B Preamble\n"
  "//register UART2_TPL  *(volatile $uint8_t  *)0x4006C028 // UART CEA709.1-B Transmit Packet Length\n"
  "//register UART2_IE  *(volatile $uint8_t  *)0x4006C029 // UART CEA709.1-B Interrupt Enable Register\n"
  "//register UART2_WB  *(volatile $uint8_t  *)0x4006C02A // UART CEA709.1-B WBASE\n"
  "//register UART2_S3  *(volatile $uint8_t  *)0x4006C02B // UART CEA709.1-B Status Register\n"
  "//register UART2_S4  *(volatile $uint8_t  *)0x4006C02C // UART CEA709.1-B Status Register\n"
  "//register UART2_RPL  *(volatile $uint8_t  *)0x4006C02D // UART CEA709.1-B Received Packet Length\n"
  "//register UART2_RPREL  *(volatile $uint8_t  *)0x4006C02E // UART CEA709.1-B Received Preamble Length\n"
  "//register UART2_CPW  *(volatile $uint8_t  *)0x4006C02F // UART CEA709.1-B Collision Pulse Width\n"
  "//register UART2_RIDT  *(volatile $uint8_t  *)0x4006C030 // UART CEA709.1-B Receive Indeterminate Time\n"
  "//register UART2_TIDT  *(volatile $uint8_t  *)0x4006C031 // UART CEA709.1-B Transmit Indeterminate Time\n"
  "//\n"
  "//// Chapter 46: Synchronous Audio Interface (SAI)\n"
  "//register I2S0_TCSR   0x4002F000 // SAI Transmit Control Register\n"
  "//register I2S_TCSR_TE    0x80000000 // Transmitter Enable\n"
  "//register I2S_TCSR_STOPE    0x40000000 // Transmitter Enable in Stop mode\n"
  "//register I2S_TCSR_DBGE    0x20000000 // Transmitter Enable in Debug mode\n"
  "//register I2S_TCSR_BCE    0x10000000 // Bit Clock Enable\n"
  "//register I2S_TCSR_FR    0x02000000 // FIFO Reset\n"
  "//register I2S_TCSR_SR    0x01000000 // Software Reset\n"
  "//register I2S_TCSR_WSF    0x00100000 // Word Start Flag\n"
  "//register I2S_TCSR_SEF    0x00080000 // Sync Error Flag\n"
  "//register I2S_TCSR_FEF    0x00040000 // FIFO Error Flag (underrun)\n"
  "//register I2S_TCSR_FWF    0x00020000 // FIFO Warning Flag (empty)\n"
  "//register I2S_TCSR_FRF    0x00010000 // FIFO Request Flag (Data Ready)\n"
  "//register I2S_TCSR_WSIE    0x00001000 // Word Start Interrupt Enable\n"
  "//register I2S_TCSR_SEIE    0x00000800 // Sync Error Interrupt Enable\n"
  "//register I2S_TCSR_FEIE    0x00000400 // FIFO Error Interrupt Enable\n"
  "//register I2S_TCSR_FWIE    0x00000200 // FIFO Warning Interrupt Enable\n"
  "//register I2S_TCSR_FRIE    0x00000100 // FIFO Request Interrupt Enable\n"
  "//register I2S_TCSR_FWDE    0x00000002 // FIFO Warning DMA Enable\n"
  "//register I2S_TCSR_FRDE    0x00000001 // FIFO Request DMA Enable\n"
  "//register I2S0_TCR1   0x4002F004 // SAI Transmit Configuration 1 Register\n"
  "//register I2S_TCR1_TFW(n)   ( n & 0x03)       // Transmit FIFO watermark\n"
  "//register I2S0_TCR2   0x4002F008 // SAI Transmit Configuration 2 Register\n"
  "//register I2S_TCR2_DIV(n)   ( n & 0xff)       // Bit clock divide by (DIV+1)*2\n"
  "//register I2S_TCR2_BCD   ( 1<<24)       // Bit clock direction\n"
  "//register I2S_TCR2_BCP   ( 1<<25)       // Bit clock polarity\n"
  "//register I2S_TCR2_MSEL(n)  ( (n & 3)<<26)       // MCLK select, 0=bus clock, 1=I2S0_MCLK\n"
  "//register I2S_TCR2_BCI   ( 1<<28)       // Bit clock input\n"
  "//register I2S_TCR2_BCS   ( 1<<29)       // Bit clock swap\n"
  "//register I2S_TCR2_SYNC(n)  ( (n & 3)<<30)       // 0=async 1=sync with receiver\n"
  "//register I2S0_TCR3   0x4002F00C // SAI Transmit Configuration 3 Register\n"
  "//register I2S_TCR3_WDFL(n)  ( n & 0x0f)       // word flag configuration\n"
  "//register I2S_TCR3_TCE   ( 0x10000)       // transmit channel enable\n"
  "//register I2S0_TCR4   0x4002F010 // SAI Transmit Configuration 4 Register\n"
  "//register I2S_TCR4_FSD   ( 1)        // Frame Sync Direction\n"
  "//register I2S_TCR4_FSP   ( 2)        // Frame Sync Polarity\n"
  "//register I2S_TCR4_FSE   ( 8)        // Frame Sync Early\n"
  "//register I2S_TCR4_MF   ( 0x10)       // MSB First\n"
  "//register I2S_TCR4_SYWD(n)  ( (n & 0x1f)<<8)     // Sync Width\n"
  "//register I2S_TCR4_FRSZ(n)  ( (n & 0x0f)<<16)    // Frame Size\n"
  "//register I2S0_TCR5   0x4002F014 // SAI Transmit Configuration 5 Register\n"
  "//register I2S_TCR5_FBT(n)   ( (n & 0x1f)<<8)     // First Bit Shifted\n"
  "//register I2S_TCR5_W0W(n)   ( (n & 0x1f)<<16)    // Word 0 Width\n"
  "//register I2S_TCR5_WNW(n)   ( (n & 0x1f)<<24)    // Word N Width\n"
  "//register I2S0_TDR0   0x4002F020 // SAI Transmit Data Register\n"
  "//register I2S0_TDR1   0x4002F024 // SAI Transmit Data Register\n"
  "//register I2S0_TFR0   0x4002F040 // SAI Transmit FIFO Register\n"
  "//register I2S0_TFR1   0x4002F044 // SAI Transmit FIFO Register\n"
  "//register I2S_TFR_RFP(n)   ( n & 7)       // read FIFO pointer\n"
  "//register I2S_TFR_WFP(n)   ( (n & 7)<<16)       // write FIFO pointer\n"
  "//register I2S0_TMR   0x4002F060 // SAI Transmit Mask Register\n"
  "//register I2S_TMR_TWM(n)   ( n & 0xFFFFFFFF)\n"
  "//register I2S0_RCSR   0x4002F080 // SAI Receive Control Register\n"
  "//register I2S_RCSR_RE    0x80000000 // Receiver Enable\n"
  "//register I2S_RCSR_STOPE    0x40000000 // Receiver Enable in Stop mode\n"
  "//register I2S_RCSR_DBGE    0x20000000 // Receiver Enable in Debug mode\n"
  "//register I2S_RCSR_BCE    0x10000000 // Bit Clock Enable\n"
  "//register I2S_RCSR_FR    0x02000000 // FIFO Reset\n"
  "//register I2S_RCSR_SR    0x01000000 // Software Reset\n"
  "//register I2S_RCSR_WSF    0x00100000 // Word Start Flag\n"
  "//register I2S_RCSR_SEF    0x00080000 // Sync Error Flag\n"
  "//register I2S_RCSR_FEF    0x00040000 // FIFO Error Flag (underrun)\n"
  "//register I2S_RCSR_FWF    0x00020000 // FIFO Warning Flag (empty)\n"
  "//register I2S_RCSR_FRF    0x00010000 // FIFO Request Flag (Data Ready)\n"
  "//register I2S_RCSR_WSIE    0x00001000 // Word Start Interrupt Enable\n"
  "//register I2S_RCSR_SEIE    0x00000800 // Sync Error Interrupt Enable\n"
  "//register I2S_RCSR_FEIE    0x00000400 // FIFO Error Interrupt Enable\n"
  "//register I2S_RCSR_FWIE    0x00000200 // FIFO Warning Interrupt Enable\n"
  "//register I2S_RCSR_FRIE    0x00000100 // FIFO Request Interrupt Enable\n"
  "//register I2S_RCSR_FWDE    0x00000002 // FIFO Warning DMA Enable\n"
  "//register I2S_RCSR_FRDE    0x00000001 // FIFO Request DMA Enable\n"
  "//register I2S0_RCR1   0x4002F084 // SAI Receive Configuration 1 Register\n"
  "//register I2S_RCR1_RFW(n)   ( n & 0x03)       // Receive FIFO watermark\n"
  "//register I2S0_RCR2   0x4002F088 // SAI Receive Configuration 2 Register\n"
  "//register I2S_RCR2_DIV(n)   ( n & 0xff)       // Bit clock divide by (DIV+1)*2\n"
  "//register I2S_RCR2_BCD   ( 1<<24)       // Bit clock direction\n"
  "//register I2S_RCR2_BCP   ( 1<<25)       // Bit clock polarity\n"
  "//register I2S_RCR2_MSEL(n)  ( (n & 3)<<26)       // MCLK select, 0=bus clock, 1=I2S0_MCLK\n"
  "//register I2S_RCR2_BCI   ( 1<<28)       // Bit clock input\n"
  "//register I2S_RCR2_BCS   ( 1<<29)       // Bit clock swap\n"
  "//register I2S_RCR2_SYNC(n)  ( (n & 3)<<30)       // 0=async 1=sync with receiver\n"
  "//register I2S0_RCR3   0x4002F08C // SAI Receive Configuration 3 Register\n"
  "//register I2S_RCR3_WDFL(n)  ( n & 0x0f)       // word flag configuration\n"
  "//register I2S_RCR3_RCE   ( 0x10000)       // receive channel enable\n"
  "//register I2S0_RCR4   0x4002F090 // SAI Receive Configuration 4 Register\n"
  "//register I2S_RCR4_FSD   ( 1)        // Frame Sync Direction\n"
  "//register I2S_RCR4_FSP   ( 2)        // Frame Sync Polarity\n"
  "//register I2S_RCR4_FSE   ( 8)        // Frame Sync Early\n"
  "//register I2S_RCR4_MF   ( 0x10)       // MSB First\n"
  "//register I2S_RCR4_SYWD(n)  ( (n & 0x1f)<<8)     // Sync Width\n"
  "//register I2S_RCR4_FRSZ(n)  ( (n & 0x0f)<<16)    // Frame Size\n"
  "//register I2S0_RCR5   0x4002F094 // SAI Receive Configuration 5 Register\n"
  "//register I2S_RCR5_FBT(n)   ( (n & 0x1f)<<8)     // First Bit Shifted\n"
  "//register I2S_RCR5_W0W(n)   ( (n & 0x1f)<<16)    // Word 0 Width\n"
  "//register I2S_RCR5_WNW(n)   ( (n & 0x1f)<<24)    // Word N Width\n"
  "//register I2S0_RDR0   0x4002F0A0 // SAI Receive Data Register\n"
  "//register I2S0_RDR1   0x4002F0A4 // SAI Receive Data Register\n"
  "//register I2S0_RFR0   0x4002F0C0 // SAI Receive FIFO Register\n"
  "//register I2S0_RFR1   0x4002F0C4 // SAI Receive FIFO Register\n"
  "//register I2S_RFR_RFP(n)   ( n & 7)       // read FIFO pointer\n"
  "//register I2S_RFR_WFP(n)   ( (n & 7)<<16)       // write FIFO pointer\n"
  "//register I2S0_RMR   0x4002F0E0 // SAI Receive Mask Register\n"
  "//register I2S_RMR_RWM(n)   ( n & 0xFFFFFFFF)\n"
  "//register I2S0_MCR   0x4002F100 // SAI MCLK Control Register\n"
  "//register I2S_MCR_DUF   ( 1<<31)       // Divider Update Flag\n"
  "//register I2S_MCR_MOE   ( 1<<30)       // MCLK Output Enable\n"
  "//register I2S_MCR_MICS(n)   ( (n & 3)<<24)       // MCLK Input Clock Select\n"
  "//register I2S0_MDR   0x4002F104 // SAI MCLK Divide Register\n"
  "//register I2S_MDR_FRACT(n)  ( (n & 0xff)<<12)    // MCLK Fraction\n"
  "//register I2S_MDR_DIVIDE(n)  ( (n & 0xfff))       // MCLK Divide\n"
  "\n"
  "// Chapter 47: General-Purpose Input/Output (GPIO)\n"
  "register GPIOA_PDOR   at 0x400FF000 $uint32 // Port Data Output Register\n"
  "register GPIOA_PSOR   at 0x400FF004 $uint32 // Port Set Output Register\n"
  "register GPIOA_PCOR   at 0x400FF008 $uint32 // Port Clear Output Register\n"
  "register GPIOA_PTOR   at 0x400FF00C $uint32 // Port Toggle Output Register\n"
  "register GPIOA_PDIR   at 0x400FF010 $uint32 // Port Data Input Register\n"
  "register GPIOA_PDDR   at 0x400FF014 $uint32 // Port Data Direction Register\n"
  "register GPIOB_PDOR   at 0x400FF040 $uint32 // Port Data Output Register\n"
  "register GPIOB_PSOR   at 0x400FF044 $uint32 // Port Set Output Register\n"
  "register GPIOB_PCOR   at 0x400FF048 $uint32 // Port Clear Output Register\n"
  "register GPIOB_PTOR   at 0x400FF04C $uint32 // Port Toggle Output Register\n"
  "register GPIOB_PDIR   at 0x400FF050 $uint32 // Port Data Input Register\n"
  "register GPIOB_PDDR   at 0x400FF054 $uint32 // Port Data Direction Register\n"
  "register GPIOC_PDOR   at 0x400FF080 $uint32 // Port Data Output Register\n"
  "register GPIOC_PSOR   at 0x400FF084 $uint32 // Port Set Output Register\n"
  "register GPIOC_PCOR   at 0x400FF088 $uint32 // Port Clear Output Register\n"
  "register GPIOC_PTOR   at 0x400FF08C $uint32 // Port Toggle Output Register\n"
  "register GPIOC_PDIR   at 0x400FF090 $uint32 // Port Data Input Register\n"
  "register GPIOC_PDDR   at 0x400FF094 $uint32 // Port Data Direction Register\n"
  "register GPIOD_PDOR   at 0x400FF0C0 $uint32 // Port Data Output Register\n"
  "register GPIOD_PSOR   at 0x400FF0C4 $uint32 // Port Set Output Register\n"
  "register GPIOD_PCOR   at 0x400FF0C8 $uint32 // Port Clear Output Register\n"
  "register GPIOD_PTOR   at 0x400FF0CC $uint32 // Port Toggle Output Register\n"
  "register GPIOD_PDIR   at 0x400FF0D0 $uint32 // Port Data Input Register\n"
  "register GPIOD_PDDR   at 0x400FF0D4 $uint32 // Port Data Direction Register\n"
  "register GPIOE_PDOR   at 0x400FF100 $uint32 // Port Data Output Register\n"
  "register GPIOE_PSOR   at 0x400FF104 $uint32 // Port Set Output Register\n"
  "register GPIOE_PCOR   at 0x400FF108 $uint32 // Port Clear Output Register\n"
  "register GPIOE_PTOR   at 0x400FF10C $uint32 // Port Toggle Output Register\n"
  "register GPIOE_PDIR   at 0x400FF110 $uint32 // Port Data Input Register\n"
  "register GPIOE_PDDR   at 0x400FF114 $uint32 // Port Data Direction Register\n"
  "//\n"
  "//// Chapter 48: Touch sense input (TSI)\n"
  "//register TSI0_GENCS   0x40045000 // General Control and Status Register\n"
  "//register TSI_GENCS_LPCLKS   0x10000000  // \n"
  "//register TSI_GENCS_LPSCNITV(n)  (((n) & 15) << 24)  // \n"
  "//register TSI_GENCS_NSCN(n)  (((n) & 31) << 19)  // \n"
  "//register TSI_GENCS_PS(n)   (((n) & 7) << 16)  // \n"
  "//register TSI_GENCS_EOSF    0x00008000  // \n"
  "//register TSI_GENCS_OUTRGF   0x00004000  // \n"
  "//register TSI_GENCS_EXTERF   0x00002000  // \n"
  "//register TSI_GENCS_OVRF    0x00001000  // \n"
  "//register TSI_GENCS_SCNIP    0x00000200  // \n"
  "//register TSI_GENCS_SWTS    0x00000100  // \n"
  "//register TSI_GENCS_TSIEN    0x00000080  // \n"
  "//register TSI_GENCS_TSIIE    0x00000040  // \n"
  "//register TSI_GENCS_ERIE    0x00000020  // \n"
  "//register TSI_GENCS_ESOR    0x00000010  // \n"
  "//register TSI_GENCS_STM    0x00000002  // \n"
  "//register TSI_GENCS_STPE    0x00000001  // \n"
  "//register TSI0_SCANC   0x40045004 // SCAN Control Register\n"
  "//register TSI_SCANC_REFCHRG(n)  (((n) & 15) << 24)  // \n"
  "//register TSI_SCANC_EXTCHRG(n)  (((n) & 7) << 16)  // \n"
  "//register TSI_SCANC_SMOD(n)  (((n) & 255) << 8)  // \n"
  "//register TSI_SCANC_AMCLKS(n)  (((n) & 3) << 3)  // \n"
  "//register TSI_SCANC_AMPSC(n)  (((n) & 7) << 0)  // \n"
  "//register TSI0_PEN   0x40045008 // Pin Enable Register\n"
  "//register TSI0_WUCNTR   0x4004500C // Wake-Up Channel Counter Register\n"
  "//register TSI0_CNTR1   0x40045100 // Counter Register\n"
  "//register TSI0_CNTR3   0x40045104 // Counter Register\n"
  "//register TSI0_CNTR5   0x40045108 // Counter Register\n"
  "//register TSI0_CNTR7   0x4004510C // Counter Register\n"
  "//register TSI0_CNTR9   0x40045110 // Counter Register\n"
  "//register TSI0_CNTR11   0x40045114 // Counter Register\n"
  "//register TSI0_CNTR13   0x40045118 // Counter Register\n"
  "//register TSI0_CNTR15   0x4004511C // Counter Register\n"
  "//register TSI0_THRESHOLD   0x40045120 // Low Power Channel Threshold Register\n"
  "//\n"
  "//// Nested Vectored Interrupt Controller, Table 3-4 & ARMv7 ref, appendix B3.4 (page 750)\n"
  "//register NVIC_ENABLE_IRQ(n) (*((volatile $uint32_t *)0xE000E100 + (n >> 5)) = (1 << (n & 31)))\n"
  "//register NVIC_DISABLE_IRQ(n) (*((volatile $uint32_t *)0xE000E180 + (n >> 5)) = (1 << (n & 31)))\n"
  "//register NVIC_SET_PENDING(n) (*((volatile $uint32_t *)0xE000E200 + (n >> 5)) = (1 << (n & 31)))\n"
  "//register NVIC_CLEAR_PENDING(n) (*((volatile $uint32_t *)0xE000E280 + (n >> 5)) = (1 << (n & 31)))\n"
  "//\n"
  "//register NVIC_ISER0   0xE000E100\n"
  "//register NVIC_ISER1   0xE000E104\n"
  "//register NVIC_ICER0   0xE000E180\n"
  "//register NVIC_ICER1   0xE000E184\n"
  "//\n"
  "//// 0 = highest priority\n"
  "//// Cortex-M4: 0,16,32,48,64,80,96,112,128,144,160,176,192,208,224,240\n"
  "//// Cortex-M0: 0,64,128,192\n"
  "//register NVIC_SET_PRIORITY(irqnum, priority)  (*((volatile $uint8_t *)0xE000E400 + (irqnum)) = ($uint8_t)(priority))\n"
  "//register NVIC_GET_PRIORITY(irqnum) (*(($uint8_t *)0xE000E400 + (irqnum)))\n"
  "//\n"
  "//register IRQ_DMA_CH0  0\n"
  "//register IRQ_DMA_CH1  1\n"
  "//register IRQ_DMA_CH2  2\n"
  "//register IRQ_DMA_CH3  3\n"
  "//register IRQ_DMA_CH4  4\n"
  "//register IRQ_DMA_CH5  5\n"
  "//register IRQ_DMA_CH6  6\n"
  "//register IRQ_DMA_CH7  7\n"
  "//register IRQ_DMA_CH8  8\n"
  "//register IRQ_DMA_CH9  9\n"
  "//register IRQ_DMA_CH10  10\n"
  "//register IRQ_DMA_CH11  11\n"
  "//register IRQ_DMA_CH12  12\n"
  "//register IRQ_DMA_CH13  13\n"
  "//register IRQ_DMA_CH14  14\n"
  "//register IRQ_DMA_CH15  15\n"
  "//register IRQ_DMA_ERROR  16\n"
  "//register IRQ_FTFL_COMPLETE 18\n"
  "//register IRQ_FTFL_COLLISION 19\n"
  "//register IRQ_LOW_VOLTAGE  20\n"
  "//register IRQ_LLWU  21\n"
  "//register IRQ_WDOG  22\n"
  "//register IRQ_I2C0  24\n"
  "//register IRQ_I2C1  25\n"
  "//register IRQ_SPI0  26\n"
  "//register IRQ_SPI1  27\n"
  "//register IRQ_CAN_MESSAGE  29\n"
  "//register IRQ_CAN_BUS_OFF  30\n"
  "//register IRQ_CAN_ERROR  31\n"
  "//register IRQ_CAN_TX_WARN  32\n"
  "//register IRQ_CAN_RX_WARN  33\n"
  "//register IRQ_CAN_WAKEUP  34\n"
  "//register IRQ_I2S0_TX  35\n"
  "//register IRQ_I2S0_RX  36\n"
  "//register IRQ_UART0_LON  44\n"
  "//register IRQ_UART0_STATUS 45\n"
  "//register IRQ_UART0_ERROR  46\n"
  "//register IRQ_UART1_STATUS 47\n"
  "//register IRQ_UART1_ERROR  48\n"
  "//register IRQ_UART2_STATUS 49\n"
  "//register IRQ_UART2_ERROR  50\n"
  "//register IRQ_ADC0  57\n"
  "//register IRQ_ADC1  58\n"
  "//register IRQ_CMP0  59\n"
  "//register IRQ_CMP1  60\n"
  "//register IRQ_CMP2  61\n"
  "//register IRQ_FTM0  62\n"
  "//register IRQ_FTM1  63\n"
  "//register IRQ_FTM2  64\n"
  "//register IRQ_CMT   65\n"
  "//register IRQ_RTC_ALARM  66\n"
  "//register IRQ_RTC_SECOND  67\n"
  "//register IRQ_PIT_CH0  68\n"
  "//register IRQ_PIT_CH1  69\n"
  "//register IRQ_PIT_CH2  70\n"
  "//register IRQ_PIT_CH3  71\n"
  "//register IRQ_PDB   72\n"
  "//register IRQ_USBOTG  73\n"
  "//register IRQ_USBDCD  74\n"
  "//register IRQ_DAC0  81\n"
  "//register IRQ_TSI   83\n"
  "//register IRQ_MCG   84\n"
  "//register IRQ_LPTMR  85\n"
  "//register IRQ_PORTA  87\n"
  "//register IRQ_PORTB  88\n"
  "//register IRQ_PORTC  89\n"
  "//register IRQ_PORTD  90\n"
  "//register IRQ_PORTE  91\n"
  "//register IRQ_SOFTWARE  94\n"
  "//register NVIC_NUM_INTERRUPTS 95\n"
  "//\n"
  "\n"
  "//System Control Space (SCS), ARMv7 ref manual, B3.2, page 708\n"
  "//register SCB_CPUID  *(const    $uint32_t *)0xE000ED00 // CPUID Base Register\n"
  "\n"
  "register ICSR at 0xE000_ED04 $uint32 { // Interrupt Control and State\n"
  "  NMIPENDSET, 2, PENDSVSET, PENDSVCLR, PENDSTSET, PENDSTCLR, 1, ISRPREEMPT,\n"
  "  ISRPENDING, 1, VECTPENDING[9], RETTOBASE, 2, VECTACTIVE[9]\n"
  "}\n"
  "\n"
  "register VTOR at 0xE000ED08 $uint32 // Vector Table Offset\n"
  "\n"
  "register AIRCR at 0xE000ED0C $uint32 { // Application Interrupt and Reset Control\n"
  "  VECTKEY[16], ENDIANNESS, 4, PRIGROUP[3],\n"
  "  5, SYSRESETREQ, VECTCLRACTIVE, VECTRESET \n"
  "}\n"
  "\n"
  "//register SCB_SCR    0xE000ED10 // System Control Register\n"
  "//register SCB_CCR    0xE000ED14 // Configuration and Control\n"
  "//register SCB_SHPR1   0xE000ED18 // System Handler Priority Register 1\n"
  "//register SCB_SHPR2   0xE000ED1C // System Handler Priority Register 2\n"
  "//register SCB_SHPR3   0xE000ED20 // System Handler Priority Register 3\n"
  "//register SCB_SHCSR   0xE000ED24 // System Handler Control and State\n"
  "//register SCB_CFSR   0xE000ED28 // Configurable Fault Status Register\n"
  "//register SCB_HFSR   0xE000ED2C // HardFault Status\n"
  "//register SCB_DFSR   0xE000ED30 // Debug Fault Status\n"
  "//register SCB_MMFAR   0xE000ED34 // MemManage Fault Address\n"
  "\n"
  "register SYST_CSR at 0xE000_E010 $uint32 { // SysTick Control and Status\n"
  "  15, \n"
  "  COUNTFLAG,\n"
  "  13,\n"
  "  CLKSOURCE,\n"
  "  TICKINT,\n"
  "  ENABLE\n"
  "}\n"
  "\n"
  "register SYST_RVR   at 0xE000_E014 $uint32 // SysTick Reload Value Register\n"
  "\n"
  "register SYST_CVR   at 0xE000_E018 $uint32 // SysTick Current Value Register\n"
  "\n"
  "register SYST_CALIB  @ro at 0xE000_E01C $uint32 // SysTick Calibration Value\n"
  "\n"
  "\n"
  "//register ARM_DEMCR   0xE000EDFC // Debug Exception and Monitor Control\n"
  "//register ARM_DEMCR_TRCENA  (1 << 24)  // Enable debugging & monitoring blocks\n"
  "//register ARM_DWT_CTRL   0xE0001000 // DWT control register\n"
  "//register ARM_DWT_CTRL_CYCCNTENA  (1 << 0)  // Enable cycle count\n"
  "//register ARM_DWT_CYCCNT   0xE0001004 // Cycle count register\n" ;

const cRegularFileWrapper gWrapperFile_8_targetTemplates (
  "mk20dx256.plm",
  "plm",
  true, // Text file
  135562, // Text length
  gWrapperFileContent_8_targetTemplates
) ;

//--- All files of 'files' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_1 [6] = {
  & gWrapperFile_4_targetTemplates,
  & gWrapperFile_5_targetTemplates,
  & gWrapperFile_6_targetTemplates,
  & gWrapperFile_7_targetTemplates,
  & gWrapperFile_8_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'files' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_1 [1] = {
  NULL
} ;

//--- Directory 'files'

const cDirectoryWrapper gWrapperDirectory_1_targetTemplates (
  "files",
  5,
  gWrapperAllFiles_targetTemplates_1,
  0,
  gWrapperAllDirectories_targetTemplates_1
) ;

//--- File 'teensy-3-1-interrupt/build-verbose.py'

const char * gWrapperFileContent_9_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_9_targetTemplates (
  "build-verbose.py",
  "py",
  true, // Text file
  1002, // Text length
  gWrapperFileContent_9_targetTemplates
) ;

//--- File 'teensy-3-1-interrupt/build.py'

const char * gWrapperFileContent_10_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess, sys, os, copy\n"
  "import urllib, shutil\n"
  "import subprocess, re\n"
  "from time import time\n"
  "import platform\n"
  "import json\n"
  "import threading, operator\n"
  "\n"
  "if sys.version_info >= (2, 6) :\n"
  "  import multiprocessing\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   processorCount                                                                                                     *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def processorCount () :\n"
  "  if sys.version_info >= (2, 6) :\n"
  "    coreCount = multiprocessing.cpu_count ()\n"
  "  else:\n"
  "    coreCount = 1\n"
  "  return coreCount\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   FOR PRINTING IN COLOR                                                                                              *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLACK () :\n"
  "  return '\\033[90m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def RED () :\n"
  "  return '\\033[91m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def GREEN () :\n"
  "  return '\\033[92m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def YELLOW () :\n"
  "  return '\\033[93m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLUE () :\n"
  "  return '\\033[94m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def MAGENTA () :\n"
  "  return '\\033[95m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CYAN () :\n"
  "  return '\\033[96m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def WHITE () :\n"
  "  return '\\033[97m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def ENDC () :\n"
  "  return '\\033[0m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD () :\n"
  "  return '\\033[1m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def UNDERLINE () :\n"
  "  return '\\033[4m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BLINK () :\n"
  "  return '\\033[5m'\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD_BLUE () :\n"
  "  return BOLD () + BLUE ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD_GREEN () :\n"
  "  return BOLD () + GREEN ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def BOLD_RED () :\n"
  "  return BOLD () + RED ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runHiddenCommand                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runHiddenCommand (cmd) :\n"
  "  result = \"\"\n"
  "  childProcess = subprocess.Popen (cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)\n"
  "  while True:\n"
  "    line = childProcess.stdout.readline ()\n"
  "    if line != \"\":\n"
  "      result += line\n"
  "    else:\n"
  "      childProcess.wait ()\n"
  "      if childProcess.returncode != 0 :\n"
  "        sys.exit (childProcess.returncode)\n"
  "      return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runSingleCommand                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runSingleCommand (cmd) :\n"
  "  cmdAsString = \"\"\n"
  "  for s in cmd:\n"
  "    if (s == \"\") or (s.find (\" \") >= 0):\n"
  "      cmdAsString += '\"' + s + '\" '\n"
  "    else:\n"
  "      cmdAsString += s + ' '\n"
  "  print cmdAsString\n"
  "  childProcess = subprocess.Popen (cmd)\n"
  "  childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runCommand                                                                                                         *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runCommand (cmd, title, showCommand) :\n"
  "  if title != \"\":\n"
  "    print BOLD_BLUE () + title + ENDC ()\n"
  "  if (title == \"\") or showCommand :\n"
  "    cmdAsString = \"\"\n"
  "    for s in cmd:\n"
  "      if (s == \"\") or (s.find (\" \") >= 0):\n"
  "        cmdAsString += '\"' + s + '\" '\n"
  "      else:\n"
  "        cmdAsString += s + ' '\n"
  "    print cmdAsString\n"
  "  childProcess = subprocess.Popen (cmd)\n"
  "  childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   runInThread                                                                                                        *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runInThread (job, displayLock, terminationSemaphore):\n"
  "  childProcess = subprocess.Popen (job.mCommand, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)\n"
  "  while True:\n"
  "    line = childProcess.stdout.readline ()\n"
  "    if line != \"\":\n"
  "      displayLock.acquire ()\n"
  "      sys.stdout.write (line) # Print without newline\n"
  "      displayLock.release ()\n"
  "    else:\n"
  "      childProcess.wait ()\n"
  "      job.mReturnCode = childProcess.returncode\n"
  "      terminationSemaphore.release ()\n"
  "      break\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   modificationDateForFile                                                                                            *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def modificationDateForFile (dateCacheDictionary, file):\n"
  "  absFilePath = os.path.abspath (file)\n"
  "  if dateCacheDictionary.has_key (absFilePath) :\n"
  "    return dateCacheDictionary [absFilePath]\n"
  "  elif not os.path.exists (absFilePath):\n"
  "    date = sys.float_info.max # Very far in future\n"
  "    dateCacheDictionary [absFilePath] = date\n"
  "    return date\n"
  "  else:\n"
  "    date = os.path.getmtime (absFilePath)\n"
  "    dateCacheDictionary [absFilePath] = date\n"
  "    return date\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class PostCommand                                                                                                  *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class PostCommand:\n"
  "  mCommand = []\n"
  "  mTitle = \"\"\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def __init__ (self, title = \"\"):\n"
  "    self.mCommand = []\n"
  "    self.mTitle = title\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class Job                                                                                                          *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class Job:\n"
  "  mTarget = \"\"\n"
  "  mCommand = []\n"
  "  mTitle = \"\"\n"
  "  mRequiredFiles = []\n"
  "  mPostCommands = []\n"
  "  mReturnCode = None\n"
  "  mPriority = 0\n"
  "  mState = 0 # 0: waiting for execution\n"
  "  \n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def __init__ (self, target, requiredFiles, command, postCommands, priority, title):\n"
  "    self.mTarget = copy.deepcopy (target)\n"
  "    self.mCommand = copy.deepcopy (command)\n"
  "    self.mRequiredFiles = copy.deepcopy (requiredFiles)\n"
  "    self.mTitle = copy.deepcopy (title)\n"
  "    self.mPostCommands = copy.deepcopy (postCommands)\n"
  "    self.mPriority = priority\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def run (self, displayLock, terminationSemaphore, showCommand):\n"
  "    displayLock.acquire ()\n"
  "    if self.mTitle != \"\":\n"
  "      print BOLD_BLUE () + self.mTitle + ENDC ()\n"
  "    if (self.mTitle == \"\") or showCommand :\n"
  "      cmdAsString = \"\"\n"
  "      for s in self.mCommand:\n"
  "        if (s == \"\") or (s.find (\" \") >= 0):\n"
  "          cmdAsString += '\"' + s + '\" '\n"
  "        else:\n"
  "          cmdAsString += s + ' '\n"
  "      print cmdAsString\n"
  "    displayLock.release ()\n"
  "    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))\n"
  "    thread.start()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def runPostCommand (self, displayLock, terminationSemaphore, showCommand):\n"
  "    postCommand = self.mPostCommands [0]\n"
  "    self.mCommand = postCommand.mCommand\n"
  "    displayLock.acquire ()\n"
  "    print BOLD_BLUE () + postCommand.mTitle + ENDC ()\n"
  "    if showCommand:\n"
  "      cmdAsString = \"\"\n"
  "      for s in self.mCommand:\n"
  "        if (s == \"\") or (s.find (\" \") >= 0):\n"
  "          cmdAsString += '\"' + s + '\" '\n"
  "        else:\n"
  "          cmdAsString += s + ' '\n"
  "      print cmdAsString\n"
  "    displayLock.release ()\n"
  "    thread = threading.Thread (target=runInThread, args=(self, displayLock, terminationSemaphore))\n"
  "    thread.start()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class Rule                                                                                                         *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class Rule:\n"
  "  mTarget = \"\"\n"
  "  mDependences = []\n"
  "  mCommand = []\n"
  "  mSecondaryMostRecentModificationDate = 0.0 # Far in the past\n"
  "  mTitle = \"\"\n"
  "  mPostCommands = []\n"
  "  mPriority = 0\n"
  "  \n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def __init__ (self, target, title = \"\"):\n"
  "    self.mTarget = copy.deepcopy (target)\n"
  "    self.mDependences = []\n"
  "    self.mCommand = []\n"
  "    self.mSecondaryMostRecentModificationDate = 0.0\n"
  "    self.mPostCommands = []\n"
  "    self.mPriority = 0\n"
  "    if title == \"\":\n"
  "      self.mTitle = \"Building \" + target\n"
  "    else:\n"
  "      self.mTitle = copy.deepcopy (title)\n"
  "  \n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def enterSecondaryDependanceFile (self, secondaryDependanceFile):\n"
  "    if secondaryDependanceFile != \"\":\n"
  "      filePath = os.path.abspath (secondaryDependanceFile)\n"
  "      if os.path.exists (filePath):\n"
  "        f = open (filePath, \"r\")\n"
  "        s = f.read ().replace (\"\\\\ \", \"\\x01\") # Read and replace escaped spaces by \\0x01\n"
  "        f.close ()\n"
  "        s = s.replace (\"\\\\\\n\", \"\")\n"
  "        liste = s.split (\"\\n\\n\")\n"
  "        dateCacheDictionary = {}\n"
  "        for s in liste:\n"
  "          components = s.split (':')\n"
  "          target = components [0].replace (\"\\x01\", \" \")\n"
  "          #print \"------- Optional dependency rules for target '\" + target + \"'\"\n"
  "          #print \"Secondary target '\" + target + \"'\"\n"
  "          for src in components [1].split ():\n"
  "            secondarySource = src.replace (\"\\x01\", \" \")\n"
  "            #print \"  '\" + secondarySource + \"'\"\n"
  "            modifDate = modificationDateForFile (dateCacheDictionary, secondarySource)\n"
  "            if self.mSecondaryMostRecentModificationDate < modifDate :\n"
  "              self.mSecondaryMostRecentModificationDate = modifDate\n"
  "              #print BOLD_BLUE () + str (modifDate) + ENDC ()\n"
  "    \n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   class Make                                                                                                         *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "class Make:\n"
  "  mRuleList = []\n"
  "  mJobList = []\n"
  "  mErrorCount = 0\n"
  "  mModificationDateDictionary = {}\n"
  "  mGoals = {}\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def addRule (self, rule):\n"
  "    self.mRuleList.append (copy.deepcopy (rule))\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printRules (self):\n"
  "    print BOLD_BLUE () + \"--- Print the \" + str (len (self.mRuleList)) + \" rule\" + (\"s\" if len (self.mRuleList) > 1 else \"\") + \" ---\" + ENDC ()\n"
  "    for rule in self.mRuleList:\n"
  "      print BOLD_GREEN () + \"Target: '\" + rule.mTarget + \"'\" + ENDC ()\n"
  "      for dep in rule.mDependences:\n"
  "        print \"  Dependence: '\" + dep + \"'\"\n"
  "      s = \"  Command: \"\n"
  "      for cmd in rule.mCommand:\n"
  "        s += \" \\\"\" + cmd + \"\\\"\"\n"
  "      print s\n"
  "      print \"  Title: '\" + rule.mTitle + \"'\"\n"
  "      index = 0\n"
  "      for (command, title) in rule.mPostCommands:\n"
  "        index = index + 1\n"
  "        s = \"  Post command \" + str (index) + \": \"\n"
  "        for cmd in command:\n"
  "          s += \" \\\"\" + cmd + \"\\\"\"\n"
  "        print s\n"
  "        print \"  Its title: '\" + title + \"'\"\n"
  "        \n"
  "    print BOLD_BLUE () + \"--- End of print rule ---\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def writeRuleDependancesInDotFile (self, dotFileName):\n"
  "    s = \"digraph G {\\n\"\n"
  "    s += \"  node [fontname=courier]\\n\"\n"
  "    arrowSet = set ()\n"
  "    for rule in self.mRuleList:\n"
  "      s += '  \"' + rule.mTarget + '\" [shape=rectangle]\\n'\n"
  "      for dep in rule.mDependences:\n"
  "        arrowSet.add ('  \"' + rule.mTarget + '\" -> \"' + dep + '\"\\n')\n"
  "    for arrow in arrowSet:\n"
  "      s += arrow\n"
  "    s += \"}\\n\"\n"
  "    f = open (dotFileName, \"w\")\n"
  "    f.write (s)\n"
  "    f.close ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def checkRules (self):\n"
  "    if self.mErrorCount == 0:\n"
  "      ruleList = copy.deepcopy (self.mRuleList)\n"
  "      index = 0\n"
  "      looping = True\n"
  "    #--- loop on rules\n"
  "      while looping:\n"
  "        looping = False\n"
  "        while index < len (ruleList):\n"
  "          aRule = ruleList [index]\n"
  "          index = index + 1\n"
  "        #--- Check dependance files have rule for building, or does exist\n"
  "          depIdx = 0\n"
  "          while depIdx < len (aRule.mDependences):\n"
  "            dep = aRule.mDependences [depIdx]\n"
  "            depIdx = depIdx + 1\n"
  "            hasBuildRule = False\n"
  "            for r in ruleList:\n"
  "              if dep == r.mTarget:\n"
  "                hasBuildRule = True\n"
  "                break\n"
  "            if not hasBuildRule:\n"
  "              looping = True\n"
  "              if not os.path.exists (os.path.abspath (dep)):\n"
  "                self.mErrorCount = self.mErrorCount + 1\n"
  "                print BOLD_RED () + \"Check rules error: '\" + dep + \"' does not exist, and there is no rule for building it.\" + ENDC ()\n"
  "              depIdx = depIdx - 1\n"
  "              aRule.mDependences.pop (depIdx)\n"
  "        #--- Rule with no dependances\n"
  "          if len (aRule.mDependences) == 0 :\n"
  "            looping = True\n"
  "            index = index - 1\n"
  "            ruleList.pop (index)\n"
  "            idx = 0\n"
  "            while idx < len (ruleList):\n"
  "              r = ruleList [idx]\n"
  "              idx = idx + 1\n"
  "              while r.mDependences.count (aRule.mTarget) > 0 :\n"
  "                r.mDependences.remove (aRule.mTarget)\n"
  "    #--- Error if rules remain\n"
  "      if len (ruleList) > 0:\n"
  "        self.mErrorCount = self.mErrorCount + 1\n"
  "        print BOLD_RED () + \"Check rules error; circulary dependances between:\" + ENDC ()\n"
  "        for aRule in ruleList: \n"
  "          print BOLD_RED () + \"  - '\" + aRule.mTarget + \"', depends from:\" + ENDC ()\n"
  "          for dep in aRule.mDependences:\n"
  "            print BOLD_RED () + \"      '\" + dep + \"'\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def existsJobForTarget (self, target):\n"
  "    for job in self.mJobList:\n"
  "      if job.mTarget == target:\n"
  "        return True\n"
  "    return False\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def makeJob (self, target): # Return a bool indicating wheither the target should be built\n"
  "  #--- If there are errors, return immediatly\n"
  "    if self.mErrorCount != 0:\n"
  "      return False\n"
  "  #--- Target already in job list \?\n"
  "    if self.existsJobForTarget (target):\n"
  "      return True # yes, return target will be built\n"
  "  #--- Find a rule for making the target\n"
  "    absTarget = os.path.abspath (target)\n"
  "    rule = None\n"
  "    matchCount = 0\n"
  "    for r in self.mRuleList:\n"
  "      if target == r.mTarget:\n"
  "        matchCount = matchCount + 1\n"
  "        rule = r\n"
  "    if matchCount == 0:\n"
  "      absTarget = os.path.abspath (target)\n"
  "      if not os.path.exists (absTarget):\n"
  "        print BOLD_RED () + \"No rule for making '\" + target + \"'\" + ENDC ()\n"
  "        self.mErrorCount = self.mErrorCount + 1\n"
  "      return False # Error or target exists, and no rule for building it\n"
  "    elif matchCount > 1:\n"
  "      print BOLD_RED () + str (matchCount) + \" rules for making '\" + target + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "      return False # Error\n"
  "  #--- Target file does not exist, and 'rule' variable indicates how build it\n"
  "    appendToJobList = not os.path.exists (absTarget)\n"
  "  #--- Build primary dependences\n"
  "    jobDependenceFiles = []\n"
  "    for dependence in rule.mDependences:\n"
  "      willBeBuilt = self.makeJob (dependence)\n"
  "      if willBeBuilt:\n"
  "        jobDependenceFiles.append (dependence)\n"
  "        appendToJobList = True\n"
  "  #--- Check primary file modification dates\n"
  "    if not appendToJobList:\n"
  "      targetDateModification = os.path.getmtime (absTarget)\n"
  "      for source in rule.mDependences:\n"
  "        sourceDateModification = os.path.getmtime (source)\n"
  "        if targetDateModification < sourceDateModification:\n"
  "          appendToJobList = True\n"
  "          break\n"
  "  #--- Check for secondary dependancy files\n"
  "    if not appendToJobList:\n"
  "      targetDateModification = os.path.getmtime (absTarget)\n"
  "      if targetDateModification < rule.mSecondaryMostRecentModificationDate:\n"
  "        appendToJobList = True\n"
  "  #--- Append to job list\n"
  "    if appendToJobList:\n"
  "      self.mJobList.append (Job (target, jobDependenceFiles, rule.mCommand, rule.mPostCommands, rule.mPriority, rule.mTitle))\n"
  "  #--- Return\n"
  "    return appendToJobList\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "  #Job state\n"
  "  # 0: waiting\n"
  "  # 1:running\n"
  "  # 2: waiting for executing post command\n"
  "  # 3:executing for executing post command\n"
  "  # 4: completed\n"
  "\n"
  "  def runJobs (self, maxConcurrentJobs, showCommand):\n"
  "    if self.mErrorCount == 0:\n"
  "      if len (self.mJobList) == 0:\n"
  "        print BOLD_BLUE () + \"Nothing to make.\" + ENDC ()\n"
  "      else:\n"
  "      #--- Sort jobs following their priorities\n"
  "        self.mJobList = sorted (self.mJobList, key=operator.attrgetter(\"mPriority\"), reverse=True)\n"
  "      #--- Run\n"
  "        if maxConcurrentJobs <= 0:\n"
  "          maxConcurrentJobs = processorCount () - maxConcurrentJobs\n"
  "        jobCount = 0 ;\n"
  "        terminationSemaphore = threading.Semaphore (0)\n"
  "        displayLock = threading.Lock ()\n"
  "        loop = True\n"
  "        returnCode = 0\n"
  "        while loop:\n"
  "        #--- Launch jobs in parallel\n"
  "          for job in self.mJobList:\n"
  "            if (returnCode == 0) and (jobCount < maxConcurrentJobs):\n"
  "              if (job.mState == 0) and (len (job.mRequiredFiles) == 0):\n"
  "                #--- Create target directory if does not exist\n"
  "                absTargetDirectory = os.path.dirname (os.path.abspath (job.mTarget))\n"
  "                if not os.path.exists (absTargetDirectory):\n"
  "                  displayLock.acquire ()\n"
  "                  runCommand ([\"mkdir\", \"-p\", absTargetDirectory], \"Making \" + absTargetDirectory + \" directory\", showCommand)\n"
  "                  displayLock.release ()\n"
  "                #--- Run job\n"
  "                job.run (displayLock, terminationSemaphore, showCommand)\n"
  "                jobCount = jobCount + 1\n"
  "                job.mState = 1 # Means is running\n"
  "              elif job.mState == 2: # Waiting for executing post command\n"
  "                job.mReturnCode = None # Means post command not terminated\n"
  "                job.runPostCommand (displayLock, terminationSemaphore, showCommand)\n"
  "                jobCount = jobCount + 1\n"
  "                job.mState = 3 # Means post command is running\n"
  "        #--- Wait for a job termination\n"
  "          #print \"wait \" + str (jobCount) + \" \" + str (len (self.mJobList))\n"
  "          terminationSemaphore.acquire ()\n"
  "        #--- Checks for terminated jobs\n"
  "          index = 0\n"
  "          while index < len (self.mJobList):\n"
  "            job = self.mJobList [index]\n"
  "            index = index + 1\n"
  "            if (job.mState == 1) and (job.mReturnCode == 0) : # Terminated without error\n"
  "              jobCount = jobCount - 1\n"
  "              if len (job.mPostCommands) > 0:\n"
  "                job.mState = 2 # Ready to execute next post command\n"
  "              else:\n"
  "                job.mState = 4 # Completed\n"
  "                index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 1) and (job.mReturnCode > 0) : # terminated with error : exit\n"
  "              jobCount = jobCount - 1\n"
  "              job.mState = 4 # Means Terminated\n"
  "              index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 3) and (job.mReturnCode == 0): # post command is terminated without error\n"
  "              jobCount = jobCount - 1\n"
  "              job.mPostCommands.pop (0) # Remove completed post command\n"
  "              if len (job.mPostCommands) > 0:\n"
  "                job.mState = 2 # Ready to execute next post command\n"
  "              else:\n"
  "                job.mState = 4 # Completed\n"
  "                index = index - 1 # For removing job from list\n"
  "            elif (job.mState == 3) and (job.mReturnCode > 0): # post command is terminated with error\n"
  "              jobCount = jobCount - 1\n"
  "              job.mState = 4 # Completed\n"
  "              index = index - 1 # For removing job from list\n"
  "            elif job.mState == 4: # Completed: delete job\n"
  "              index = index - 1\n"
  "              self.mJobList.pop (index) # Remove terminated job\n"
  "              #displayLock.acquire ()\n"
  "              #print \"Completed '\" + job.mTitle + \"'\"\n"
  "              #--- Remove dependences from this job\n"
  "              idx = 0\n"
  "              while idx < len (self.mJobList):\n"
  "                aJob = self.mJobList [idx]\n"
  "                idx = idx + 1\n"
  "                while aJob.mRequiredFiles.count (job.mTarget) > 0 :\n"
  "                  aJob.mRequiredFiles.remove (job.mTarget)\n"
  "                  #print \"  Removed from '\" + aJob.mTitle + \"': \" + str (len (aJob.mRequiredFiles))\n"
  "              #displayLock.release ()\n"
  "              #--- Signal error \?\n"
  "              if (job.mReturnCode > 0) and (returnCode == 0):\n"
  "                self.mErrorCount = self.mErrorCount + 1\n"
  "                print BOLD_RED () + \"Return code: \" + str (job.mReturnCode) + ENDC ()\n"
  "                if (returnCode == 0) and (jobCount > 0) :\n"
  "                  print \"Wait for job termination...\"\n"
  "                returnCode = job.mReturnCode\n"
  "          loop = (len (self.mJobList) > 0) if (returnCode == 0) else (jobCount > 0)\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def searchFileInDirectories (self, file, directoryList): # returns \"\" if not found, register error\n"
  "    matchCount = 0\n"
  "    result = \"\"\n"
  "    for sourceDir in directoryList:\n"
  "      sourcePath = sourceDir + \"/\" + file\n"
  "      if os.path.exists (os.path.abspath (sourcePath)):\n"
  "        matchCount = matchCount + 1\n"
  "        result = sourcePath\n"
  "    if matchCount == 0:\n"
  "      print BOLD_RED () + \"Cannot find '\" + file + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "    elif matchCount > 1:\n"
  "      print BOLD_RED () + str (matchCount) + \" source files for making '\" + file + \"'\" + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "      result = \"\"\n"
  "    return result\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def addGoal (self, goal, targetList, message):\n"
  "    self.mGoals [goal] = (targetList, message)\n"
  "    #print '%s' % ', '.join(map(str, self.mGoals))\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printGoals (self):\n"
  "    print BOLD_BLUE () + \"--- Print the \" + str (len (self.mGoals)) + \" goal\" + (\"s\" if len (self.mGoals) > 1 else \"\") + \" ---\" + ENDC ()\n"
  "    for goalKey in self.mGoals.keys ():\n"
  "      print BOLD_GREEN () + \"Goal: '\" + goalKey + \"'\" + ENDC ()\n"
  "      (targetList, message) = self.mGoals [goalKey]\n"
  "      for target in targetList:\n"
  "        print \"  Target: '\" + target + \"'\"\n"
  "      print \"  Message: '\" + message + \"'\"\n"
  "        \n"
  "    print BOLD_BLUE () + \"--- End of print goals ---\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def runGoal (self, goal, maxConcurrentJobs, showCommand):\n"
  "    if self.mGoals.has_key (goal) :\n"
  "      (targetList, message) = self.mGoals [goal]\n"
  "      for target in targetList:\n"
  "        self.makeJob (target)\n"
  "      self.runJobs (maxConcurrentJobs, showCommand)\n"
  "    else:\n"
  "      errorMessage = \"The '\" + goal + \"' goal is not defined; defined goals:\"\n"
  "      for key in self.mGoals:\n"
  "        (targetList, message) = self.mGoals [key]\n"
  "        errorMessage += \"\\n  '\" + key + \"': \" + message\n"
  "      print BOLD_RED () + errorMessage + ENDC ()\n"
  "      self.mErrorCount = self.mErrorCount + 1\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def enterError (self, message):\n"
  "    print BOLD_RED () + message + ENDC ()\n"
  "    self.mErrorCount = self.mErrorCount + 1\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printErrorCountAndExitOnError (self):\n"
  "    if self.mErrorCount == 1:\n"
  "      print BOLD_RED () + \"1 error.\" + ENDC ()\n"
  "      sys.exit (1)\n"
  "    elif self.mErrorCount > 1:\n"
  "      print BOLD_RED () + str (self.mErrorCount) + \" errors.\" + ENDC ()\n"
  "      sys.exit (1)\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def printErrorCount (self):\n"
  "    if self.mErrorCount == 1:\n"
  "      print BOLD_RED () + \"1 error.\" + ENDC ()\n"
  "    elif self.mErrorCount > 1:\n"
  "      print BOLD_RED () + str (self.mErrorCount) + \" errors.\" + ENDC ()\n"
  "\n"
  "  #--------------------------------------------------------------------------*\n"
  "\n"
  "  def errorCount (self):\n"
  "    return self.mErrorCount\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Source files                                                                                                       *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def sourceList ():\n"
  "  return [\"plm.c\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Product directory                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def productDir ():\n"
  "  return \"product\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objectDir ():\n"
  "  return \"objects\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def asDir ():\n"
  "  return \"as\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Tool dir                                                                                                           *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def toolDir ():\n"
  "  (SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()\n"
  "  if SYSTEM_NAME == \"Darwin\":\n"
  "    MACHINE = \"i386\"\n"
  "  return os.path.expanduser (\"~/plm-tools/plm-\" + SYSTEM_NAME + \"-\" + MACHINE + \"-binutils-2.25-gcc-5.2.0-newlib-2.2.0.20150623-libusb-1.0.19\")\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Compiler invocation                                                                                                *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def compiler ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-gcc\", \"-mthumb\", \"-mcpu=cortex-m4\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Display object size invocation                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def displayObjectSize ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-size\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Object Dump invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def dumpObjectCode ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-objdump\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#    C Compiler options                                                                                                *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def cCompilerOptions ():\n"
  "  result = []\n"
  "  result.append (\"-Wall\")\n"
  "  result.append (\"-Werror\")\n"
  "  result.append (\"-Wreturn-type\")\n"
  "  result.append (\"-Wformat\")\n"
  "  result.append (\"-Wsign-compare\")\n"
  "  result.append (\"-Wpointer-arith\")\n"
  "  result.append (\"-Wparentheses\")\n"
  "  result.append (\"-Wcast-align\")\n"
  "  result.append (\"-Wcast-qual\")\n"
  "  result.append (\"-Wwrite-strings\")\n"
  "  result.append (\"-Wswitch\")\n"
  "  result.append (\"-Wuninitialized\")\n"
  "  result.append (\"-fno-builtin\")\n"
  "  result.append (\"-Wno-aggressive-loop-optimizations\")\n"
  "  result.append (\"-ffunction-sections\")\n"
  "  result.append (\"-fdata-sections\")\n"
  "  result.append (\"-std=c99\")\n"
  "  result.append (\"-Wstrict-prototypes\")\n"
  "  result.append (\"-Wbad-function-cast\")\n"
  "  result.append (\"-Wmissing-declarations\")\n"
  "  result.append (\"-Wimplicit-function-declaration\")\n"
  "  result.append (\"-Wno-int-to-pointer-cast\")\n"
  "  result.append (\"-Wno-pointer-to-int-cast\")\n"
  "  result.append (\"-Wmissing-prototypes\")\n"
  "  result.append (\"-Os\")\n"
  "  result.append (\"-fomit-frame-pointer\")\n"
  "  result.append (\"-foptimize-register-move\") \n"
  "  result.append (\"-I../build\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker invocation                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linker ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-gcc\", \"-mthumb\", \"-mcpu=cortex-m4\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker options                                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linkerOptions ():\n"
  "  result = []\n"
  "  result.append (\"-nostartfiles\")\n"
  "  result.append (\"-Wl,--fatal-warnings\")\n"
  "  result.append (\"-Wl,--warn-common\")\n"
  "  result.append (\"-Wl,--no-undefined\")\n"
  "  result.append (\"-Wl,--cref\")\n"
  "  result.append (\"-lc\")\n"
  "  result.append (\"-lgcc\")\n"
  "  result.append (\"-Wl,-static\")\n"
  "  result.append (\"-Wl,-s\")\n"
  "  result.append (\"-Wl,--gc-sections\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   objcopy invocation                                                                                                 *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objcopy ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-objcopy\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Teensy loader                                                                                                      *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def teensyLoader ():\n"
  "  return toolDir () + \"/bin/teensy-loader-cli\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#   ARCHIVE DOWNLOAD                                                                                                   *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def downloadReportHook (a,b,fileSize): \n"
  "  if fileSize < (1 << 10):\n"
  "    sizeString = str (fileSize)\n"
  "  else:\n"
  "    if fileSize < (1 << 20):\n"
  "      sizeString = str (fileSize >> 10) + \"Ki\"\n"
  "    else:\n"
  "      sizeString = str (fileSize >> 20) + \"Mi\"\n"
  "  # \",\" at the end of the line is important!\n"
  "  print \"% 3.1f%% of %sB\\r\" % (min(100.0, float(a * b) / fileSize * 100.0), sizeString),\n"
  "  sys.stdout.flush()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def downloadArchive (archiveURL, archivePath):\n"
  "  runSingleCommand ([\"rm\", \"-f\", archivePath + \".downloading\"])\n"
  "  runSingleCommand ([\"rm\", \"-f\", archivePath + \".tar.bz2\"])\n"
  "  runSingleCommand ([\"mkdir\", \"-p\", os.path.dirname (archivePath)])\n"
  "  print \"URL: \"+ archiveURL\n"
  "  print \"Downloading... \" + archivePath + \".downloading\"\n"
  "  urllib.urlretrieve (archiveURL,  archivePath + \".downloading\", downloadReportHook)\n"
  "  print \"\"\n"
  "  fileSize = os.path.getsize (archivePath + \".downloading\")\n"
  "  ok = fileSize > 1000000\n"
  "  if ok:\n"
  "    runSingleCommand ([\"mv\", archivePath + \".downloading\", archivePath + \".tar.bz2\"])\n"
  "  else:\n"
  "    print BOLD_RED () + \"Error: cannot download file\" + ENDC ()\n"
  "    sys.exit (1)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   MAIN                                                                                                               *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Get max parallel jobs as first argument\n"
  "goal = \"all\"\n"
  "if len (sys.argv) > 1 :\n"
  "  goal = sys.argv [1]\n"
  "#--- Get max parallel jobs as first argument\n"
  "maxParallelJobs = 0 # 0 means use host processor count\n"
  "if len (sys.argv) > 2 :\n"
  "  maxParallelJobs = int (sys.argv [2])\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "#--- Download compiler tool if needed\n"
  "toolDirectory = toolDir ()\n"
  "if not os.path.exists (toolDirectory):\n"
  "  print BOLD_GREEN () + \"Downloading compiler tool chain\" + ENDC ()\n"
  "  archiveName = os.path.basename (toolDirectory)\n"
  "  archiveURL = \"http://crossgcc.rts-software.org/downloads/plm-tools/\" + archiveName + \".tar.bz2\"\n"
  "  downloadArchive (archiveURL, toolDirectory)\n"
  "  installDir = os.path.normpath (toolDirectory + \"/..\")\n"
  "  os.chdir (installDir)\n"
  "  runSingleCommand ([\"bunzip2\", \"-k\", archiveName + \".tar.bz2\"])\n"
  "  runSingleCommand ([\"rm\", archiveName + \".tar.bz2\"])\n"
  "  runSingleCommand ([\"tar\", \"xf\", archiveName + \".tar\"])\n"
  "  runSingleCommand ([\"rm\", archiveName + \".tar\"])\n"
  "#---\n"
  "os.chdir (scriptDir)\n"
  "#--- Build python makefile\n"
  "makefile = Make ()\n"
  "#--- Add C files compile rule\n"
  "objectList = []\n"
  "asObjectList = []\n"
  "for source in sourceList ():\n"
  "#--- Compile\n"
  "  object = objectDir () + \"/\" + source + \".o\"\n"
  "  rule = Rule (object, \"Compiling \" + source)\n"
  "  rule.mDependences.append (\"sources/\" + source)\n"
  "  rule.mCommand += compiler ()\n"
  "  rule.mCommand += cCompilerOptions ()\n"
  "  rule.mCommand += [\"-c\", \"sources/\" + source]\n"
  "  rule.mCommand += [\"-o\", object]\n"
  "  rule.enterSecondaryDependanceFile (object + \".dep\")\n"
  "  makefile.addRule (rule)\n"
  "  objectList.append (object)\n"
  "#--- Assembling\n"
  "  asObject = asDir () + \"/\" + source + \".s\"\n"
  "  rule = Rule (asObject, \"Assembling \" + source)\n"
  "  rule.mDependences.append (\"sources/\" + source)\n"
  "  rule.mCommand += compiler ()\n"
  "  rule.mCommand += cCompilerOptions ()\n"
  "  rule.mCommand += [\"-S\", \"sources/\" + source]\n"
  "  rule.mCommand += [\"-o\", asObject]\n"
  "  rule.enterSecondaryDependanceFile (asObject + \".dep\")\n"
  "  makefile.addRule (rule)\n"
  "  asObjectList.append (asObject)\n"
  "#--- Add linker rule\n"
  "productELF = productDir () + \"/product.elf\"\n"
  "rule = Rule (productELF, \"Linking \" + productELF)\n"
  "rule.mDependences += objectList\n"
  "rule.mCommand += linker ()\n"
  "rule.mCommand += linkerOptions ()\n"
  "rule.mCommand += objectList\n"
  "rule.mCommand += [\"-o\", productELF]\n"
  "rule.mCommand += [\"-Tsources/linker.ld\"]\n"
  "rule.mCommand += [\"-Wl,-Map=\" + productELF + \".map\"]\n"
  "makefile.addRule (rule)\n"
  "#--- Add objcopy rule\n"
  "productHEX = productDir () + \"/product.ihex\"\n"
  "rule = Rule (productHEX, \"Hexing \" + productHEX)\n"
  "rule.mDependences += [productELF]\n"
  "rule.mCommand += objcopy ()\n"
  "rule.mCommand += [\"-O\", \"ihex\"]\n"
  "rule.mCommand += [productELF]\n"
  "rule.mCommand += [productHEX]\n"
  "makefile.addRule (rule)\n"
  "#--- Add goals\n"
  "makefile.addGoal (\"run\", [productHEX], \"Building all and run\")\n"
  "makefile.addGoal (\"all\", [productHEX], \"Building all\")\n"
  "makefile.addGoal (\"as\", asObjectList, \"Assembling C files\")\n"
  "makefile.addGoal (\"display-object-size\", [productHEX], \"Display Object Size\")\n"
  "makefile.addGoal (\"object-dump\", [productHEX], \"Dump Object Code\")\n"
  "#--- Build\n"
  "#makefile.printRules ()\n"
  "makefile.runGoal (goal, maxParallelJobs, maxParallelJobs == 1)\n"
  "#--- Build Ok \?\n"
  "makefile.printErrorCountAndExitOnError ()\n"
  "#--- Run \?\n"
  "if goal == \"run\":\n"
  "  print BOLD_BLUE () + \"Loading Teensy...\" + ENDC ()\n"
  "  childProcess = subprocess.Popen ([teensyLoader (), \"-w\", \"-v\", \"-mmcu=mk20dx128\", productHEX])\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print BOLD_RED () + \"Error \" + str (childProcess.returncode) + ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "  else:\n"
  "    print BOLD_GREEN () + \"Success\" + ENDC ()\n"
  "elif goal == \"display-object-size\":\n"
  "  print BOLD_BLUE () + \"Display Object Sizes\" + ENDC ()\n"
  "  childProcess = subprocess.Popen (displayObjectSize () + objectList + [\"-t\"])\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print BOLD_RED () + \"Error \" + str (childProcess.returncode) + ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "  else:\n"
  "    print BOLD_GREEN () + \"Success\" + ENDC ()\n"
  "elif goal == \"object-dump\":\n"
  "  print BOLD_BLUE () + \"Dump Object Code\" + ENDC ()\n"
  "  childProcess = subprocess.Popen (dumpObjectCode () + [productELF, \"-Sdh\", \"-Mforce-thumb\"])\n"
  "#--- Wait for subprocess termination\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    print BOLD_RED () + \"Error \" + str (childProcess.returncode) + ENDC ()\n"
  "    sys.exit (childProcess.returncode)\n"
  "  else:\n"
  "    print BOLD_GREEN () + \"Success\" + ENDC ()\n" ;

const cRegularFileWrapper gWrapperFile_10_targetTemplates (
  "build.py",
  "py",
  true, // Text file
  44330, // Text length
  gWrapperFileContent_10_targetTemplates
) ;

//--- File 'teensy-3-1-interrupt/clean.py'

const char * gWrapperFileContent_11_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "#--- Directories to clean\n"
  "dir1 = scriptDir + \"/objects\"\n"
  "dir2 = scriptDir + \"/product\"\n"
  "dir3 = scriptDir + \"/as\"\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"rm\", \"-fr\", dir1, dir2, dir3], cwd=scriptDir)\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_11_targetTemplates (
  "clean.py",
  "py",
  true, // Text file
  1264, // Text length
  gWrapperFileContent_11_targetTemplates
) ;

//--- File 'teensy-3-1-interrupt/display-obj-dump.py'

const char * gWrapperFileContent_12_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"object-dump\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_12_targetTemplates (
  "display-obj-dump.py",
  "py",
  true, // Text file
  1005, // Text length
  gWrapperFileContent_12_targetTemplates
) ;

//--- File 'teensy-3-1-interrupt/display-obj-size.py'

const char * gWrapperFileContent_13_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"display-object-size\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_13_targetTemplates (
  "display-obj-size.py",
  "py",
  true, // Text file
  1013, // Text length
  gWrapperFileContent_13_targetTemplates
) ;

//--- File 'teensy-3-1-interrupt/run.py'

const char * gWrapperFileContent_14_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"run\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_14_targetTemplates (
  "run.py",
  "py",
  true, // Text file
  997, // Text length
  gWrapperFileContent_14_targetTemplates
) ;

//--- File 'sources/linker.ld'

const char * gWrapperFileContent_15_targetTemplates = "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                   Memory                                   */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "MEMORY {\n"
  "  flash (rx) : ORIGIN = 0, LENGTH = 256k \n"
  "  sram_u (rwx) : ORIGIN = 0x20000000, LENGTH = 32k \n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__sram_u_end = 0x20000000 + 32k ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                ISR Vectors                                 */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .vectors : {\n"
  "    __vectors_start = . ;\n"
  "    KEEP (*(.isr_vector)) ;\n"
  "    __vectors_end = . ;\n"
  "  } > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                    Code                                    */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .text : {\n"
  "    FILL(0xff)\n"
  "    __code_start = . ;\n"
  "  /*--- Tableau des routines d'initialisation */\n"
  "    . = ALIGN (4) ;\n"
  "    __init_routine_array_start = . ;\n"
  "    KEEP (*(init_routine_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __init_routine_array_end = . ;\n"
  "  /*--- Initialisation des objets globaux C++ */\n"
  "    . = ALIGN (4) ;\n"
  "    __constructor_array_start = . ;\n"
  "    KEEP (*(.init_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __constructor_array_end = . ;\n"
  "  /*--- Real Interrupt Service Routine Array */\n"
  "    . = ALIGN (4) ;\n"
  "    __real_time_isr_array_start = . ;\n"
  "    KEEP (*(real_time_isr_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __real_time_isr_array_end = . ;\n"
  "  /*--- Code */\n"
  "    *(.text.*) ;\n"
  "    *(.text) ;\n"
  "    *(text) ;\n"
  "    *(.gnu.linkonce.t.*) ;\n"
  "  /*---- ROM data ----*/\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata);\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata*);\n"
  "    . = ALIGN(4);\n"
  "    *(.gnu.linkonce.r.*);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7t);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7);\n"
  "    . = ALIGN(4);\n"
  "  } > flash\n"
  "\n"
  "  .ARM.exidx : {\n"
  "    *(.ARM.exidx* .gnu.linkonce.armexidx.*);\n"
  "    __code_end = . ;\n"
  "  } > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                          Data (initialized data)                           */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .data : {\n"
  "    FILL (0xFF)\n"
  "    . = ALIGN (4) ;\n"
  "    __data_start = . ;\n"
  "    * (.data.*init*) ;\n"
  "    * (.data*) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __data_end = . ;\n"
  "  } > sram_u AT > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__data_load_start = LOADADDR (.data) ;\n"
  "__data_load_end   = LOADADDR (.data) + SIZEOF (.data) ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                          BSS (uninitialized data)                          */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .bss : {\n"
  "    . = ALIGN(4);\n"
  "    __bss_start = . ;\n"
  "    * (.bss.*) ;\n"
  "    * (.bss) ;\n"
  "    * (COMMON) ;\n"
  "    . = ALIGN(4);\n"
  "    __bss_end = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                System stack                                */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .system_stack :{\n"
  "    . = ALIGN (4) ;\n"
  "    __system_stack_start = . ;\n"
  "    . += 1k ;\n"
  "    . = ALIGN (4) ;\n"
  "    __system_stack_end = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                    Heap                                    */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .heap : {\n"
  "    . = ALIGN (4) ;\n"
  "    __heap_start = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__heap_end = __sram_u_end ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n" ;

const cRegularFileWrapper gWrapperFile_15_targetTemplates (
  "linker.ld",
  "ld",
  true, // Text file
  5218, // Text length
  gWrapperFileContent_15_targetTemplates
) ;

//--- File 'sources/target-exception.c'

const char * gWrapperFileContent_16_targetTemplates = "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void raise_exception (const type_int32 inCode,\n"
  "                             const char * inSourceFile,\n"
  "                             const type_uint32 inSourceLine) {\n"
  " //--- Mask interrupt: write 1 into FAULTMASK register\n"
  "  const uint32_t maskValue = 1 ;\n"
  "  __asm__ (\"msr FAULTMASK, %[reg]\" : : [reg]\"r\"(maskValue));\n"
  "  raise_exception_internal (inCode, inSourceFile, inSourceLine) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_16_targetTemplates (
  "target-exception.c",
  "c",
  true, // Text file
  634, // Text length
  gWrapperFileContent_16_targetTemplates
) ;

//--- File 'sources/target.c'

const char * gWrapperFileContent_17_targetTemplates = "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void ResetISR (void) {\n"
  "//---------1- Boot routines\n"
  "  boot () ;\n"
  "  // now we're in PEE mode\n"
  "  // configure USB for 48 MHz clock\n"
  "//  SIM_CLKDIV2 = SIM_CLKDIV2_USBDIV(1); // USB = 96 MHz PLL / 2\n"
  "  // USB uses PLL clock, trace is CPU clock, CLKOUT=OSCERCLK0\n"
  "//  SIM_SOPT2 = SIM_SOPT2_USBSRC | SIM_SOPT2_PLLFLLSEL | SIM_SOPT2_TRACECLKSEL | SIM_SOPT2_CLKOUTSEL(6);\n"
  "\n"
  "//---------2- Initialisation de la section .bss\n"
  "  extern unsigned __bss_start ;\n"
  "  extern unsigned __bss_end ;\n"
  "  unsigned * p = & __bss_start ;\n"
  "  while (p != & __bss_end) {\n"
  "    * p = 0 ;\n"
  "    p ++ ;\n"
  "  }\n"
  "//---------3- Copy de la section .data\n"
  "  extern unsigned __data_start ;\n"
  "  extern unsigned __data_end ;\n"
  "  extern unsigned __data_load_start ;\n"
  "  unsigned * pSrc = & __data_load_start ;\n"
  "  unsigned * pDest = & __data_start ;\n"
  "  while (pDest != & __data_end) {\n"
  "    * pDest = * pSrc ;\n"
  "    pDest ++ ;\n"
  "    pSrc ++ ;\n"
  "  }\n"
  "//---------4- Init Routines\n"
  "  init () ;\n"
  "//---------5- User routines\n"
  "  proc_setup () ;\n"
  "  while (1) {\n"
  "    proc_loop () ;\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   Vector table                                                                                                      *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct {\n"
  "  unsigned * mStackPointer ;\n"
  "//--- ARM Core System Handler Vectors\n"
  "  void (* mCoreSystemHandlerVector [15]) (void) ;\n"
  "//--- Non-Core Vectors\n"
  "  void (* mNonCoreHandlerVector [240]) (void) ;\n"
  "//--- Flash magic values\n"
  "  int mFlash [4] ;\n"
  "} vectorStructSeq ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "extern unsigned __system_stack_end ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "const vectorStructSeq vector __attribute__ ((section (\".isr_vector\"))) = {\n"
  "  & __system_stack_end, // 0\n"
  "//--- ARM Core System Handler Vectors\n"
  "  { ResetISR, // 1\n"
  "    proc_NMIHandler, // 2\n"
  "    proc_HardFaultHandler, // 3\n"
  "    proc_MemManageHandler, // 4\n"
  "    proc_BusFaultHandler, // 5\n"
  "    proc_UsageFaultHandler, // 6\n"
  "    NULL, // 7 (reserved)\n"
  "    NULL, // 8 (reserved)\n"
  "    NULL, // 9 (reserved)\n"
  "    NULL, // 10 (reserved)\n"
  "    proc_svcHandler, // 11\n"
  "    proc_DebugMonitorHandler, // 12\n"
  "    NULL, // 13 (reserved)\n"
  "    proc_PendSVHandler, // 14\n"
  "    proc_systickHandler // 15\n"
  "  },\n"
  "//--- Non-Core Vectors\n"
  "  { proc_DMAChannel0TranfertCompleteHandler, // 16\n"
  "    proc_DMAChannel1TranfertCompleteHandler, // 17\n"
  "    proc_DMAChannel2TranfertCompleteHandler, // 18\n"
  "    proc_DMAChannel3TranfertCompleteHandler, // 19\n"
  "    proc_DMAChannel4TranfertCompleteHandler, // 20\n"
  "    proc_DMAChannel5TranfertCompleteHandler, // 21\n"
  "    proc_DMAChannel6TranfertCompleteHandler, // 22\n"
  "    proc_DMAChannel7TranfertCompleteHandler, // 23\n"
  "    proc_DMAChannel8TranfertCompleteHandler, // 24\n"
  "    proc_DMAChannel9TranfertCompleteHandler, // 25\n"
  "    proc_DMAChannel10TranfertCompleteHandler, // 26\n"
  "    proc_DMAChannel11TranfertCompleteHandler, // 27\n"
  "    proc_DMAChannel12TranfertCompleteHandler, // 28\n"
  "    proc_DMAChannel13TranfertCompleteHandler, // 29\n"
  "    proc_DMAChannel14TranfertCompleteHandler, // 30\n"
  "    proc_DMAChannel15TranfertCompleteHandler, // 31\n"
  "    proc_DMAErrorHandler, // 32\n"
  "    NULL, // 33\n"
  "    proc_flashMemoryCommandCompleteHandler, // 34\n"
  "    proc_flashMemoryReadCollisionHandler, // 35\n"
  "    proc_modeControllerHandler, // 36\n"
  "    proc_LLWUHandler, // 37\n"
  "    proc_WDOGEWMHandler, // 38\n"
  "    NULL, // 39\n"
  "    proc_I2C0Handler, // 40\n"
  "    proc_I2C1Handler, // 41\n"
  "    proc_SPI0Handler, // 42\n"
  "    proc_SPI1Handler, // 43\n"
  "    NULL, // 44\n"
  "    proc_CAN0MessageBufferHandler, // 45\n"
  "    proc_CAN0BusOffHandler, // 46\n"
  "    proc_CAN0ErrorHandler, // 47\n"
  "    proc_CAN0TransmitWarningHandler, // 48\n"
  "    proc_CAN0ReceiveWarningHandler, // 49\n"
  "    proc_CAN0WakeUpHandler, // 50\n"
  "    proc_I2S0TransmitHandler, // 51\n"
  "    proc_I2S0ReceiveHandler, // 52\n"
  "    NULL, // 53\n"
  "    NULL, // 54\n"
  "    NULL, // 55\n"
  "    NULL, // 56\n"
  "    NULL, // 57\n"
  "    NULL, // 58\n"
  "    NULL, // 59\n"
  "    proc_UART0LONHandler, // 60\n"
  "    proc_UART0StatusHandler, // 61\n"
  "    proc_UART0ErrorHandler, // 62\n"
  "    proc_UART1StatusHandler, // 63\n"
  "    proc_UART1ErrorHandler, // 64\n"
  "    proc_UART2StatusHandler, // 65\n"
  "    proc_UART2ErrorHandler, // 66\n"
  "    NULL, // 67\n"
  "    NULL, // 68\n"
  "    NULL, // 69\n"
  "    NULL, // 70\n"
  "    NULL, // 71\n"
  "    NULL, // 72\n"
  "    proc_ADC0Handler, // 73\n"
  "    proc_ADC1Handler, // 74\n"
  "    proc_CMP0Handler, // 75\n"
  "    proc_CMP1Handler, // 76\n"
  "    proc_CMP2Handler, // 77\n"
  "    proc_FMT0Handler, // 78\n"
  "    proc_FMT1Handler, // 79\n"
  "    proc_FMT2Handler, // 80\n"
  "    proc_CMTHandler, // 81\n"
  "    proc_RTCAlarmHandler, // 82\n"
  "    proc_RTCSecondHandler, // 83\n"
  "    proc_PITChannel0Handler, // 84\n"
  "    proc_PITChannel1Handler, // 85\n"
  "    proc_PITChannel2Handler, // 86\n"
  "    proc_PITChannel3Handler, // 87\n"
  "    proc_PDBHandler, // 88\n"
  "    proc_USBOTGHandler, // 89\n"
  "    proc_USBChargerDetectHandler, // 90\n"
  "    NULL, // 91\n"
  "    NULL, // 92\n"
  "    NULL, // 93\n"
  "    NULL, // 94\n"
  "    NULL, // 95\n"
  "    NULL, // 96\n"
  "    proc_DAC0Handler, // 97\n"
  "    NULL, // 98\n"
  "    proc_TSIHandler, // 99\n"
  "    proc_MCGHandler, // 100\n"
  "    proc_lowPowerTimerHandler, // 101\n"
  "    NULL, // 102\n"
  "    proc_pinDetectPortAHandler, // 103\n"
  "    proc_pinDetectPortBHandler, // 104\n"
  "    proc_pinDetectPortCHandler, // 105\n"
  "    proc_pinDetectPortDHandler, // 106\n"
  "    proc_pinDetectPortEHandler, // 107\n"
  "    NULL, // 108\n"
  "    NULL, // 109\n"
  "    proc_softwareInterruptHandler, // 110\n"
  "    NULL, // 111\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 112 \xC3""\xA0"" 127\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 128 \xC3""\xA0"" 143\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 143 \xC3""\xA0"" 159\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 160 \xC3""\xA0"" 175\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 176 \xC3""\xA0"" 191\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 192 \xC3""\xA0"" 207\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 208 \xC3""\xA0"" 223\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 224 \xC3""\xA0"" 239\n"
  "    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL  // 240 \xC3""\xA0"" 255\n"
  "  },\n"
  "//--- Flash magic values\n"
  "  {-1, -1, -1, -2}\n"
  "} ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_17_targetTemplates (
  "target.c",
  "c",
  true, // Text file
  6877, // Text length
  gWrapperFileContent_17_targetTemplates
) ;

//--- All files of 'sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_3 [4] = {
  & gWrapperFile_15_targetTemplates,
  & gWrapperFile_16_targetTemplates,
  & gWrapperFile_17_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_3 [1] = {
  NULL
} ;

//--- Directory 'sources'

const cDirectoryWrapper gWrapperDirectory_3_targetTemplates (
  "sources",
  3,
  gWrapperAllFiles_targetTemplates_3,
  0,
  gWrapperAllDirectories_targetTemplates_3
) ;

//--- All files of 'teensy-3-1-interrupt' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_2 [7] = {
  & gWrapperFile_9_targetTemplates,
  & gWrapperFile_10_targetTemplates,
  & gWrapperFile_11_targetTemplates,
  & gWrapperFile_12_targetTemplates,
  & gWrapperFile_13_targetTemplates,
  & gWrapperFile_14_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-interrupt' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_2 [2] = {
  & gWrapperDirectory_3_targetTemplates,
  NULL
} ;

//--- Directory 'teensy-3-1-interrupt'

const cDirectoryWrapper gWrapperDirectory_2_targetTemplates (
  "teensy-3-1-interrupt",
  6,
  gWrapperAllFiles_targetTemplates_2,
  1,
  gWrapperAllDirectories_targetTemplates_2
) ;

//--- File 'teensy-3-1-sequential-systick/build-verbose.py'

const char * gWrapperFileContent_18_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_18_targetTemplates (
  "build-verbose.py",
  "py",
  true, // Text file
  1002, // Text length
  gWrapperFileContent_18_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/build.py'

const char * gWrapperFileContent_19_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "import sys, os\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "sys.path.append (os.path.dirname (os.path.abspath (sys.argv [0])) + \"/sources\")\n"
  "import plm\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def archiveBaseURL ():\n"
  "  return \"http://crossgcc.rts-software.org/downloads/plm-tools/\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Tool dir                                                                                                           *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def toolDir ():\n"
  "  (SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()\n"
  "  if SYSTEM_NAME == \"Darwin\":\n"
  "    MACHINE = \"i386\"\n"
  "  return os.path.expanduser (\"~/plm-tools/plm-\" + SYSTEM_NAME + \"-\" + MACHINE + \"-llvm-3.7.0-binutils-2.25-libusb-1.0.19\")\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM optimizer invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def llvmOptimizerCompiler ():\n"
  "  return [toolDir () + \"/bin/opt\", \"-<<OPT_OPTIMIZATION_OPTION>>\", \"-disable-simplify-libcalls\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLC Compiler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLCcompiler ():\n"
  "  return [toolDir () + \"/bin/llc\", \"-<<LLC_OPTIMIZATION_OPTION>>\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   AS assembler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def asAssembler ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-as\", \"-mthumb\", \"-mcpu=cortex-m4\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Display object size invocation                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def displayObjectSize ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-size\", \"-t\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Object Dump invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def dumpObjectCode ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-objdump\", \"-Sdh\", \"-Mforce-thumb\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker invocation                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linker ():\n"
  "  result = [toolDir () + \"/bin/arm-eabi-ld\"]\n"
  "  result.append (\"-nostartfiles\")\n"
  "  result.append (\"--fatal-warnings\")\n"
  "  result.append (\"--warn-common\")\n"
  "  result.append (\"--no-undefined\")\n"
  "  result.append (\"--cref\")\n"
  "  result.append (\"-static\")\n"
  "  result.append (\"-s\")\n"
  "  result.append (\"--gc-sections\")\n"
  "  return result\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   objcopy invocation                                                                                                 *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objcopy ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-objcopy\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM Source files                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLVMsourceList ():\n"
  "  return [\"source-plm.ll\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Product directory                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def productDir ():\n"
  "  return \"product\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def objectDir ():\n"
  "  return \"objects\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Run executable                                                                                                      *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def runExecutableOnTarget ():\n"
  "  return [toolDir () + \"/bin/teensy-loader-cli\", \"-w\", \"-v\", \"-mmcu=mk20dx128\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   MAIN                                                                                                               *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "currentFile = os.path.abspath (sys.argv [0])\n"
  "plm.runMakefile (toolDir (), archiveBaseURL (), LLVMsourceList (), objectDir (), \\\n"
  "                 LLCcompiler (), llvmOptimizerCompiler (), \\\n"
  "                 asAssembler (), productDir (), \\\n"
  "                 linker (), \\\n"
  "                 objcopy (), dumpObjectCode (), displayObjectSize (), runExecutableOnTarget (), \\\n"
  "                 currentFile)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_19_targetTemplates (
  "build.py",
  "py",
  true, // Text file
  10876, // Text length
  gWrapperFileContent_19_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/clean.py'

const char * gWrapperFileContent_20_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "#--- Directories to clean\n"
  "dir1 = scriptDir + \"/objects\"\n"
  "dir2 = scriptDir + \"/product\"\n"
  "dir3 = scriptDir + \"/as\"\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"rm\", \"-fr\", dir1, dir2, dir3], cwd=scriptDir)\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_20_targetTemplates (
  "clean.py",
  "py",
  true, // Text file
  1264, // Text length
  gWrapperFileContent_20_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/linker.ld'

const char * gWrapperFileContent_21_targetTemplates = "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                   Memory                                   */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "MEMORY {\n"
  "  flash (rx) : ORIGIN = 0, LENGTH = 256k \n"
  "  sram_u (rwx) : ORIGIN = 0x20000000, LENGTH = 32k \n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__sram_u_end = 0x20000000 + 32k ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                ISR Vectors                                 */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .vectors : {\n"
  "    __vectors_start = . ;\n"
  "    KEEP (*(.isr_vector)) ;\n"
  "    __vectors_end = . ;\n"
  "  } > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                    Code                                    */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .text : {\n"
  "    FILL(0xff)\n"
  "    __code_start = . ;\n"
  "  /*--- Tableau des routines d'initialisation */\n"
  "    . = ALIGN (4) ;\n"
  "    __init_routine_array_start = . ;\n"
  "    KEEP (*(init_routine_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __init_routine_array_end = . ;\n"
  "  /*--- Initialisation des objets globaux C++ */\n"
  "    . = ALIGN (4) ;\n"
  "    __constructor_array_start = . ;\n"
  "    KEEP (*(.init_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __constructor_array_end = . ;\n"
  "  /*--- Real Interrupt Service Routine Array */\n"
  "    . = ALIGN (4) ;\n"
  "    __real_time_isr_array_start = . ;\n"
  "    KEEP (*(real_time_isr_array)) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __real_time_isr_array_end = . ;\n"
  "  /*--- Code */\n"
  "    *(.text.*) ;\n"
  "    *(.text) ;\n"
  "    *(text) ;\n"
  "    *(.gnu.linkonce.t.*) ;\n"
  "  /*---- ROM data ----*/\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata);\n"
  "    . = ALIGN(4);\n"
  "    *(.rodata*);\n"
  "    . = ALIGN(4);\n"
  "    *(.gnu.linkonce.r.*);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7t);\n"
  "    . = ALIGN(4);\n"
  "    *(.glue_7);\n"
  "    . = ALIGN(4);\n"
  "  } > flash\n"
  "\n"
  "  .ARM.exidx : {\n"
  "    *(.ARM.exidx* .gnu.linkonce.armexidx.*);\n"
  "    __code_end = . ;\n"
  "  } > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                          Data (initialized data)                           */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .data : {\n"
  "    FILL (0xFF)\n"
  "    . = ALIGN (4) ;\n"
  "    __data_start = . ;\n"
  "    * (.data.*init*) ;\n"
  "    * (.data*) ;\n"
  "    . = ALIGN (4) ;\n"
  "    __data_end = . ;\n"
  "  } > sram_u AT > flash\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__data_load_start = LOADADDR (.data) ;\n"
  "__data_load_end   = LOADADDR (.data) + SIZEOF (.data) ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                          BSS (uninitialized data)                          */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .bss : {\n"
  "    . = ALIGN(4);\n"
  "    __bss_start = . ;\n"
  "    * (.bss.*) ;\n"
  "    * (.bss) ;\n"
  "    * (COMMON) ;\n"
  "    . = ALIGN(4);\n"
  "    __bss_end = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                System stack                                */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .system_stack :{\n"
  "    . = ALIGN (4) ;\n"
  "    __system_stack_start = . ;\n"
  "    . += 1k ;\n"
  "    . = ALIGN (4) ;\n"
  "    __system_stack_end = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "/*                                                                            */\n"
  "/*                                    Heap                                    */\n"
  "/*                                                                            */\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "SECTIONS {\n"
  "  .heap : {\n"
  "    . = ALIGN (4) ;\n"
  "    __heap_start = . ;\n"
  "  } > sram_u\n"
  "}\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n"
  "\n"
  "__heap_end = __sram_u_end ;\n"
  "\n"
  "/*----------------------------------------------------------------------------*/\n" ;

const cRegularFileWrapper gWrapperFile_21_targetTemplates (
  "linker.ld",
  "ld",
  true, // Text file
  5218, // Text length
  gWrapperFileContent_21_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/objdump.py'

const char * gWrapperFileContent_22_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"object-dump\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_22_targetTemplates (
  "objdump.py",
  "py",
  true, // Text file
  1005, // Text length
  gWrapperFileContent_22_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/objsize.py'

const char * gWrapperFileContent_23_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"display-object-size\"])\n"
  "#--- Wait for subprocess termination\n"
  "if childProcess.poll () == None :\n"
  "  childProcess.wait ()\n"
  "if childProcess.returncode != 0 :\n"
  "  sys.exit (childProcess.returncode)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_23_targetTemplates (
  "objsize.py",
  "py",
  true, // Text file
  1013, // Text length
  gWrapperFileContent_23_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/run.py'

const char * gWrapperFileContent_24_targetTemplates = "#! /usr/bin/env python\n"
  "# -*- coding: UTF-8 -*-\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "# https://docs.python.org/2/library/subprocess.html#module-subprocess\n"
  "\n"
  "import subprocess\n"
  "import sys\n"
  "import os\n"
  "import atexit\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "def cleanup():\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.kill ()\n"
  "\n"
  "#------------------------------------------------------------------------------*\n"
  "\n"
  "#--- Register a function for killing subprocess\n"
  "atexit.register (cleanup)\n"
  "#--- Get script absolute path\n"
  "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
  "os.chdir (scriptDir)\n"
  "#---\n"
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"run\"])\n"
  "#--- Wait for subprocess termination\n"
  "try:\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    sys.exit (childProcess.returncode)\n"
  "except :\n"
  "    sys.exit (1)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_24_targetTemplates (
  "run.py",
  "py",
  true, // Text file
  1036, // Text length
  gWrapperFileContent_24_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/target-exception.ll'

const char * gWrapperFileContent_25_targetTemplates = ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @raise_exception (i32 %inCode, i8* %inSourceFile, i32 %inSourceLine) nounwind noreturn {\n"
  ";--- Mask interrupt: write 1 into FAULTMASK register\n"
  "  call void asm sideeffect \"msr FAULTMASK, $0\", \"r\"(i32 1) nounwind\n"
  ";--- Goto user code\n"
  "  call void @raise_exception_internal (i32 %inCode, i8* %inSourceFile, i32 %inSourceLine)\n"
  "  unreachable\n"
  "}\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_25_targetTemplates (
  "target-exception.ll",
  "ll",
  true, // Text file
  480, // Text length
  gWrapperFileContent_25_targetTemplates
) ;

//--- File 'teensy-3-1-sequential-systick/target.ll'

const char * gWrapperFileContent_26_targetTemplates = "target datalayout = \"e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64\"\n"
  "target triple = \"thumbv7em-none--eabi\"\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";    ISR Vector                                                                                                        *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "%vectorStructSeq = type {\n"
  "  i32*,            ; unsigned * mStackPointer\n"
  "  [15  x void()*], ; void (* mCoreSystemHandlerVector [15]) (void) ;\n"
  "  [240 x void()*], ; void (* mNonCoreHandlerVector [240]) (void) ;\n"
  "  [4   x i32]      ; int mFlash [4] ;\n"
  "} \n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__system_stack_end = external global i32\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@startup = constant %vectorStructSeq {\n"
  "  i32* @__system_stack_end,\n"
  ";--- ARM Core System Handler Vectors\n"
  "  [15  x void()*] [\n"
  "    void()* @ResetISR, ; 1\n"
  "    void()* null, ; 2\n"
  "    void()* null, ; 3\n"
  "    void()* null, ; 4\n"
  "    void()* null, ; 5\n"
  "    void()* null, ; 6\n"
  "    void()* null, ; 7\n"
  "    void()* null, ; 8\n"
  "    void()* null, ; 9\n"
  "    void()* null, ; 10\n"
  "    void()* null, ; 11\n"
  "    void()* null, ; 12\n"
  "    void()* null, ; 13\n"
  "    void()* null, ; 14\n"
  "    void()* @proc_systickHandler  ; 15\n"
  "  ],\n"
  ";--- Non-Core Vectors\n"
  "  [240 x void()*] zeroinitializer,\n"
  ";--- Flash magic values\n"
  "  [4   x i32] [i32 -1, i32 -1, i32 -1, i32 -2]\n"
  "}, section \".isr_vector\"\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Clear BSS                                                                                                          *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";void clearBSS (void) {\n"
  ";  extern unsigned __bss_start ;\n"
  ";  extern unsigned __bss_end ;\n"
  ";  unsigned * p = & __bss_start ;\n"
  ";  while (p != & __bss_end) {\n"
  ";    * p = 0 ;\n"
  ";    p ++ ;\n"
  ";  }\n"
  ";}\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__bss_start = external global [0 x i32]\n"
  "@__bss_end = external global [0 x i32]\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @clearBSS () nounwind {\n"
  "entry:\n"
  "  %startPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_start, i32 0, i32 0\n"
  "  %endPtr = getelementptr  [0 x i32], [0 x i32]* @__bss_end, i32 0, i32 0\n"
  "  br label %bssLoopTest\n"
  " \n"
  "bssLoopTest:\n"
  "  %p = phi i32* [%startPtr, %entry], [%p.next, %bssLoop]\n"
  "  %completed = icmp eq i32* %p, %endPtr\n"
  "  br i1 %completed, label %clearCompleted, label %bssLoop\n"
  " \n"
  "bssLoop:\n"
  "  store i32 0, i32* %p, align 4\n"
  "  %p.next = getelementptr inbounds i32, i32* %p, i32 1\n"
  "  br label %bssLoopTest\n"
  " \n"
  "clearCompleted:\n"
  "  ret void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   Copy .data section                                                                                                 *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";void copyData (void) {\n"
  ";  extern unsigned __data_start ;\n"
  ";  extern unsigned __data_end ;\n"
  ";  extern unsigned __data_load_start ;\n"
  ";  unsigned * pSrc = & __data_load_start ;\n"
  ";  unsigned * pDest = & __data_start ;\n"
  ";  while (pDest != & __data_end) {\n"
  ";    * pDest = * pSrc ;\n"
  ";    pDest ++ ;\n"
  ";    pSrc ++ ;\n"
  ";  }\n"
  ";}\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__data_start = external global [0 x i32]\n"
  "@__data_end = external global [0 x i32]\n"
  "@__data_load_start = external global [0 x i32]\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @copyData () nounwind {\n"
  "entry:\n"
  "  %data_start = getelementptr  [0 x i32], [0 x i32]* @__data_start, i32 0, i32 0\n"
  "  %data_end = getelementptr  [0 x i32], [0 x i32]* @__data_end, i32 0, i32 0\n"
  "  %data_load_start = getelementptr  [0 x i32], [0 x i32]* @__data_load_start, i32 0, i32 0\n"
  "  br label %copyLoop.test\n"
  " \n"
  "copyLoop.test:\n"
  "  %pDest = phi i32* [%data_start, %entry], [%pDestInct, %copyLoop]\n"
  "  %pSource = phi i32* [%data_load_start, %entry], [%pSourceInc, %copyLoop]\n"
  "  %equal = icmp eq i32* %pDest, %data_end\n"
  "  br i1 %equal, label %copyCompleted, label %copyLoop\n"
  " \n"
  "copyLoop:\n"
  "  %value = load i32, i32* %pSource\n"
  "  store i32 %value, i32* %pDest, align 4\n"
  "  %pDestInct = getelementptr inbounds i32, i32* %pDest, i32 1\n"
  "  %pSourceInc = getelementptr inbounds i32, i32* %pSource, i32 1\n"
  "  br label %copyLoop.test\n"
  "\n"
  "copyCompleted:\n"
  "  ret void\n"
  "}\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";   ResetISR                                                                                                           *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @ResetISR () nounwind noreturn naked {\n"
  "  call void @boot ()\n"
  "  call void @clearBSS ()\n"
  "  call void @copyData ()\n"
  "  call void @init ()\n"
  "  call void @proc_setup ()\n"
  "  br label %loop\n"
  "loop:\n"
  "  call void @proc_loop ()\n"
  "  br label %loop\n"
  "}\n" ;

const cRegularFileWrapper gWrapperFile_26_targetTemplates (
  "target.ll",
  "ll",
  true, // Text file
  5588, // Text length
  gWrapperFileContent_26_targetTemplates
) ;

//--- All files of 'teensy-3-1-sequential-systick' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_4 [10] = {
  & gWrapperFile_18_targetTemplates,
  & gWrapperFile_19_targetTemplates,
  & gWrapperFile_20_targetTemplates,
  & gWrapperFile_21_targetTemplates,
  & gWrapperFile_22_targetTemplates,
  & gWrapperFile_23_targetTemplates,
  & gWrapperFile_24_targetTemplates,
  & gWrapperFile_25_targetTemplates,
  & gWrapperFile_26_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-sequential-systick' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_4 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1-sequential-systick'

const cDirectoryWrapper gWrapperDirectory_4_targetTemplates (
  "teensy-3-1-sequential-systick",
  9,
  gWrapperAllFiles_targetTemplates_4,
  0,
  gWrapperAllDirectories_targetTemplates_4
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_0 [5] = {
  & gWrapperFile_0_targetTemplates,
  & gWrapperFile_1_targetTemplates,
  & gWrapperFile_2_targetTemplates,
  & gWrapperFile_3_targetTemplates,
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_0 [4] = {
  & gWrapperDirectory_1_targetTemplates,
  & gWrapperDirectory_2_targetTemplates,
  & gWrapperDirectory_4_targetTemplates,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetTemplates (
  "",
  4,
  gWrapperAllFiles_targetTemplates_0,
  3,
  gWrapperAllDirectories_targetTemplates_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTarget (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inProductDirectory,
                             const GALGAS_lstring constinArgument_inTargetName,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("make.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/make.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 37)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("plm.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/plm.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
  }
  {
  routine_copyTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 51)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 49)) ;
  }
  GALGAS_string var_opt_5F_optimizationOption = GALGAS_string ("disable-opt") ;
  GALGAS_string var_llc_5F_optimizationOption = GALGAS_string ("O0") ;
  GALGAS_uint var_optimizationOptionCount = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_optimization_31_.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_opt_5F_optimizationOption = GALGAS_string ("O1") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O1") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 61)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_optimization_32_.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_opt_5F_optimizationOption = GALGAS_string ("O2") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O2") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 66)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_optimizationS.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_opt_5F_optimizationOption = GALGAS_string ("Os") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O2") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 71)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_optimizationZ.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_3) {
    var_opt_5F_optimizationOption = GALGAS_string ("Oz") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O2") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 76)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_optimizationZ_33_.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_opt_5F_optimizationOption = GALGAS_string ("O3") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O3") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 81)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_optimizationOptionCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("target-generation.galgas", 84)), GALGAS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 84)).add_operation (GALGAS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 84))  COMMA_SOURCE_FILE ("target-generation.galgas", 84)) ;
  }
  {
  GALGAS__32_stringlist temp_6 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 90)) ;
  temp_6.addAssign_operation (GALGAS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption  COMMA_SOURCE_FILE ("target-generation.galgas", 90)) ;
  temp_6.addAssign_operation (GALGAS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption  COMMA_SOURCE_FILE ("target-generation.galgas", 90)) ;
  routine_copyExecutableFileWithSubstitutions (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 88)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 89)), temp_6, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 86)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/build-verbose.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 95)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build-verbose.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 93)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 101)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 99)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/objsize.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 107)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/objsize.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 105)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/objdump.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 113)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/objdump.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 111)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/run.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 119)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/run.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 117)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'copyExecutableFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFile (const GALGAS_string constinArgument_inCurrentDirectory,
                                 const GALGAS_string constinArgument_inSourceFileNamePath,
                                 const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GALGAS_string var_s = var_fw.reader_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 133)) ;
    GALGAS_bool joker_4768 ; // Joker input parameter
    var_s.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_4768, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 134)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).reader_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 136)) ;
    GALGAS_string var_s = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 137)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 137)) ;
    GALGAS_bool joker_5075 ; // Joker input parameter
    var_s.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_5075, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 138)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'copyExecutableFileWithSubstitutions'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFileWithSubstitutions (const GALGAS_string constinArgument_inCurrentDirectory,
                                                  const GALGAS_string constinArgument_inSourceFileNamePath,
                                                  const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                                  const GALGAS__32_stringlist constinArgument_inSubstitutions,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    var_s = var_fw.reader_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 153)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).reader_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 155)) ;
    var_s = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 156)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 156)) ;
  }
  cEnumerator__32_stringlist enumerator_5908 (constinArgument_inSubstitutions, kEnumeration_up) ;
  while (enumerator_5908.hasCurrentObject ()) {
    var_s = var_s.reader_stringByReplacingStringByString (enumerator_5908.current_mValue_30_ (HERE), enumerator_5908.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 159)) ;
    enumerator_5908.gotoNextObject () ;
  }
  GALGAS_bool joker_6077 ; // Joker input parameter
  var_s.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6077, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 161)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'copyTextFile'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyTextFile (const GALGAS_string constinArgument_inCurrentDirectory,
                           const GALGAS_string constinArgument_inSourceFileNamePath,
                           const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GALGAS_string var_s = var_fw.reader_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 173)) ;
    GALGAS_bool joker_6626 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6626, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 174)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).reader_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 176)) ;
    GALGAS_string var_s = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 177)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 177)) ;
    GALGAS_bool joker_6923 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6923, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 178)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'getTargetTextFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_getTargetTextFile (const GALGAS_string & constinArgument_inCurrentDirectory,
                                          const GALGAS_string & constinArgument_inTargetFile,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outContents ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    result_outContents = var_fw.reader_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 191)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).reader_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 193)) ;
    result_outContents = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 194)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 194)) ;
  }
//---
  return result_outContents ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_getTargetTextFile [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getTargetTextFile (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_getTargetTextFile (operand0,
                                     operand1,
                                     inCompiler
                                     COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getTargetTextFile ("getTargetTextFile",
                                                                   functionWithGenericHeader_getTargetTextFile,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   2,
                                                                   functionArgs_getTargetTextFile) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'importFilesAndCompile'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_importFilesAndCompile (const GALGAS_lstring constinArgument_inSourceFile,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 26)) ;
  GALGAS_lstringlist var_importedFileList ;
  GALGAS_location var_endOfSourceFile ;
  var_importedFileList.drop () ;
  var_endOfSourceFile.drop () ;
  cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast, var_importedFileList, var_endOfSourceFile  COMMA_SOURCE_FILE ("program.galgas", 27)) ;
  GALGAS_stringset var_importedFileAbsolutePathSet = GALGAS_stringset::constructor_setWithString (constinArgument_inSourceFile.mAttribute_string  COMMA_SOURCE_FILE ("program.galgas", 32)) ;
  GALGAS_string var_currentDirectory = constinArgument_inSourceFile.mAttribute_string.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 33)) ;
  {
  routine_recursiveImportFiles (var_ast, var_currentDirectory, var_importedFileList, var_importedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_targetNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("program.galgas", 42)) ;
    cEnumerator_lstringlist enumerator_1557 (var_ast.mAttribute_mTargetList, kEnumeration_up) ;
    while (enumerator_1557.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_targetNameSet.reader_hasKey (enumerator_1557.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("program.galgas", 44)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_1557.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("Duplicated target")  COMMA_SOURCE_FILE ("program.galgas", 45)) ;
      }
      var_targetNameSet.addAssign_operation (enumerator_1557.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("program.galgas", 47)) ;
      enumerator_1557.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_ast.mAttribute_mTargetList.reader_length (SOURCE_FILE ("program.galgas", 52)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticWarning (var_endOfSourceFile, GALGAS_string ("no target: only syntax analysis is performed")  COMMA_SOURCE_FILE ("program.galgas", 53)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_ast.mAttribute_mTargetList.reader_length (SOURCE_FILE ("program.galgas", 54)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticWarning (var_endOfSourceFile, var_ast.mAttribute_mTargetList.reader_length (SOURCE_FILE ("program.galgas", 55)).reader_string (SOURCE_FILE ("program.galgas", 55)).add_operation (GALGAS_string (" targets: only syntax analysis is performed"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 55))  COMMA_SOURCE_FILE ("program.galgas", 55)) ;
      }else if (kBoolFalse == test_5) {
        cEnumerator_lstringlist enumerator_2129 (var_ast.mAttribute_mTargetList, kEnumeration_up) ;
        while (enumerator_2129.hasCurrentObject ()) {
          {
          routine_compileProject (constinArgument_inSourceFile, var_ast, enumerator_2129.current_mValue (HERE), var_endOfSourceFile, var_currentDirectory, var_importedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 58)) ;
          }
          enumerator_2129.gotoNextObject () ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const GALGAS_lstring constinArgument_inSourceFile,
                             const GALGAS_ast constinArgument_inAST,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_location constinArgument_inEndOfSourceFile,
                             const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_stringset constinArgument_inImportedFileAbsolutePathSet,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast = constinArgument_inAST ;
  GALGAS_stringset var_importedFileAbsolutePathSet = constinArgument_inImportedFileAbsolutePathSet ;
  {
  routine_addTargetSpecificFiles (constinArgument_inTargetName, var_ast, constinArgument_inCurrentDirectory, var_importedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 84)) ;
  }
  {
  routine_addPredefinedTypes (var_ast.mAttribute_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 91)) ;
  }
  GALGAS_declarationListAST var_orderedDeclarationListAST ;
  {
  routine_buildOrderedDeclarationList (var_ast, constinArgument_inEndOfSourceFile, var_orderedDeclarationListAST, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 93)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 99)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_globalLiteralStringMap var_globalLiteralStringMap = GALGAS_globalLiteralStringMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 100)) ;
    GALGAS_semanticContext var_semanticContext ;
    {
    routine_buildSemanticContext (var_orderedDeclarationListAST, var_ast, var_globalLiteralStringMap, var_semanticContext, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 101)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_intermediateCodeStruct var_intermediateCodeStruct ;
      {
      routine_semanticAnalysis (constinArgument_inSourceFile.mAttribute_string, var_ast, var_semanticContext, constinArgument_inEndOfSourceFile, var_globalLiteralStringMap, var_intermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 109)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_codeOptimisation (var_intermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 119)) ;
        }
        {
        routine_codeGeneration (constinArgument_inCurrentDirectory, constinArgument_inSourceFile.mAttribute_string, constinArgument_inEndOfSourceFile, var_intermediateCodeStruct, var_semanticContext.mAttribute_mTypeMap, constinArgument_inTargetName, var_semanticContext.mAttribute_mExceptionCodeType, var_semanticContext.mAttribute_mExceptionLineType, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 120)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'addPredefinedTypes'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPredefinedTypes (GALGAS_declarationListAST & ioArgument_ioDeclarationList,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationList.addAssign_operation (GALGAS_booleanDeclaration::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 141)).reader_nowhere (SOURCE_FILE ("program.galgas", 141)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 141))  COMMA_SOURCE_FILE ("program.galgas", 141))  COMMA_SOURCE_FILE ("program.galgas", 141)) ;
  ioArgument_ioDeclarationList.addAssign_operation (GALGAS_literalIntegerDeclaration::constructor_new (SOURCE_FILE ("program.galgas", 143))  COMMA_SOURCE_FILE ("program.galgas", 143)) ;
  ioArgument_ioDeclarationList.addAssign_operation (GALGAS_literalStringDeclaration::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 145)).reader_nowhere (SOURCE_FILE ("program.galgas", 145))  COMMA_SOURCE_FILE ("program.galgas", 145))  COMMA_SOURCE_FILE ("program.galgas", 145)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'addTargetSpecificFiles'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addTargetSpecificFiles (const GALGAS_lstring constinArgument_inTargetName,
                                     GALGAS_ast & ioArgument_ioAST,
                                     const GALGAS_string constinArgument_inCurrentDirectory,
                                     GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 156)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_targetDirectory = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()).reader_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 158)) ;
    const enumGalgasBool test_1 = var_targetDirectory.reader_directoryExists (SOURCE_FILE ("program.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_lstringlist temp_2 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 163)) ;
      temp_2.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string (".plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 163)), constinArgument_inTargetName.mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 163))  COMMA_SOURCE_FILE ("program.galgas", 163)) ;
      routine_recursiveImportFileSystemTargetFiles (var_ast, var_targetDirectory, temp_2, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 160)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_3 (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("program.galgas", 167)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.reader_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 167)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 167))  COMMA_SOURCE_FILE ("program.galgas", 167)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_lstringlist temp_4 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 172)) ;
    temp_4.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string (".plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 172)), constinArgument_inTargetName.mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 172))  COMMA_SOURCE_FILE ("program.galgas", 172)) ;
    routine_recursiveImportEmbeddedTargetFiles (var_ast, temp_4, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 170)) ;
    }
  }
  ioArgument_ioAST.mAttribute_mDeclarationList = var_ast.mAttribute_mDeclarationList.add_operation (ioArgument_ioAST.mAttribute_mDeclarationList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 176)) ;
  ioArgument_ioAST.mAttribute_mGlobalVarDeclarationList = var_ast.mAttribute_mGlobalVarDeclarationList.add_operation (ioArgument_ioAST.mAttribute_mGlobalVarDeclarationList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 177)) ;
  ioArgument_ioAST.mAttribute_mProcedureListAST = var_ast.mAttribute_mProcedureListAST.add_operation (ioArgument_ioAST.mAttribute_mProcedureListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 178)) ;
  ioArgument_ioAST.mAttribute_mRequiredProcList = var_ast.mAttribute_mRequiredProcList.add_operation (ioArgument_ioAST.mAttribute_mRequiredProcList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 179)) ;
  ioArgument_ioAST.mAttribute_mFunctionListAST = var_ast.mAttribute_mFunctionListAST.add_operation (ioArgument_ioAST.mAttribute_mFunctionListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 180)) ;
  ioArgument_ioAST.mAttribute_mTargetList.dotAssign_operation (var_ast.mAttribute_mTargetList  COMMA_SOURCE_FILE ("program.galgas", 181)) ;
  ioArgument_ioAST.mAttribute_mInitList.dotAssign_operation (var_ast.mAttribute_mInitList  COMMA_SOURCE_FILE ("program.galgas", 182)) ;
  ioArgument_ioAST.mAttribute_mBootList.dotAssign_operation (var_ast.mAttribute_mBootList  COMMA_SOURCE_FILE ("program.galgas", 183)) ;
  ioArgument_ioAST.mAttribute_mExceptionClauses.dotAssign_operation (var_ast.mAttribute_mExceptionClauses  COMMA_SOURCE_FILE ("program.galgas", 184)) ;
  ioArgument_ioAST.mAttribute_mExceptionTypes = var_ast.mAttribute_mExceptionTypes.add_operation (ioArgument_ioAST.mAttribute_mExceptionTypes, inCompiler COMMA_SOURCE_FILE ("program.galgas", 185)) ;
}


