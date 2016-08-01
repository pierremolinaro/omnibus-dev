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

GALGAS_classConstantMap GALGAS_unifiedTypeMap_2D_proxy::getter_classConstantMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_classConstantMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "classConstantMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_classConstantMap;
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

cEnumAssociatedValues_objectIR_selfObject::cEnumAssociatedValues_objectIR_selfObject (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_selfObject::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_selfObject::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_selfObject * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_selfObject *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_llvmGlobalObjectValue::cEnumAssociatedValues_objectIR_llvmGlobalObjectValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                            const GALGAS_string & inAssociatedValue1
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_llvmGlobalObjectValue::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmGlobalObjectValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmGlobalObjectValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmGlobalObjectValue *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_globalVariableReference::cEnumAssociatedValues_objectIR_globalVariableReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_globalVariableReference::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_globalVariableReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_globalVariableReference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_globalVariableReference *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_localVariableReference::cEnumAssociatedValues_objectIR_localVariableReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                              const GALGAS_string & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_localVariableReference::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_localVariableReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_localVariableReference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_localVariableReference *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_temporaryReference::cEnumAssociatedValues_objectIR_temporaryReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                      const GALGAS_string & inAssociatedValue1,
                                                                                                      const GALGAS_sliceMap & inAssociatedValue2,
                                                                                                      const GALGAS_bool & inAssociatedValue3
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_temporaryReference::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_temporaryReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_temporaryReference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_temporaryReference *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_registerReference::cEnumAssociatedValues_objectIR_registerReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_bool & inAssociatedValue2,
                                                                                                    const GALGAS_bool & inAssociatedValue3,
                                                                                                    const GALGAS_bigint & inAssociatedValue4,
                                                                                                    const GALGAS_sliceMap & inAssociatedValue5,
                                                                                                    const GALGAS_uint & inAssociatedValue6,
                                                                                                    const GALGAS_uint & inAssociatedValue7
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5),
mAssociatedValue6 (inAssociatedValue6),
mAssociatedValue7 (inAssociatedValue7) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_registerReference::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  mAssociatedValue5.description (ioString, inIndentation) ;
  mAssociatedValue6.description (ioString, inIndentation) ;
  mAssociatedValue7.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_registerReference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_registerReference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_registerReference *> (inOperand) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue7.objectCompare (ptr->mAssociatedValue7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_property::cEnumAssociatedValues_objectIR_property (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                  const GALGAS_string & inAssociatedValue1,
                                                                                  const GALGAS_uint & inAssociatedValue2
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_property::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_property * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_property *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_llvmTemporaryValue::cEnumAssociatedValues_objectIR_llvmTemporaryValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                      const GALGAS_string & inAssociatedValue1,
                                                                                                      const GALGAS_sliceMap & inAssociatedValue2
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_llvmTemporaryValue::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmTemporaryValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmTemporaryValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmTemporaryValue *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_literalInteger::cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                              const GALGAS_bigint & inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_literalInteger::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_llvmStructureConstant::cEnumAssociatedValues_objectIR_llvmStructureConstant (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                            const GALGAS_operandIRList & inAssociatedValue1
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_llvmStructureConstant::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmStructureConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmStructureConstant * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmStructureConstant *> (inOperand) ;
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

cEnumAssociatedValues_objectIR_literalString::cEnumAssociatedValues_objectIR_literalString (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                            const GALGAS_uint & inAssociatedValue1,
                                                                                            const GALGAS_uint & inAssociatedValue2
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_literalString::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_zero::cEnumAssociatedValues_objectIR_zero (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_zero::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_zero::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_zero * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_zero *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_possibleFunction::cEnumAssociatedValues_objectIR_possibleFunction (const GALGAS_objectIR & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_possibleFunction::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_possibleFunction::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_possibleFunction * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_possibleFunction *> (inOperand) ;
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

GALGAS_objectIR::GALGAS_objectIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_selfObject (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfObject ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_selfObject (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmGlobalObjectValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                    const GALGAS_string & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmGlobalObjectValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmGlobalObjectValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_globalVariableReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                      const GALGAS_string & inAssociatedValue1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_globalVariableReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_globalVariableReference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_localVariableReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                     const GALGAS_string & inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_localVariableReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_localVariableReference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_temporaryReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                 const GALGAS_string & inAssociatedValue1,
                                                                 const GALGAS_sliceMap & inAssociatedValue2,
                                                                 const GALGAS_bool & inAssociatedValue3
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_temporaryReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_temporaryReference (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_registerReference (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                const GALGAS_lstring & inAssociatedValue1,
                                                                const GALGAS_bool & inAssociatedValue2,
                                                                const GALGAS_bool & inAssociatedValue3,
                                                                const GALGAS_bigint & inAssociatedValue4,
                                                                const GALGAS_sliceMap & inAssociatedValue5,
                                                                const GALGAS_uint & inAssociatedValue6,
                                                                const GALGAS_uint & inAssociatedValue7
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid () && inAssociatedValue6.isValid () && inAssociatedValue7.isValid ()) {
    result.mEnum = kEnum_registerReference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_registerReference (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5, inAssociatedValue6, inAssociatedValue7 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_property (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                       const GALGAS_string & inAssociatedValue1,
                                                       const GALGAS_uint & inAssociatedValue2
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_property (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmTemporaryValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                 const GALGAS_string & inAssociatedValue1,
                                                                 const GALGAS_sliceMap & inAssociatedValue2
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmTemporaryValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmTemporaryValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_literalInteger (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmStructureConstant (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                    const GALGAS_operandIRList & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmStructureConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmStructureConstant (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_literalString (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                            const GALGAS_uint & inAssociatedValue1,
                                                            const GALGAS_uint & inAssociatedValue2
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_literalString ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalString (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_zero (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_possibleFunction (const GALGAS_objectIR & inAssociatedValue0,
                                                               const GALGAS_lstring & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_possibleFunction ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_possibleFunction (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_null (UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  result.mEnum = kEnum_null ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_selfObject (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfObject) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectIR selfObject invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_selfObject * ptr = (const cEnumAssociatedValues_objectIR_selfObject *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_llvmGlobalObjectValue (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                    GALGAS_string & outAssociatedValue1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmGlobalObjectValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmGlobalObjectValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmGlobalObjectValue * ptr = (const cEnumAssociatedValues_objectIR_llvmGlobalObjectValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_globalVariableReference (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                      GALGAS_string & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalVariableReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR globalVariableReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_globalVariableReference * ptr = (const cEnumAssociatedValues_objectIR_globalVariableReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_localVariableReference (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                     GALGAS_string & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localVariableReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR localVariableReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_localVariableReference * ptr = (const cEnumAssociatedValues_objectIR_localVariableReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_temporaryReference (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                 GALGAS_string & outAssociatedValue1,
                                                 GALGAS_sliceMap & outAssociatedValue2,
                                                 GALGAS_bool & outAssociatedValue3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_temporaryReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @objectIR temporaryReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_temporaryReference * ptr = (const cEnumAssociatedValues_objectIR_temporaryReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_registerReference (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                GALGAS_bool & outAssociatedValue2,
                                                GALGAS_bool & outAssociatedValue3,
                                                GALGAS_bigint & outAssociatedValue4,
                                                GALGAS_sliceMap & outAssociatedValue5,
                                                GALGAS_uint & outAssociatedValue6,
                                                GALGAS_uint & outAssociatedValue7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerReference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    outAssociatedValue5.drop () ;
    outAssociatedValue6.drop () ;
    outAssociatedValue7.drop () ;
    C_String s ;
    s << "method @objectIR registerReference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_registerReference * ptr = (const cEnumAssociatedValues_objectIR_registerReference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
    outAssociatedValue6 = ptr->mAssociatedValue6 ;
    outAssociatedValue7 = ptr->mAssociatedValue7 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_property (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                       GALGAS_string & outAssociatedValue1,
                                       GALGAS_uint & outAssociatedValue2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_property * ptr = (const cEnumAssociatedValues_objectIR_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_llvmTemporaryValue (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                 GALGAS_string & outAssociatedValue1,
                                                 GALGAS_sliceMap & outAssociatedValue2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmTemporaryValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR llvmTemporaryValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmTemporaryValue * ptr = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_literalInteger (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_llvmStructureConstant (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                    GALGAS_operandIRList & outAssociatedValue1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmStructureConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmStructureConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmStructureConstant * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_literalString (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                            GALGAS_uint & outAssociatedValue1,
                                            GALGAS_uint & outAssociatedValue2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalString) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR literalString invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalString * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_zero (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_possibleFunction (GALGAS_objectIR & outAssociatedValue0,
                                               GALGAS_lstring & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_possibleFunction) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR possibleFunction invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_possibleFunction * ptr = (const cEnumAssociatedValues_objectIR_possibleFunction *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_objectIR [15] = {
  "(not built)",
  "selfObject",
  "llvmGlobalObjectValue",
  "globalVariableReference",
  "localVariableReference",
  "temporaryReference",
  "registerReference",
  "property",
  "llvmTemporaryValue",
  "literalInteger",
  "llvmStructureConstant",
  "literalString",
  "zero",
  "possibleFunction",
  "null"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isSelfObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfObject == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLlvmGlobalObjectValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmGlobalObjectValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isGlobalVariableReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalVariableReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLocalVariableReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localVariableReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isTemporaryReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_temporaryReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isRegisterReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerReference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLlvmTemporaryValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmTemporaryValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLlvmStructureConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isPossibleFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_possibleFunction == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @objectIR: " << gEnumNameArrayFor_objectIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @objectIR type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

cEnumAssociatedValues_primaryInExpressionAccessAST_property::cEnumAssociatedValues_primaryInExpressionAccessAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_primaryInExpressionAccessAST_property::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                                const GALGAS_location & inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *> (inOperand) ;
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

cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (const GALGAS_effectiveParameterListAST & inAssociatedValue0,
                                                                                                                          const GALGAS_location & inAssociatedValue1
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *> (inOperand) ;
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

GALGAS_primaryInExpressionAccessAST::GALGAS_primaryInExpressionAccessAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::constructor_property (const GALGAS_lstring & inAssociatedValue0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::constructor_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::constructor_funcCall (const GALGAS_effectiveParameterListAST & inAssociatedValue0,
                                                                                               const GALGAS_location & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_funcCall ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessAST::method_property (GALGAS_lstring & outAssociatedValue0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @primaryInExpressionAccessAST property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_property * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                              GALGAS_location & outAssociatedValue1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @primaryInExpressionAccessAST arrayAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessAST::method_funcCall (GALGAS_effectiveParameterListAST & outAssociatedValue0,
                                                           GALGAS_location & outAssociatedValue1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_funcCall) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @primaryInExpressionAccessAST funcCall invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * ptr = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_primaryInExpressionAccessAST [4] = {
  "(not built)",
  "property",
  "arrayAccess",
  "funcCall"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primaryInExpressionAccessAST::getter_isFuncCall (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_funcCall == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<enum @primaryInExpressionAccessAST: " << gEnumNameArrayFor_primaryInExpressionAccessAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_primaryInExpressionAccessAST::objectCompare (const GALGAS_primaryInExpressionAccessAST & inOperand) const {
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
//                                         @primaryInExpressionAccessAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ("primaryInExpressionAccessAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessAST result ;
  const GALGAS_primaryInExpressionAccessAST * p = (const GALGAS_primaryInExpressionAccessAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_accessInAssignmentAST_property::cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_accessInAssignmentAST_property::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_accessInAssignmentAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *> (inOperand) ;
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

GALGAS_accessInAssignmentAST::GALGAS_accessInAssignmentAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::constructor_property (const GALGAS_lstring & inAssociatedValue0
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentAST_property (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::constructor_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                    const GALGAS_location & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayAccess ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentAST::method_property (GALGAS_lstring & outAssociatedValue0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @accessInAssignmentAST property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentAST_property * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentAST::method_arrayAccess (GALGAS_expressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayAccess) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @accessInAssignmentAST arrayAccess invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * ptr = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_accessInAssignmentAST [3] = {
  "(not built)",
  "property",
  "arrayAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_accessInAssignmentAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayAccess == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @accessInAssignmentAST: " << gEnumNameArrayFor_accessInAssignmentAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessInAssignmentAST::objectCompare (const GALGAS_accessInAssignmentAST & inOperand) const {
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
//                                             @accessInAssignmentAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentAST ("accessInAssignmentAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentAST result ;
  const GALGAS_accessInAssignmentAST * p = (const GALGAS_accessInAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                                                          const GALGAS_objectIR & inAssociatedValue2
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
                                                                                                        const GALGAS_objectIR & inAssociatedValue2,
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
                                                                           const GALGAS_objectIR & inAssociatedValue2
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
                                                                          const GALGAS_objectIR & inAssociatedValue2,
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
                                                   GALGAS_objectIR & outAssociatedValue2,
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
                                                  GALGAS_objectIR & outAssociatedValue2,
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

cEnumAssociatedValues_objectInMemoryIR_registerAddress::cEnumAssociatedValues_objectInMemoryIR_registerAddress (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_registerAddress::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_registerAddress::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_registerAddress * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_registerAddress *> (inOperand) ;
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

cEnumAssociatedValues_objectInMemoryIR_register::cEnumAssociatedValues_objectInMemoryIR_register (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                                                  const GALGAS_bool & inAssociatedValue2,
                                                                                                  const GALGAS_bool & inAssociatedValue3,
                                                                                                  const GALGAS_bigint & inAssociatedValue4,
                                                                                                  const GALGAS_sliceMap & inAssociatedValue5,
                                                                                                  const GALGAS_uint & inAssociatedValue6,
                                                                                                  const GALGAS_uint & inAssociatedValue7
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4),
mAssociatedValue5 (inAssociatedValue5),
mAssociatedValue6 (inAssociatedValue6),
mAssociatedValue7 (inAssociatedValue7) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_register::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  mAssociatedValue5.description (ioString, inIndentation) ;
  mAssociatedValue6.description (ioString, inIndentation) ;
  mAssociatedValue7.description (ioString, inIndentation) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue7.objectCompare (ptr->mAssociatedValue7) ;
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

cEnumAssociatedValues_objectInMemoryIR_localVariable::cEnumAssociatedValues_objectInMemoryIR_localVariable (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                            const GALGAS_string & inAssociatedValue1,
                                                                                                            const GALGAS_bool & inAssociatedValue2
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_localVariable::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_localVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_localVariable * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_localVariable *> (inOperand) ;
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

cEnumAssociatedValues_objectInMemoryIR_staticConstant::cEnumAssociatedValues_objectInMemoryIR_staticConstant (const GALGAS_objectIR & inAssociatedValue0,
                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_staticConstant::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_staticConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_staticConstant * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_staticConstant *> (inOperand) ;
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

cEnumAssociatedValues_objectInMemoryIR_property::cEnumAssociatedValues_objectInMemoryIR_property (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                                                  const GALGAS_string & inAssociatedValue1,
                                                                                                  const GALGAS_uint & inAssociatedValue2
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectInMemoryIR_property::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectInMemoryIR_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectInMemoryIR_property * ptr = dynamic_cast<const cEnumAssociatedValues_objectInMemoryIR_property *> (inOperand) ;
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

GALGAS_objectInMemoryIR::GALGAS_objectInMemoryIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_registerAddress (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                              const GALGAS_string & inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_registerAddress ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_registerAddress (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_register (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                       const GALGAS_lstring & inAssociatedValue1,
                                                                       const GALGAS_bool & inAssociatedValue2,
                                                                       const GALGAS_bool & inAssociatedValue3,
                                                                       const GALGAS_bigint & inAssociatedValue4,
                                                                       const GALGAS_sliceMap & inAssociatedValue5,
                                                                       const GALGAS_uint & inAssociatedValue6,
                                                                       const GALGAS_uint & inAssociatedValue7
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid () && inAssociatedValue5.isValid () && inAssociatedValue6.isValid () && inAssociatedValue7.isValid ()) {
    result.mEnum = kEnum_register ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_register (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4, inAssociatedValue5, inAssociatedValue6, inAssociatedValue7 COMMA_THERE)) ;
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

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_localVariable (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                            const GALGAS_string & inAssociatedValue1,
                                                                            const GALGAS_bool & inAssociatedValue2
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_localVariable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_localVariable (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_staticConstant (const GALGAS_objectIR & inAssociatedValue0,
                                                                             const GALGAS_lstring & inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_staticConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_staticConstant (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_objectInMemoryIR::constructor_property (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                       const GALGAS_string & inAssociatedValue1,
                                                                       const GALGAS_uint & inAssociatedValue2
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_objectInMemoryIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_property ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectInMemoryIR_property (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_registerAddress (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                      GALGAS_string & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerAddress) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR registerAddress invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_registerAddress * ptr = (const cEnumAssociatedValues_objectInMemoryIR_registerAddress *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_register (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                               GALGAS_lstring & outAssociatedValue1,
                                               GALGAS_bool & outAssociatedValue2,
                                               GALGAS_bool & outAssociatedValue3,
                                               GALGAS_bigint & outAssociatedValue4,
                                               GALGAS_sliceMap & outAssociatedValue5,
                                               GALGAS_uint & outAssociatedValue6,
                                               GALGAS_uint & outAssociatedValue7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_register) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    outAssociatedValue5.drop () ;
    outAssociatedValue6.drop () ;
    outAssociatedValue7.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR register invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_register * ptr = (const cEnumAssociatedValues_objectInMemoryIR_register *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
    outAssociatedValue5 = ptr->mAssociatedValue5 ;
    outAssociatedValue6 = ptr->mAssociatedValue6 ;
    outAssociatedValue7 = ptr->mAssociatedValue7 ;
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

void GALGAS_objectInMemoryIR::method_localVariable (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                                    GALGAS_string & outAssociatedValue1,
                                                    GALGAS_bool & outAssociatedValue2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localVariable) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR localVariable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_localVariable * ptr = (const cEnumAssociatedValues_objectInMemoryIR_localVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_staticConstant (GALGAS_objectIR & outAssociatedValue0,
                                                     GALGAS_lstring & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_staticConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR staticConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_staticConstant * ptr = (const cEnumAssociatedValues_objectInMemoryIR_staticConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectInMemoryIR::method_property (GALGAS_unifiedTypeMap_2D_proxy & outAssociatedValue0,
                                               GALGAS_string & outAssociatedValue1,
                                               GALGAS_uint & outAssociatedValue2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_property) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectInMemoryIR property invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectInMemoryIR_property * ptr = (const cEnumAssociatedValues_objectInMemoryIR_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_objectInMemoryIR [7] = {
  "(not built)",
  "registerAddress",
  "register",
  "globalVariable",
  "localVariable",
  "staticConstant",
  "property"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerAddress == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isRegister (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_register == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isGlobalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalVariable == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localVariable == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isStaticConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectInMemoryIR::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
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

cEnumAssociatedValues_typeKind_structure::cEnumAssociatedValues_typeKind_structure (const GALGAS_namedObjectMap & inAssociatedValue0,
                                                                                    const GALGAS_propertyMap & inAssociatedValue1,
                                                                                    const GALGAS_propertyList & inAssociatedValue2
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_structure::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
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

GALGAS_typeKind GALGAS_typeKind::constructor_structure (const GALGAS_namedObjectMap & inAssociatedValue0,
                                                        const GALGAS_propertyMap & inAssociatedValue1,
                                                        const GALGAS_propertyList & inAssociatedValue2
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_structure (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
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

void GALGAS_typeKind::method_structure (GALGAS_namedObjectMap & outAssociatedValue0,
                                        GALGAS_propertyMap & outAssociatedValue1,
                                        GALGAS_propertyList & outAssociatedValue2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @typeKind structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
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

static const char * gEnumNameArrayFor_typeKind [9] = {
  "(not built)",
  "boolean",
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

cEnumAssociatedValues_getElementPtrIndexKind_indirect::cEnumAssociatedValues_getElementPtrIndexKind_indirect (const GALGAS_objectIR & inAssociatedValue0
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

GALGAS_getElementPtrIndexKind GALGAS_getElementPtrIndexKind::constructor_indirect (const GALGAS_objectIR & inAssociatedValue0
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

void GALGAS_getElementPtrIndexKind::method_indirect (GALGAS_objectIR & outAssociatedValue0,
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4276 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, inArgument_inBooleanTypeName, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 103)) ;
  GALGAS_lstring var_boolBoolOp_4368 = function_combineTypeNamesForInfixOperator (inArgument_inBooleanTypeName.mAttribute_string, inArgument_inBooleanTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 104)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 108))  COMMA_SOURCE_FILE ("type-bool.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-bool.galgas", 113))  COMMA_SOURCE_FILE ("type-bool.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 110)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 118))  COMMA_SOURCE_FILE ("type-bool.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 115)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 123))  COMMA_SOURCE_FILE ("type-bool.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-bool.galgas", 128))  COMMA_SOURCE_FILE ("type-bool.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 125)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-bool.galgas", 133))  COMMA_SOURCE_FILE ("type-bool.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 130)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_4368, var_selfTypeProxy_4276, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 138))  COMMA_SOURCE_FILE ("type-bool.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 135)) ;
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
  GALGAS_lstring var_key_6050 = function_combineTypeNamesForInfixOperator (inArgument_inEnumerationTypeName.mAttribute_string, inArgument_inEnumerationTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_key_6050, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 155))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_key_6050, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-enumeration-declaration.galgas", 160))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_key_6050, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 165))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 162)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_key_6050, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 170))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_key_6050, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-enumeration-declaration.galgas", 175))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_key_6050, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-enumeration-declaration.galgas", 180))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 177)) ;
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
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13314 ;
    GALGAS_infixOperatorDescription var_operation_13361 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_13314, var_operation_13361, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 397)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_13314.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_13314 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_13314, var_operation_13361, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 405)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.mAttribute_string COMMA_SOURCE_FILE ("type-alias.galgas", 411)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13748 ;
    GALGAS_infixOperatorDescription var_operation_13795 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_13748, var_operation_13795, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 412)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_13748.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_13748 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_13748, var_operation_13795, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 420)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.mAttribute_string COMMA_SOURCE_FILE ("type-alias.galgas", 426)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_14189 ;
    GALGAS_infixOperatorDescription var_operation_14236 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_14189, var_operation_14236, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 427)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_14189.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_14189 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_14189, var_operation_14236, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 435)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5780 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 134)) ;
  GALGAS_lstring var_intIntOp_5901 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 136)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intIntOp_5901, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 140))  COMMA_SOURCE_FILE ("type-integer.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_5901, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-integer.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 142)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 150)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 150)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_5901, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 147)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 155)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 155)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_5901, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 152)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 160)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 160)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_5901, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 157)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 165)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 165)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_5901, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 162)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 172))  COMMA_SOURCE_FILE ("type-integer.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 177))  COMMA_SOURCE_FILE ("type-integer.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 174)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-integer.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 179)) ;
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
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 197)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 205))  COMMA_SOURCE_FILE ("type-integer.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 210)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 210)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 207)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 215))  COMMA_SOURCE_FILE ("type-integer.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 220)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 220)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 217)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 225))  COMMA_SOURCE_FILE ("type-integer.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 222)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 230)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 227)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 235)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 235)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 240)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 245)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 245)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 251))  COMMA_SOURCE_FILE ("type-integer.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 248)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 256)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 256)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_5901, var_selfTypeProxy_5780, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 253)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_11901 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 307)) ;
  GALGAS_lstring var_intLiteralOp_12026 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_12026, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 313))  COMMA_SOURCE_FILE ("type-integer.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_12026, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 318))  COMMA_SOURCE_FILE ("type-integer.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 315)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 323)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 323)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_12026, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 320)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 328)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_12026, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 333)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_12026, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 330)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 338)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_12026, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 335)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 341)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 345))  COMMA_SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 350))  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 355))  COMMA_SOURCE_FILE ("type-integer.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)) ;
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
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 359)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 367))  COMMA_SOURCE_FILE ("type-integer.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 372)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 372)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 377))  COMMA_SOURCE_FILE ("type-integer.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 382)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 387))  COMMA_SOURCE_FILE ("type-integer.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 392)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 392)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 389)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 397)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 394)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 402)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 402)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 399)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 407)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 407)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 413))  COMMA_SOURCE_FILE ("type-integer.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 410)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 418)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 418)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_12026, var_selfTypeProxy_11901, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 415)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_19517 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 508)) ;
  GALGAS_lstring var_intLiteralOp_19642 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)), constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)) ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_19642, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 514))  COMMA_SOURCE_FILE ("type-integer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 511)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_19642, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 519))  COMMA_SOURCE_FILE ("type-integer.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 524)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_19642, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_19642, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 534)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 534)) ;
  }
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_19642, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_19642, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 536)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 542)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 546))  COMMA_SOURCE_FILE ("type-integer.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 543)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 551))  COMMA_SOURCE_FILE ("type-integer.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 548)) ;
    }
    {
    ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 556))  COMMA_SOURCE_FILE ("type-integer.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 553)) ;
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
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 560)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 568))  COMMA_SOURCE_FILE ("type-integer.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 565)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 573)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 573)) ;
  }
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 570)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 578))  COMMA_SOURCE_FILE ("type-integer.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 575)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 580)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 588))  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 603)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 603)) ;
  }
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 608)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 608)) ;
  }
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 605)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 614))  COMMA_SOURCE_FILE ("type-integer.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 611)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 619)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 619)) ;
  }
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_19642, var_selfTypeProxy_19517, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 616)) ;
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
  GALGAS_lstring var_intIntOp_3954 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mAttribute_string, constinArgument_inIntegerTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4063 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)) ;
  ioArgument_ioContext.mAttribute_mLiteralIntegerType = var_selfTypeProxy_4063 ;
  {
  ioArgument_ioContext.mAttribute_mEqualOperatorMap.setter_insertKey (var_intIntOp_3954, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 95))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 92)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3954, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 100))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 97)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3954, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 105))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 102)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3954, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 110))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 107)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3954, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 115))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 112)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3954, ioArgument_ioContext.mAttribute_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 120))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAndOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 126))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mOrOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 131))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 128)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mXorOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 136))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 133)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 138)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 143)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 151))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 148)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 156))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 153)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 161))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 158)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 163)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 171))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 168)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 176))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 173)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mDivOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 181))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 186))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mModOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 191))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 188)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 196))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 193)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 202))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3954, var_selfTypeProxy_4063, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 207))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 204)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const GALGAS_controlRegisterDeclarationListAST constinArgument_inRegisterDeclarationListAST,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterDeclarationListAST enumerator_7333 (constinArgument_inRegisterDeclarationListAST, kEnumeration_up) ;
  while (enumerator_7333.hasCurrentObject ()) {
    extensionMethod_enterControlRegistersInContext (enumerator_7333.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    enumerator_7333.gotoNextObject () ;
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
  GALGAS_string var_typeDumpFilePath_16503 = constinArgument_inSourceFile.mAttribute_string.add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 434)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16653 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 436)) ;
    cEnumerator_controlRegisterMap enumerator_16693 (constinArgument_inControlRegisterMap, kEnumeration_up) ;
    while (enumerator_16693.hasCurrentObject ()) {
      var_firstLetterSet_16653.addAssign_operation (enumerator_16693.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 438)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 438))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 438)) ;
      enumerator_16693.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_16801 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_16835 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_16882 (constinArgument_inControlRegisterMap, kEnumeration_up) ;
    while (enumerator_16882.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_16835.objectCompare (enumerator_16882.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 443)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_16835 = enumerator_16882.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 444)) ;
        var_tableOfTypeString_16801.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_16835.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 445)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 445)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 445)).add_operation (var_currentFirstLetter_16835.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 445)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 445)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_16882.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_16801.plusAssign_operation(function_linkForControlRegister (enumerator_16882.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_17327 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_16882.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450))), kEnumeration_up) ;
        while (enumerator_17327.hasCurrentObject ()) {
          var_tableOfTypeString_16801.plusAssign_operation(function_linkForControlRegister (enumerator_16882.current_lkey (HERE).mAttribute_string.add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)).add_operation (enumerator_17327.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)) ;
          enumerator_17327.gotoNextObject () ;
        }
      }
      enumerator_16882.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_17492 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mAttribute_string.getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 456)), constinArgument_inControlRegisterMap, var_firstLetterSet_16653, var_tableOfTypeString_16801 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455))) ;
    GALGAS_bool joker_17744 ; // Joker input parameter
    var_typeDumpString_17492.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16503, joker_17744, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16503, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)) ;
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
      result << "<tr class=\"result_line\"><td>" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "<a name=\"" ;
        result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
        result << "\">" ;
        result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
        result << "</a>" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1759_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)).isValid ()) {
          cEnumerator_uintlist enumerator_1759 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)), kEnumeration_up) ;
          while (enumerator_1759.hasCurrentObject ()) {
            result << "<a name=\"" ;
            result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]\">" ;
            result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]</a><br/>" ;
            index_1759_.increment () ;
            enumerator_1759.gotoNextObject () ;
          }
        }
      }
      result << "</td><td class=\"address\">$" ;
      result << enumerator_1588.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 89)).stringValue () ;
      result << "</td><td class=\"address\">" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << enumerator_1588.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 91)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint index_2053_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)).isValid ()) {
          cEnumerator_uintlist enumerator_2053 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)), kEnumeration_up) ;
          while (enumerator_2053.hasCurrentObject ()) {
            result << enumerator_1588.current_mAddress (HERE).add_operation (enumerator_2053.current_mValue (HERE).multiply_operation (enumerator_1588.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_bigint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).stringValue () ;
            index_2053_.increment () ;
            enumerator_2053.gotoNextObject () ;
          }
        }
      }
      result << "</td><td>" ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1588.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "<table class=\"fields\"><tr>" ;
        result << function_fieldIndexColumns (enumerator_1588.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 100)).stringValue () ;
        result << "</tr><tr>" ;
        GALGAS_uint index_2346_ (0) ;
        if (enumerator_1588.current_mControlRegisterFieldList (HERE).isValid ()) {
          cEnumerator_controlRegisterFieldList enumerator_2346 (enumerator_1588.current_mControlRegisterFieldList (HERE), kEnumeration_down) ;
          while (enumerator_2346.hasCurrentObject ()) {
            result << "<td class=\"fields\" colspan=\"" ;
            result << enumerator_2346.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).stringValue () ;
            result << "\">" ;
            result << enumerator_2346.current_mFieldName (HERE).stringValue () ;
            result << "</td>" ;
            index_2346_.increment () ;
            enumerator_2346.gotoNextObject () ;
          }
        }
        result << "</tr></table>" ;
      }else if (kBoolFalse == test_2) {
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
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 482)) ;
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
  cEnumerator_range enumerator_18795 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 489))), kEnumeration_down) ;
  while (enumerator_18795.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_18795.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 490)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 490)) ;
    enumerator_18795.gotoNextObject () ;
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
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist function_arrayIndexListFor (GALGAS_uint inArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_outResult ; // Returned variable
  result_outResult = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 497)) ;
  cEnumerator_range enumerator_19092 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), inArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 498))), kEnumeration_up) ;
  while (enumerator_19092.hasCurrentObject ()) {
    result_outResult.addAssign_operation (enumerator_19092.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 499)) ;
    enumerator_19092.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_arrayIndexListFor (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_arrayIndexListFor (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_7260 = constinArgument_inSourceFile.mAttribute_string.add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_7408 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 170)) ;
    cEnumerator_globalConstantMap enumerator_7447 (inArgument_inGlobalConstantMap, kEnumeration_up) ;
    while (enumerator_7447.hasCurrentObject ()) {
      var_firstLetterSet_7408.addAssign_operation (enumerator_7447.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 172)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 172))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 172)) ;
      enumerator_7447.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7555 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7589 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7635 (inArgument_inGlobalConstantMap, kEnumeration_up) ;
    while (enumerator_7635.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7589.objectCompare (enumerator_7635.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7589 = enumerator_7635.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 178)) ;
        var_tableOfTypeString_7555.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7589.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 179)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)).add_operation (var_currentFirstLetter_7589.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179)) ;
      }
      var_tableOfTypeString_7555.plusAssign_operation(function_linkForGlobalConstant (enumerator_7635.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 181)) ;
      enumerator_7635.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_8031 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mAttribute_string.getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 184)), inArgument_inGlobalConstantMap, var_firstLetterSet_7408, var_tableOfTypeString_7555 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 183))) ;
    GALGAS_bool joker_8275 ; // Joker input parameter
    var_typeDumpString_8031.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_7260, joker_8275, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 189)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_7260, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 191)) ;
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
      result << extensionGetter_key (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
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
                                   const GALGAS_lstringlist constinArgument_inRequiredByProcList,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_5590 = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 138)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph_5590, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_5590.mAttribute_string COMMA_SOURCE_FILE ("declaration-init.galgas", 141)).operator_not (SOURCE_FILE ("declaration-init.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5590, var_routineNameForInvocationGraph_5590, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 142)) ;
    }
  }
  cEnumerator_lstringlist enumerator_6037 (constinArgument_inRequiredByProcList, kEnumeration_up) ;
  while (enumerator_6037.hasCurrentObject ()) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (enumerator_6037.current_mValue (HERE), var_routineNameForInvocationGraph_5590 COMMA_SOURCE_FILE ("declaration-init.galgas", 148)) ;
    }
    enumerator_6037.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap_6452 ;
  GALGAS_namedObjectMap var_namedObjectMap_6488 ;
  {
  routine_initialVariableMap (var_routineNameForInvocationGraph_5590.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-init.galgas", 158)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 160)), var_variableMap_6452, var_namedObjectMap_6488, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 154)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 165)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 166)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_5590, constinArgument_inContext, constinArgument_inModeSet, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_6452, var_namedObjectMap_6488, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 167)) ;
  var_variableMap_6452.method_checkAutomatonStates (constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 184)) ;
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
    const enumGalgasBool test_0 = constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.getter_hasKey (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 43)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 43)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_2006 = GALGAS_string ("the '").add_operation (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 44)).add_operation (GALGAS_string ("' should be defined as: proc"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 44)) ;
      cEnumerator_lstringlist enumerator_2139 (enumerator_1882.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_2139.hasCurrentObject ()) {
        var_s_2006.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_2139.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)) ;
        enumerator_2139.gotoNextObject () ;
      }
      var_s_2006.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 48)) ;
      cEnumerator_procFormalArgumentList enumerator_2284 (enumerator_1882.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_2284.hasCurrentObject ()) {
        var_s_2006.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 50)) ;
        switch (enumerator_2284.current (HERE).mAttribute_mFormalArgumentPassingMode.enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            var_s_2006.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 52)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            var_s_2006.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 53)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            var_s_2006.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 54)) ;
          }
          break ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2284.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_s_2006.plusAssign_operation(enumerator_2284.current (HERE).mAttribute_mSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 57)) ;
        }
        var_s_2006.plusAssign_operation(enumerator_2284.current (HERE).mAttribute_mFormalArgumentTypeName.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 59)) ;
        enumerator_2284.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_2006  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_modeMap var_procModes_2771 ;
      GALGAS_lstring joker_2754_2 ; // Joker input parameter
      GALGAS_bool joker_2754_1 ; // Joker input parameter
      GALGAS_procedureSignature joker_2773_7 ; // Joker input parameter
      GALGAS_routineKind joker_2773_6 ; // Joker input parameter
      GALGAS_bool joker_2773_5 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_proxy joker_2773_4 ; // Joker input parameter
      GALGAS_bool joker_2773_3 ; // Joker input parameter
      GALGAS_bool joker_2773_2 ; // Joker input parameter
      GALGAS_bool joker_2773_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.method_searchKey (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName, joker_2754_2, joker_2754_1, var_procModes_2771, joker_2773_7, joker_2773_6, joker_2773_5, joker_2773_4, joker_2773_3, joker_2773_2, joker_2773_1, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)) ;
      GALGAS_stringset var_actualProcModeSet_2804 = var_procModes_2771.getter_keySet (SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      GALGAS_stringset var_requiredProcModeSet_2855 = GALGAS_stringset::constructor_setWithLStringList (enumerator_1882.current (HERE).mAttribute_mProcedureModeList  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 65)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_actualProcModeSet_2804.objectCompare (var_requiredProcModeSet_2855)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_2990 = GALGAS_string ("required modes:") ;
        cEnumerator_stringset enumerator_3052 (var_requiredProcModeSet_2855, kEnumeration_up) ;
        while (enumerator_3052.hasCurrentObject ()) {
          var_s_2990.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_3052.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 69)) ;
          enumerator_3052.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.getter_locationForKey (enumerator_1882.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)), var_s_2990  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)) ;
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
  cEnumerator__32_stringlist enumerator_8811 (constinArgument_inSectionList, kEnumeration_up) ;
  GALGAS_uint index_8764 ((uint32_t) 0) ;
  while (enumerator_8811.hasCurrentObject ()) {
    GALGAS_string var_s_8830 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 223)) ;
    var_s_8830 = var_s_8830.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_8811.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 224)) ;
    var_s_8830 = var_s_8830.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_8764.getter_string (SOURCE_FILE ("declaration-section.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 225)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_8830, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 226)) ;
    enumerator_8811.gotoNextObject () ;
    index_8764.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 222)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 228)) ;
  cEnumerator__32_stringlist enumerator_9256 (constinArgument_inSectionList, kEnumeration_up) ;
  GALGAS_uint index_9216 ((uint32_t) 0) ;
  while (enumerator_9256.hasCurrentObject ()) {
    GALGAS_string var_s_9275 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 230)) ;
    var_s_9275 = var_s_9275.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_9256.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 231)) ;
    var_s_9275 = var_s_9275.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_9216.getter_string (SOURCE_FILE ("declaration-section.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("declaration-section.galgas", 232)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_9275, inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 233)) ;
    enumerator_9256.gotoNextObject () ;
    index_9216.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 229)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-section.galgas", 235)) ;
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
  cEnumerator__32_stringlist enumerator_8976 (constinArgument_inServiceList, kEnumeration_up) ;
  GALGAS_uint index_8946 ((uint32_t) 0) ;
  while (enumerator_8976.hasCurrentObject ()) {
    GALGAS_string var_s_8995 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 220)) ;
    var_s_8995 = var_s_8995.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_8976.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 221)) ;
    var_s_8995 = var_s_8995.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_8946.getter_string (SOURCE_FILE ("declaration-service.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 222)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_8995, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 223)) ;
    enumerator_8976.gotoNextObject () ;
    index_8946.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 219)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 225)) ;
  cEnumerator__32_stringlist enumerator_9421 (constinArgument_inServiceList, kEnumeration_up) ;
  GALGAS_uint index_9381 ((uint32_t) 0) ;
  while (enumerator_9421.hasCurrentObject ()) {
    GALGAS_string var_s_9440 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 227)) ;
    var_s_9440 = var_s_9440.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_9421.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 228)) ;
    var_s_9440 = var_s_9440.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_9381.getter_string (SOURCE_FILE ("declaration-service.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("declaration-service.galgas", 229)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_9440, inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 230)) ;
    enumerator_9421.gotoNextObject () ;
    index_9381.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 226)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-service.galgas", 232)) ;
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
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 178)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 178)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 178)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 178)) ;
  }
  GALGAS_lstring var_guardMangledName_6662 = temp_0 ;
  var_guardMangledName_6662.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 180)) ;
  cEnumerator_procFormalArgumentList enumerator_6988 (constinArgument_inRoutineFormalArgumentList, kEnumeration_up) ;
  while (enumerator_6988.hasCurrentObject ()) {
    var_guardMangledName_6662.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_6988.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)).add_operation (enumerator_6988.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)) ;
    enumerator_6988.gotoNextObject () ;
  }
  var_guardMangledName_6662.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 184)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_guardMangledName_6662.mAttribute_string COMMA_SOURCE_FILE ("declaration-guard.galgas", 187)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 187)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6662, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 188)) ;
    }
  }
  GALGAS_variableMap var_variableMap_7735 ;
  GALGAS_namedObjectMap var_namedObjectMap_7771 ;
  {
  routine_initialVariableMap (var_guardMangledName_6662.mAttribute_string, constinArgument_inContext, GALGAS_bool (false), GALGAS_accessKind::constructor_noAccess (SOURCE_FILE ("declaration-guard.galgas", 198)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 200)), var_variableMap_7735, var_namedObjectMap_7771, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  }
  GALGAS_procFormalArgumentListForGeneration var_formalArguments_7830 = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 204)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_7889 ;
  GALGAS_allocaList var_allocaList_7914 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 206)) ;
  GALGAS_instructionListIR var_instructionGenerationList_7966 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 207)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_8069 = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_8151 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 212)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 212)) ;
      var_allocaList_7914.addAssign_operation (var_resultVarName_8069.mAttribute_string, var_resultType_8151  COMMA_SOURCE_FILE ("declaration-guard.galgas", 213)) ;
      {
      var_variableMap_7735.setter_insertOutputFormalArgument (var_resultVarName_8069, var_resultType_8151, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localVariable (var_resultType_8151, var_resultVarName_8069.mAttribute_string, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 218)), GALGAS_objectIR::constructor_localVariableReference (var_resultType_8151, var_resultVarName_8069.mAttribute_string  COMMA_SOURCE_FILE ("declaration-guard.galgas", 219)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 214)) ;
      }
      GALGAS_objectIR var_resultVariable_8684 = GALGAS_objectIR::constructor_localVariableReference (var_resultType_8151, var_resultVarName_8069.getter_string (SOURCE_FILE ("declaration-guard.galgas", 225))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 223)) ;
      {
      var_namedObjectMap_7771.setter_insertKey (var_resultVarName_8069, var_resultVariable_8684, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 227)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_7735, var_namedObjectMap_7771, var_formalArguments_7830, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 229)) ;
      }
      var_convenienceGuardGenerationIR_7889 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 236)) ;
      GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 244)) ;
      temp_3.addAssign_operation (function_guardModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6662, constinArgument_inContext, temp_3, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_7735, var_namedObjectMap_7771, var_allocaList_7914, var_instructionGenerationList_7966, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_11148 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_abstractCallInstructionAST extractedValue_baseGuardInstruction = extractPtr_11148->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_7735, var_namedObjectMap_7771, var_formalArguments_7830, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 255)) ;
      }
      GALGAS_instructionListIR var_baseGuardInstructionGenerationList_9981 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 263)) ;
      GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 268)) ;
      temp_4.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 268))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 268)) ;
      callExtensionMethod_baseGuardAnalyze ((const cPtr_abstractCallInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6662, constinArgument_inContext, temp_4, var_allocaList_7914, var_instructionGenerationList_7966, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_7735, var_namedObjectMap_7771, var_convenienceGuardGenerationIR_7889, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 284)) ;
      temp_5.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 284))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 284)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6662, constinArgument_inContext, temp_5, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_7735, var_namedObjectMap_7771, var_allocaList_7914, var_instructionGenerationList_7966, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 278)) ;
    }
    break ;
  }
  var_variableMap_7735.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 296)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGuardMapIR.setter_insertKey (var_guardMangledName_6662, var_formalArguments_7830, var_convenienceGuardGenerationIR_7889, var_allocaList_7914, var_instructionGenerationList_7966, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
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
                                         GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                         GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release 'out' argument
  GALGAS_lstring var_guardMangledName_13274 = constinArgument_inRoutineName ;
  var_guardMangledName_13274.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 346)) ;
  cEnumerator_effectiveParameterListAST enumerator_13480 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_13480.hasCurrentObject ()) {
    var_guardMangledName_13274.mAttribute_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_13480.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 348)).add_operation (enumerator_13480.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 348)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 348)) ;
    enumerator_13480.gotoNextObject () ;
  }
  var_guardMangledName_13274.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 350)) ;
  GALGAS_bool var_isPublic_13792 ;
  GALGAS_procedureSignature var_formalSignature_13837 ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (var_guardMangledName_13274, var_isPublic_13792, var_formalSignature_13837, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 352)) ;
  const enumGalgasBool test_0 = var_isPublic_13792.operator_not (SOURCE_FILE ("declaration-guard.galgas", 358)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_declarationFile_13921 = constinArgument_inContext.mAttribute_mGuardMapForContext.getter_locationForKey (var_guardMangledName_13274.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 359)).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 359)) ;
    GALGAS_string var_invocationFile_14025 = constinArgument_inRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_invocationFile_14025.objectCompare (var_declarationFile_13921)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 362)), GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 362)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_guardMangledName_13274 COMMA_SOURCE_FILE ("declaration-guard.galgas", 367)) ;
  }
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_14491 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 369)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14557 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 370)) ;
  GALGAS_allocaList var_baseGuardAllocaList_14596 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 371)) ;
  {
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 381)) ;
  temp_2.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 381))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 381)) ;
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_13837, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, temp_2, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, var_baseGuardAllocaList_14596, var_baseGuardInstructionGenerationList_14491, var_effectiveParameterListIR_14557, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 372)) ;
  }
  outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_14596, var_baseGuardInstructionGenerationList_14491, var_guardMangledName_13274.mAttribute_string, var_effectiveParameterListIR_14557  COMMA_SOURCE_FILE ("declaration-guard.galgas", 392)) ;
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
      const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 221)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 221)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)) ;
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
      const enumGalgasBool test_2 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 232)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 232)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)) ;
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
      const enumGalgasBool test_4 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 243)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 243)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 244)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 244))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 244)) ;
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
      const enumGalgasBool test_6 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 254)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 254)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 255)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 255))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 255)) ;
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
      const enumGalgasBool test_8 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 265)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 265)).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 266)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 266))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 266)) ;
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
//                                       Routine 'handleSelfAccessInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 276)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_10916 ;
    GALGAS_string var_name_10934 ;
    GALGAS_uint var_index_10951 ;
    constinArgument_inObject.method_property (var_type_10916, var_name_10934, var_index_10951, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 277)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_10916, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 280)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 281)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 278)) ;
    ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 284)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_10934, var_index_10951, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 285)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 292)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>")  COMMA_SOURCE_FILE ("expression-primary.galgas", 292)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inProperty,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 305)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_11797 ;
    GALGAS_string var_name_11815 ;
    GALGAS_uint var_index_11832 ;
    constinArgument_inProperty.method_property (var_type_11797, var_name_11815, var_index_11832, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 306)) ;
    GALGAS_objectIR var_newObject_11851 = GALGAS_objectIR::constructor_temporaryReference (var_type_11797, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 309)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 310)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 307)) ;
    ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 313)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_11851, ioArgument_ioObject, var_name_11815, var_index_11832.getter_string (SOURCE_FILE ("expression-primary.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 314)) ;
    }
    ioArgument_ioObject = var_newObject_11851 ;
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>")  COMMA_SOURCE_FILE ("expression-primary.galgas", 322)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'handleSubscriptInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                          const GALGAS_bool constinArgument_inGuard,
                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          const GALGAS_stringset constinArgument_inModeSet,
                                          const GALGAS_bool constinArgument_inAllowPanic,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                          GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          const GALGAS_expressionAST constinArgument_inIndexExpression,
                                          const GALGAS_location constinArgument_inErrorLocation,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          GALGAS_objectIR & ioArgument_ioObjectPtr,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 347)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 347)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_handleVariableSubscriptInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 348)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = ioArgument_ioObjectPtr.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 366)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_handleRegisterArraySubscriptInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
      }
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the receiver is not an array and does not accept subscripting")  COMMA_SOURCE_FILE ("expression-primary.galgas", 386)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'handleVariableSubscriptInExpression'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleVariableSubscriptInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                  const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                  const GALGAS_bool constinArgument_inGuard,
                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_stringset constinArgument_inModeSet,
                                                  const GALGAS_bool constinArgument_inAllowPanic,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                  GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                  const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                  const GALGAS_location constinArgument_inErrorLocation,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_type_15640 ;
  GALGAS_bigint var_arraySize_15668 ;
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 411)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 411)).method_arrayType (var_type_15640, var_arraySize_15668, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 411)) ;
  GALGAS_objectIR var_indexResult_16284 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 418)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_16284, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 413)) ;
  const enumGalgasBool test_0 = var_indexResult_16284.getter_isLiteralInteger (SOURCE_FILE ("expression-primary.galgas", 430)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_16415 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_16383_1 ; // Joker input parameter
    var_indexResult_16284.method_literalInteger (joker_16383_1, var_indexValue_16415, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 431)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_16415.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 432)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_16415.objectCompare (var_arraySize_15668)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_15668.getter_string (SOURCE_FILE ("expression-primary.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433))  COMMA_SOURCE_FILE ("expression-primary.galgas", 433)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_16598 = GALGAS_objectIR::constructor_temporaryReference (var_type_15640, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 437)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 438)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 441)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_16598, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (var_indexValue_16415.getter_string (SOURCE_FILE ("expression-primary.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 445)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 445)), var_indexValue_16415.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 446)).getter_string (SOURCE_FILE ("expression-primary.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 442)) ;
      }
      ioArgument_ioObjectPtr = var_result_16598 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = extensionGetter_kind (var_indexResult_16284, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 450)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-primary.galgas", 451)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bool var_generatePanicInstruction_17275 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_16284, constinArgument_inErrorLocation, var_arraySize_15668, var_generatePanicInstruction_17275, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 452)) ;
        }
        GALGAS_bool test_5 = var_generatePanicInstruction_17275 ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = constinArgument_inAllowPanic.operator_not (SOURCE_FILE ("expression-primary.galgas", 458)) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic")  COMMA_SOURCE_FILE ("expression-primary.galgas", 459)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_17462 = GALGAS_objectIR::constructor_temporaryReference (var_type_15640, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 464)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 465)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 462)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 468)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_17462, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (extensionGetter_name (var_indexResult_16284, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)), extensionGetter_llvmName (var_indexResult_16284, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 469)) ;
      }
      ioArgument_ioObjectPtr = var_result_17462 ;
    }else if (kBoolFalse == test_3) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer")  COMMA_SOURCE_FILE ("expression-primary.galgas", 477)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleRegisterArraySubscriptInExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleRegisterArraySubscriptInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_bool constinArgument_inGuard,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_stringset constinArgument_inModeSet,
                                                       const GALGAS_bool constinArgument_inAllowPanic,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_18953 ;
  GALGAS_lstring var_registerName_18983 ;
  GALGAS_bool var_readable_19010 ;
  GALGAS_bool var_writable_19037 ;
  GALGAS_bigint var_registerAddress_19078 ;
  GALGAS_sliceMap var_registerBitSliceMap_19122 ;
  GALGAS_uint var_arraySize_19157 ;
  GALGAS_uint var_elementArraySize_19221 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_18953, var_registerName_18983, var_readable_19010, var_writable_19037, var_registerAddress_19078, var_registerBitSliceMap_19122, var_arraySize_19157, var_elementArraySize_19221, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 501)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_19157.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting")  COMMA_SOURCE_FILE ("expression-primary.galgas", 512)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_readable_19010.operator_not (SOURCE_FILE ("expression-primary.galgas", 513)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context")  COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      GALGAS_objectIR var_indexResult_20107 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 521)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_20107, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 516)) ;
      const enumGalgasBool test_2 = var_indexResult_20107.getter_isLiteralInteger (SOURCE_FILE ("expression-primary.galgas", 534)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bigint var_indexValue_20271 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_20239_1 ; // Joker input parameter
        var_indexResult_20107.method_literalInteger (joker_20239_1, var_indexValue_20271, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 535)) ;
        GALGAS_bool test_3 = GALGAS_bool (kIsStrictInf, var_indexValue_20271.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 536)))) ;
        if (kBoolTrue != test_3.boolEnum ()) {
          test_3 = GALGAS_bool (kIsSupOrEqual, var_indexValue_20271.objectCompare (var_arraySize_19157.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 536)))) ;
        }
        const enumGalgasBool test_4 = test_3.boolEnum () ;
        if (kBoolTrue == test_4) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_19157.getter_string (SOURCE_FILE ("expression-primary.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 537))  COMMA_SOURCE_FILE ("expression-primary.galgas", 537)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_18953, var_registerName_18983, var_readable_19010, var_writable_19037, var_registerAddress_19078.add_operation (var_indexValue_20271.multiply_operation (var_elementArraySize_19221.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 544)), var_registerBitSliceMap_19122, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = extensionGetter_kind (var_indexResult_20107, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 551)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 551)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-primary.galgas", 552)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_bool var_generatePanicInstruction_21088 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_20107, constinArgument_inErrorLocation, var_arraySize_19157.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 556)), var_generatePanicInstruction_21088, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 553)) ;
            }
            GALGAS_bool test_7 = var_generatePanicInstruction_21088 ;
            if (kBoolTrue == test_7.boolEnum ()) {
              test_7 = constinArgument_inAllowPanic.operator_not (SOURCE_FILE ("expression-primary.galgas", 559)) ;
            }
            const enumGalgasBool test_8 = test_7.boolEnum () ;
            if (kBoolTrue == test_8) {
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic")  COMMA_SOURCE_FILE ("expression-primary.galgas", 560)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_21287 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_18953, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 565)), var_registerBitSliceMap_19122, GALGAS_bool (true)  COMMA_SOURCE_FILE ("expression-primary.galgas", 563)) ;
          ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 569)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_21287, var_indexResult_20107, var_registerAddress_19078, var_elementArraySize_19221.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 570)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_21287 ;
        }else if (kBoolFalse == test_5) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer")  COMMA_SOURCE_FILE ("expression-primary.galgas", 578)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'handlePropertyInExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyInExpression (const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                         const GALGAS_bool /* constinArgument_inGuard */,
                                         const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_stringset /* constinArgument_inModeSet */,
                                         const GALGAS_bool /* constinArgument_inAllowPanic */,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                         GALGAS_namedObjectMap & /* ioArgument_ioNamedObjectMap */,
                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                         const GALGAS_lstring constinArgument_inPropertyName,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectIR & ioArgument_ioObjectPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 603)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 603)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 603)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_namedObjectMap var_structureObjectMap_22949 ;
    GALGAS_propertyMap joker_22951_2 ; // Joker input parameter
    GALGAS_propertyList joker_22951_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)).method_structure (var_structureObjectMap_22949, joker_22951_2, joker_22951_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_22949.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 605)) COMMA_SOURCE_FILE ("expression-primary.galgas", 605)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_23082 ;
      var_structureObjectMap_22949.method_searchKey (constinArgument_inPropertyName, var_property_23082, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mAttribute_location, var_property_23082, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 607)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 615)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 618)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_23480 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 619)) ;
      GALGAS_objectIR var_loadedRegisterValue_23699 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.mAttribute_location, var_loadedRegisterValue_23699, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 620)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_23798 ;
      GALGAS_bigint var_accessRightOperand_23836 ;
      GALGAS_sliceMap var_resultSliceMap_23872 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_23916 ;
      var_sliceMap_23480.method_searchKey (constinArgument_inPropertyName, var_accessOperator_23798, var_accessRightOperand_23836, var_resultSliceMap_23872, var_resultType_23916, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 626)) ;
      GALGAS_objectIR var_resultObject_23943 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_23916, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 635)), var_resultSliceMap_23872  COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 638)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_23943, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 641)), constinArgument_inPropertyName.mAttribute_location, var_loadedRegisterValue_23699, var_accessOperator_23798, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, var_accessRightOperand_23836  COMMA_SOURCE_FILE ("expression-primary.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 639)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_23943 ;
    }else if (kBoolFalse == test_2) {
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 649)), GALGAS_string ("the current object has no property")  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_stringset constinArgument_inModeSet,
                                             const GALGAS_bool constinArgument_inAllowPanic,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveParameterListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectIR & ioArgument_ioObjectPtr,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 673)).operator_not (SOURCE_FILE ("expression-primary.galgas", 673)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function")  COMMA_SOURCE_FILE ("expression-primary.galgas", 674)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_functionName_25654 ;
      GALGAS_objectIR joker_25621_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_25621_1, var_functionName_25654, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
      inCompiler->emitSemanticError (var_functionName_25654.getter_location (SOURCE_FILE ("expression-primary.galgas", 677)), GALGAS_string ("a function cannot be called in guard expression")  COMMA_SOURCE_FILE ("expression-primary.galgas", 677)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      GALGAS_objectIR var_receiver_25808 ;
      GALGAS_lstring var_functionName_25839 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_25808, var_functionName_25839, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 679)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_26566 ;
      GALGAS_routineKindIR var_routineKind_26616 ;
      GALGAS_lstring var_functionMangledName_26675 ;
      GALGAS_lstring var_functionNameForGeneration_26746 ;
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType_26803 ;
      GALGAS_bool var_appendFileAndLineArgumentForPanicLocation_26898 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_25808, var_functionName_25839, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_26566, var_routineKind_26616, var_functionMangledName_26675, var_functionNameForGeneration_26746, var_returnedType_26803, var_appendFileAndLineArgumentForPanicLocation_26898, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 680)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_returnedType_26803.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 704)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (var_functionName_25839.getter_location (SOURCE_FILE ("expression-primary.galgas", 705)), GALGAS_string ("the function cannot be called in expression: no return value")  COMMA_SOURCE_FILE ("expression-primary.galgas", 705)) ;
      }
      GALGAS_objectIR var_functionResult_27160 ;
      {
      routine_getNewTempVariable (var_returnedType_26803, ioArgument_ioTemporaries, var_functionResult_27160, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 708)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (var_functionResult_27160, var_functionMangledName_26675, var_functionNameForGeneration_26746, var_routineKind_26616, var_effectiveParameterListIR_26566, var_appendFileAndLineArgumentForPanicLocation_26898  COMMA_SOURCE_FILE ("expression-primary.galgas", 710))  COMMA_SOURCE_FILE ("expression-primary.galgas", 710)) ;
      ioArgument_ioObjectPtr = var_functionResult_27160 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_objectIR constinArgument_inReceiver,
                                              const GALGAS_lstring constinArgument_inRoutineName,
                                              const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_stringset constinArgument_inRequiredModeSet,
                                              const GALGAS_bool constinArgument_inAllowPanic,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                              GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                              GALGAS_routineKindIR & outArgument_outRoutineKindIR,
                                              GALGAS_lstring & outArgument_outRoutineMangledName,
                                              GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                              GALGAS_bool & outArgument_outAppendFileAndLineArgumentForPanicLocation,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outAppendFileAndLineArgumentForPanicLocation.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 750)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_28988 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 752)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_28988.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 753)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outRoutineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_28988.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 754)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 754)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 754)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("expression-primary.galgas", 754)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 755)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 755)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outRoutineMangledName = constinArgument_inRoutineName ;
  }
  outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 760)) ;
  cEnumerator_effectiveParameterListAST enumerator_29387 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_29387.hasCurrentObject ()) {
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_29387.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 762)) ;
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(enumerator_29387.current_mSelector (HERE).mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 763)) ;
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (":"), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 764)) ;
    enumerator_29387.gotoNextObject () ;
  }
  outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 766)) ;
  GALGAS_bool var_isPublic_29722 ;
  GALGAS_modeMap var_modeMap_29739 ;
  GALGAS_procedureSignature var_formalSignature_29784 ;
  GALGAS_routineKind var_routineKind_29818 ;
  GALGAS_bool var_canMutateProperties_29932 ;
  GALGAS_bool var_canAccessPropertiesInUserMode_29978 ;
  GALGAS_bool joker_29824 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (outArgument_outRoutineMangledName, outArgument_outRoutineNameForGeneration, var_isPublic_29722, var_modeMap_29739, var_formalSignature_29784, var_routineKind_29818, joker_29824, outArgument_outReturnedType, outArgument_outAppendFileAndLineArgumentForPanicLocation, var_canMutateProperties_29932, var_canAccessPropertiesInUserMode_29978, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 767)) ;
  const enumGalgasBool test_1 = var_isPublic_29722.operator_not (SOURCE_FILE ("expression-primary.galgas", 781)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType_28988.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 782)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile_30120 = constinArgument_inContext.mAttribute_mRoutineMapForContext.getter_locationForKey (outArgument_outRoutineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 783)).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 783)) ;
      GALGAS_string var_invocationFile_30233 = constinArgument_inRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 784)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile_30233.objectCompare (var_declarationFile_30120)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 786)), GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("expression-primary.galgas", 786)) ;
      }
    }else if (kBoolFalse == test_2) {
      inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 789)), GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("expression-primary.galgas", 789)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 793)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap_29739.getter_keySet (SOURCE_FILE ("expression-primary.galgas", 797)), var_routineKind_29818, constinArgument_inRoutineName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 795)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_29784, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 802)) ;
  }
}


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
                                    GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  GALGAS_accessList var_accessList_4194 = constinArgument_inAccessList ;
  GALGAS_lstring var_baseName_4248 ;
  GALGAS_arrayElementAccess var_baseElementArrayAccess_4276 ;
  {
  var_accessList_4194.setter_popFirst (var_baseName_4248, var_baseElementArrayAccess_4276, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 95)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_4481 ;
  GALGAS_objectInMemoryIR var_sourcePtr_4538 ;
  GALGAS_objectIR var_objectIR_4572 ;
  {
  GALGAS_bool joker_4487_1 ; // Joker input parameter
  GALGAS_bool joker_4578_2 ; // Joker input parameter
  GALGAS_bool joker_4578_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (var_baseName_4248, var_type_4481, joker_4487_1, var_sourcePtr_4538, var_objectIR_4572, joker_4578_2, joker_4578_1, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 97)) ;
  }
  GALGAS_elementPtrList var_elementPtrList_4642 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-access.galgas", 106)) ;
  {
  routine_analyzeArrayElementAccess (var_baseElementArrayAccess_4276, var_type_4481, var_elementPtrList_4642, var_baseName_4248.mAttribute_location, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 107)) ;
  }
  GALGAS_bool var_publicIsRequired_5288 = GALGAS_bool (false) ;
  cEnumerator_accessList enumerator_5347 (var_accessList_4194, kEnumeration_up) ;
  while (enumerator_5347.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_type_4481.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 129)).getter_isStructure (SOURCE_FILE ("rule-access.galgas", 129)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyMap var_propertyMap_5450 ;
      GALGAS_namedObjectMap joker_5419_1 ; // Joker input parameter
      GALGAS_propertyList joker_5465 ; // Joker input parameter
      var_type_4481.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 130)).method_structure (joker_5419_1, var_propertyMap_5450, joker_5465, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 130)) ;
      GALGAS_bool var_public_5519 ;
      GALGAS_uint var_index_5536 ;
      var_propertyMap_5450.method_searchKey (enumerator_5347.current_mName (HERE), var_public_5519, var_type_4481, var_index_5536, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 131)) ;
      GALGAS_bool test_1 = var_publicIsRequired_5288 ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_public_5519.operator_not (SOURCE_FILE ("rule-access.galgas", 132)) ;
      }
      const enumGalgasBool test_2 = test_1.boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (enumerator_5347.current_mName (HERE).getter_location (SOURCE_FILE ("rule-access.galgas", 133)), GALGAS_string ("this field is not public")  COMMA_SOURCE_FILE ("rule-access.galgas", 133)) ;
      }
      GALGAS_elementPtrList temp_3 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-access.galgas", 135)) ;
      temp_3.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_index_5536  COMMA_SOURCE_FILE ("rule-access.galgas", 135)), GALGAS_string (".").add_operation (enumerator_5347.current_mName (HERE).getter_string (SOURCE_FILE ("rule-access.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 135))  COMMA_SOURCE_FILE ("rule-access.galgas", 135)) ;
      var_elementPtrList_4642.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 135)) ;
      var_publicIsRequired_5288 = GALGAS_bool (true) ;
      {
      routine_analyzeArrayElementAccess (enumerator_5347.current_mArrayAccess (HERE), var_type_4481, var_elementPtrList_4642, enumerator_5347.current_mName (HERE).mAttribute_location, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 137)) ;
      }
    }else if (kBoolFalse == test_0) {
      inCompiler->emitSemanticError (enumerator_5347.current_mName (HERE).getter_location (SOURCE_FILE ("rule-access.galgas", 157)), GALGAS_string ("the field type is not a structure")  COMMA_SOURCE_FILE ("rule-access.galgas", 157)) ;
      var_type_4481.drop () ; // Release error dropped variable
    }
    enumerator_5347.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_elementPtrList_4642.getter_length (SOURCE_FILE ("rule-access.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outResultPtr = var_sourcePtr_4538 ;
  }else if (kBoolFalse == test_4) {
    {
    routine_getLocalNameOfNewTempObjectInMemory (var_type_4481, ioArgument_ioTemporaries, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 163)) ;
    }
    {
    extensionSetter_appendGetElementPtr (ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, var_sourcePtr_4538, var_elementPtrList_4642, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 164)) ;
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
                                         GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  GALGAS_lstring var_baseName_7768 ;
  GALGAS_arrayElementAccess var_baseElementArrayAccess_7796 ;
  constinArgument_inAccessList.method_first (var_baseName_7768, var_baseElementArrayAccess_7796, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 192)) ;
  GALGAS_bool var_accessIsAllowed_7846 ;
  GALGAS_bool var_isCopyable_7865 ;
  GALGAS_objectInMemoryIR var_variableKind_7898 ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("rule-access.galgas", 197)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsEqual, var_baseElementArrayAccess_7796.objectCompare (GALGAS_arrayElementAccess::constructor_noAccess (SOURCE_FILE ("rule-access.galgas", 197)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_objectIR var_objectIR_8160 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_8049_1 ; // Joker input parameter
    GALGAS_bool joker_8195_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (var_baseName_7768, joker_8049_1, var_accessIsAllowed_7846, var_variableKind_7898, var_objectIR_8160, var_isCopyable_7865, joker_8195_1, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 198)) ;
    }
  }else if (kBoolFalse == test_1) {
    GALGAS_objectIR var_objectIR_8396 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_8285_1 ; // Joker input parameter
    GALGAS_bool joker_8431_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (var_baseName_7768, joker_8285_1, var_accessIsAllowed_7846, var_variableKind_7898, var_objectIR_8396, var_isCopyable_7865, joker_8431_1, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 208)) ;
    }
  }
  const enumGalgasBool test_2 = var_accessIsAllowed_7846.operator_not (SOURCE_FILE ("rule-access.galgas", 218)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (var_baseName_7768.getter_location (SOURCE_FILE ("rule-access.galgas", 219)), GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("rule-access.galgas", 219)) ;
  }
  const enumGalgasBool test_3 = var_variableKind_7898.getter_isRegister (SOURCE_FILE ("rule-access.galgas", 222)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_analyzeRegisterWriteAccess (constinArgument_inAccessList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 223)) ;
    }
  }else if (kBoolFalse == test_3) {
    {
    routine_analyzeVariableAccess (constinArgument_inAccessList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 242)) ;
    }
  }
  const enumGalgasBool test_4 = var_isCopyable_7865.operator_not (SOURCE_FILE ("rule-access.galgas", 261)).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (var_baseName_7768.getter_location (SOURCE_FILE ("rule-access.galgas", 262)), GALGAS_string ("an $").add_operation (extensionGetter_type (outArgument_outResultPtr, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 262)).getter_key (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 262)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 262))  COMMA_SOURCE_FILE ("rule-access.galgas", 262)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeRegisterWriteAccess'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRegisterWriteAccess (const GALGAS_accessList constinArgument_inAccessList,
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
                                         GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  GALGAS_lstring var_baseName_10948 ;
  GALGAS_arrayElementAccess var_baseElementArrayAccess_10976 ;
  constinArgument_inAccessList.method_first (var_baseName_10948, var_baseElementArrayAccess_10976, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 285)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("rule-access.galgas", 286)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_baseName_10948.getter_location (SOURCE_FILE ("rule-access.galgas", 287)), GALGAS_string ("invalid register access")  COMMA_SOURCE_FILE ("rule-access.galgas", 287)) ;
    outArgument_outResultPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_11189 ;
    GALGAS_bool var_accessIsAllowed_11241 ;
    GALGAS_objectIR var_objectIR_11309 ;
    GALGAS_bool var_isCopyable_11347 ;
    {
    GALGAS_bool joker_11355_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (var_baseName_10948, var_type_11189, var_accessIsAllowed_11241, outArgument_outResultPtr, var_objectIR_11309, var_isCopyable_11347, joker_11355_1, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 289)) ;
    }
    GALGAS_lstring var_registerName_11441 ;
    GALGAS_bool var_readable_11470 ;
    GALGAS_bool var_writable_11499 ;
    GALGAS_bigint var_registerAddress_11542 ;
    GALGAS_uint var_arraySize_11589 ;
    GALGAS_uint var_elementArraySize_11635 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_11398_1 ; // Joker input parameter
    GALGAS_sliceMap joker_11550_1 ; // Joker input parameter
    outArgument_outResultPtr.method_register (joker_11398_1, var_registerName_11441, var_readable_11470, var_writable_11499, var_registerAddress_11542, joker_11550_1, var_arraySize_11589, var_elementArraySize_11635, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 298)) ;
    switch (var_baseElementArrayAccess_10976.enumValue ()) {
    case GALGAS_arrayElementAccess::kNotBuilt:
      break ;
    case GALGAS_arrayElementAccess::kEnum_noAccess:
      {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_arraySize_11589.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->emitSemanticError (var_baseName_10948.getter_location (SOURCE_FILE ("rule-access.galgas", 311)), GALGAS_string ("control register array access requires subscripting")  COMMA_SOURCE_FILE ("rule-access.galgas", 311)) ;
          outArgument_outResultPtr.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_arrayElementAccess::kEnum_access:
      {
        const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_14154 = (const cEnumAssociatedValues_arrayElementAccess_access *) (var_baseElementArrayAccess_10976.unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_14154->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_14154->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_arraySize_11589.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (var_baseName_10948.getter_location (SOURCE_FILE ("rule-access.galgas", 315)), GALGAS_string ("control register do not handle subscripting")  COMMA_SOURCE_FILE ("rule-access.galgas", 315)) ;
          outArgument_outResultPtr.drop () ; // Release error dropped variable
        }
        GALGAS_objectIR var_indexResult_12644 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("rule-access.galgas", 322)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_12644, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 317)) ;
        const enumGalgasBool test_3 = var_indexResult_12644.getter_isLiteralInteger (SOURCE_FILE ("rule-access.galgas", 334)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_bigint var_indexValue_12787 ;
          GALGAS_unifiedTypeMap_2D_proxy joker_12755_1 ; // Joker input parameter
          var_indexResult_12644.method_literalInteger (joker_12755_1, var_indexValue_12787, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 335)) ;
          GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_indexValue_12787.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 336)))) ;
          if (kBoolTrue != test_4.boolEnum ()) {
            test_4 = GALGAS_bool (kIsSupOrEqual, var_indexValue_12787.objectCompare (var_arraySize_11589.getter_bigint (SOURCE_FILE ("rule-access.galgas", 336)))) ;
          }
          const enumGalgasBool test_5 = test_4.boolEnum () ;
          if (kBoolTrue == test_5) {
            inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_11589.getter_string (SOURCE_FILE ("rule-access.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 337))  COMMA_SOURCE_FILE ("rule-access.galgas", 337)) ;
            outArgument_outResultPtr.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            GALGAS_bigint var_address_12981 = var_registerAddress_11542.add_operation (var_indexValue_12787.multiply_operation (var_elementArraySize_11635.getter_bigint (SOURCE_FILE ("rule-access.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 339)) ;
            outArgument_outResultPtr = GALGAS_objectInMemoryIR::constructor_register (var_type_11189, var_registerName_11441, var_readable_11470, var_writable_11499, var_address_12981, GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("rule-access.galgas", 346)), GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("rule-access.galgas", 340)) ;
          }
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = extensionGetter_kind (var_indexResult_12644, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 351)).getter_isInteger (SOURCE_FILE ("rule-access.galgas", 351)).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("rule-access.galgas", 352)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bool var_generatePanicInstruction_13554 ;
              {
              extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_12644, extractedValue_endOfExp, var_arraySize_11589.getter_bigint (SOURCE_FILE ("rule-access.galgas", 353)), var_generatePanicInstruction_13554, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 353)) ;
              }
              GALGAS_bool test_8 = var_generatePanicInstruction_13554 ;
              if (kBoolTrue == test_8.boolEnum ()) {
                test_8 = constinArgument_inAllowPanic.operator_not (SOURCE_FILE ("rule-access.galgas", 354)) ;
              }
              const enumGalgasBool test_9 = test_8.boolEnum () ;
              if (kBoolTrue == test_9) {
                inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("index computation can generated panic")  COMMA_SOURCE_FILE ("rule-access.galgas", 355)) ;
              }
            }
            outArgument_outResultPtr = GALGAS_objectInMemoryIR::constructor_registerAddress (var_type_11189, GALGAS_string ("%register.address.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("rule-access.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 358))  COMMA_SOURCE_FILE ("rule-access.galgas", 358)) ;
            ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 359)) ;
            {
            extensionSetter_appendLoadVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, var_indexResult_12644, var_registerAddress_11542, var_elementArraySize_11635.getter_bigint (SOURCE_FILE ("rule-access.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 360)) ;
            }
          }else if (kBoolFalse == test_6) {
            inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("index expression is not an integer")  COMMA_SOURCE_FILE ("rule-access.galgas", 367)) ;
            outArgument_outResultPtr.drop () ; // Release error dropped variable
          }
        }
      }
      break ;
    }
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
                                             GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                             GALGAS_string & outArgument_outBaseGlobalVariableName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  outArgument_outBaseGlobalVariableName.drop () ; // Release 'out' argument
  {
  routine_analyzeVariableAccess (constinArgument_inAccessList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-access.galgas", 394)) ;
  }
  GALGAS_lstring var_baseName_15865 ;
  GALGAS_arrayElementAccess joker_15867 ; // Joker input parameter
  constinArgument_inAccessList.method_first (var_baseName_15865, joker_15867, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 412)) ;
  GALGAS_bool var_accessIsAllowed_16024 ;
  GALGAS_objectIR var_objectIR_16070 ;
  GALGAS_bool var_isCopyable_16099 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_15979_1 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_16042 ; // Joker input parameter
  GALGAS_bool joker_16105_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (var_baseName_15865, joker_15979_1, var_accessIsAllowed_16024, joker_16042, var_objectIR_16070, var_isCopyable_16099, joker_16105_1, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 414)) ;
  }
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = extensionGetter_isGlobalVariable (var_objectIR_16070, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 423)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = var_baseName_15865.mAttribute_string ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  outArgument_outBaseGlobalVariableName = temp_0 ;
  const enumGalgasBool test_2 = var_accessIsAllowed_16024.operator_not (SOURCE_FILE ("rule-access.galgas", 424)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (var_baseName_15865.getter_location (SOURCE_FILE ("rule-access.galgas", 425)), GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("rule-access.galgas", 425)) ;
  }
  GALGAS_bool test_3 = constinArgument_inRequiresCopy ;
  if (kBoolTrue == test_3.boolEnum ()) {
    test_3 = var_isCopyable_16099.operator_not (SOURCE_FILE ("rule-access.galgas", 427)) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (var_baseName_15865.getter_location (SOURCE_FILE ("rule-access.galgas", 428)), GALGAS_string ("an $").add_operation (extensionGetter_type (outArgument_outResultPtr, inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 428)).getter_key (inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 428)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("rule-access.galgas", 428))  COMMA_SOURCE_FILE ("rule-access.galgas", 428)) ;
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
                                GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                GALGAS_objectInMemoryIR & outArgument_outResultPtr,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultPtr.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_type_4453 = constinArgument_inSelfType ;
  GALGAS_elementPtrList var_elementPtrList_4499 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 103)) ;
  GALGAS_bool var_publicIsRequired_4527 = GALGAS_bool (false) ;
  cEnumerator_fieldList enumerator_4587 (constinArgument_inFieldList, kEnumeration_up) ;
  while (enumerator_4587.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_type_4453.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 106)).getter_isStructure (SOURCE_FILE ("rule-self-access.galgas", 106)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyMap var_propertyMap_4690 ;
      GALGAS_namedObjectMap joker_4659_1 ; // Joker input parameter
      GALGAS_propertyList joker_4705 ; // Joker input parameter
      var_type_4453.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 107)).method_structure (joker_4659_1, var_propertyMap_4690, joker_4705, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 107)) ;
      GALGAS_bool var_public_4759 ;
      GALGAS_uint var_index_4776 ;
      var_propertyMap_4690.method_searchKey (enumerator_4587.current_mFieldName (HERE), var_public_4759, var_type_4453, var_index_4776, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 108)) ;
      GALGAS_bool test_1 = var_publicIsRequired_4527 ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_public_4759.operator_not (SOURCE_FILE ("rule-self-access.galgas", 109)) ;
      }
      const enumGalgasBool test_2 = test_1.boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (enumerator_4587.current_mFieldName (HERE).getter_location (SOURCE_FILE ("rule-self-access.galgas", 110)), GALGAS_string ("this field is not public")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 110)) ;
      }
      GALGAS_elementPtrList temp_3 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 112)) ;
      temp_3.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_index_4776  COMMA_SOURCE_FILE ("rule-self-access.galgas", 112)), GALGAS_string (".").add_operation (enumerator_4587.current_mFieldName (HERE).getter_string (SOURCE_FILE ("rule-self-access.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 112))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 112)) ;
      var_elementPtrList_4499.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 112)) ;
      var_publicIsRequired_4527 = GALGAS_bool (true) ;
      {
      routine_analyzeArrayElementAccess (enumerator_4587.current_mArrayAccess (HERE), var_type_4453, var_elementPtrList_4499, enumerator_4587.current_mFieldName (HERE).mAttribute_location, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 114)) ;
      }
    }else if (kBoolFalse == test_0) {
      inCompiler->emitSemanticError (enumerator_4587.current_mFieldName (HERE).getter_location (SOURCE_FILE ("rule-self-access.galgas", 134)), GALGAS_string ("the field type is not a structure")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 134)) ;
      var_type_4453.drop () ; // Release error dropped variable
    }
    enumerator_4587.gotoNextObject () ;
  }
  {
  routine_getLocalNameOfNewTempObjectInMemory (var_type_4453, ioArgument_ioTemporaries, outArgument_outResultPtr, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 137)) ;
  }
  {
  extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outResultPtr, constinArgument_inSelfType, var_elementPtrList_4499, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 138)) ;
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
                                        GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
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
      const cEnumAssociatedValues_arrayElementAccess_access * extractPtr_8840 = (const cEnumAssociatedValues_arrayElementAccess_access *) (constinArgument_inArrayElementAccess.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_8840->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfExp = extractPtr_8840->mAssociatedValue1 ;
      GALGAS_bigint var_arraySize_7027 ;
      const enumGalgasBool test_0 = ioArgument_ioType.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 170)).getter_isArrayType (SOURCE_FILE ("rule-self-access.galgas", 170)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioType.getter_kind (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 171)).method_arrayType (ioArgument_ioType, var_arraySize_7027, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 171)) ;
      }else if (kBoolFalse == test_0) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this variable should be an array")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 173)) ;
        var_arraySize_7027.drop () ; // Release error dropped variable
      }
      GALGAS_objectIR var_indexResult_7844 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("rule-self-access.galgas", 180)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_7844, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 175)) ;
      const enumGalgasBool test_1 = var_indexResult_7844.getter_isLiteralInteger (SOURCE_FILE ("rule-self-access.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_bigint var_indexValue_7961 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_7929_1 ; // Joker input parameter
        var_indexResult_7844.method_literalInteger (joker_7929_1, var_indexValue_7961, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 193)) ;
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictInf, var_indexValue_7961.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 194)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_indexValue_7961.objectCompare (var_arraySize_7027)) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_7027.getter_string (SOURCE_FILE ("rule-self-access.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 195))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 195)) ;
          ioArgument_ioElementPtrList.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          GALGAS_elementPtrList temp_4 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 197)) ;
          temp_4.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_indexValue_7961.getter_uint (inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 197))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 197)), GALGAS_string ("[").add_operation (var_indexValue_7961.getter_string (SOURCE_FILE ("rule-self-access.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 197)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 197))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 197)) ;
          ioArgument_ioElementPtrList.plusAssign_operation(temp_4, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 197)) ;
        }
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_5 = extensionGetter_kind (var_indexResult_7844, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 199)).getter_isInteger (SOURCE_FILE ("rule-self-access.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("rule-self-access.galgas", 200)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_bool var_generatePanicInstruction_8460 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_7844, extractedValue_endOfExp, var_arraySize_7027, var_generatePanicInstruction_8460, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 201)) ;
            }
            GALGAS_bool test_7 = var_generatePanicInstruction_8460 ;
            if (kBoolTrue == test_7.boolEnum ()) {
              test_7 = constinArgument_inAllowPanic.operator_not (SOURCE_FILE ("rule-self-access.galgas", 202)) ;
            }
            const enumGalgasBool test_8 = test_7.boolEnum () ;
            if (kBoolTrue == test_8) {
              inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("index computation can generated panic")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 203)) ;
              ioArgument_ioElementPtrList.drop () ; // Release error dropped variable
            }
          }
          GALGAS_string var_name_8645 = extensionGetter_name (var_indexResult_7844, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 206)) ;
          GALGAS_elementPtrList temp_9 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("rule-self-access.galgas", 207)) ;
          temp_9.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_indirect (var_indexResult_7844  COMMA_SOURCE_FILE ("rule-self-access.galgas", 207)), GALGAS_string ("[").add_operation (var_name_8645, inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 207)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("rule-self-access.galgas", 207))  COMMA_SOURCE_FILE ("rule-self-access.galgas", 207)) ;
          ioArgument_ioElementPtrList.plusAssign_operation(temp_9, inCompiler  COMMA_SOURCE_FILE ("rule-self-access.galgas", 207)) ;
        }else if (kBoolFalse == test_5) {
          inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("index expression is not an integer")  COMMA_SOURCE_FILE ("rule-self-access.galgas", 209)) ;
          ioArgument_ioElementPtrList.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInAssignment'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInAssignment (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("instruction-assignment.galgas", 194)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_7415 ;
    GALGAS_string var_name_7433 ;
    GALGAS_uint var_index_7450 ;
    constinArgument_inObject.method_property (var_type_7415, var_name_7433, var_index_7450, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 195)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_7415, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("instruction-assignment.galgas", 199)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 196)) ;
    ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 202)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_7433, var_index_7450, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 203)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 210)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 210)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInAssignment'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInAssignment (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 222)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 222)).getter_isStructure (SOURCE_FILE ("instruction-assignment.galgas", 222)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_namedObjectMap var_structureObjectMap_8327 ;
    GALGAS_propertyMap joker_8329_2 ; // Joker input parameter
    GALGAS_propertyList joker_8329_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 223)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 223)).method_structure (var_structureObjectMap_8327, joker_8329_2, joker_8329_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 223)) ;
    GALGAS_objectIR var_property_8402 ;
    var_structureObjectMap_8327.method_searchKey (constinArgument_inPropertyName, var_property_8402, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 224)) ;
    const enumGalgasBool test_1 = var_property_8402.getter_isProperty (SOURCE_FILE ("instruction-assignment.galgas", 225)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_unifiedTypeMap_2D_proxy var_type_8477 ;
      GALGAS_string var_name_8495 ;
      GALGAS_uint var_index_8512 ;
      var_property_8402.method_property (var_type_8477, var_name_8495, var_index_8512, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 226)) ;
      GALGAS_objectIR var_newObject_8533 = GALGAS_objectIR::constructor_temporaryReference (var_type_8477, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 229)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("instruction-assignment.galgas", 230)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 227)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 233)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_8533, ioArgument_ioObject, var_name_8495, var_index_8512.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 234)) ;
      }
      ioArgument_ioObject = var_newObject_8533 ;
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 242)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 242)) ;
      ioArgument_ioObject.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 245)), GALGAS_string ("the current object has no property")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 245)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
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
                               GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 351)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_14565 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_14756 ;
    {
    GALGAS_bool joker_14704_1 ; // Joker input parameter
    GALGAS_objectInMemoryIR joker_14726 ; // Joker input parameter
    GALGAS_bool joker_14764_2 ; // Joker input parameter
    GALGAS_bool joker_14764_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_14565, joker_14704_1, joker_14726, var_objectIR_14756, joker_14764_2, joker_14764_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
    }
    outArgument_outGuardMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_14565.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)).add_operation (constinArgument_inGuardName.getter_string (SOURCE_FILE ("instruction-sync.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)), constinArgument_inGuardName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 363)), var_objectIR_14756  COMMA_SOURCE_FILE ("instruction-sync.galgas", 363)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = constinArgument_inGuardName ;
    var_receiverType_14565 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 366)) ;
  }
  outArgument_outGuardMangledName.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 368)) ;
  cEnumerator_effectiveParameterListAST enumerator_15115 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_15115.hasCurrentObject ()) {
    outArgument_outGuardMangledName.mAttribute_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_15115.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 370)).add_operation (enumerator_15115.current_mSelector (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 370)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 370)) ;
    enumerator_15115.gotoNextObject () ;
  }
  outArgument_outGuardMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 372)) ;
  GALGAS_bool var_isPublic_15348 ;
  GALGAS_procedureSignature var_formalSignature_15393 ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (outArgument_outGuardMangledName, var_isPublic_15348, var_formalSignature_15393, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 373)) ;
  const enumGalgasBool test_1 = var_isPublic_15348.operator_not (SOURCE_FILE ("instruction-sync.galgas", 379)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile_15541 = constinArgument_inContext.mAttribute_mGuardMapForContext.getter_locationForKey (outArgument_outGuardMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 381)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 381)) ;
      GALGAS_string var_invocationFile_15650 = constinArgument_inGuardName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 382)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile_15650.objectCompare (var_declarationFile_15541)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 384)), GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 384)) ;
      }
    }else if (kBoolFalse == test_2) {
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 387)), GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("instruction-sync.galgas", 387)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 392)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_15393, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.mAttribute_location, outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 394)) ;
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
                                           GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8398 ;
  GALGAS_routineKindIR var_routineKindIR_8448 ;
  GALGAS_lstring var_routineMangledName_8504 ;
  GALGAS_lstring var_routineNameForGeneration_8572 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_8627 ;
  GALGAS_bool var_appendFileAndLineArgumentForPanicLocation_8720 ;
  {
  routine_analyzeRoutineCall (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 186)), constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8398, var_routineKindIR_8448, var_routineMangledName_8504, var_routineNameForGeneration_8572, var_returnedType_8627, var_appendFileAndLineArgumentForPanicLocation_8720, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 182)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_8627.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 206)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 207)), GALGAS_string ("cannot be called in instruction: return value")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (GALGAS_string::makeEmptyString (), var_routineMangledName_8504, var_routineNameForGeneration_8572, var_routineKindIR_8448, var_effectiveParameterListIR_8398, var_appendFileAndLineArgumentForPanicLocation_8720  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 210))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 210)) ;
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
                                 GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                 GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                 GALGAS_routineKindIR & outArgument_outRoutineKindIR,
                                 GALGAS_lstring & outArgument_outRoutineMangledName,
                                 GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                 GALGAS_bool & outArgument_outAppendFileAndLineArgumentForPanicLocation,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outAppendFileAndLineArgumentForPanicLocation.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 405)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_16444 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_16635 ;
    {
    GALGAS_bool joker_16583_1 ; // Joker input parameter
    GALGAS_objectInMemoryIR joker_16605 ; // Joker input parameter
    GALGAS_bool joker_16643_2 ; // Joker input parameter
    GALGAS_bool joker_16643_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_16444, joker_16583_1, joker_16605, var_objectIR_16635, joker_16643_2, joker_16643_1, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 408)) ;
    }
    outArgument_outRoutineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_16444.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 416)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 416)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 416)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 416)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 417)), var_objectIR_16635  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 417)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outRoutineMangledName = constinArgument_inRoutineName ;
    var_receiverType_16444 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 420)) ;
  }
  outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 423)) ;
  cEnumerator_effectiveParameterListAST enumerator_17021 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_17021.hasCurrentObject ()) {
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_17021.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 425)) ;
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(enumerator_17021.current_mSelector (HERE).mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 426)) ;
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (":"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 427)) ;
    enumerator_17021.gotoNextObject () ;
  }
  outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 429)) ;
  GALGAS_bool var_isPublic_17356 ;
  GALGAS_modeMap var_modeMap_17373 ;
  GALGAS_procedureSignature var_formalSignature_17418 ;
  GALGAS_routineKind var_routineKind_17452 ;
  GALGAS_bool var_canMutateProperties_17566 ;
  GALGAS_bool var_canAccessPropertiesInUserMode_17612 ;
  GALGAS_bool joker_17458 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (outArgument_outRoutineMangledName, outArgument_outRoutineNameForGeneration, var_isPublic_17356, var_modeMap_17373, var_formalSignature_17418, var_routineKind_17452, joker_17458, outArgument_outReturnedType, outArgument_outAppendFileAndLineArgumentForPanicLocation, var_canMutateProperties_17566, var_canAccessPropertiesInUserMode_17612, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 430)) ;
  const enumGalgasBool test_1 = var_isPublic_17356.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 444)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile_17760 = constinArgument_inContext.mAttribute_mRoutineMapForContext.getter_locationForKey (outArgument_outRoutineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 446)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 446)) ;
      GALGAS_string var_invocationFile_17873 = constinArgument_inRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 447)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile_17873.objectCompare (var_declarationFile_17760)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 449)), GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 449)) ;
      }
    }else if (kBoolFalse == test_2) {
      inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 452)), GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 452)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 456)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap_17373.getter_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 460)), var_routineKind_17452, constinArgument_inRoutineName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 458)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_17418, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 465)) ;
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
                                         GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_20369 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 508)) ;
  cEnumerator_procedureSignature enumerator_20412 (constinArgument_inFormalSignature, kEnumeration_up) ;
  cEnumerator_effectiveParameterListAST enumerator_20455 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_20412.hasCurrentObject () && enumerator_20455.hasCurrentObject ()) {
    switch (enumerator_20455.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_21997 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_20455.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_21997->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_21997->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_21997->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_20412.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 515)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_20593 = temp_0 ;
        GALGAS_string var_varLLVMName_20761 = extractedValue_name.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 517)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 517)) ;
        ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 518)) ;
        {
        ioArgument_ioNamedObjectMap.setter_insertKey (extractedValue_name, GALGAS_objectIR::constructor_localVariableReference (var_type_20593, var_varLLVMName_20761  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 519)) ;
        }
        GALGAS_objectInMemoryIR var_targetVar_20974 = GALGAS_objectInMemoryIR::constructor_localVariable (var_type_20593, var_varLLVMName_20761, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 520)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_20593, GALGAS_bool (true), var_targetVar_20974, GALGAS_objectIR::constructor_localVariableReference (var_type_20593, var_varLLVMName_20761  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 527)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 522)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_20593, GALGAS_bool (true), var_targetVar_20974, GALGAS_objectIR::constructor_localVariableReference (var_type_20593, var_varLLVMName_20761  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 537)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 532)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_20761, var_type_20593  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 542)) ;
        var_parameterList_20369.addAssign_operation (enumerator_20455.current_mEffectiveParameterKind (HERE), enumerator_20455.current_mSelector (HERE), var_type_20593  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 543)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 545)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_20593, function_llvmNameForLocalVariable (var_varLLVMName_20761, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 546)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 546))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 546))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 544)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_input * extractPtr_22969 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_input *) (enumerator_20455.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_22969->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_22116 ;
        GALGAS_bool var_accessIsAllowed_22163 ;
        GALGAS_objectIR var_objectIR_22217 ;
        GALGAS_bool var_isCopyable_22250 ;
        GALGAS_bool var_canBeUsedAsInputParameter_22364 ;
        {
        GALGAS_objectInMemoryIR joker_22185 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_22116, var_accessIsAllowed_22163, joker_22185, var_objectIR_22217, var_isCopyable_22250, var_canBeUsedAsInputParameter_22364, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 548)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_22163.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 557)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 558)), GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 558)) ;
        }
        const enumGalgasBool test_4 = var_canBeUsedAsInputParameter_22364.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 560)).boolEnum () ;
        if (kBoolTrue == test_4) {
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 561)), GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 561)) ;
        }
        const enumGalgasBool test_5 = var_isCopyable_22250.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 563)).boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 564)), GALGAS_string ("an $").add_operation (var_type_22116.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 564)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 564))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 564)) ;
        }
        var_parameterList_20369.addAssign_operation (enumerator_20455.current_mEffectiveParameterKind (HERE), enumerator_20455.current_mSelector (HERE), var_type_22116  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 566)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 568)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_22116, function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_22217, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 569)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 569))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 569))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 567)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_24047 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_20455.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_24047->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_24047->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_23694 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_20412.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioNamedObjectMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_23694, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 571)) ;
        GALGAS_objectIR var_result_23719 = function_checkAssignmentCompatibility (var_expressionResult_23694, enumerator_20412.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 588)) ;
        var_parameterList_20369.addAssign_operation (enumerator_20455.current_mEffectiveParameterKind (HERE), enumerator_20455.current_mSelector (HERE), enumerator_20412.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 594)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 595)), var_result_23719  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 595)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput * extractPtr_24873 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput *) (enumerator_20455.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_24873->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_24176 ;
        GALGAS_bool var_accessIsAllowed_24223 ;
        GALGAS_objectIR var_objectIR_24284 ;
        GALGAS_bool var_canBeUsedAsInputParameter_24361 ;
        {
        GALGAS_objectInMemoryIR joker_24245 ; // Joker input parameter
        GALGAS_bool joker_24294_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_24176, var_accessIsAllowed_24223, joker_24245, var_objectIR_24284, joker_24294_1, var_canBeUsedAsInputParameter_24361, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 597)) ;
        }
        const enumGalgasBool test_6 = var_canBeUsedAsInputParameter_24361.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 606)).boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 607)), GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 607)) ;
        }
        const enumGalgasBool test_7 = var_accessIsAllowed_24223.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_7) {
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 610)), GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 610)) ;
        }
        var_parameterList_20369.addAssign_operation (enumerator_20455.current_mEffectiveParameterKind (HERE), enumerator_20455.current_mSelector (HERE), var_type_24176  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 612)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 614)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_24176, function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_24284, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 615)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 615))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 615))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 613)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable * extractPtr_27083 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable *) (enumerator_20455.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_27083->mAssociatedValue0 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 617)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 618)), GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 618)) ;
          var_parameterList_20369.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 619)).boolEnum () ;
          if (kBoolTrue == test_9) {
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 620)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 620))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 620)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_10 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 621)).boolEnum () ;
            if (kBoolTrue == test_10) {
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 622)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 622))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 622)) ;
            }else if (kBoolFalse == test_10) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 624)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 626)), GALGAS_string ("an opaque type does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 626)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 628)), GALGAS_string ("an array type does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 628)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 630)), GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 630)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 632)), GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 632)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 634)), GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 634)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 636)), GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 636)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 638)), GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 638)) ;
                  var_parameterList_20369.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_27057 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 624)).unsafePointer ()) ;
                  const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_27057->mAssociatedValue1 ;
                  GALGAS_bool var_public_26486 ;
                  GALGAS_unifiedTypeMap_2D_proxy var_type_26496 ;
                  GALGAS_uint var_idx_26505 ;
                  extractedValue_propertyMap.method_searchKey (extractedValue_name, var_public_26486, var_type_26496, var_idx_26505, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 640)) ;
                  GALGAS_objectInMemoryIR var_fieldAddress_26593 ;
                  {
                  routine_getLocalNameOfNewTempObjectInMemory (var_type_26496, ioArgument_ioTemporaries, var_fieldAddress_26593, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 641)) ;
                  }
                  {
                  GALGAS_elementPtrList temp_11 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 645)) ;
                  temp_11.addAssign_operation (GALGAS_getElementPtrIndexKind::constructor_absolute (var_idx_26505  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 645)), extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 645)) ;
                  extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, var_fieldAddress_26593, constinArgument_inSelfType, temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 642)) ;
                  }
                  var_parameterList_20369.addAssign_operation (enumerator_20455.current_mEffectiveParameterKind (HERE), enumerator_20455.current_mSelector (HERE), var_type_26496  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 647)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 649)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_26496, function_llvmNameForLocalVariable (extensionGetter_name (var_fieldAddress_26593, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 650)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("instruction-proc-call.galgas", 650))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 650))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 648)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_20412.gotoNextObject () ;
    enumerator_20455.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 656)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 656)))).boolEnum () ;
  if (kBoolTrue == test_12) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 657)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 657)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 657)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 658)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 657)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 658))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 657)) ;
  }else if (kBoolFalse == test_12) {
    cEnumerator_procedureSignature enumerator_27415 (constinArgument_inFormalSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_27444 (var_parameterList_20369, kEnumeration_up) ;
    while (enumerator_27415.hasCurrentObject () && enumerator_27444.hasCurrentObject ()) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_27415.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 661)).objectCompare (enumerator_27444.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 661)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (enumerator_27444.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 662)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_27444.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 662)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 662)).add_operation (enumerator_27415.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 663)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 663))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 662)) ;
      }
      GALGAS_string var_requiredPassingMode_27735 = extensionGetter_requiredActualPassingModeForSelector (enumerator_27415.current_mFormalArgumentPassingMode (HERE), enumerator_27415.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 665)) ;
      GALGAS_string var_testedPassingMode_27856 = extensionGetter_passingModeForActualSelector (enumerator_27444.current_mEffectiveParameterPassingMode (HERE), enumerator_27444.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 666)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_27735.objectCompare (var_testedPassingMode_27856)).boolEnum () ;
      if (kBoolTrue == test_14) {
        inCompiler->emitSemanticError (enumerator_27444.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 668)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_27735, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 668)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 668))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 668)) ;
      }
      enumerator_27415.gotoNextObject () ;
      enumerator_27444.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_objectIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 12)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 12)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 12))  COMMA_SOURCE_FILE ("variable-map.galgas", 12)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 13)) ;
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
  outArgument_outTempVariable = GALGAS_objectInMemoryIR::constructor_localVariable (constinArgument_inType, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 23)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-map.galgas", 23)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 24)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'initialVariableMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initialVariableMap (const GALGAS_string constinArgument_inRoutineNameForInvocation,
                                 const GALGAS_semanticContext constinArgument_inContext,
                                 const GALGAS_bool constinArgument_inAcceptUserMode,
                                 const GALGAS_accessKind constinArgument_inRegisterAccessKind,
                                 GALGAS_bool inArgument_inGlobalsAreConstant,
                                 const GALGAS_lstring constinArgument_inReturnTypeName,
                                 GALGAS_variableMap & outArgument_outVariableMap,
                                 GALGAS_namedObjectMap & outArgument_outObjectMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outObjectMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map-new.galgas", 26)) ;
  outArgument_outObjectMap = GALGAS_namedObjectMap::constructor_emptyMap (SOURCE_FILE ("variable-map-new.galgas", 27)) ;
  cEnumerator_moduleMap enumerator_1449 (constinArgument_inContext.mAttribute_mModuleMap, kEnumeration_up) ;
  while (enumerator_1449.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1475 = GALGAS_lstring::constructor_new (enumerator_1449.current_lkey (HERE).mAttribute_string.add_operation (GALGAS_string ("$"), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 30)), enumerator_1449.current_lkey (HERE).mAttribute_location  COMMA_SOURCE_FILE ("variable-map-new.galgas", 30)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_moduleType_1557 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, var_moduleTypeName_1475, inCompiler  COMMA_SOURCE_FILE ("variable-map-new.galgas", 31)) ;
    {
    outArgument_outVariableMap.setter_insertModule (enumerator_1449.current_lkey (HERE), var_moduleType_1557, GALGAS_bool (false), GALGAS_objectInMemoryIR::constructor_globalVariable (var_moduleType_1557, enumerator_1449.current_lkey (HERE).mAttribute_string, GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 36)), GALGAS_objectIR::constructor_globalVariableReference (var_moduleType_1557, enumerator_1449.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map-new.galgas", 37)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 32)) ;
    }
    GALGAS_objectIR var_moduleAsVariable_2050 = GALGAS_objectIR::constructor_globalVariableReference (var_moduleType_1557, enumerator_1449.current_lkey (HERE).getter_string (SOURCE_FILE ("variable-map-new.galgas", 43))  COMMA_SOURCE_FILE ("variable-map-new.galgas", 41)) ;
    {
    outArgument_outObjectMap.setter_insertKey (enumerator_1449.current_lkey (HERE), var_moduleAsVariable_2050, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 45)) ;
    }
    enumerator_1449.gotoNextObject () ;
  }
  switch (constinArgument_inRegisterAccessKind.enumValue ()) {
  case GALGAS_accessKind::kNotBuilt:
    break ;
  case GALGAS_accessKind::kEnum_noAccess:
    {
      cEnumerator_controlRegisterMap enumerator_2390 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
      while (enumerator_2390.hasCurrentObject ()) {
        GALGAS_objectIR var_objectReference_2419 = GALGAS_objectIR::constructor_registerReference (enumerator_2390.current_mType (HERE), enumerator_2390.current_lkey (HERE), GALGAS_bool (false), GALGAS_bool (false), enumerator_2390.current_mAddress (HERE), enumerator_2390.current_mRegisterFieldAccessMap (HERE), enumerator_2390.current_mArraySize (HERE), enumerator_2390.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 54)) ;
        {
        outArgument_outObjectMap.setter_insertKey (enumerator_2390.current_lkey (HERE), var_objectReference_2419, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 64)) ;
        }
        GALGAS_objectInMemoryIR var_objectInMemory_2810 = GALGAS_objectInMemoryIR::constructor_register (enumerator_2390.current_mType (HERE), enumerator_2390.current_lkey (HERE), GALGAS_bool (false), GALGAS_bool (false), enumerator_2390.current_mAddress (HERE), enumerator_2390.current_mRegisterFieldAccessMap (HERE), enumerator_2390.current_mArraySize (HERE), enumerator_2390.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 65)) ;
        {
        outArgument_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_2390.current_lkey (HERE), enumerator_2390.current_mType (HERE), GALGAS_bool (false), var_objectInMemory_2810, var_objectReference_2419, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 75)) ;
        }
        enumerator_2390.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_accessKind::kEnum_readAccess:
    {
      cEnumerator_controlRegisterMap enumerator_3500 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
      while (enumerator_3500.hasCurrentObject ()) {
        GALGAS_bool test_0 = constinArgument_inAcceptUserMode ;
        if (kBoolTrue == test_0.boolEnum ()) {
          test_0 = enumerator_3500.current_mIsAccessibleInUserMode (HERE).operator_not (SOURCE_FILE ("variable-map-new.galgas", 87)) ;
        }
        const enumGalgasBool test_1 = test_0.boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_objectIR var_objectReference_3593 = GALGAS_objectIR::constructor_registerReference (enumerator_3500.current_mType (HERE), enumerator_3500.current_lkey (HERE), GALGAS_bool (false), GALGAS_bool (false), enumerator_3500.current_mAddress (HERE), enumerator_3500.current_mRegisterFieldAccessMap (HERE), enumerator_3500.current_mArraySize (HERE), enumerator_3500.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 88)) ;
          {
          outArgument_outObjectMap.setter_insertKey (enumerator_3500.current_lkey (HERE), var_objectReference_3593, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 98)) ;
          }
          GALGAS_objectInMemoryIR var_objectInMemory_4006 = GALGAS_objectInMemoryIR::constructor_register (enumerator_3500.current_mType (HERE), enumerator_3500.current_lkey (HERE), GALGAS_bool (false), GALGAS_bool (false), enumerator_3500.current_mAddress (HERE), enumerator_3500.current_mRegisterFieldAccessMap (HERE), enumerator_3500.current_mArraySize (HERE), enumerator_3500.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 99)) ;
          {
          outArgument_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_3500.current_lkey (HERE), enumerator_3500.current_mType (HERE), GALGAS_bool (true), var_objectInMemory_4006, var_objectReference_3593, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 109)) ;
          }
        }else if (kBoolFalse == test_1) {
          GALGAS_bool test_2 = enumerator_3500.current_mIsReadOnly (HERE) ;
          if (kBoolTrue != test_2.boolEnum ()) {
            test_2 = inArgument_inGlobalsAreConstant ;
          }
          const enumGalgasBool test_3 = test_2.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectReference_4739 = GALGAS_objectIR::constructor_registerReference (enumerator_3500.current_mType (HERE), enumerator_3500.current_lkey (HERE), GALGAS_bool (true), GALGAS_bool (false), enumerator_3500.current_mAddress (HERE), enumerator_3500.current_mRegisterFieldAccessMap (HERE), enumerator_3500.current_mArraySize (HERE), enumerator_3500.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 119)) ;
            {
            outArgument_outObjectMap.setter_insertKey (enumerator_3500.current_lkey (HERE), var_objectReference_4739, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 129)) ;
            }
            GALGAS_objectInMemoryIR var_objectInMemory_5151 = GALGAS_objectInMemoryIR::constructor_register (enumerator_3500.current_mType (HERE), enumerator_3500.current_lkey (HERE), GALGAS_bool (true), GALGAS_bool (false), enumerator_3500.current_mAddress (HERE), enumerator_3500.current_mRegisterFieldAccessMap (HERE), enumerator_3500.current_mArraySize (HERE), enumerator_3500.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 130)) ;
            {
            outArgument_outVariableMap.setter_insertUsedConstant (enumerator_3500.current_lkey (HERE), enumerator_3500.current_mType (HERE), GALGAS_bool (true), var_objectInMemory_5151, var_objectReference_4739, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 140)) ;
            }
          }
        }
        enumerator_3500.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_accessKind::kEnum_readWriteAccess:
    {
      cEnumerator_controlRegisterMap enumerator_5874 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
      while (enumerator_5874.hasCurrentObject ()) {
        GALGAS_objectIR var_objectReference_5903 = GALGAS_objectIR::constructor_registerReference (enumerator_5874.current_mType (HERE), enumerator_5874.current_lkey (HERE), GALGAS_bool (true), GALGAS_bool (true), enumerator_5874.current_mAddress (HERE), enumerator_5874.current_mRegisterFieldAccessMap (HERE), enumerator_5874.current_mArraySize (HERE), enumerator_5874.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 153)) ;
        {
        outArgument_outObjectMap.setter_insertKey (enumerator_5874.current_lkey (HERE), var_objectReference_5903, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 163)) ;
        }
        GALGAS_objectInMemoryIR var_objectInMemory_6292 = GALGAS_objectInMemoryIR::constructor_register (enumerator_5874.current_mType (HERE), enumerator_5874.current_lkey (HERE), GALGAS_bool (true), GALGAS_bool (true), enumerator_5874.current_mAddress (HERE), enumerator_5874.current_mRegisterFieldAccessMap (HERE), enumerator_5874.current_mArraySize (HERE), enumerator_5874.current_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 164)) ;
        {
        outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_5874.current_lkey (HERE), enumerator_5874.current_mType (HERE), GALGAS_bool (true), var_objectInMemory_6292, var_objectReference_5903, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 174)) ;
        }
        enumerator_5874.gotoNextObject () ;
      }
    }
    break ;
  }
  cEnumerator_globalConstantMap enumerator_7053 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_7053.hasCurrentObject ()) {
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_7053.current_lkey (HERE), extensionGetter_type (enumerator_7053.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 189)), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_staticConstant (enumerator_7053.current_mValue (HERE), enumerator_7053.current_lkey (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 191)), enumerator_7053.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 187)) ;
    }
    {
    outArgument_outObjectMap.setter_insertKey (enumerator_7053.current_lkey (HERE), enumerator_7053.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 196)) ;
    }
    enumerator_7053.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_7585 (constinArgument_inContext.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  while (enumerator_7585.hasCurrentObject ()) {
    GALGAS_bool var_writeAccess_7608 = enumerator_7585.current (HERE).mAttribute_allowedAccessToAll ;
    GALGAS_bool var_allowedAccess_7660 = var_writeAccess_7608 ;
    const enumGalgasBool test_4 = var_writeAccess_7608.operator_not (SOURCE_FILE ("variable-map-new.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_allowedAccess_7660 = enumerator_7585.current (HERE).mAttribute_allowedRoutineMap.getter_hasKey (constinArgument_inRoutineNameForInvocation COMMA_SOURCE_FILE ("variable-map-new.galgas", 203)) ;
      const enumGalgasBool test_5 = var_allowedAccess_7660.boolEnum () ;
      if (kBoolTrue == test_5) {
        var_writeAccess_7608 = enumerator_7585.current (HERE).mAttribute_allowedRoutineMap.getter_mHasWriteAccessForKey (constinArgument_inRoutineNameForInvocation, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 205)) ;
      }else if (kBoolFalse == test_5) {
        var_allowedAccess_7660 = enumerator_7585.current (HERE).mAttribute_allowedISRMap.getter_hasKey (constinArgument_inRoutineNameForInvocation COMMA_SOURCE_FILE ("variable-map-new.galgas", 207)) ;
        const enumGalgasBool test_6 = var_allowedAccess_7660.boolEnum () ;
        if (kBoolTrue == test_6) {
          var_writeAccess_7608 = enumerator_7585.current (HERE).mAttribute_allowedISRMap.getter_mHasWriteAccessForKey (constinArgument_inRoutineNameForInvocation, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 209)) ;
        }
      }
    }
    GALGAS_bool test_7 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_7.boolEnum ()) {
      test_7 = enumerator_7585.current (HERE).mAttribute_isConstant ;
    }
    GALGAS_bool test_8 = test_7 ;
    if (kBoolTrue != test_8.boolEnum ()) {
      test_8 = var_writeAccess_7608.operator_not (SOURCE_FILE ("variable-map-new.galgas", 213)) ;
    }
    const enumGalgasBool test_9 = test_8.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_objectIR var_resultVariable_8271 = GALGAS_objectIR::constructor_globalVariableReference (enumerator_7585.current (HERE).mAttribute_type, enumerator_7585.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("variable-map-new.galgas", 216))  COMMA_SOURCE_FILE ("variable-map-new.galgas", 214)) ;
      {
      outArgument_outObjectMap.setter_insertKey (enumerator_7585.current (HERE).mAttribute_lkey, var_resultVariable_8271, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 218)) ;
      }
      {
      outArgument_outVariableMap.setter_insertUsedConstant (enumerator_7585.current (HERE).mAttribute_lkey, enumerator_7585.current (HERE).mAttribute_type, var_allowedAccess_7660, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_7585.current (HERE).mAttribute_type, enumerator_7585.current (HERE).mAttribute_lkey.mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_7585.current (HERE).mAttribute_executionModeSet.getter_count (SOURCE_FILE ("variable-map-new.galgas", 223)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map-new.galgas", 223)), GALGAS_objectIR::constructor_globalVariableReference (enumerator_7585.current (HERE).mAttribute_type, enumerator_7585.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("variable-map-new.galgas", 224)), enumerator_7585.current (HERE).mAttribute_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 225)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 219)) ;
      }
    }else if (kBoolFalse == test_9) {
      GALGAS_objectIR var_resultVariable_8935 = GALGAS_objectIR::constructor_globalVariableReference (enumerator_7585.current (HERE).mAttribute_type, enumerator_7585.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("variable-map-new.galgas", 231))  COMMA_SOURCE_FILE ("variable-map-new.galgas", 229)) ;
      {
      outArgument_outObjectMap.setter_insertKey (enumerator_7585.current (HERE).mAttribute_lkey, var_resultVariable_8935, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 233)) ;
      }
      {
      outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_7585.current (HERE).mAttribute_lkey, enumerator_7585.current (HERE).mAttribute_type, var_allowedAccess_7660, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_7585.current (HERE).mAttribute_type, enumerator_7585.current (HERE).mAttribute_lkey.mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_7585.current (HERE).mAttribute_executionModeSet.getter_count (SOURCE_FILE ("variable-map-new.galgas", 238)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map-new.galgas", 238)), GALGAS_objectIR::constructor_globalVariableReference (enumerator_7585.current (HERE).mAttribute_type, enumerator_7585.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("variable-map-new.galgas", 239)), enumerator_7585.current (HERE).mAttribute_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 240)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 234)) ;
      }
    }
    enumerator_7585.gotoNextObject () ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_lstring var_resultVarName_9723 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 247)), constinArgument_inReturnTypeName.mAttribute_location  COMMA_SOURCE_FILE ("variable-map-new.galgas", 247)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_9817 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("variable-map-new.galgas", 248)) ;
    {
    outArgument_outVariableMap.setter_insertOutputFormalArgument (var_resultVarName_9723, var_resultType_9817, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localVariable (var_resultType_9817, var_resultVarName_9723.mAttribute_string, GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 253)), GALGAS_objectIR::constructor_localVariableReference (var_resultType_9817, var_resultVarName_9723.mAttribute_string  COMMA_SOURCE_FILE ("variable-map-new.galgas", 254)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 249)) ;
    }
    GALGAS_objectIR var_resultVariable_10292 = GALGAS_objectIR::constructor_localVariableReference (var_resultType_9817, constinArgument_inReturnTypeName.getter_string (SOURCE_FILE ("variable-map-new.galgas", 260))  COMMA_SOURCE_FILE ("variable-map-new.galgas", 258)) ;
    {
    outArgument_outObjectMap.setter_insertKey (var_resultVarName_9723, var_resultVariable_10292, inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 262)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_variableMap & outArgument_outVariableMap,
                                       GALGAS_namedObjectMap & outArgument_outObjectMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outObjectMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map-new.galgas", 273)) ;
  outArgument_outObjectMap = GALGAS_namedObjectMap::constructor_emptyMap (SOURCE_FILE ("variable-map-new.galgas", 274)) ;
  cEnumerator_globalConstantMap enumerator_10862 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_10862.hasCurrentObject ()) {
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_10862.current_lkey (HERE), extensionGetter_type (enumerator_10862.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 279)), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_staticConstant (enumerator_10862.current_mValue (HERE), enumerator_10862.current_lkey (HERE)  COMMA_SOURCE_FILE ("variable-map-new.galgas", 281)), enumerator_10862.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 277)) ;
    }
    {
    outArgument_outObjectMap.setter_insertKey (enumerator_10862.current_lkey (HERE), enumerator_10862.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map-new.galgas", 286)) ;
    }
    enumerator_10862.gotoNextObject () ;
  }
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
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1634 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1683 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_1683.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1683.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1683.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mBootList, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mInitList, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mPanicClauses, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mProcedureListAST, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mExternProcList, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mSectionListAST, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteServiceTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mServiceListAST, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_notePrimitiveTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mPrimitiveListAST, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGuardListAST, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mTaskList, var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 43)) ;
  cEnumerator_stringlist enumerator_2759 (var_precedenceGraph_1634.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 45)), kEnumeration_up) ;
  while (enumerator_2759.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2776 = enumerator_2759.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2776.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2776.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2776.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2971 = var_split_2776.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
        GALGAS_integerDeclaration var_declaration_3046 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (false), var_n_2971  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_3046.ptr (), var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2776.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3210 = var_split_2776.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
          GALGAS_integerDeclaration var_declaration_3285 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (true), var_n_3210  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_3285.ptr (), var_precedenceGraph_1634, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 55)) ;
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
    GALGAS_string var_s_3594 = var_precedenceGraph_1634.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
    GALGAS_string var_filePath_3640 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 62)) ;
    GALGAS_bool joker_3738 ; // Joker input parameter
    var_s_3594.method_writeToFileWhenDifferentContents (var_filePath_3640, joker_3738, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1634.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 67)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3960 (var_precedenceGraph_1634.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 68)), kEnumeration_up) ;
    while (enumerator_3960.hasCurrentObject ()) {
      inCompiler->emitSemanticError (enumerator_3960.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 69)), enumerator_3960.current_mValue (HERE).mAttribute_string.add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 69))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 69)) ;
      enumerator_3960.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4174 ;
    GALGAS_lstringlist joker_4107 ; // Joker input parameter
    GALGAS_lstringlist joker_4182 ; // Joker input parameter
    var_precedenceGraph_1634.method_topologicalSort (outArgument_outDeclarationListAST, joker_4107, var_unsortedSemanticDeclarationListAST_4174, joker_4182, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4174.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_string var_s_4261 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4174.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 80)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
      cEnumerator_declarationListAST enumerator_4476 (var_unsortedSemanticDeclarationListAST_4174, kEnumeration_up) ;
      while (enumerator_4476.hasCurrentObject ()) {
        var_s_4261.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4476.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
        enumerator_4476.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4261  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
      cEnumerator_declarationListAST enumerator_4648 (var_unsortedSemanticDeclarationListAST_4174, kEnumeration_up) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inPossibleModes.operator_and (constinArgument_inRequiredModes COMMA_SOURCE_FILE ("context.galgas", 103)).objectCompare (constinArgument_inRequiredModes)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_missingModes_4294 = constinArgument_inRequiredModes.substract_operation (constinArgument_inPossibleModes, inCompiler COMMA_SOURCE_FILE ("context.galgas", 104)) ;
    GALGAS_string var_s_4340 = GALGAS_string ("cannot be accessed in mode") ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_missingModes_4294.getter_count (SOURCE_FILE ("context.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    var_s_4340.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 106)) ;
    var_s_4340.plusAssign_operation(GALGAS_string (": "), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 107)) ;
    cEnumerator_stringset enumerator_4471 (var_missingModes_4294, kEnumeration_up) ;
    while (enumerator_4471.hasCurrentObject ()) {
      var_s_4340.plusAssign_operation(GALGAS_string ("`").add_operation (enumerator_4471.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 109)) ;
      if (enumerator_4471.hasNextObject ()) {
        var_s_4340.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 110)) ;
      }
      enumerator_4471.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, var_s_4340  COMMA_SOURCE_FILE ("context.galgas", 112)) ;
  }
  GALGAS_string var_requiredModeListString_4587 = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringset enumerator_4621 (constinArgument_inRequiredModes, kEnumeration_up) ;
  while (enumerator_4621.hasCurrentObject ()) {
    var_requiredModeListString_4587.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_4621.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 116)) ;
    enumerator_4621.gotoNextObject () ;
  }
  GALGAS_bool var_runInProcessorUserMode_4698 = constinArgument_inRequiredModes.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 118)) COMMA_SOURCE_FILE ("context.galgas", 118)) ;
  GALGAS_bool test_3 = constinArgument_inRequiredModes.getter_hasKey (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 119)) COMMA_SOURCE_FILE ("context.galgas", 119)) ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = constinArgument_inRequiredModes.getter_hasKey (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 119)) COMMA_SOURCE_FILE ("context.galgas", 119)) ;
  }
  GALGAS_bool var_runInProcessorPrivilegedMode_4777 = test_3 ;
  switch (inArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      result_outResult = GALGAS_routineKindIR::constructor_function (SOURCE_FILE ("context.galgas", 122)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      GALGAS_bool test_4 = var_runInProcessorUserMode_4698 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_runInProcessorPrivilegedMode_4777 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called in").add_operation (var_requiredModeListString_4587, inCompiler COMMA_SOURCE_FILE ("context.galgas", 125)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 125))  COMMA_SOURCE_FILE ("context.galgas", 125)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = var_runInProcessorUserMode_4698.boolEnum () ;
        if (kBoolTrue == test_6) {
          result_outResult = GALGAS_routineKindIR::constructor_sectionInProcessorUserMode (SOURCE_FILE ("context.galgas", 127)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = var_runInProcessorPrivilegedMode_4777.boolEnum () ;
          if (kBoolTrue == test_7) {
            result_outResult = GALGAS_routineKindIR::constructor_sectionInProcessorPrivilegedMode (SOURCE_FILE ("context.galgas", 129)) ;
          }else if (kBoolFalse == test_7) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called in").add_operation (var_requiredModeListString_4587, inCompiler COMMA_SOURCE_FILE ("context.galgas", 131)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 131))  COMMA_SOURCE_FILE ("context.galgas", 131)) ;
            result_outResult.drop () ; // Release error dropped variable
          }
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      GALGAS_bool test_8 = var_runInProcessorUserMode_4698 ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = var_runInProcessorPrivilegedMode_4777 ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called in").add_operation (var_requiredModeListString_4587, inCompiler COMMA_SOURCE_FILE ("context.galgas", 135)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 135))  COMMA_SOURCE_FILE ("context.galgas", 135)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_10 = var_runInProcessorUserMode_4698.boolEnum () ;
        if (kBoolTrue == test_10) {
          result_outResult = GALGAS_routineKindIR::constructor_serviceInProcessorUserMode (SOURCE_FILE ("context.galgas", 137)) ;
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_11 = var_runInProcessorPrivilegedMode_4777.boolEnum () ;
          if (kBoolTrue == test_11) {
            result_outResult = GALGAS_routineKindIR::constructor_serviceInProcessorPrivilegedMode (SOURCE_FILE ("context.galgas", 139)) ;
          }else if (kBoolFalse == test_11) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called in").add_operation (var_requiredModeListString_4587, inCompiler COMMA_SOURCE_FILE ("context.galgas", 141)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 141))  COMMA_SOURCE_FILE ("context.galgas", 141)) ;
            result_outResult.drop () ; // Release error dropped variable
          }
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      GALGAS_bool test_12 = var_runInProcessorUserMode_4698 ;
      if (kBoolTrue == test_12.boolEnum ()) {
        test_12 = var_runInProcessorPrivilegedMode_4777 ;
      }
      const enumGalgasBool test_13 = test_12.boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called in").add_operation (var_requiredModeListString_4587, inCompiler COMMA_SOURCE_FILE ("context.galgas", 145)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 145))  COMMA_SOURCE_FILE ("context.galgas", 145)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_13) {
        const enumGalgasBool test_14 = var_runInProcessorUserMode_4698.boolEnum () ;
        if (kBoolTrue == test_14) {
          result_outResult = GALGAS_routineKindIR::constructor_primitiveInProcessorUserMode (SOURCE_FILE ("context.galgas", 147)) ;
        }else if (kBoolFalse == test_14) {
          const enumGalgasBool test_15 = var_runInProcessorPrivilegedMode_4777.boolEnum () ;
          if (kBoolTrue == test_15) {
            result_outResult = GALGAS_routineKindIR::constructor_primitiveInProcessorPrivilegedMode (SOURCE_FILE ("context.galgas", 149)) ;
          }else if (kBoolFalse == test_15) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called in").add_operation (var_requiredModeListString_4587, inCompiler COMMA_SOURCE_FILE ("context.galgas", 151)).add_operation (GALGAS_string (" mode(s)"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 151))  COMMA_SOURCE_FILE ("context.galgas", 151)) ;
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
  result_outModeMap = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 303)) ;
  {
  result_outModeMap.setter_insertKey (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 304)).getter_nowhere (SOURCE_FILE ("context.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 304)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_initModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 305)).getter_nowhere (SOURCE_FILE ("context.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 305)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 306)).getter_nowhere (SOURCE_FILE ("context.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 306)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 307)).getter_nowhere (SOURCE_FILE ("context.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 307)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 308)).getter_nowhere (SOURCE_FILE ("context.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 308)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 309)).getter_nowhere (SOURCE_FILE ("context.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 309)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 310)).getter_nowhere (SOURCE_FILE ("context.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 310)) ;
  }
  {
  result_outModeMap.setter_insertKey (function_guardModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 311)).getter_nowhere (SOURCE_FILE ("context.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 311)) ;
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
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 324)) ;
  outArgument_outSemanticContext.mAttribute_mModeMap = function_allModeMap (inCompiler COMMA_SOURCE_FILE ("context.galgas", 326)) ;
  cEnumerator_initList enumerator_13429 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_13429.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_13429.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 331)) ;
    enumerator_13429.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_13568 (constinArgument_inAST.mAttribute_mPanicClauses, kEnumeration_up) ;
  while (enumerator_13568.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_13568.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 335)) ;
    enumerator_13568.gotoNextObject () ;
  }
  cEnumerator_declarationListAST enumerator_13689 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_13689.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_13689.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 339)) ;
    enumerator_13689.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.mAttribute_mGlobalConstantMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 346)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 351)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.mAttribute_mControlRegisterMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 356)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mISRDeclarationListAST, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 361)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 362)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.mAttribute_mExternProcList, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 363)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mSectionListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 364)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mServiceListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 365)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mPrimitiveListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 366)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mGuardListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 367)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mTaskList, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 369)) ;
  cEnumerator_declarationListAST enumerator_15202 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_15202.hasCurrentObject ()) {
    callExtensionMethod_enterRoutinesInContext ((const cPtr_abstractDeclaration *) enumerator_15202.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 372)) ;
    enumerator_15202.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 379)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_requiredProcedureDeclarationListAST enumerator_15508 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
    while (enumerator_15508.hasCurrentObject ()) {
      cEnumerator_lstringlist enumerator_15563 (enumerator_15508.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_15563.hasCurrentObject ()) {
        outArgument_outSemanticContext.mAttribute_mModeMap.method_searchKey (enumerator_15563.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 382)) ;
        enumerator_15563.gotoNextObject () ;
      }
      enumerator_15508.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 387)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_globalVarDeclarationList enumerator_15763 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
    while (enumerator_15763.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_15763.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 389)) ;
      enumerator_15763.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSourceType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("context.galgas", 405)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("context.galgas", 406)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("context.galgas", 407)) ;
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
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 419)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 419)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 419)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 419)).getter_nowhere (SOURCE_FILE ("context.galgas", 419)) ;
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

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_outResult ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inTargetAnnotationType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 14)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inTargetAnnotationType.objectCompare (extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 16)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outResult = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1195 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_1176_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1176_1, var_value_1195, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        GALGAS_bigint var_minTarget_1258 ;
        GALGAS_bigint var_maxTarget_1277 ;
        GALGAS_bool joker_1279_2 ; // Joker input parameter
        GALGAS_uint joker_1279_1 ; // Joker input parameter
        constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)).method_integer (var_minTarget_1258, var_maxTarget_1277, joker_1279_2, joker_1279_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1195.objectCompare (var_minTarget_1258)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1277.objectCompare (var_value_1195)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large")  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
          result_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_outResult = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 24)) ;
        }
      }else if (kBoolFalse == test_3) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inTargetAnnotationType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).add_operation (extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_6 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 32)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, extensionGetter_type (result_outResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 33)).getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 33)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 33)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_objectIR,
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
  const GALGAS_objectIR operand0 = GALGAS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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
                                                                              & kTypeDescriptor_GALGAS_objectIR,
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
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 67)) ;
  outArgument_outIntermediateCodeStruct.mAttribute_mTargetParameters = constinArgument_inSemanticContext.mAttribute_mTargetParameters ;
  outArgument_outIntermediateCodeStruct.mAttribute_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mAttribute_mGlobalTaskVariableList = constinArgument_inSemanticContext.mAttribute_mGlobalTaskVariableList ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3483 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_3483.hasCurrentObject ()) {
    outArgument_outIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.addAssign_operation (enumerator_3483.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 72)) ;
    enumerator_3483.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3665 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
  while (enumerator_3665.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_3665.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
    enumerator_3665.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_3843 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 82)) ;
  cEnumerator_declarationListAST enumerator_3900 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_3900.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_3900.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
    enumerator_3900.gotoNextObject () ;
  }
  extensionMethod_procedureSemanticAnalysis (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 91)), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.mAttribute_mTaskList, constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 96)) ;
  extensionMethod_sectionSemanticAnalysis (constinArgument_inAST.mAttribute_mSectionListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 102)), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 101)) ;
  extensionMethod_serviceSemanticAnalysis (constinArgument_inAST.mAttribute_mServiceListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 108)), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 107)) ;
  extensionMethod_primitiveSemanticAnalysis (constinArgument_inAST.mAttribute_mPrimitiveListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 114)), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 113)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.mAttribute_mGuardListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 120)), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 119)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.mAttribute_mExternProcList, constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 125)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.mAttribute_mISRDeclarationListAST, constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 130)) ;
  cEnumerator_bootList enumerator_5504 (constinArgument_inAST.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_5504.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5504.current (HERE), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 136)) ;
    enumerator_5504.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5694 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_5694.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5694.current (HERE), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 143)) ;
    enumerator_5694.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_5917 (constinArgument_inAST.mAttribute_mPanicClauses, kEnumeration_up) ;
  while (enumerator_5917.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_5917.current (HERE), constinArgument_inSemanticContext, var_temporaries_3843, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 151)) ;
    enumerator_5917.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 164)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6382 = var_temporaries_3843.mAttribute_mSubprogramInvocationGraph.getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
    GALGAS_string var_filePath_6451 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 166)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 166)) ;
    GALGAS_bool joker_6577 ; // Joker input parameter
    var_s_6382.method_writeToFileWhenDifferentContents (var_filePath_6451, joker_6577, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 167)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 170)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6746 = var_temporaries_3843.mAttribute_mSubprogramInvocationGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 171)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6746.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6870 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6968 (var_undefinedNodeKeyList_6746, kEnumeration_up) ;
      while (enumerator_6968.hasCurrentObject ()) {
        var_s_6870.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6968.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 175)) ;
        enumerator_6968.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6870  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_7175 ;
      GALGAS_lstringlist var_unsortedLKeyList_7219 ;
      var_temporaries_3843.mAttribute_mSubprogramInvocationGraph.method_circularities (var_unsortedInformationList_7175, var_unsortedLKeyList_7219 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 179)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_7219.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 183)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_s_7285 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7365 (var_unsortedLKeyList_7219, kEnumeration_up) ;
        while (enumerator_7365.hasCurrentObject ()) {
          var_s_7285.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7365.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 186)) ;
          enumerator_7365.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7285  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 188)) ;
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
                                   GALGAS_namedObjectMap & ioArgument_ioNamedObjectMap,
                                   GALGAS_procFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_procFormalArgumentList enumerator_1271 (constinArgument_inFormalArgumentPassingMode, kEnumeration_up) ;
  while (enumerator_1271.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_1292 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_1271.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    {
    ioArgument_ioNamedObjectMap.setter_insertKey (enumerator_1271.current_mFormalArgumentName (HERE), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 28)) ;
    }
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1271.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
    switch (enumerator_1271.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_1271.current_mFormalArgumentName (HERE), var_typeProxy_1292, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localVariable (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string, GALGAS_bool (false)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 39)), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 40)), var_typeProxy_1292.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 41)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 35)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_1271.current_mFormalArgumentName (HERE), var_typeProxy_1292, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localVariable (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string, GALGAS_bool (false)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 49)), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 50)), var_typeProxy_1292.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 51)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 45)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_1271.current_mFormalArgumentName (HERE), var_typeProxy_1292, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localVariable (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string, GALGAS_bool (false)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 59)), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1292, enumerator_1271.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)), var_typeProxy_1292.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 61)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 55)) ;
        }
      }
      break ;
    }
    enumerator_1271.gotoNextObject () ;
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
  GALGAS_stringset var_procedureModeSet_4268 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semantic-routines.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_4305 (constinArgument_inRoutineModeList, kEnumeration_up) ;
  while (enumerator_4305.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_4305.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 100)) ;
    var_procedureModeSet_4268.addAssign_operation (enumerator_4305.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 101)) ;
    enumerator_4305.gotoNextObject () ;
  }
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 104)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("semantic-routines.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)) ;
  }
  GALGAS_lstring var_routineMangledName_4457 = temp_0 ;
  var_routineMangledName_4457.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 109)) ;
  cEnumerator_procFormalArgumentList enumerator_4720 (constinArgument_inRoutineFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4720.hasCurrentObject ()) {
    var_routineMangledName_4457.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4720.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 111)).add_operation (enumerator_4720.current_mSelector (HERE).getter_string (SOURCE_FILE ("semantic-routines.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 111)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 111)) ;
    enumerator_4720.gotoNextObject () ;
  }
  var_routineMangledName_4457.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 113)) ;
  GALGAS_variableMap var_variableMap_5181 ;
  GALGAS_namedObjectMap var_namedObjectMap_5217 ;
  {
  routine_initialVariableMap (var_routineMangledName_4457.mAttribute_string, constinArgument_inContext, var_procedureModeSet_4268.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 118)) COMMA_SOURCE_FILE ("semantic-routines.galgas", 118)), constinArgument_inRegisterAccessKind, GALGAS_bool (false), constinArgument_inReturnTypeName, var_variableMap_5181, var_namedObjectMap_5217, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 115)) ;
  }
  GALGAS_procFormalArgumentListForGeneration var_formalArguments_5306 = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 126)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_5181, var_namedObjectMap_5217, var_formalArguments_5306, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 127)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineMangledName_4457.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 135)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 135)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_4457, var_routineMangledName_4457, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 136)) ;
    }
  }
  GALGAS_allocaList var_allocaList_5769 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 142)) ;
  GALGAS_instructionListIR var_instructionGenerationList_5821 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 143)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_4457, constinArgument_inContext, var_procedureModeSet_4268, var_procedureModeSet_4268.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 151)) COMMA_SOURCE_FILE ("semantic-routines.galgas", 151)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 151)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_5181, var_namedObjectMap_5217, var_allocaList_5769, var_instructionGenerationList_5821, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 144)) ;
  var_variableMap_5181.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 161)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 165)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 167)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6621 = temp_3 ;
  const enumGalgasBool test_5 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_hasKey (var_routineMangledName_4457.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 169)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bool var_weak_6879 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_mWeakForKey (var_routineMangledName_4457.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 170)) ;
    GALGAS_bool test_6 = constinArgument_inWeakFunction ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = var_weak_6879.operator_not (SOURCE_FILE ("semantic-routines.galgas", 171)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
    }else if (kBoolFalse == test_7) {
      GALGAS_bool test_8 = constinArgument_inWeakFunction ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = var_weak_6879 ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        inCompiler->emitSemanticError (var_routineMangledName_4457.getter_location (SOURCE_FILE ("semantic-routines.galgas", 174)), GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)) ;
      }else if (kBoolFalse == test_9) {
        GALGAS_bool test_10 = constinArgument_inWeakFunction.operator_not (SOURCE_FILE ("semantic-routines.galgas", 175)) ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_weak_6879 ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          {
          GALGAS_lstring joker_7288_11 ; // Joker input parameter
          GALGAS_procFormalArgumentListForGeneration joker_7288_10 ; // Joker input parameter
          GALGAS_allocaList joker_7288_9 ; // Joker input parameter
          GALGAS_instructionListIR joker_7288_8 ; // Joker input parameter
          GALGAS_bool joker_7288_7 ; // Joker input parameter
          GALGAS_bool joker_7288_6 ; // Joker input parameter
          GALGAS_bool joker_7288_5 ; // Joker input parameter
          GALGAS_bool joker_7288_4 ; // Joker input parameter
          GALGAS_routineKind joker_7288_3 ; // Joker input parameter
          GALGAS_unifiedTypeMap_2D_proxy joker_7288_2 ; // Joker input parameter
          GALGAS_bool joker_7288_1 ; // Joker input parameter
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_removeKey (var_routineMangledName_4457, joker_7288_11, joker_7288_10, joker_7288_9, joker_7288_8, joker_7288_7, joker_7288_6, joker_7288_5, joker_7288_4, joker_7288_3, joker_7288_2, joker_7288_1, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 176)) ;
          }
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName_4457, var_routineMangledName_4457, var_formalArguments_5306, var_allocaList_5769, var_instructionGenerationList_5821, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName_4457.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 183)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_6621, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 177)) ;
          }
        }else if (kBoolFalse == test_11) {
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName_4457, var_routineMangledName_4457, var_formalArguments_5306, var_allocaList_5769, var_instructionGenerationList_5821, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName_4457.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 198)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_6621, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 192)) ;
          }
        }
      }
    }
  }else if (kBoolFalse == test_5) {
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName_4457, var_routineMangledName_4457, var_formalArguments_5306, var_allocaList_5769, var_instructionGenerationList_5821, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName_4457.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 214)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_6621, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 208)) ;
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

